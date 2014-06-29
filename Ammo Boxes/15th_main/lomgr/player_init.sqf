// 15th Loadout Manager
// Written by Riouken aka Oliver


// Get a list of all gear in the ammoBox
meu_fnc_getBoxContentsLoMGR = {
	private ["_box", "_mags","_weps","_items","_rucks","_allGear"];
	
	_box = player getVariable "meuLomgrSelectedBox";
	_mags = getMagazineCargo _box;
	_weps = getWeaponCargo _box;
	_items = getItemCargo _box;
	_rucks = getBackpackCargo _box;
	_allGear = [] + (_mags select 0) + (_weps select 0) + (_items select 0) + (_rucks select 0);

	_allGear
};


// FNC to call up the GUI
meu_fnc_callLoMGR = {
	private ["_box", "_ShowDialog","_ok","_void"];
	
	//_box = _this select 0;
	hint str _this;
	//player setVariable ["meuLomgrSelectedBox",_box];
	
	_ShowDialog = {
	sleep 0.01;
	_ok = createDialog "meu_loadoutmgr_dlg";
	waitUntil { !dialog };
	};
 
	_void = [] call _ShowDialog;

};

// FNC called each time the gui is loaded. or to refresh the gui.
meu_fnc_LoMgrGuiOnload = {

	private["_return","_meu_ammo","_meu_weapons","_meu_items","_meu_asgnItems","_meu_headgear","_meu_goggles","_meu_vest","_meu_vestitems","_meu_uniform","_meu_uniformitems","_meu_backpack","_meu_packitems","_meu_handgunitems","_meu_pgunitems","_meu_sgunitems"];
	_meu_Namespace = profileNamespace;

	meu_Lo_1 = _meu_Namespace getVariable ["meu_Lo_1",[]];
	if ((count meu_Lo_1) == 0) then {_meu_Namespace setVariable ["meu_Lo_1",["Empty Loadout 1"]];meu_Lo_1 = _meu_Namespace getVariable ["meu_Lo_1",[]]; };
	meu_Lo_2 = _meu_Namespace getVariable ["meu_Lo_2",[]];
	if ((count meu_Lo_2) == 0) then {_meu_Namespace setVariable ["meu_Lo_2",["Empty Loadout 2"]];meu_Lo_2 = _meu_Namespace getVariable ["meu_Lo_2",[]]; };
	meu_Lo_3 = _meu_Namespace getVariable ["meu_Lo_3",[]];
	if ((count meu_Lo_3) == 0) then {_meu_Namespace setVariable ["meu_Lo_3",["Empty Loadout 3"]];meu_Lo_3 = _meu_Namespace getVariable ["meu_Lo_3",[]]; };
	meu_Lo_4 = _meu_Namespace getVariable ["meu_Lo_4",[]];
	if ((count meu_Lo_4) == 0) then {_meu_Namespace setVariable ["meu_Lo_4",["Empty Loadout 4"]];meu_Lo_4 = _meu_Namespace getVariable ["meu_Lo_4",[]]; };
	meu_Lo_5 = _meu_Namespace getVariable ["meu_Lo_5",[]];
	if ((count meu_Lo_5) == 0) then {_meu_Namespace setVariable ["meu_Lo_5",["Empty Loadout 5"]];meu_Lo_5 = _meu_Namespace getVariable ["meu_Lo_5",[]]; };
	meu_Lo_6 = _meu_Namespace getVariable ["meu_Lo_6",[]];
	if ((count meu_Lo_6) == 0) then {_meu_Namespace setVariable ["meu_Lo_6",["Empty Loadout 6"]];meu_Lo_6 = _meu_Namespace getVariable ["meu_Lo_6",[]]; };
	meu_Lo_7 = _meu_Namespace getVariable ["meu_Lo_7",[]];
	if ((count meu_Lo_7) == 0) then {_meu_Namespace setVariable ["meu_Lo_7",["Empty Loadout 7"]];meu_Lo_7 = _meu_Namespace getVariable ["meu_Lo_7",[]]; };
	meu_Lo_8 = _meu_Namespace getVariable ["meu_Lo_8",[]];
	if ((count meu_Lo_8) == 0) then {_meu_Namespace setVariable ["meu_Lo_8",["Empty Loadout 8"]];meu_Lo_8 = _meu_Namespace getVariable ["meu_Lo_8",[]]; };
	meu_Lo_9 = _meu_Namespace getVariable ["meu_Lo_9",[]];
	if ((count meu_Lo_9) == 0) then {_meu_Namespace setVariable ["meu_Lo_9",["Empty Loadout 9"]];meu_Lo_9 = _meu_Namespace getVariable ["meu_Lo_9",[]]; };
	meu_Lo_10 = _meu_Namespace getVariable ["meu_Lo_10",[]];
	if ((count meu_Lo_10) == 0) then {_meu_Namespace setVariable ["meu_Lo_10",["Empty Loadout 10"]];meu_Lo_10 = _meu_Namespace getVariable ["meu_Lo_10",[]]; };

	meu_Lo_11 = _meu_Namespace getVariable ["meu_Lo_11",[]];
	if ((count meu_Lo_11) == 0) then {_meu_Namespace setVariable ["meu_Lo_11",["Empty Loadout 11"]];meu_Lo_11 = _meu_Namespace getVariable ["meu_Lo_11",[]]; };
	meu_Lo_12 = _meu_Namespace getVariable ["meu_Lo_12",[]];
	if ((count meu_Lo_12) == 0) then {_meu_Namespace setVariable ["meu_Lo_12",["Empty Loadout 12"]];meu_Lo_12 = _meu_Namespace getVariable ["meu_Lo_12",[]]; };
	meu_Lo_13 = _meu_Namespace getVariable ["meu_Lo_13",[]];
	if ((count meu_Lo_13) == 0) then {_meu_Namespace setVariable ["meu_Lo_13",["Empty Loadout 13"]];meu_Lo_13 = _meu_Namespace getVariable ["meu_Lo_13",[]]; };
	meu_Lo_14 = _meu_Namespace getVariable ["meu_Lo_14",[]];
	if ((count meu_Lo_14) == 0) then {_meu_Namespace setVariable ["meu_Lo_14",["Empty Loadout 14"]];meu_Lo_14 = _meu_Namespace getVariable ["meu_Lo_14",[]]; };
	meu_Lo_15 = _meu_Namespace getVariable ["meu_Lo_15",[]];
	if ((count meu_Lo_15) == 0) then {_meu_Namespace setVariable ["meu_Lo_15",["Empty Loadout 15"]];meu_Lo_15 = _meu_Namespace getVariable ["meu_Lo_15",[]]; };
	meu_Lo_16 = _meu_Namespace getVariable ["meu_Lo_16",[]];
	if ((count meu_Lo_16) == 0) then {_meu_Namespace setVariable ["meu_Lo_16",["Empty Loadout 16"]];meu_Lo_16 = _meu_Namespace getVariable ["meu_Lo_16",[]]; };
	meu_Lo_17 = _meu_Namespace getVariable ["meu_Lo_17",[]];
	if ((count meu_Lo_17) == 0) then {_meu_Namespace setVariable ["meu_Lo_17",["Empty Loadout 17"]];meu_Lo_17 = _meu_Namespace getVariable ["meu_Lo_17",[]]; };
	meu_Lo_18 = _meu_Namespace getVariable ["meu_Lo_18",[]];
	if ((count meu_Lo_18) == 0) then {_meu_Namespace setVariable ["meu_Lo_18",["Empty Loadout 18"]];meu_Lo_18 = _meu_Namespace getVariable ["meu_Lo_18",[]]; };
	meu_Lo_19 = _meu_Namespace getVariable ["meu_Lo_19",[]];
	if ((count meu_Lo_19) == 0) then {_meu_Namespace setVariable ["meu_Lo_19",["Empty Loadout 19"]];meu_Lo_19 = _meu_Namespace getVariable ["meu_Lo_19",[]]; };
	meu_Lo_20 = _meu_Namespace getVariable ["meu_Lo_20",[]];
	if ((count meu_Lo_20) == 0) then {_meu_Namespace setVariable ["meu_Lo_20",["Empty Loadout 20"]];meu_Lo_20 = _meu_Namespace getVariable ["meu_Lo_20",[]]; };

	lbClear 1500 ;
	lbClear 1501 ;
	meuLoadOuts = [meu_Lo_1,meu_Lo_2,meu_Lo_3,meu_Lo_4,meu_Lo_5,meu_Lo_6,meu_Lo_7,meu_Lo_8,meu_Lo_9,meu_Lo_10,meu_Lo_11,meu_Lo_12,meu_Lo_13,meu_Lo_14,meu_Lo_15,meu_Lo_16,meu_Lo_17,meu_Lo_18,meu_Lo_19,meu_Lo_20];

	disableSerialization;


	_display = (uiNamespace getVariable "meu_loadoutmgr_dlg");
	_loListbox = _display displayCtrl 1500;
	
	{
		_index = _loListbox lbAdd (_x select 0);
		//_nul = lbAdd[1500,(_x select 0)];

	} forEach meuLoadOuts;
	
	
	_activeGear = [] call meu_fnc_getAllGear;
	//hint str _activeGear;
	_loListbox2 = _display displayCtrl 1501;
	
	//_return = [_meu_headgear,_meu_goggles,_meu_uniform,_meu_uniformitems,_meu_vest,_meu_vestitems,_meu_asgnItems,_meu_backpack,_meu_packitems,_meu_PrimaryGun,_meu_pgunitems,_meu_SecondaryGun,_meu_sgunitems,_meu_handgun,_meu_handgunitems];
	
	_meu_headgear = _activeGear select 0;
	if (_meu_headgear !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_headgear >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_headgear >> "picture")];
			
	};

	_meu_goggles = _activeGear select 1;
	if (_meu_goggles !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_goggles >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_goggles >> "picture")];
			
	};	

	_meu_uniform = _activeGear select 2;
	if (_meu_uniform !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_uniform >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_uniform >> "picture")];
			
	};	
	
	_meu_uniformitems = _activeGear select 3;
	if (count _meu_uniformitems > 0) then
	{
		
		{
			_config = [_x] call meu_fnc_checkConfigClass;
			_index = _loListbox2 lbAdd getText (configFile >> _config >> _x >> "displayname");
			_loListbox2 lbSetPicture [_index, getText (configFile >> _config >> _x >> "picture")];

		} forEach _meu_uniformitems;		
	};


	_meu_vest = _activeGear select 4;
	if (_meu_vest !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_vest >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_vest >> "picture")];
			
	};	

	_meu_vestitems = _activeGear select 5;
	if (count _meu_vestitems > 0) then
	{
		
		{
			_config = [_x] call meu_fnc_checkConfigClass;
			_index = _loListbox2 lbAdd getText (configFile >> _config >> _x >> "displayname");
			_loListbox2 lbSetPicture [_index, getText (configFile >> _config >> _x >> "picture")];

		} forEach _meu_vestitems;		
	};

	_meu_asgnItems = _activeGear select 6;
	if (count _meu_asgnItems > 0) then
	{
		
		{
			_config = [_x] call meu_fnc_checkConfigClass;
			_index = _loListbox2 lbAdd getText (configFile >> _config >> _x >> "displayname");
			_loListbox2 lbSetPicture [_index, getText (configFile >> _config >> _x >> "picture")];

		} forEach _meu_asgnItems;		
	};

	_meu_backpack = _activeGear select 7;
	if (_meu_backpack !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_backpack >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_backpack >> "picture")];
			
	};	

	_meu_packitems = _activeGear select 8;
	if (count _meu_packitems > 0) then
	{
		
		{
			_config = [_x] call meu_fnc_checkConfigClass;
			_index = _loListbox2 lbAdd getText (configFile >> _config >> _x >> "displayname");
			_loListbox2 lbSetPicture [_index, getText (configFile >> _config >> _x >> "picture")];

		} forEach _meu_packitems;		
	};

	_meu_PrimaryGun = _activeGear select 9;
	if (_meu_PrimaryGun !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_PrimaryGun >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_PrimaryGun >> "picture")];
			
	};	

	_meu_pgunitems = _activeGear select 10;
	if (count _meu_pgunitems > 0) then
	{
		
		{
			if (_x != "") then
			{
				_config = [_x] call meu_fnc_checkConfigClass;
				_index = _loListbox2 lbAdd getText (configFile >> _config >> _x >> "displayname");
				_loListbox2 lbSetPicture [_index, getText (configFile >> _config >> _x >> "picture")];
			};
		} forEach _meu_pgunitems;		
	};


	_meu_SecondaryGun = _activeGear select 11;
	if (_meu_SecondaryGun !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_SecondaryGun >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_SecondaryGun >> "picture")];
			
	};	

	_meu_sgunitems = _activeGear select 12;
	if (count _meu_sgunitems > 0) then
	{
		
		{
			if (_x != "") then
			{
				_config = [_x] call meu_fnc_checkConfigClass;
				_index = _loListbox2 lbAdd getText (configFile >> _config >> _x >> "displayname");
				_loListbox2 lbSetPicture [_index, getText (configFile >> _config >> _x >> "picture")];
			};
		} forEach _meu_sgunitems;		
	};

	_meu_handgun = _activeGear select 13;
	if (_meu_handgun !="") then
	{
		
		_index = _loListbox2 lbAdd getText (configFile >> "CfgWeapons" >> _meu_handgun >> "displayname");
		_loListbox2 lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> _meu_handgun >> "picture")];
			
	};	

	_meu_handgunitems = _activeGear select 14;
	if (count _meu_handgunitems > 0) then
	{
		
		{
			if (_x != "") then
			{
				_config = [_x] call meu_fnc_checkConfigClass;
				_index = _loListbox2 lbAdd getText (configFile >> _config >> _x >> "displayname");
				_loListbox2 lbSetPicture [_index, getText (configFile >> _config >> _x >> "picture")];
			};
		} forEach _meu_handgunitems;		
	};	
	

};


