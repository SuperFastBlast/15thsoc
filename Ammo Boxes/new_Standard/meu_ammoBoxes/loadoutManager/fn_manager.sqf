// 15th loadout manager 2
// fight9
// built on Riouken's framework

#include "manager_macros.hpp"

private ["_fnc","_params"];
disableSerialization;
_fnc = [_this,0,"init",[""]] call BIS_fnc_param;
_params = [_this,1,[]] call BIS_fnc_param;
_display = uiNamespace getVariable ["meu_managerGUI",displayNull];
_r = false;

switch (toLower _fnc) do {
	
	case "init": {
		// add action to box
		private ["_box","_id","_actions","_name"];		
		_box = [_params,0,[]] call BIS_fnc_param;
		
		// main action
		_name = ACTION_NAME;
		_id = _box addAction [MU_BG_TEXT(_name),{ CALL_FNC("open",[(_this select 3) select 0]) },[_box],6];
		_box setVariable ["meu_loadoutManager",true];
		
		// get favorites list & add them to box
		_favs = profileNamespace getVariable ["meu_Lo_favs",[]];
		_actions = [];
		{
			private ["_var","_array","_id","_text"];
			// check loadout first
			_var = format ["meu_Lo_%1",_x];
			_array = profileNamespace getVariable [_var,[]];
			if (count _array < 2 || {count (_array select 1) < 1}) exitWith {};
			// action
			_text = format ["<img image='%2' /> %1",(_array select 0),ICON_FAVORITE];
			_id = _box addAction [
				WARN_TEXT(_text), 
				{
					private ["_num","_box"];
					_num = _this select 3 select 0;
					_box = _this select 3 select 1;
					["loadSaved",[_num - 1,_box]] call meu_fnc_manager; 
				},
				[_x,_box],
				5,
				true,
				true,
				"",
				(format ['((profileNamespace getVariable ["meu_Lo_favs",[]]) find %1) > -1',_x])
			];
			_actions pushback _x;
		} forEach _favs;
		_box setVariable ["meu_loadoutManager_favs",_actions];	
		
		_r = _id;
	};
	
	case "open": {
		// open GUI & populate
		private ["_box","_diag","_display","_load"];
		// params
		_box = [_params,0,[]] call BIS_fnc_param;
		meu_managerBOX = _box;
		
		// diag
		_diag = createDialog "meu_loadoutManager";
		disableSerialization;		
		_display = uiNamespace getVariable ["meu_managerGUI",displayNull];
		
		// hide ctrls
		{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
		{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
		
		// hide extra buttons
		{ CTRL(_X) ctrlShow false } forEach [MEU_CTRL_BUTTONDELETE,MEU_CTRL_BUTTONCLOSE,MEU_CTRL_BUTTONDEFAULT];
		
		// populate	
		GUI_REFRESH(-1)
		
		// change icon tooltip on mouse button click
		CTRL(MEU_CTRL_HELPTIP) ctrlSetTooltip (MEU_HELP_TIPS select floor random count MEU_HELP_TIPS);
		CTRL(MEU_CTRL_HELPTIP) ctrlSetEventHandler ["MouseButtonClick",
			format [
				"[[""meu_manager"",""meu_usage""], 30,"""", 30,"""", true, true, false, true] call BIS_fnc_advHint;((uiNamespace getVariable 'meu_managerGUI') displayCtrl %1) ctrlSetTooltip (%2 select floor random count %2);",
				MEU_CTRL_HELPTIP,
				MEU_HELP_TIPS
			]
		];
		// enable DEL key for saved list		
		CTRL(MEU_CTRL_SAVEDLIST) ctrlSetEventHandler ["keyDown",
			"if (_this select 1 in [211]) then {[""buttons"",[(uiNamespace getVariable 'meu_managerGUI') displayCtrl 15051]] call meu_fnc_manager;};"				
		];
		
		_r = _diag;
	};
	
	case "listgear": {
		// add gear to tree
		private ["_tree","_gear","_expand","_fnc_tvParentAdd","_fnc_tvChildAdd","_fnc_tvParantAndChild","_fnc_picture","_checking"];
		_tree = [_params,0,CTRL(MEU_CTRL_GEARTREE)] call BIS_fnc_param;
		_gear = [_params,1,CALL_FNC("playerGear",[])]call BIS_fnc_param;
		
		// get box gear for preview
		_boxGear = CALL_FNC("boxGear",[]);
		
		// if current gear list, then expand trees.. also controls _fnc_picture's X's 
		_expand = ctrlIDC _tree == MEU_CTRL_GEARTREE;
		_checking = meu_managerBOX getVariable ["meu_boxRestrictions",true];
		tvClear _tree;
		
		_fnc_picture = {
			// if showing saved loadout, only show picture if item is in the box
			GET_PARENT(_this);
			if CHECK_IS_RADIO exitWith {(getText (configFile >> _config >> _this >> "picture"))};
			if (!_expand && {_checking} && {!(_this in _boxGear)}) exitWith {"\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"};
			(getText (configFile >> _config >> _this >> "picture"))			
		};	
		_fnc_tvParantAndChild = {
			// checks for gear before running parent and child fncs
			private ["_parentGear","_childGear"];
			_parentGear = _this select 0;
			_childGear = _this select 1;
			if (_parentGear != "") then {
				private ["_parent","_child"];
				_parent = [_parentGear] call _fnc_tvParentAdd;
				if (_parent isEqualTo false) exitWith {false};
				if (count _childGear > 0) then {
					_child = [_parent,_childGear] call _fnc_tvChildAdd;
				};
			};
			true
		};
		_fnc_tvParentAdd = {
			// adds to tree and returns parent 
			private ["_gear","_config","_parent"];
			_gear = _this select 0;
			_config = CALL_FNC("config",[_gear]);
			if (_config isEqualTo false) exitWith {false};
			_parent = _tree tvAdd [ [], getText (configFile >> _config >> _gear >> "displayname") ];
			_tree tvSetPicture [ [_parent], _gear call _fnc_picture ];
			if _expand then {
				_tree tvExpand [_parent];
			};
			_parent
		};
		_fnc_tvChildAdd = {
			// loops through child gear adding to parent
			private ["_parent","_gear"];
			_parent = _this select 0;
			_gear = _this select 1;
			{
				if (_x != "") then {
					private ["_config","_child"];
					_config = CALL_FNC("config",[_x]);
					if !(_config isEqualTo false) then {
						_child = _tree tvAdd [ [_parent], getText (configFile >> _config >> _x >> "displayname") ];
						_tree tvSetPicture [ [_parent,_child], _x call _fnc_picture ];
					};
				};
			} forEach _gear;
			true
		};
		// list goggles with assigned
		_assigned = +GEAR(6);
		_assigned pushBack GEAR(1);
		// add to tree		
		{ _x call _fnc_tvParantAndChild; } forEach [
			[_gear select 9,_gear select 10], 	// primary, Items
			[_gear select 13,_gear select 14], 	// handgun, items
			[_gear select 11,_gear select 12], 	// launcher, item
			[_gear select 2,_gear select 3], 	// uniform, items
			[_gear select 4,_gear select 5], 	// vest, items
			[_gear select 7,_gear select 8], 	// pack, items
			[_gear select 0,_assigned]			// headgear, assigned+goggles
		];
		// list freqs
		if (TFAR_CHECK) then {
			if (count _gear > 15) then {
				private ["_parent","_childA","_childB"];
				_parent = _tree tvAdd [ [], "Radio Presets" ];
				_tree tvSetPicture [ [_parent],"\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa" ];
				if (count GEAR(15) > 0) then {
					_childA = _tree tvAdd [ [_parent], "Short Range" ];
					{
						private "_gChild";
						_gChild = _tree tvAdd [ [_parent,_childA], _x ];
					} forEach GEAR(15);
				};
				if (count GEAR(16) > 0) then {
					_childB = _tree tvAdd [ [_parent], "Long Range" ];
					{
						private "_gChild";
						_gChild = _tree tvAdd [ [_parent,_childb], _x ];
					} forEach GEAR(16);
				};
			};
		};
		
		_r = true;
	};
	
	case "listsaved": {
		// list saved loadouts
		private ["_savedList","_index"];
		_index = [_params,0,lbCurSel CTRL(MEU_CTRL_SAVEDLIST)] call BIS_fnc_param;
		_savedList = CTRL(MEU_CTRL_SAVEDLIST);
		// loop through vars, get names & add to array
		meuLoadOuts = [];
		for "_num" from 1 to 20 do {
			call compile format ["
				meu_Lo_%1 = profileNamespace getVariable [""meu_Lo_%1"",[]];
				if ((count meu_Lo_%1) == 0) then {
					profileNamespace setVariable [""meu_Lo_%1"",[""Empty Loadout %1""]];
					meu_Lo_%1 = profileNamespace getVariable [""meu_Lo_%1"",[]]; 
				};
				meuLoadOuts pushBack meu_LO_%1;
				",
				_num
			];		
		};
		_favs = profileNamespace getVariable ["meu_LO_favs",[]];
		// clear & remove selected
		lbClear _savedList;
		_savedList lbSetCurSel -1; 
		// add to listBox
		{
			private ["_index","_num"];
			_num = _forEachIndex + 1;
			_index = _savedList lbAdd (_x select 0);
			// if empty, grey text
			if ( (_x select 0) == (format ["Empty Loadout %1",_num]) ) then {
				_savedList lbSetColor [_index,[1,1,1,0.25]];
			};
			// if in favs, add icon
			if ( _num in _favs) then {
				_savedList lbSetPicture [_index,ICON_FAVORITE];
			};
		} forEach meuLoadOuts;
		// set selected again
		if (_index > -1) then {
			_savedList lbSetCurSel _index;
		};
		_r = true;
	};
	
	case "listdefault": {
		// list configured default loadouts
		private ["_defaultList","_cfg","_KK_fnc_strReplace"];
		_KK_fnc_strReplace = {
			private ["_s","_f","_r","_i"];
			_s = _this select 0; // replace in
			_f = _this select 1; // replace what
			_r = _this select 2; // replace with
			_i = _s find _f;
			if (_i < 0) exitWith {_s};
			(_s select [0, _i]) + _r + (_s select [_i + count _f])
		};
		
		_defaultList = CTRL(MEU_CTRL_DEFAULTLIST);
		lbClear _defaultList;
		_defaultList lbSetCurSel -1;
		// get configured loadouts
		_cfg = configFile >> "CfgVehicles" >> typeOf meu_managerBOX;
		if (isArray (_cfg >> "MEU_LOADOUTS")) then {
			private "_array";
			_array = getArray (_cfg >> "MEU_LOADOUTS");
			// add names to listBox
			{
				private "_index";	// remove "loadout" from name
				_index = _defaultList lbAdd ([(_x select 0),"Loadout",""] call _KK_fnc_strReplace);
				_defaultList lbSetData [_index,_x select 1];
			} forEach _array;
		} else {
			// no loadouts, disable ctrls
			_defaultList lbAdd "No Defaults";
			_defaultList ctrlEnable false;
			CTRL(MEU_CTRL_BUTTONDEFAULT) ctrlEnable false;
		};
				
		_r = true;
	};
	
	case "playergear": {
		// return all player gear
		private["_meu_xtendMag","_meu_headgear","_meu_goggles","_meu_uniform","_meu_uniformitems","_meu_vest","_meu_vestitems","_meu_asgnItems","_meu_backpack","_meu_packitems","_meu_PrimaryGun","_meu_pgunitems","_meu_SecondaryGun","_meu_sgunitems","_meu_handgun","_meu_handgunitems","_meu_swFreqs","_meu_lrFreqs"];
		_r = [];
		
		_meu_headgear = headgear player;	
		_meu_goggles = Goggles player;
		_meu_uniform = uniform player;
		_meu_uniformitems = uniformItems player;
		_meu_vest = vest player;
		_meu_vestitems = vestItems player;
		_meu_asgnItems = assignedItems player;		
		_meu_backpack = backpack player;
		_meu_packitems = backpackItems player;		
		_meu_PrimaryGun = primaryWeapon player;
		_meu_pgunitems = primaryWeaponItems player;
		_meu_SecondaryGun = secondaryWeapon player;
		_meu_sgunitems = secondaryWeaponItems player;				
		_meu_handgun = handgunWeapon player;
		_meu_handgunitems = handgunItems player;
		
		// add loaded magazines as weapon items
		_meu_xtendMag = magazinesAmmoFull player;
		{
			switch (toLower (_x select 4)) do {
				case (toLower _meu_PrimaryGun): {_meu_pgunitems pushBack (_x select 0);};
				case (toLower _meu_SecondaryGun): {_meu_sgunitems pushBack (_x select 0);};
				case (toLower _meu_handgun): {_meu_handgunitems pushBack (_x select 0);};
				default {};
			};	
		} forEach _meu_xtendMag;
		
		// if there is a laser designator in assigned items
		if ( { 
				private ["_config","_binos"];
				_config = CALL_FNC("config",[_x]);
				_binos = [(configFile >> _config >> _x),"optics",0] call BIS_fnc_returnConfigEntry;
				if (_binos > 0) then [{TRUE},{FALSE}];
			} count _meu_asgnItems > 0		
		) then {
			// add one extra battery to container if it has one already - compensates for lost loaded one
			{ 
				if ("Laserbatteries" in _x) exitWith { _x pushBack "Laserbatteries"; };
			} forEach [_meu_uniformitems,_meu_vestitems,_meu_packitems];
		};
		
		// if has installed earbuds 
		if (MEU_EARBUD_CHECK) then { _meu_uniformitems pushBack MEU_CLASS_EARBUDS };
		
		// get weapon items from packed weapons
		private "_packWeps";
		_packWeps = weaponsItemsCargo (backpackContainer player);
		if !(isNil "_packWeps") then {	
			{	
				for "_i" from 1 to (count _x - 1) do {
					private "_item";
					_item = if ( CHECK_TYPE((_x select _i),[]) ) then {
						(_x select _i) select 0
					} else {
						_x select _i
					};
					if (_item != "") then { _meu_packitems pushBack _item };
				};
			} forEach _packWeps;
		};
		
		// radio settings
		_meu_swFreqs = [];
		_meu_lrFreqs = [];
		if (TFAR_CHECK) then {
			if (call TFAR_fnc_haveSWRadio) then {
				_swSet = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
				if !(isNil "_swSet") then {
					_meu_swFreqs = _swSet select 2;
				};
			};
			if (call TFAR_fnc_haveLRRadio) then {
				_lrSet = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLrSettings;
				if !(isNil "_lrSet") then {
					_meu_lrFreqs = _lrSet select 2;
				};
			};
		};
		
		_r = [_meu_headgear,_meu_goggles,_meu_uniform,_meu_uniformitems,_meu_vest,_meu_vestitems,_meu_asgnItems,_meu_backpack,_meu_packitems,_meu_PrimaryGun,_meu_pgunitems,_meu_SecondaryGun,_meu_sgunitems,_meu_handgun,_meu_handgunitems,_meu_swFreqs,_meu_lrFreqs];
		
	};
	
	case "boxgear": {
		// return all gear in box
		private ["_box", "_mags","_weps","_items","_rucks","_allGear"];
	
		_box = meu_managerBOX;
		_mags = getMagazineCargo _box;
		_weps = getWeaponCargo _box;
		_items = getItemCargo _box;
		_rucks = getBackpackCargo _box;
		_allGear = [] + (_mags select 0) + (_weps select 0) + (_items select 0) + (_rucks select 0);
		_allGear append ALLOWED_GOGGLES; // add goggles to box items
		_r = _allGear
	};
	
	case "buttons": {
		// handle GUI buttons per IDC
		private ["_button","_return","_KK_fnc_strReplace"];
		_button = [_params,0,controlNull] call BIS_fnc_param;
		_return = false;
		
		_KK_fnc_strReplace = {
			private ["_s","_f","_r","_i"];
			_s = _this select 0;
			_f = _this select 1;
			_r = _this select 2;
			_i = _s find _f;
			if (_i < 0) exitWith {_s};
			(_s select [0, _i]) + _r + (_s select [_i + count _f])
		};
		
		switch (ctrlIDC _button) do {
			
			// main save button
			case MEU_CTRL_BUTTONSAVE: {
				private "_heldCtrl";
				_heldCtrl = [_params,5,false] call BIS_fnc_param;
				// show save contrls			
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {				
					private ["_text","_empty"];
					
					// get text from list and set on edit box
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_text = CTRL(MEU_CTRL_SAVEDLIST) lbText _index;
					_empty = format ["Empty Loadout %1",_index + 1];
					if (_text == _empty) then {
						_text = [_text,"Empty ",""] call _KK_fnc_strReplace; 
					};
					CTRL(MEU_CTRL_SAVEEDIT) ctrlSetText _text;
					
					// if ctrl is held, skip ctrlShow & call save action
					if _heldCtrl exitWith { 
						private "_quick";
						_quick = ["buttons",[CTRL(MEU_CTRL_SAVESAVE)]] call FUNCTION_NAME; 
						_return = true;
					};
					
					// show & disable groups
					{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
					{ CTRL(_x) ctrlShow true } forEach MEU_SAVE_GROUP;
					CTRL(MEU_CTRL_SAVERENAME) ctrlShow false; // disabled rename save
					{ CTRL(_x) ctrlEnable false } forEach MEU_DISABLE_GROUP;
					CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor [1,1,1,0.25]; // disabled color
					
					ctrlSetFocus CTRL(MEU_CTRL_SAVESAVE);
					
					_return = true;
				} else {
					private "_m";
					_m = ["message",[WARN_TEXT("Please select a save slot."),[]]] call FUNCTION_NAME;
					_return = false;
				};
			};
			
			// save cancel button
			case MEU_CTRL_SAVECANCEL: { 
				// close save controls			
				{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
				{ CTRL(_x) ctrlEnable true } forEach MEU_DISABLE_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor (COLOR_WARNING_ARRAY); // tree text color
				_return = false;
			};	
			
			// save button/ pressing enter
			case MEU_CTRL_SAVEEDIT; 
			case MEU_CTRL_SAVESAVE: { 
				// get ctrl text and save to profile				
				private ["_index","_variable","_name","_gear","_array","_refresh","_empty"];
								
				// set focus away from close button
				ctrlSetFocus CTRL(MEU_CTRL_HELPTIP); // stop close button getting hit
				
				// rename saved is shown
				if (ctrlEnabled CTRL(MEU_CTRL_SAVERENAME)) exitWith {
					private "_rename";
					_rename =["buttons",[CTRL(MEU_CTRL_SAVERENAME)]] call FUNCTION_NAME; 
					_r = true;
				};
				
				// name
				_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
				_variable = format ["meu_Lo_%1",_index + 1];
				_empty = format ["Empty Loadout %1",_index + 1];
				
				// data
				_name = ctrlText CTRL(MEU_CTRL_SAVEEDIT);	
				if (_name == "") exitWith { _m = ["message",[WARN_TEXT("Please enter a name."),[]]] call FUNCTION_NAME; };
				// if they left default empty name
				if (_name == _empty) then {
					_name = [_name,"Empty ",""] call _KK_fnc_strReplace; 
				};
				
				_gear = CALL_FNC("playerGear",[]);
				_array = [_name,_gear];
				
				// save
				profileNamespace setVariable [_variable,_array];
				saveProfileNamespace;
				
				// refresh
				{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
				{ CTRL(_x) ctrlEnable true } forEach MEU_DISABLE_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor (COLOR_WARNING_ARRAY);//[1,0.5,0,1]; // tree text color
				
				GUI_REFRESH(_index)
				
				// message
				_m = ["message",[format ["Loadout was saved:<br/><br/>%1",WARN_TEXT(_name)],[]]] call FUNCTION_NAME;
				
				_return = true;
			};	
			
			// main delete button
			case MEU_CTRL_BUTTONDELETE: { 
				// delete selected loadout
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {
					private ["_index","_variable","_name","_old"];
					// format new data
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_old = CTRL(MEU_CTRL_SAVEDLIST) lbText _index;
					_variable = format ["meu_Lo_%1",_index + 1];
					_name = format ["Empty Loadout %1",_index + 1];
					
					// save
					profileNamespace setVariable [_variable,[_name,[]]];
					saveProfileNamespace;
					
					// refresh
					{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
					
					_m = ["message",[format ["Loadout was deleted:<br/><br/>%1",ERROR_TEXT(_old)],[]]] call FUNCTION_NAME;
					
					GUI_REFRESH(-1)
					_r = true;
				} else {
					_m = ["message",[WARN_TEXT("Please select a save slot."),[]]] call FUNCTION_NAME;
					_r = false;
				};
			};
			
			// double clicking saved gear
			case MEU_CTRL_SAVEDLIST: {
				private "_heldCtrl";
				_heldShft = [_params,4,false] call BIS_fnc_param;
				_heldCtrl = [_params,5,false] call BIS_fnc_param;
				
				// if SHIFT was held, exit with calling favorites fnc
				if _heldShft exitWith { 
					private "_quick";
					_quick = ["buttons",[CTRL(MEU_CTRL_FAVORITE)]] call FUNCTION_NAME; 
					_return = true;
				};
				
				// display the saved loadout
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {
					private ["_index","_variable","_name","_savedList"];
					// format new data
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_variable = format ["meu_Lo_%1",_index + 1];				
					_array = profileNamespace getVariable [_variable,[]];
					// check
					if (count _array < 2 || {count (_array select 1) < 1}) exitWith {
						_m = ["message",[WARN_TEXT("The selected slot is empty."),[]]] call FUNCTION_NAME;
						_r = false;
					};
					
					// if CTRL was held, exit with showing name save controls
					if _heldCtrl exitWith {	
						private "_text";					
						_text = CTRL(MEU_CTRL_SAVEDLIST) lbText (lbCurSel CTRL(MEU_CTRL_SAVEDLIST));
						meu_renameIndex = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
						// hide/show ctrls
						{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
						{ CTRL(_x) ctrlShow true } forEach MEU_SAVE_GROUP;
						CTRL(MEU_CTRL_SAVESAVE) ctrlShow false; // hide gear save
						{ CTRL(_x) ctrlEnable false } forEach MEU_DISABLE_GROUP;
						CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor [1,1,1,0.25]; // disabled color
						// get list text and set on RscEdit
						CTRL(MEU_CTRL_SAVEEDIT) ctrlSetText _text;
						ctrlSetFocus CTRL(MEU_CTRL_SAVESAVE);
						_return = true;
					};
				
					// show saved gear preview
					{ CTRL(_x) ctrlShow true } forEach MEU_PREV_GROUP;
					_gear = ["listGear",[CTRL(MEU_CTRL_PREVTREE),_array select 1]] call FUNCTION_NAME;
					ctrlSetFocus CTRL(MEU_CTRL_PREVCLOSE);
					CTRL(MEU_CTRL_PREVTEXT) ctrlSetText (_array select 0);
					{ CTRL(_x) ctrlEnable false; } forEach [MEU_CTRL_GEARTREE,MEU_CTRL_PREVBG];
								
					_return = true;
				} else {
					_m = ["message",[WARN_TEXT("Please select a save slot."),[]]] call FUNCTION_NAME;
					_return = false;
				};
			};
			
			// rename save button
			case MEU_CTRL_SAVERENAME: {			
				private ["_index","_variable","_array","_name","_refresh"];
				// data
				_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
				if (_index == -1) then {_index = meu_renameIndex;};
				_variable = format ["meu_Lo_%1",_index + 1];
				_array = profileNamespace getVariable [_variable,[]];
				
				// name
				_name = ctrlText CTRL(MEU_CTRL_SAVEEDIT);	
				if (_name == "") exitWith { _m = ["message",[WARN_TEXT("Please enter a name."),[]]] call FUNCTION_NAME; };
				
				// save
				_array set [0,_name];
				profileNamespace setVariable [_variable,_array];
				saveProfileNamespace;
				
				// hint note if in favorites
				_favs = profileNamespace getVariable ["meu_Lo_favs",[]];
				if ( (_index + 1) in _favs ) then {
					private ["_text","_m"];
					_text = format ["Note for favorites:<br />%1",WARN_TEXT("Scroll action name will update next game.")];
					_m = ["message",[_text,[]]] call FUNCTION_NAME;
				};
				
				// refresh
				{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
				{ CTRL(_x) ctrlEnable true } forEach MEU_DISABLE_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor (COLOR_WARNING_ARRAY);//[1,0.5,0,1]; // tree text color
				meu_renameIndex = nil;
				GUI_REFRESH(_index)
			};
			
			// gear preview close
			case MEU_CTRL_PREVCLOSE: {
				// hide preview group
				{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlEnable true;
				_return = true;
			};
			
			// set favorite
			case MEU_CTRL_FAVORITE: {
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {
					private ["_index","_variable","_array","_favs","_loadoutNo","_inArray"];
					// format new data
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_variable = format ["meu_Lo_%1",_index + 1];				
					_array = profileNamespace getVariable [_variable,[]];
					// check
					if (count _array < 2 || {count (_array select 1) < 1}) exitWith {
						_m = ["message",[WARN_TEXT("The selected slot is empty."),[]]] call FUNCTION_NAME;
						_r = false;
					};
					// get array
					_loadoutNo = _index + 1;
					_favs = profileNamespace getVariable ["meu_Lo_favs",[]];
					// find if in favs array
					_inArray = _favs find _loadoutNo;
					if (_inArray isEqualTo -1) then {
						// add to favs array
						_favs pushBack _loadoutNo;
						// add action to all ammoboxes
						{
							// if has manager
							if ( _x getVariable ["meu_loadoutManager",false] ) then {
								private ["_box_favs"];
								// if doesnt have action already
								_box_favs = _x getVariable ["meu_loadoutManager_favs",[]];
								if ( _box_favs find _loadoutNo < 0 ) then {
									private ["_text","_id"];
									// add the action
									_text = format ["<img image='%2' /> %1",(_array select 0),ICON_FAVORITE];
									_id = _x addAction [
										WARN_TEXT(_text), 
										{
											private ["_num","_box"];
											_num = _this select 3 select 0;
											_box = _this select 3 select 1;
											["loadSaved",[_num - 1,_box]] call FUNCTION_NAME; 
										},
										[_loadoutNo,_x],
										5,
										true,
										true,
										"",
										(format ['((profileNamespace getVariable ["meu_Lo_favs",[]]) find %1) > -1',_loadoutNo])
									];
									// update box's list of favs
									_box_favs pushBack _loadoutNo;
									_x setVariable ["meu_loadoutManager_favs",_box_favs];
								};
							};
						} forEach (allMissionObjects "Reammobox_F");
					} else {
						// delete from favs array
						_favs deleteAt _inArray;
						// will automatically disable actions but not remove
					};
					
					// save
					profileNamespace setVariable ["meu_Lo_favs",_favs];
					saveProfileNamespace;
					
					GUI_REFRESH(_index)
					
					_r = true;
				} else {
					_m = ["message",[WARN_TEXT("Please select a save slot."),[]]] call FUNCTION_NAME;
					_r = false;
				};
			};
		};
		
		_r = _return;
	};
	
	case "loadsaved": {
		// add gear from saved to player 
		private ["_index","_name","_array","_gear","_checking","_boxGear","_restricted","_refresh","_create"];
		// get array from selected index or send loadout number & box
		_index = [_params,0,(lbCurSel CTRL(MEU_CTRL_SAVEDLIST)),[0]] call BIS_fnc_param;
		_box = [_params,1,(if (isNil {meu_managerBOX}) then [{objNull},{meu_managerBOX}])] call BIS_fnc_param;
		meu_managerBOX = _box; // define for favorites
		// no selection
		if (_index < 0) exitWith {
			if (lbCurSel CTRL(MEU_CTRL_DEFAULTLIST) > -1) then {
				_default = CALL_FNC("loadDefault",[]);
				_r = true;
			} else {;
				_m = ["message",[WARN_TEXT("Please select a loadout."),[]]] call FUNCTION_NAME; 		
				_r = false;
			};
		};
		// data
		_name = format ["meu_Lo_%1",_index + 1];
		_array = profileNamespace getVariable [_name,[]];	
		
		// checks
		if (count _array < 2 || {count (_array select 1) < 1}) exitWith {
			_m = ["message",[WARN_TEXT("The selected slot is empty."),[]]] call FUNCTION_NAME;
			_r = false;
		};
		
		// the gear
		_gear = _array select 1;

		_checking = _box getVariable ["meu_boxRestrictions",true];
		_boxGear = CALL_FNC("boxGear",[]);
		
		_restricted = [];
		// clear current gear
		removeAllWeapons player;
		removeAllAssignedItems player;
		removeAllItems player;
		removeBackpack player;
		removeUniform player;
		removeVest player;
		removeHeadgear player;
		
		/*
		_meu_headgear = _gear select 0; //
		_meu_goggles = _gear select 1; //
		_meu_uniform = _gear select 2; //
		_meu_uniformitems = _gear select 3; //
		_meu_vest = _gear select 4; // 
		_meu_vestitems = _gear select 5; //
		_meu_asgnItems = _gear select 6; //
		_meu_backpack = _gear select 7; //
		_meu_packitems = _gear select 8; //
		_meu_PrimaryGun = _gear select 9; //
		_meu_pgunitems = _gear select 10; //
		_meu_SecondaryGun = _gear select 11; //
		_meu_sgunitems = _gear select 12; //
		_meu_handgun = _gear select 13; //
		_meu_handgunitems = _gear select 14; //
		_meu_swFreqs = _gear select 15; // <-- new
		_meu_lrFreqs = _gear select 16; // <-- new
		*/	
		
		// set radio variables
		if (TFAR_CHECK) then { // has tfar
			if (count _gear > 15) then { // has new array size
				private ["_swFreq","_lrFreq"];
				if (count GEAR(15) > 0) then { // has freqs saved
					_swFreq = false call TFAR_fnc_generateSwSettings;
					_swFreq set [2,GEAR(15)]; // set 3rd element with saved freqs array
					(group player) setVariable ["tf_sw_frequency", _swFreq];
				};
				if (count GEAR(16) > 0) then {
					_lrFreq = false call TFAR_fnc_generateLrSettings;
					_lrFreq set [2,GEAR(16)];
					(group player) setVariable ["tf_lr_frequency",_lrFreq];
				};
			};
		};
		
		// add string items
		ADD_STRING(0,addHeadGear);
		ADD_STRING(1,addGoggles);
		ADD_STRING(2,forceAddUniform);
		ADD_STRING(4,addVest);
		ADD_STRING(7,addBackpack);
		ADD_STRING(9,addWeapon);
		ADD_STRING(11,addWeapon);
		ADD_STRING(13,addWeapon);
		
		// add array weapon items
		ADD_ITEMS(10,addPrimaryWeaponItem);
		ADD_ITEMS(12,addSecondaryWeaponItem);
		ADD_ITEMS(14,addHandgunItem);
		
		// add array outfit items
		ADD_TO_OUTFIT(3,addItemToUniform);
		ADD_TO_OUTFIT(5,addItemToVest);
		if CHECK_STRING(7) then { clearAllItemsFromBackpack player; }; // remove any default pack items	
		ADD_TO_OUTFIT(8,addItemToBackpack);	
					
		// add assigned items
		if CHECK_COUNT(6) then {
			{
				GET_PARENT(_x);
				if CHECK_IS_RADIO then { 
					player linkItem "ItemRadio";
				} else {
					if CHECK_BOX_X(_x) then {
						private ["_config","_binos"];
						_config = CALL_FNC("config",[_x]);
						_binos = [(configFile >> _config >> _x),"optics",0] call BIS_fnc_returnConfigEntry;
						if (_binos > 0) then {
							player addWeapon _x;
							player assignItem _x; 
						} else {
							player linkItem _x;
						};
					} else { 
						ADD_RESTRICT_X(_x); 
					};
				};
			} foreach GEAR(6);
		};
		
		// error message
		if (count _restricted > 0) then {
			_message = ["message",[ERROR_TEXT("Gear Not Loaded:"),_restricted]] call FUNCTION_NAME;
		} else { 
			// or clear any previous hint
			hint ""; 
		};
		
		// refresh list
		GUI_REFRESH(_index)
		
		_r = true;	
	};
		
	case "loaddefault": {
		private ["_defaultList","_gearTree","_index","_file","_gear","_null"];
		// ctrls
		_defaultList = CTRL(MEU_CTRL_DEFAULTLIST);
		
		// get data string
		_index = lbCurSel _defaultList;
		_file = _defaultList lbData _index;
		
		// check
		if (_index < 0 || {_file == ""}) exitWith {
			_m = ["message",[WARN_TEXT("Please select a loadout."),[]]] call FUNCTION_NAME;
			_r = false	
		};
		
		// execVM file
		_null = _file spawn {
			private "_handle";
			_handle = [nil,player] execVM ("meu_ammoBoxes\" + _this);
			waitUntil { scriptDone _handle };
			
			// clear any hint
			Hint "";
						
			// refresh list
			GUI_REFRESH(-1)
		};
		
		_r = true;
	};
	
	case "config": {
		// return config class of item
		private["_item","_config"];
		_item = [_params,0,""] call BIS_fnc_param;
		_config = call {
			if (isClass (configFile >> "CfgMagazines" >> _item)) exitWith {"CfgMagazines"};
			if (isClass (configFile >> "CfgWeapons" >> _item)) exitWith {"CfgWeapons"};
			if (isClass (configFile >> "CfgVehicles" >> _item)) exitWith {"CfgVehicles"};
			if (isClass (configFile >> "CfgGlasses" >> _item)) exitWith {"CfgGlasses"};
			false // can isEqualTo check
		};
		_r = _config;
	};
	
	case "message": {
		// formated messages
		private ["_message","_gear","_text"];		
		_message = [_params,0,""] call BIS_fnc_param;
		_gear = [_params,1,[]] call BIS_fnc_param;
		
		_header = parseText MESSAGE_HEADER;
		_message = parseText format ["<t size='1.1' shadow='1'>%1</t>",_message];
		_text = composeText [_header,linebreak,linebreak,_message,linebreak];
		
		{
			_config = CALL_FNC("config",[_x]);
			if !(_config isEqualTo false) then {
				_name = getText (configFile >> _config >> _x >> "displayname");
				_pic = getText (configFile >> _config >> _x >> "picture");
				_text = composeText [_text,lineBreak,image _pic," ",_name];
			};
		} forEach _gear;
	
		hint _text;
		_r = true;
	};
	
};

_r
 
 
 
 