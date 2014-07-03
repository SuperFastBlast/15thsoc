/* 
meu_fnc_vehicleLoadout
by Fight9

Adds a predefined loadout or custom one to vehicle.

_this select 0: Object or player (wont work on non-vehicles)
_this select 1: Number/Array - 
					0/[] - No loadout
					1 - Infantry
					2 - weapons
					3 - Bas
					[["classname",count],["FirstAidKit",5]] - Array of arrays containing classname and quantity 
_this select 2: bool - Optional - true to clear initial cargo, false to keep - default false

examples: 
	_null = [this,1,true] call meu_fnc_vehicleLoadout; // rifleman loadout w/ clear cargo
	_null = [victor1,3] call meu_fnc_vehicleLoadout; // bas loadout with initial gear left
	
	_loadout = [["FirstAidKit",5,["SmokeShell",10],["ItemRadio",2,["Chemlight_green",5]]; // array of arrays with classname and quantity
	_null = [vehicleName,_loadout,true] call meu_fnc_vehicleLoadout; // new loadout sent to and added to vehicle


*/
#define preProc(A) call compile preprocessFileLineNumbers ("\meu_ammoBoxes\vehicle\loadouts\"+ A)

private ["_logic","_objs","_null","_clear","_selection","_victor","_item","_count","_type"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (_logic isKindOf "meu_ModuleVicLO") then {
	_objs = [_this,1,[],[[]]] call BIS_fnc_param;
	_selection = _logic getVariable ["loadout",0];
	_clearing = _logic getVariable ["clear",0];
	_clear = if (_clearing == 1) then {true} else {false};
} else {
	_objs = [_logic];	
	_selection = [_this,1,0,[0,[]]] call BIS_fnc_param;
	_clear = [_this,2,false,[false]] call BIS_fnc_param;
	if ((_objs select 0) isKindOf "Man") then {_objs = [vehicle (_objs select 0)]};
};

_gear = [];
if (typeName _selection == typeName 0) then {
	_gear = switch (_selection) do {
		case 0: { []; };
		case 1: { preProc("infantry.sqf"); };
		case 2: { preProc("weapons.sqf"); };
		case 3: { preProc("bas.sqf"); };
		default { []; };
	};
} else {
	if (typeName _selection == typeName []) then {
		_gear = _selection;
	} else {
		diag_log "meu_fnc_vicLO: wrong data type sent. Must be number selection or array";
	};			
};

if (_gear != [] && count (_gear select 0) != 2) exitWith {diag_log "meu_fnc_vicLO: Wrong array type sent. Must be [[class,count],[class,count]]"};	

{
	if (_x in vehicles) then {
	
		_victor = _x;
		if (_clear) then {
			clearItemCargoGlobal _victor;
			clearMagazineCargoGlobal _victor;
			clearBackpackCargoGlobal _victor;
			clearWeaponCargoGlobal _victor;
		};
	
		{
			_item = _x select 0;
			_count = _x select 1;
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
		
		
		
	} else {
		diag_log format ["Vehicle Loadout: Object is not a vehicle: %1",_x];
	};
} foreach _objs;

diag_log format ["Vehicle Loadout Initialized on: %1",_objs];

true;