meu_fnc_getAllGear = 
{
	private["_return","_meu_headgear","_meu_goggles","_meu_uniform","_meu_uniformitems","_meu_vest","_meu_vestitems","_meu_asgnItems","_meu_backpack","_meu_packitems","_meu_PrimaryGun","_meu_pgunitems","_meu_SecondaryGun","_meu_sgunitems","_meu_handgun","_meu_handgunitems"];
	_return = [];
	
	_meu_headgear = (headgear player);	
	_meu_goggles = (Goggles player);
	_meu_uniform = (uniform player);
	_meu_uniformitems = (uniformItems player);

	_meu_vest = (vest player);
	_meu_vestitems = (vestItems player);

	_meu_asgnItems = (assignedItems player);
	
	_meu_backpack = (backpack player);
	_meu_packitems = (backpackItems player);
	
	_meu_PrimaryGun = (primaryWeapon player);
	_meu_pgunitems = (primaryWeaponItems player);

	_meu_SecondaryGun = (secondaryWeapon player);
	_meu_sgunitems = (secondaryWeaponItems player);	
		
	_meu_handgun = (handgunWeapon player);
	_meu_handgunitems = (handgunItems player);

	_return = [_meu_headgear,_meu_goggles,_meu_uniform,_meu_uniformitems,_meu_vest,_meu_vestitems,_meu_asgnItems,_meu_backpack,_meu_packitems,_meu_PrimaryGun,_meu_pgunitems,_meu_SecondaryGun,_meu_sgunitems,_meu_handgun,_meu_handgunitems];

_return;	
};


