private ["_unit", "_action", "_type", "_pos", "_boat", "_msg", "_activate", "_nimCar3", "_nimspots"];

_nimspots = ["nimspots"] call TTT_fnc_global;
_nimCar3 = ["nimCar3"] call TTT_fnc_global;

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_action = [_this, 2, -1] call BIS_fnc_param;
_type = [_this, 3, ObjNull] call BIS_fnc_param;

_pos = _nimCar3 modelToWorld(_nimCar3 selectionPosition "boatSpawn");
if (_nimCar3 getVariable "DavitInUse") exitWith {};
_nimCar3 setVariable ["DavitInUse", true, true];

_boat = _type createVehicle _pos;
_boat setPosASL _pos;
_boat attachTo [_nimspots];

_msg = "Launch boat" call TTT_fnc_colAct;
_activate = format["_target distance %1 < 10", _pos];

_unit addAction [
	_msg,
	TTT_fnc_launchBoat,
	_boat,
	0,
	false,
	true,
	"",
        _activate
];
true
