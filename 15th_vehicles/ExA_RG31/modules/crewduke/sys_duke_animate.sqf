_car = _this select 0;

_car animate ["SYS_crewduke", 0];

waitUntil {!alive _car};

_car animate ["SYS_crewduke", 1];

waitUntil {!(isNull _car)};

[_car] execVM "ExA_RG31\modules\crewduke\sys_duke_animate.sqf";