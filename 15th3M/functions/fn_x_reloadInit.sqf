

xReload_fnc_hint = {
	private ["_unit"];
	_unit = _this select 0;
	_type = typeOf (vehicle _unit);
	hint composeText [
		image (getText (configfile >> "CfgVehicles" >> _type >> "picture")),
		linebreak,
		format ["Unit: %1",name _unit],
		linebreak,
		format ["Vehicle: %1",getText (configfile >> "CfgVehicles" >> _type >> "displayName")],
		linebreak,
		format ["Fuel: %1",floor ((fuel _unit)*100)],
		linebreak,
		format ["Damage: %1"+"%",100 - (floor ((damage _unit)*100))]
	];
};

private ["_logic","_time","_objs","_xhandle","_actBy"];
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_actBy = _logic getVariable ["actBy","ANY"];
_time = _logic getVariable ["time",2.01];
_objs = synchronizedObjects _logic; 

{
	if (_x isKindOf "EmptyDetector") then {
		_x setTriggerActivation [_actBy,"PRESENT",true];
		_x setTriggerStatements [
			"this && (getPos (thisList select 0) select 2) < 1 && (abs (speed (thislist select 0))) < 0.5 && vehicle (thisList select 0) != player", 
			format ["_xhandle = [(thislist select 0),%1] execVM '15th3M\scripts\x_reload.sqf';",_time], 
			"hintSilent '';"
		];
	}
} foreach _objs;

diag_log format ["x_Reload Module Started On Triggers: %1",_objs];
true;


