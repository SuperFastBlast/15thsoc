///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// FIRED EVENTHANDLER TO CHECK IF TITAN LAUNCHER WAS FIRED AND HANDLE THE MISSILE
///////////////////////////////////////////////////////////////////////////////////////////////////
//waitUntil {sleep 0.1; !isNull player}; // WAIT UNTIL PLAYER IS INITIALIZED
//waitUntil {sleep 0.1; player == player}; // WAIT UNTIL PLAYER IS INITIALIZED
//waitUntil {sleep 0.1; !(isnull findDisplay 46)}; // WAIT UNTIL DISPLAY IS INITIALIZED

if (isNull player) exitWith {false};
player setVariable ["mdh_topDownAttack_missileguidance_evh", true, false];

0 = player addEventHandler
[
	"fired",
	{
		_unit = _this select 0;
		_weapon = _this select 1;
		_muzzle = _this select 2;
		_mode = _this select 3;
		_ammo = _this select 4;
		_magazine = _this select 5;
		_projectile = _this select 6;

		_target = cursortarget;
		_distance = _unit distance _target;

		if
		(
			(!(mdh_topDownAttack_lock_counter < mdh_topDownAttack_lockTime))

			// CHECK WITH FUNCTION FOR VALID TARGET
			///////////////////////////////////////
			&&{[_unit, _target, _weapon] call fnc_mdh_topDownAttack_validTarget}
		)
		then
		{
			if (!isNil "mdh_topDownAttack_debug") then
			{
				[_unit, _magazine] spawn
				{
					_unit = _this select 0;
					_magazine = _this select 1;
					_weap = secondaryWeapon _unit;
					sleep 1;
					_unit removeweapon _weap;
					_unit addmagazine _magazine;
					_unit addWeapon _weap;
					_unit selectWeapon _weap;
				};
			};

			[_unit, _projectile, _target, _distance] spawn
			{
				_unit = _this select 0;
				_projectile = _this select 1;
				_target = _this select 2;
				_distance = _this select 3;

				_checks = (1 / 100); // CHECKS PER SECOND
				_height = ((_distance / 10) - 20);
				if (_height < 10) then {_height = 10};
				if (_height > 130) then {_height = 130};

				if (!isMultiplayer) then
				{
					if (!isNil "mdh_topDownAttack_debug") then
					{
						if (mdh_topDownAttack_debug == 1) then
						{
							setacctime 0.1;
							player exec "camera.sqs";
						};
					};
				};

				// START WITH THE MISSILE HANDLING
				///////////////////////////////////////////////////////////////////////////////////////
				_vectorDir = vectorDir _projectile;
				_pos = getpos _projectile;
				_velocity = velocity _projectile;
				deleteVehicle _projectile;
				_projectile = createVehicle [typeof _projectile, _pos, [], 0, "FLY"];
				_projectile setpos _pos;
				_projectile setVectorDirAndUp [ _vectorDir, [0,0,1] ];
				_projectile setVelocity _velocity;

				// DEBUG STUFF
				//////////////
				if (!isNil "mdh_topDownAttack_debug") then
				{
					if (mdh_topDownAttack_debug == 2) then
					{
						[_projectile] spawn
						{
							_projectile = _this select 0;
							_cam = "camera" camCreate (getposATL _projectile);
							_cam cameraEffect ["External", "Back"];
							setacctime 0.1;
							_time = time;
							waitUntil
							{
								if (isNull _projectile || (time - _time > 10)) exitWith {true};
								_cam camSetTarget _projectile;
								_cam camSetPos [ ((getposATL _projectile select 0)+3) , ((getposATL _projectile select 1)-3) , ((getposATL _projectile select 2)+3) ];
								_cam camCommit 0;
							};
							sleep 0.5;
							_cam cameraEffect ["Terminate", "Back"];
							camDestroy _cam;
							setacctime 1;
						};
					};
				};

				// FUNCTION FOR THE MISSILETURN TO AVOID UNREALISTIC TURNS
				///////////////////////////////////////////////////////////////////////////////////////
				_fnc_mdh_topDownAttack_missileguidance_turn =
				{
					_projectile = _this select 0;
					_vectorNew = _this select 1;
					_tolerance = _this select 2;
					_vectorOld = vectorDir _projectile;

					// FIRST SETNEWVECTOR TO GET CORRECT VECTOR VALUES TO WORK WITH
					///////////////////////////////////////////////////////////////////////////////////////
					_projectile setVectorDirAndUp [ [ (_vectorNew select 0), (_vectorNew select 1), (_vectorNew select 2) ] , [0,0,1] ];
					_vectorNew = vectorDir _projectile;

					_vectorOldX = _vectorOld select 0;
					_vectorOldY = _vectorOld select 1;
					_vectorOldZ = _vectorOld select 2;

					_vectorNewX = _vectorNew select 0;
					_vectorNewY = _vectorNew select 1;
					_vectorNewZ = _vectorNew select 2;

					// SET VECTOR NEW CORRECT VECTOR WITH TOLERANCE
					///////////////////////////////////////////////////////////////////////////////////////
					if (_vectorNewX > _vectorOldX + _tolerance) then {_vectorNewX = _vectorOldX + _tolerance};
					if (_vectorNewX < _vectorOldX - _tolerance) then {_vectorNewX = _vectorOldX - _tolerance};

					if (_vectorNewY > _vectorOldY + _tolerance) then {_vectorNewY = _vectorOldY + _tolerance};
					if (_vectorNewY < _vectorOldY - _tolerance) then {_vectorNewY = _vectorOldY - _tolerance};

					if (_vectorNewZ > _vectorOldZ + _tolerance) then {_vectorNewZ = _vectorOldZ + _tolerance};
					if (_vectorNewZ < _vectorOldZ - _tolerance) then {_vectorNewZ = _vectorOldZ - _tolerance};

					[_vectorNewX, _vectorNewY, _vectorNewZ]
				};
				
				// STORE ACTUAL VECTOR
				///////////////////////////////////////////////////////////////////////////////////////
				_vectorDir = vectorDir _projectile;

				if (!isMultiplayer) then
				{
					if (!isNil "mdh_topDownAttack_debug") then
					{
						[_projectile] spawn {_projectile = _this select 0; while{alive _projectile}do{player globalChat ((str(round (getposATL _projectile select 2))) + " " + (str (round (speed _projectile))) + " " + (mdh_topDownAttack_debug_pos) + " " + (str mdh_topDownAttack_debug_vec) ); sleep 0.1}};
					};
				};

				// WHEN TOP DOWN FIRE MODE ACTIVATED SET LAUNCH AND FLIGHT VECTOR FOR MISSILE
				/////////////////////////////////////////////////////////////////////////////
				_mdh_topDownAttack_firemode_activated = mdh_topDownAttack_firemode_activated;
				if (mdh_topDownAttack_firemode_activated) then
				{
					mdh_topDownAttack_debug_pos = "Pos1";
					
					// WHILE MISSILE HEIGHT LOWER THEN _HEIGHT SET IT TO A LAUNCH VECTOR
					////////////////////////////////////////////////////////////////////
					while { ((getposASL _projectile select 2) < ((getposASL _target select 2) + _height)) && {(_projectile distance _target) > 30} } do
					{
						_vectorNew =
						[
							(_vectorDir select 0),
							(_vectorDir select 1),
							2
						];

						_projectile setVectorDirAndUp [ ([_projectile, _vectorNew, _checks] call _fnc_mdh_topDownAttack_missileguidance_turn), [0,0,1] ];
						sleep _checks;
					};

					mdh_topDownAttack_debug_pos = "Pos2";

					// SET MISSILE VECTOR TO STAY AT FLIGHTHEIGHT UNTIL MISSILE IS NEAR TARGET
					//////////////////////////////////////////////////////////////////////////
					while {_projectile distance _target > (((getposASL _projectile select 2)-(getposASL _target select 2))*1.4)} do
					{
						_vectorNew =
						[
							( ((getposASL _target select 0) + ((velocity _target select 0)/2)) - (getposASL _projectile select 0) ),
							( ((getposASL _target select 1) + ((velocity _target select 1)/2)) - (getposASL _projectile select 1) ),
							0
						];

						//_projectile setVectorDirAndUp [ _vectorNew , [0,0,1] ];
						_projectile setVectorDirAndUp [ ([_projectile, _vectorNew, _checks] call _fnc_mdh_topDownAttack_missileguidance_turn), [0,0,1] ];
						sleep _checks;
					};
				}
				else
				{
					// FUNCTION FOR MISSILEGUIDANCE TO KEEP THE RIGHT HEIGHT
					////////////////////////////////////////////////////////
					_fnc_mdh_topDownAttack_missileguidance_height =
					{
						_projectile = _this select 0;
						_target = _this select 1;
						_distance = _projectile distance _target;
						_heightPatl = getposATL _projectile select 2;
						_heightTatl = getposATL _target select 2;
						_heightPasl = getposASL _projectile select 2;
						_heightTasl = getposASL _target select 2;
						_vec = 0;
						_vec2 = 0;

						// CHECK MISSILEHEIGHT TO AVOID GROUND IMPACT
						////////////////////////////////////////////////////////
						if (!(_heightPatl > 5)) then
						{
							if (_heightPatl < 5.00) then {_vec = 0.01};
							if (_heightPatl < 4.75) then {_vec = 0.02};
							if (_heightPatl < 4.50) then {_vec = 0.03};
							if (_heightPatl < 4.25) then {_vec = 0.04};
							if (_heightPatl < 4.00) then {_vec = 0.05};
							if (_heightPatl < 3.75) then {_vec = 0.06};
							if (_heightPatl < 3.50) then {_vec = 0.07};
							if (_heightPatl < 3.25) then {_vec = 0.08};
							if (_heightPatl < 3.00) then {_vec = 0.09};
							if (_heightPatl < 2.75) then {_vec = 0.10};
							if (_heightPatl < 2.50) then {_vec = 0.11};
							if (_heightPatl < 2.25) then {_vec = 0.12};
							if (_heightPatl < 2.00) then {_vec = 0.13};
							if (_heightPatl < 1.75) then {_vec = 0.14};
							if (_heightPatl < 1.50) then {_vec = 0.15};
							if (_heightPatl < 1.25) then {_vec = 0.16};
							if (_heightPatl < 1.00) then {_vec = 0.17};
							if (_heightPatl < 0.75) then {_vec = 0.18};
							if (_heightPatl < 0.50) then {_vec = 0.19};
							if (_heightPatl < 0.25) then {_vec = 0.20};
						};

						// CHECK IF TARGET IS AT A HIGHER LEVEL AS THE
						// MISSILE AND LET THE MISSILE CLIMB TO THE SAME LEVEL
						//////////////////////////////////////////////////////
						_hn = ((_heightTasl - _heightPasl)*2);
						_vec2 = (_hn / _distance);

						if (_vec2 > _vec || _vec == 0) then {_vec = _vec2};

						_vec
					};

					mdh_topDownAttack_debug_pos = "Pos3";

					// SET MISSILE VECTOR TO FLY DIRECT AT THE TARGET
					/////////////////////////////////////////////////
					while {_projectile distance _target > 30} do
					{
						_vectorNew =
						[
							( ((getposASL _target select 0) + ((velocity _target select 0)/2)) - (getposASL _projectile select 0) ),
							( ((getposASL _target select 1) + ((velocity _target select 1)/2)) - (getposASL _projectile select 1) ),
							0
						];

						_projectile setVectorDirAndUp [ ([_projectile, _vectorNew, _checks] call _fnc_mdh_topDownAttack_missileguidance_turn), [0,0,1] ];

						//_projectile setVectorDirAndUp [ [vectorDir _projectile select 0, vectorDir _projectile select 1, ( [_projectile, _target] call _fnc_mdh_topDownAttack_missileguidance_height )], [0,0,1] ];

						_vectorNew = [vectorDir _projectile select 0, vectorDir _projectile select 1, ( [_projectile, _target] call _fnc_mdh_topDownAttack_missileguidance_height )];
						_projectile setVectorDirAndUp [ ([_projectile, _vectorNew, (_checks*10)] call _fnc_mdh_topDownAttack_missileguidance_turn), [0,0,1] ];

						mdh_topDownAttack_debug_vec = ((round((vectorDir _projectile select 2)*100))/100);
						sleep _checks;
					};
				};

				mdh_topDownAttack_debug_pos = "Pos4";

				// SET MISSILE VECTOR AND VELOCITY FOR TOP DOWN / DIRECT ATTACK
				///////////////////////////////////////////////////////////////
				_boost = true;
				_targetDamgeBefore = damage _target;
				while { _projectile distance _target > 5 && {alive _projectile} } do
				{
					_vectorNew =
					[
						((getposASL _target select 0) - (getposASL _projectile select 0)),
						((getposASL _target select 1) - (getposASL _projectile select 1)),
						(((getposASL _target select 2)+ 1) - (getposASL _projectile select 2))
					];

					_projectile setVectorDirAndUp [ _vectorNew , [0,0,1] ];
					if (_boost) then
					{
						_velXsign = 0;
						_velYsign = 0;
						_velZsign = 0;

						_velX = vectorDir _projectile select 0; if (_velX < 0) then {_velX = _velX * -1; _velXsign = 1};
						_velY = vectorDir _projectile select 1; if (_velY < 0) then {_velY = _velY * -1; _velYsign = 1};
						_velZ = vectorDir _projectile select 2; if (_velZ < 0) then {_velZ = _velZ * -1; _velZsign = 1};

						_velG = _velX + _velY + _velZ;
						_velGold = _velX + _velY + _velZ;
						_counter = 0;

						while {_velG < 4} do
						{
							_velG = _velG + _velGold;
							_counter = _counter + 1;
						};

						_projectile setVelocity [ ((vectorDir _projectile select 0) * _counter * 100) , ((vectorDir _projectile select 1) * _counter * 100) , ((vectorDir _projectile select 2) * _counter * 100) ];
					};
					sleep _checks;
				};

				mdh_topDownAttack_debug_pos = "Pos5";
				_targetDamgeBefore2 = damage _target;

				// SET EXTRA TARGET DAMAGE IF TOPDOWNMODE ACTIVATED
				///////////////////////////////////////////////////////////////
				//if (_mdh_topDownAttack_firemode_activated) then
				if (false) then
				{
					waitUntil {sleep _checks; (_projectile distance _target > 5) || !(alive _projectile) };
					sleep 0.1;
					if ( (!(alive _projectile)) && {alive _target} && {damage _target < 1} ) then
					{
						_targetDamgeCalc = _targetDamgeBefore2;
						_targetDamgeAfter = damage _target;
						if (_targetDamgeAfter == _targetDamgeBefore2) then {_targetDamgeCalc = _targetDamgeBefore};
						_targetDamageFinal = (_targetDamgeAfter - _targetDamgeCalc) * 2;
						_targetDamageFinal = _targetDamageFinal + _targetDamgeCalc;
						_target setDamage _targetDamageFinal;

						if (!isNil "mdh_topDownAttack_debug") then
						{
							player globalChat ("Before1: " + (str _targetDamgeBefore));
							player globalChat ("Before2: " + (str _targetDamgeBefore2));
							player globalChat ("After  : " + (str _targetDamgeAfter));
							player globalChat ("Final1 : " + (str((_targetDamgeAfter - _targetDamgeCalc) * 2)));
							player globalChat ("Final2 : " + (str _targetDamageFinal));
							player globalChat ("Damage : " + (str damage _target));
						};
					};
				};
			};
		};
	}
];