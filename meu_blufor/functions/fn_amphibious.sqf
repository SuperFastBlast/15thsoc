/*
fn_aphibious
fight9

scripted movement for tracked amphibious vehicles

//id = findDisplay 46 displayAddEventHandler ["KeyUp", { systemChat (str _this) }];
//id = findDisplay 46 displayAddEventHandler ["KeyDown", { systemChat (str _this) }];
*/

// params
private ["_unit","_veh"];
_veh = _this;
_unit = player;

// checks
if (_unit != driver _veh) exitWith {false};

// animate
_veh animate ["plate_front", 1];
_veh animate ["turbine_cover_right", 1];
_veh animate ["turbine_cover_left", 1];
_veh vehicleChat "Amphibious Drive Engaged";
_veh setVariable ["meu_fnc_amphibious_engaged",true];

// key handler fnc
meu_fnc_amphibious_key_handler = {
	private ["_veh","_pressed"];
	// params
	_veh = _this select 0;
	_pressed = _this select 1;
	
	// checks
	if (player != driver _veh) exitWith {false};
	if ( !(surfaceIsWater position _veh) || !((position _veh select 2) < -0.4) ) exitWith {false};
	
	// get key codes	
	private ["_dir","_speed","_vel","_fnc_setVel","_fnc_rotate"];
	_dir = direction _veh;
	_speed = speed _veh;
	_vel = velocity _veh;
	
	// fncs for movement
	_fnc_setVel = {
		if (abs _speed < 20) then {
			_veh setVelocity  [ 
				(_vel select 0) + (sin _dir * _this),
				(_vel select 1) + (cos _dir * _this),
				0
			];
		};
		true
	};
	_fnc_rotate = {
		private ["_nVel","_nDir"];
		_nVel = [_vel,_this] call BIS_fnc_rotateVector2D;
		_nDir = [vectorDir _veh,_this] call BIS_fnc_rotateVector2D;
		_veh setVectorDir _nDir;
		_veh setVelocity _nVel;
		true
	};
	
	// handle pressed key
	private ["_key"];
	_key = call {
		if (_pressed in actionKeys "carFastForward") exitWith { 1 call _fnc_setVel };
		if (_pressed in actionKeys "carForward") exitWith { 0.02 call _fnc_setVel };
		if (_pressed in actionKeys "carBack") exitWith { -0.02 call _fnc_setVel };
		if (_pressed in actionKeys "carLeft") exitWith { 0.2 call _fnc_rotate };
		if (_pressed in actionKeys "carRight") exitWith { -0.2 call _fnc_rotate };
		""
	};	
	
	false // return false to allow default key control
};

// add DEH and action to remove
private ["_id","_remove","_rCode"];
_id = findDisplay 46 displayAddEventHandler ["KeyDown",{ [vehicle player,_this select 1] call meu_fnc_amphibious_key_handler; }];

_rCode = format ["
	findDisplay 46 displayRemoveEventHandler [""keyDown"",%1];
	(vehicle player) animate [""plate_front"", 0];
	(vehicle player) animate [""turbine_cover_right"", 0];
	(vehicle player) animate [""turbine_cover_left"", 0];
	(vehicle player) vehicleChat ""Amphibious Drive Disengaged"";
	(vehicle player) setVariable [""meu_fnc_amphibious_engaged"",false];
	",
	_id
];

_remove = player addAction [
	"<t color='#ff0000'>Disable Amphibious Drive",
	{
		call compile (_this select 3 select 0);
		player removeAction (_this select 2);
	},
	[_rCode],
	6,
	false,
	true,
	"",
	(format ["player == driver %1",(_veh call BIS_fnc_objectVar)])
];

// TODO: spawn wait until check if player exits veh/ getout EH