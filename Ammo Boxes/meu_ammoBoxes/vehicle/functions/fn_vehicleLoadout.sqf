// updated fn_vehicleLoadout
// fight9

private ["_units","_gear","_clear","_note"];

// params
_unit = [_this,0,objNull,[objNull,[]]] call BIS_fnc_param;
_gear = [_this,1,[],[[],""]] call BIS_fnc_param;
_clear = [_this,2,false,[false]] call BIS_fnc_param;
_note = [_this,3,false,[false]] call BIS_fnc_param;

// if unit is array, self call for each
if (typeName _unit == typeName []) exitWith {
	{
		private "_run";
		_run = [_x,_gear,_clear,_note] spawn meu_fnc_vehicleLoadout;
	} forEach _unit;
	true
};

// if man unit, get vehicle instead
if (_unit isKindOf "Man") then {_unit = vehicle _unit;};

// if not a vehicle, exit
if !(_unit in vehicles) exitWith {
	["Unit is not a vehicle: %1",_unit] call BIS_fnc_logFormat;
	false
};

// if string was sent, call compile preprocess it
if (typeName _gear == typeName "string") then {
	_gear = call compile preprocessFileLineNumbers _gear;
};

if _clear then {
	clearItemCargoGlobal _unit;
	clearMagazineCargoGlobal _unit;
	clearBackpackCargoGlobal _unit;
	clearWeaponCargoGlobal _unit;	
};

// add gear based on type
{
	private ["_item","_count"];
	if (typeName _x == typeName []) then { // if array
		_item = [_x,0,"",[""]] call BIS_fnc_param;
		_count = [_x,1,1,[0]] call BIS_fnc_param;
	} else {
		if (typeName _x == typeName "") then { // if classname
			_item = _x;
			_count = 1;
		};
	};
	if !(isNil "_item") then {
		private ["_group","_class","_type"];;
		_type = _item call BIS_fnc_itemType; // returns ["group","class"]
		_group = toLower (_type select 0);
		_class = toLower (_type select 1);
		if (_group == "weapon") exitWith { _unit addWeaponCargoGlobal [_item,_count]; }; 
		if (_group in ["magazine","mine"]) exitWith { _unit addMagazineCargoGlobal [_item,_count]; }; 
		if (_group in ["equipment","item"]) exitWith {
			if (_class == "backpack") exitWith { _unit addBackpackCargoGlobal [_item,_count]; };
			_unit addItemCargoGlobal [_item,_count];
		};
	};
} forEach _gear;


if _note then {
	private ["_startText","_cfgVeh","_picture","_name","_text"];
	
	// get text based on usage
	_startText = call {
		if (count _gear > 0) exitWith {"New Gear Added To"};
		if (_clear) exitWith {"Cargo Cleared From"};
		if true exitWith {""};
	};
	
	if (_startText != "") then {
		//_cfgVeh = configFile >> "cfgVehicles" >> (typeOf _unit);
		
		_picture = (getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "picture")) call bis_fnc_textureVehicleIcon;;
		_name = getText (configFile >> "cfgVehicles" >> (typeOf _unit) >> "displayName");
		_text = _startText + " " + _name;
		["meu_vicCrates",[_picture,_text]] call bis_fnc_showNotification;
	};
};

true
