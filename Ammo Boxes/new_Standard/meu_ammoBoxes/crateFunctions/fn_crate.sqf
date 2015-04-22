/* 
fn_crate
grab meu crate config data and apply it
fight9 

params:
_this: object - the crate
*/

#include "\meu_ammoBoxes\script_macros.hpp"

private ["_crate","_cfg"];
// params
_crate = [_this,0,objNull,[[],objNull]] call BIS_fnc_param;

// check
if (isNull _crate) exitWith {false};

// damage
_crate allowDamage false;

// config
_cfg = configFile >> "CfgVehicles" >> typeOf _crate;

// manager
if (isNumber (_cfg >> "MEU_MANAGER")) then {
	if (getNumber (_cfg >> "MEU_MANAGER") > 0) then {
			//_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"];
			_LOM = ["init",[_crate]] call meu_fnc_manager;
	};
};

// loadouts
if (isArray (_cfg >> "MEU_LOADOUTS")) then {
	private "_array";
	_array = getArray (_cfg >> "MEU_LOADOUTS");
	{
		_crate addAction [ ("<t color=""#DB3503"">" + (_x select 0) + "</t>"), MEU_ADDON_ROOT + (_x select 1) ];
	} forEach _array;
};

true