_car = _this select 0;

_car animate ["SYS_boomerang", 0];

waitUntil {!alive _car};

_car animate ["SYS_boomerang", 1];

[_car] execVM "ExA_RG31\modules\boomerang\sys_boomerang_animate.sqf";