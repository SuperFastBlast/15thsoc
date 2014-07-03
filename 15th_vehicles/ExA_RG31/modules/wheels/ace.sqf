_log = _this select 0;
_cars = synchronizedObjects _log;

{[vehicle _x] execVM "ExA_RG31\modules\wheels\add_wheels.sqf"} forEach _cars;


