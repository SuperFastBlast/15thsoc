private ["_unit", "_pos", "_msg", "_nimCar3"];

_nimCar3 = ["nimCar3"] call TTT_fnc_global;

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_type = [_this, 1, "B_Boat_Transport_01_F"] call BIS_fnc_param;

_pos = _nimCar3 modelToWorld(_nimCar3 selectionPosition "boatButton");

_msg = "Request Boat" call TTT_fnc_colAct;

format["Adding action to %1", _unit] call BIS_fnc_log;
_activate = format[
	    "!(%2 getVariable ""DavitInUse"") and
             (%2 animationPhase ""ani_trolley"" == 0) and 
             (_target distance %1 < 5)", _pos, "[""nimCar3""] call TTT_fnc_global"];

_unit addAction [ 
	_msg,
	TTT_fnc_spawnBoat,
	_type,
	0,
	false,
	true,
	"",
        _activate
];
