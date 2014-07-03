_car = _this select 0;

_car animate ["SYS_satcom", 0];

waitUntil {!alive _car};

_car animate ["SYS_satcom", 1];

waitUntil {!(isNull _car)};

[_car] execVM "ExA_RG31\modules\satcom\sys_satcom_animate.sqf";