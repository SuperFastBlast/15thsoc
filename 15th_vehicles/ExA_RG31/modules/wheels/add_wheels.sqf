_caller = _this select 0;

_w1 = "ACE_Spare_Tyre_HDAPC" createVehicle [0,0,100000];
_w2 = "ACE_Spare_Tyre_HDAPC" createVehicle [0,0,100000];

[[_w1, _w2], _caller] call ACE_fnc_loadCargo;

sleep 1;

[_caller] execVM "\ExA_RG31\modules\wheels\wheel_check.sqf";