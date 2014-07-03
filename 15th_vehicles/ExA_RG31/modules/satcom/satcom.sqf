_log = _this select 0;

_cars = synchronizedObjects _log;

{[vehicle _x] execVM "ExA_RG31\modules\satcom\sys_satcom_animate.sqf"} forEach _cars;