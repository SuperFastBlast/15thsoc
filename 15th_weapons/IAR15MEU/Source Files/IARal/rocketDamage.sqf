// Helper macros for getting bearings between two vectors
#define DELTA_x(V1, V2) ((V1 select(0)) - (V2 select(0)))
#define DELTA_y(V1, V2) ((V1 select(1)) - (V2 select(1)))
#define ANGLE_xy(V1, V2) DELTA_x(V1, V2) atan2 DELTA_y(V1, V2)

/*
General init for the tracer function
*/
player addAction["RocketDamage: Enable", { [player] call revo_attach; } ];
player addAction["RocketDamage: Disable", { [player] call revo_deattach; } ];

revo_attach = {
	_units = allUnits;
	
	hint "RocketDamage enabled";
	
	for [{_i = 0},{_i < (count _units)},{_i = _i +1}] do
	{
		(_units select _i) addEventHandler ["firedNear", {
			private ["_firer", "_unit"];
			_distance = _this select 2;
			_unit = _this select 0;
			_firer = _this select 1;
			
			if( _distance <= 25 && player != _unit ) then
			{
				[ _unit, _firer ] call revo_test;
			};
		}];
	};
};

revo_deattach = {
	_units = allUnits;
	
	hint "RocketDamage disabled";
	
	for [{_i = 0},{_i < (count _units)},{_i = _i +1}] do
	{
		(_units select _i) removeAllEventHandlers "firedNear";
	};
};

revo_test = {
	private ["_firer", "_unit"];
	
	_unit = _this select 0;
	_firer = _this select 1;

	_vecOrigin = positionCameraToWorld [0,0,0];
    _vecZ = positionCameraToWorld [0,0,1];

	_dir = _firer weaponDirection (currentWeapon _firer);
	_weaponDirection = (_dir select 0) atan2 (_dir select 1);
	if (_weaponDirection < 0) then
	{
		_weaponDirection = _weaponDirection + 360;
	};
	_elevation = acos (_dir select 2);
	
	private ["_playerPos", "_unitPos", "_distance", "_bearingTo", "_offset", "_mapPos"];
	_playerPos = getPosATL( _firer );
	
	//_units = nearestObjects [(position _firer), ["Man"], 25];
	//_unit = (_units select 1);
	
	if( alive _unit ) then 
	{
		_unitPos = getPosATL(_unit);
		// Ignore height
		_unitPos set [2, 0];
		
		_distance = _unitPos distance _playerPos;
		_bearingTo = abs(ANGLE_xy(_unitPos, _playerPos) - _weaponDirection);
		
		_spread = 15;
		
		_unitPosition = "";
		if( _bearingTo > 180 - _spread && _bearingTo < 180 + _spread ) then { _unitPosition = "behind"; };
		if( _bearingTo > 0 - _spread && _bearingTo < 0 + _spread ) then { _unitPosition = "infront"; };
		
		_damage = getDammage _unit;
		
		switch ( _unitPosition ) do
		{
			case "infront":
			{
				if( _distance < 10 ) then {
					_unit setDamage _damage + (1*((10 - _distance) / 10));
					player sideChat str (1*((10 - _distance) / 10)) + ", player would be hurt";
				};
			};
			case "behind":
			{
				_unit setDamage _damage + (2*((25 - _distance) / 25));
				player sideChat str (2*((25 - _distance) / 25)) + ", player would be hurt";
			};
		};
		
		if( _unitPosition != "" ) then 
		{
			_damage = getDammage _unit;
		
			switch ( true ) do
			{
				case ( _damage > 0.4 ):
				{
					_yell = "P1_hit_05";  
					_yellsound = format ["a3\sounds_f\characters\human-sfx\person1\%1.wss",_yell];  
					playSound3D [_yellsound,_unit,false,getposasl _unit,10,1,100];
				
					_unit playActionNow "Die";
					_unit playActionNow "agonyStart";
					_unit playAction "agonyStop";
					_unit playAction "Lying";
				};
				case ( _damage > 0.1 ):
				{
					_yell = "P1_hit_01";  
					_yellsound = format ["a3\sounds_f\characters\human-sfx\person1\%1.wss",_yell];  
					playSound3D [_yellsound,_unit,false,getposasl _unit,10,1,50];
				
					_unit playActionNow "PlayerCrouch";
				};
			};
		};
	};
};

// slammer straight shoot... put into init box of tank in mission editor
/* this addEventHandler ["fired", {
	[_this, (position(_this select 6))] spawn {
		private["_params"];
		_params     = _this select 0;
		_bullet     = _params select 6;
		_b 			= getPos _bullet;
		_fixBullet 	= [(_b select 0), (_b select 1)-0.5, (_b select 2)+0.8];
		_bullet setPos _fixBullet;
	};
}]; */