meu_fnc_checkConfigClass = 
{
	private["_item","_config"];
	_item = _this select 0;
	_config = "";
	switch (true) do
	{
		case (isClass (configFile >> "CfgMagazines" >> _item)) : {_config = "CfgMagazines";};
		case (isClass (configFile >> "CfgWeapons" >> _item)) : {_config = "CfgWeapons";};
		case (isClass (configFile >> "CfgVehicles" >> _item)) : {_config = "CfgVehicles";};
		case (isClass (configFile >> "CfgGlasses" >> _item)) : {_config = "CfgGlasses";};
	};
	
	_config;
};

meu_fnc_saveLoadout = 
{
	
	private["_gear","_meu_Namespace","_index","_varText","_loadoutArray"];
	_gear = [] call meu_fnc_getAllGear;
	_meu_Namespace = profileNamespace;
	
	_index = lbCurSel 1500;
	_loName = ctrlText 1401;
	_varText = format ["meu_Lo_%1",_index + 1];
	_loadoutArray = _meu_Namespace getVariable [_varText,[]];
	if ((count _loadoutArray) == 0) exitWith {hint "Something went wrong and RSLO cound not save your loadout.";};
	_loadoutArray = [_loName,_gear];
	
	_meu_Namespace setVariable [_varText,_loadoutArray];
	saveProfileNamespace;
	_nop = [] call meu_fnc_LoMgrGuiOnload;
	
	
};

