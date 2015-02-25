private ["_unit","_projectile","_vup1","_vup2","_vel1","_vel2","_velmag","_x1","_y1","_z1","_x2","_y2","_z2","_a","_b","_c","_pzero","_dir1","_nx","_ny","_nr","_nr2"];

_unit = _this select 0;

_projectile = _this select 1;

_posunit = getposASL _unit;

_FlareRange = (_unit getvariable "FlareRange");

	while {!(isNull _projectile)} do
	//while {true} do
	{
		_distance=_posunit distance _projectile;
		if (_distance >_FlareRange) then
		{
			_pos=getposASL _projectile;
			_subammo = createVehicle ["tf47_m3maaws_flare", _pos, [], 0, "CAN_COLLIDE"];
			_subammo setPosASL _pos;
			_subammo setVelocity [0,0,-5];

			_projectile setdamage 1;
			deleteVehicle _projectile;
		};
		sleep 0.002;
	};