/* 
meu_fnc_vehicleLoadout
by Fight9

Adds a predefined loadout or custom one to vehicle. 
designed for use by 15th Ammo, 15th 3M, and via script

can be called from any machine but advised to keep on server

_this select 0: Object or player (vehicle only)
_this select 1: Number/Array - 
					0/[] - No loadout
					1 - Rifle
					2 - Weapons
					3 - Assault
					4 - BAS
					5 - Marauder
					[["classname",count],["FirstAidKit",5]] - Array of arrays containing classname and quantity 
_this select 2: bool - Optional - true to clear initial cargo, false to keep - default false
_this select 3: bool - Optional - true to display notification - default false

examples: 
	_null = [this,1,true,true] call meu_fnc_vehicleLoadout; // rifle loadout w/ clear cargo
	_null = [victor1,3] call meu_fnc_vehicleLoadout; // assault loadout with initial gear left
	_null = [car1,0,true] call meu_fnc_vehicleLoadout; // clear cargo but add nothing
	
	_loadout = [["FirstAidKit",5],["SmokeShell",10],["ItemRadio",2],["Chemlight_green",5]]; // array of arrays with classname and quantity
	_null = [vehicleName,_loadout,true,false] call meu_fnc_vehicleLoadout; // new loadout sent to and added to vehicle
*/

// TODO:
// allow array for _objs script side
// replace foreach _objs with self call to server

#define preProc(A) call compile preprocessFileLineNumbers ("\meu_ammoBoxes\vehicle\loadouts\" + A)

private ["_logic","_objs","_clear","_selection","_victor","_item","_count","_type","_note","_text","_cfgVeh","_picture","_again","_startText","_diag"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (_logic isKindOf "meu_ModuleVicLO") then {
	_objs = [_this,1,[],[[]]] call BIS_fnc_param;
	_selection = _logic getVariable ["loadout",0];
	_clearing = _logic getVariable ["clear",0];
	_clear = if (_clearing == 1) then {true} else {false};
	_note = false;
} else {
	_objs = [_logic];
	_selection = [_this,1,0,[0,[]]] call BIS_fnc_param;
	_clear = [_this,2,false,[false]] call BIS_fnc_param;
	_note = [_this,3,false,[false]] call BIS_fnc_param;
	if ((_objs select 0) isKindOf "Man") then {_objs = [vehicle (_objs select 0)]};
};
_diag = true;
_gear = [];
if (typeName _selection == typeName 0) then {
	_gear = switch (_selection) do {
		case 0: { []; };
		case 1: { preProc("infantry_rifle.sqf"); };
		case 2: { preProc("infantry_mg.sqf"); }; 
		case 3: { preProc("infantry_assault.sqf"); };
		case 4: { preProc("bas.sqf"); };
		case 5: { preProc("marauder.sqf"); };
		case 6: { []; };
		default { []; };
	};
} else {
	if (typeName _selection == typeName []) then {
		_gear = _selection;
		_selection = -1;
	} else {
		diag_log 'meu_fnc_vehicleLoadout: wrong loadout type sent. Must be selection (0-3) or array [["classname",count],["MediKit",5]]';
	};			
};
if (count _gear > 0 && typeName (_gear select 0) != typeName []) exitWith {
	diag_log 'meu_fnc_vehicleLoadout: Wrong gear array format sent. Must be [["classname",count],["MediKit",5]]';
};	
{
	if (_x in vehicles) then {
		_victor = _x;
		if (_clear) then {
			clearItemCargoGlobal _victor;
			clearMagazineCargoGlobal _victor;
			clearBackpackCargoGlobal _victor;
			clearWeaponCargoGlobal _victor;
		};
		_count = 1;
		{
			_item = _x select 0;
			_count = [_x,1,1,[0]] call BIS_fnc_param;
			_type = _item call BIS_fnc_itemType;
			switch (_type select 0) do {
				case "Weapon": {_victor addWeaponCargoGlobal [_item,_count];};
				case "Item": {_victor addItemCargoGlobal [_item,_count];};
				case "Magazine": {_victor addMagazineCargoGlobal [_item,_count];};
				case "Equipment": {
					switch (_type select 1) do {
						case "Backpack": {_victor addBackpackCargoGlobal [_item,_count];};
						case "Goggles": {};
						default {_victor addItemCargoGlobal [_item,_count];};
					};
				};
				case "Mine": {_victor addMagazineCargoGlobal [_item,_count];};
				case "VehicleWeapon": {};
				default {};
			};		
		} foreach _gear;
		
		if (_note) then {
			if (_selection == 0 && _clear) then {_selection = -2};
			_startText = switch (_selection) do {
				case -2: {"Vehicle Cargo Cleared In"};
				case -1: {"New Loadout Added To"};
				case 0: {""};
				case 1: {"Rifle Loadout Added To"};
				case 2: {"Weapons Loadout Added To"};
				case 3: {"Assault Loadout Added To"};
				case 4: {"Medical Loadout Added To"};
				case 5: {"Marauder Loadout Added To"};
				case 6: {"No Loadout Added To"};
				default {""};
			};

			if (_startText != "") then {
				_cfgVeh = configFile >> "cfgVehicles" >> (typeOf _victor);
				
				_picture = (getText (_cfgVeh >> "picture")) call bis_fnc_textureVehicleIcon;
				_name = (getText (_cfgVeh >> "displayName"));
				_text = format ["%1 %2",_startText,_name];
				["meu_vicCrates",[_picture,_text]] call bis_fnc_showNotification;
			};
		};
	} else {
		diag_log format ["meu_fnc_vehicleLoadout: Object is not a vehicle: %1",_x];
		_diag = false;
	};	
} foreach _objs;
if (isServer && _diag) then {
	diag_log format ["meu_fnc_vehicleLoadout: Loadout Initialized on: %1",_objs];
};
true;