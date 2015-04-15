// crate init


private ["_crate","_cfg","_folder"];
// params
_crate = _this select 0;

// no damage
_crate allowDamage false;

// config
_cfg = configFile >> "CfgVehicles" >> typeOf _crate;

// manager
if (isNumber (_cfg >> "MEU_MANAGER")) then {
	if (getNumber (_cfg >> "MEU_MANAGER") > 0) then {
			_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"];
	};
};
// folder
if (isText (_cfg >> "MEU_FOLDER")) then {
	_folder = getText (_cfg >> "MEU_FOLDER");
};
// loadouts
if (isArray (_cfg >> "MEU_LOADOUTS")) then {
	private "_array";
	_array = getArray (_cfg >> "MEU_LOADOUTS");
	{
		private ["_name","_file"];
		_name = _x select 0;
		_file = _X select 1;
		_crate addAction [ ("<t color=""#DB3503"">" + _name + "</t>"), (_folder + "\" + _file) ];
	} forEach _array;
};
