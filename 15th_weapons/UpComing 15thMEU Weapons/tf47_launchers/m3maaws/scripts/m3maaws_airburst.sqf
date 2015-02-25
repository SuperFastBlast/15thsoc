private ["_unit","_projectile","_vup1","_vup2","_vel1","_vel2","_velmag","_x1","_y1","_z1","_x2","_y2","_z2","_a","_b","_c","_pzero","_dir1","_nx","_ny","_nr","_nr2"];

_unit = _this select 0;

_projectile = _this select 1;

_posunit = getposASL _unit;

_AirburstRange = parseNumber (_unit getvariable "AirburstRange");
if (_AirburstRange <50) then {_AirburstRange = 99999;};
if (_AirburstRange >1500) then {_AirburstRange = 999999;};

	while {!(isNull _projectile)} do
	//while {true} do
	{
		_distance=_posunit distance _projectile;
		if (_distance >_AirburstRange) then
		{
			_pos=getposASL _projectile;
			_subammo = createVehicle ["tf47_m3maaws_HEAirburst", _pos, [], 0, "CAN_COLLIDE"];
			_subammo setPosASL _pos;


			_projectile setdamage 1;
			deleteVehicle _projectile;
		};
		sleep 0.002;
	};