meu_fnc_loadLoadout = 
{
	_meu_Namespace = profileNamespace;
	_index = lbCurSel 1500;
	_varText = format ["meu_Lo_%1",_index + 1];
	_loadoutArray = _meu_Namespace getVariable [_varText,[]];
	
	if ((count _loadoutArray) == 0) exitWith {hint "Something went wrong and RSLO cound not retrive your loadout.";};
	
	_gear = _loadoutArray select 1;
	//_return = [_meu_headgear,_meu_goggles,_meu_uniform,_meu_uniformitems,_meu_vest,_meu_vestitems,_meu_asgnItems,_meu_backpack,_meu_packitems,_meu_PrimaryGun,_meu_pgunitems,_meu_SecondaryGun,_meu_sgunitems,_meu_handgun,_meu_handgunitems];	
	_meu_headgear = _gear select 0;
	_meu_goggles = _gear select 1;
	_meu_uniform = _gear select 2;
	_meu_uniformitems = _gear select 3;
	_meu_vest = _gear select 4;
	_meu_vestitems = _gear select 5;
	_meu_asgnItems = _gear select 6;
	_meu_backpack = _gear select 7;
	_meu_packitems = _gear select 8;
	_meu_PrimaryGun = _gear select 9;
	_meu_pgunitems = _gear select 10;
	_meu_SecondaryGun = _gear select 11;
	_meu_sgunitems = _gear select 12;
	_meu_handgun = _gear select 13;
	_meu_handgunitems = _gear select 14;
	
	_checkedGearBox = [] call meu_fnc_getBoxContentsLoMGR;
	_goggles = ["AV_ESS_blk","AV_ESS_blk_clr","AV_ESS_tan","AV_ESS_tan_clr","AV_ESS_grn","AV_ESS_grn_clr","G_Aviator","G_Shades_Green","G_Shades_Red","G_Shades_Black","G_Shades_Blue","G_Lowprofile","G_Sport_BlackWhite","G_Sport_Blackyellow","G_Sport_Red","G_Sport_Blackred"];
	{
		_checkedGearBox set [count _checkedGearBox,_x];
	} forEach _goggles;
	
	_gearNotAllowed = [];
	removeAllWeapons player;
	removeAllAssignedItems player;
	removeAllItems player;
	removebackpack player;
	removeUniform player;
	removeVest player;
	removeheadgear player;

	//_return = [_meu_headgear,_meu_goggles,_meu_uniform,_meu_uniformitems,_meu_vest,_meu_vestitems,_meu_asgnItems,_meu_backpack,_meu_packitems,_meu_PrimaryGun,_meu_pgunitems,_meu_SecondaryGun,_meu_sgunitems,_meu_handgun,_meu_handgunitems];	
	


	if ( _meu_headgear != "") then 
	{ 
		if (_meu_headgear in _checkedGearBox) then
		{
			removeheadgear player;
			player addheadgear _meu_headgear;
			player assignItem _meu_headgear;
		}else
		{
			_gearNotAllowed set [count _gearNotAllowed, _meu_headgear];
		};
	};	
	
	if ( _meu_goggles != "") then 
	{ 
		if (_meu_goggles in _checkedGearBox) then
		{
			removeGoggles player;
			player addGoggles _meu_goggles;
			player assignItem _meu_goggles;
		}else
		{
			_gearNotAllowed set [count _gearNotAllowed, _meu_goggles];
		};
	};		
	
	if ( _meu_vest != "") then 
	{ 
		if (_meu_vest in _checkedGearBox) then
		{
			removeVest player;
			player AddVest _meu_vest;
		}else
		{
			_gearNotAllowed set [count _gearNotAllowed, _meu_vest];
		};
	};	
	
	if ((count _meu_vestitems) > 0) then
	{
		{

			_class = [_x] call BIS_fnc_classWeapon;
			_parents = [_class,true] call BIS_fnc_returnParents;
			if ("ItemRadio" in _parents) then
			{
				player addItemToVest "ItemRadio";
			}
			else
			{
				if (_x in _checkedGearBox) then
				{
					player addItemToVest _x;
				}else
				{
					_gearNotAllowed set [count _gearNotAllowed, _x];
				};
			};
					
		} forEach _meu_vestitems;
	
	};
	
	
	if ( _meu_uniform != "") then 
	{ 
		if (_meu_uniform in _checkedGearBox) then
		{
			removeUniform player;
			player addUniform _meu_uniform;
		}else
		{
			_gearNotAllowed set [count _gearNotAllowed, _meu_uniform];
		};
	};

	if ((count _meu_uniformitems) > 0) then
	{
		{
			_class = [_x] call BIS_fnc_classWeapon;
			_parents = [_class,true] call BIS_fnc_returnParents;
			if ("ItemRadio" in _parents) then
			{
				player addItemToUniform "ItemRadio";
			}
			else
			{
				if (_x in _checkedGearBox) then
				{
					player addItemToUniform _x;
				}else
				{
					_gearNotAllowed set [count _gearNotAllowed, _x];
				};
			};
						
		} forEach _meu_uniformitems;
	
	};
	
	if (_meu_backpack != "" && _meu_backpack in _checkedGearBox) then 
	{ 

		player addbackpack _meu_backpack;
		//clearAllItemsFromBackpack player;
		//clearMagazineCargoGlobal (unitBackpack player);
		//clearWeaponCargoGlobal (unitBackpack player);
		{
			_config = [_x] call meu_fnc_checkConfigClass;
			

			switch (_config) do
			{
				case "CfgMagazines":
				{
					if (_x in _checkedGearBox) then
					{
						(unitBackpack player) addmagazineCargo [_x,1];
					}else
					{
						_gearNotAllowed set [count _gearNotAllowed, _x];
					};
				};

				case "CfgWeapons":
				{
					_class = [_x] call BIS_fnc_classWeapon;
					_parents = [_class,true] call BIS_fnc_returnParents;
					if ("ItemRadio" in _parents) then
					{
						(unitBackpack player) additemCargo ["ItemRadio",1];

					}else
					{
						if (_x in _checkedGearBox) then
						{					
							(unitBackpack player) additemCargo [_x,1];
						}else
						{
							_gearNotAllowed set [count _gearNotAllowed, _x];
						};						
					};
					
				};
				case "CfgGlasses":
				{
					if (_x in _checkedGearBox) then
					{				
						(unitBackpack player) additemCargo [_x,1];
					}else
					{
						_gearNotAllowed set [count _gearNotAllowed, _x];
					};
				};
				
			};

			
		} forEach _meu_packitems;
		
	};



	if ( _meu_PrimaryGun != "") then 
	{ 
		if (_meu_PrimaryGun in _checkedGearBox) then
		{

			player addWeapon _meu_PrimaryGun;
		}else
		{
			_gearNotAllowed set [count _gearNotAllowed, _meu_PrimaryGun];
		};
	};

	if ((count _meu_pgunitems)>0) then 
	{ 
		{
			if (_x != "" && _x in _checkedGearBox) then
			{
				player addPrimaryWeaponItem _x;
			};
			if ((!(_x in _checkedGearBox)) && _x != "") then {_gearNotAllowed set [count _gearNotAllowed, _x];};
		} forEach _meu_pgunitems;

	};

	if ( _meu_SecondaryGun != "") then 
	{ 
		if (_meu_SecondaryGun in _checkedGearBox) then
		{

			player addWeapon _meu_SecondaryGun;
		}else
		{
			_gearNotAllowed set [count _gearNotAllowed, _meu_SecondaryGun];
		};
	};

	if ((count _meu_sgunitems)>0) then 
	{ 
		{
			if (_x != "" && _x in _checkedGearBox) then
			{
				player addSecondaryWeaponItem _x;
			};
			if (!(_x in _checkedGearBox)) then {_gearNotAllowed set [count _gearNotAllowed, _x];};
		} forEach _meu_sgunitems;

	};	
	
	if ( _meu_handgun != "") then 
	{ 
		if (_meu_handgun in _checkedGearBox) then
		{

			player addWeapon _meu_handgun;
		}else
		{
			_gearNotAllowed set [count _gearNotAllowed, _meu_handgun];
		};
	};	
	
	if ((count _meu_handgunitems)>0) then 
	{ 

		{
			if (_x != "" && _x in _checkedGearBox) then
			{
				player addHandgunItem _x;
			};
			if ((!(_x in _checkedGearBox)) && _x != "") then {_gearNotAllowed set [count _gearNotAllowed, _x];};
		} forEach _meu_handgunitems;	
	
	};	
	
	
// Assigned items	
	if ((count _meu_asgnItems) > 0) then
	{
		{
			if (_x in _checkedGearBox) then
			{
				_class = [_x] call BIS_fnc_classWeapon;
				_parents = [_class,true] call BIS_fnc_returnParents;
				if ("ItemRadio" in _parents) then
				{
					player linkItem "ItemRadio";
				}
				else
				{
					if (_x in _checkedGearBox) then
					{
						_config = [_x] call meu_fnc_checkConfigClass;
						_class=(configfile >> _config >> _x);
						_binocSlotTest = [_class,"optics",0] call BIS_fnc_returnConfigEntry;
						if (_binocSlotTest > 0) then
						{
							player addWeapon _x;
							player assignItem _x;
						}
						else
						{
							player linkItem _x;
						};
					};
					if (!(_x in _checkedGearBox)) then {_gearNotAllowed set [count _gearNotAllowed, _x];};
				};
				player assignItem _x;
			};	
		} forEach _meu_asgnItems;
	
	};	
	
	
	
	_nop = [] call meu_fnc_LoMgrGuiOnload;
	if (count _gearNotAllowed > 0) then
	{
		//hint str _gearNotAllowed;
		_nop = [_gearNotAllowed] call meu_fnc_gearNotAllowedUI;
	};
	
};


meu_fnc_gearNotAllowedUI = 
{
	_gear = _this select 0;
	_text = "The following items were not loaded because they are not in the box: ";
	
	{
		_config = [_x] call meu_fnc_checkConfigClass;
		_name = getText (configFile >> _config >> _x >> "displayname");
		_pic = getText (configFile >> _config >> _x >> "picture");
		_text = composeText [_text, lineBreak, image _pic , _name];
	
	} forEach _gear;
	
	hint _text;

};

meu_fnc_deleteLoadout = 
{
	private["_gear","_meu_Namespace","_index","_varText","_loadoutArray"];
	_meu_Namespace = profileNamespace;
	
	_index = lbCurSel 1500;
	_varText = format ["meu_Lo_%1",_index + 1];
	_loadoutArray = _meu_Namespace getVariable [_varText,[]];
	_loName = format ["Empty Loadout %1",_index + 1];
	_loadoutArray = [_loName,[]];
	
	_meu_Namespace setVariable [_varText,_loadoutArray];
	saveProfileNamespace;
	_nop = [] call meu_fnc_LoMgrGuiOnload;


};



