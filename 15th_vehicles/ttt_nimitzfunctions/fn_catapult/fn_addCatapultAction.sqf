private ["_plane", "_logic", "_catapult", "_pos", "_name", "_activate",
         "_short", "_catNr", "_jbdInUse"];

_plane = [_this, 0, ObjNull] call BIS_fnc_param;
_logic = [_this, 1, ObjNull] call BIS_fnc_param;
_catapult = [_this, 2, []] call BIS_fnc_param;

_pos = _catapult select 0;
_name = _catapult select 1;
_short = _catapult select 2;
_catNr = _catapult select 3;
_msg = format ["Lower Launch Bar %1", _name] call TTT_fnc_colAct;

// _pos call BIS_fnc_log;
// _name call BIS_fnc_log;
// _msg call BIS_fnc_log;
// format["Adding action to %1", _plane] call BIS_fnc_log;

switch (_catNr) do {
  case 1: {
	_nimCar = ["nimCar2"] call TTT_fnc_global;
 	_jbdInUse = format["(%1) animationPhase ""ani_JBD1A""", _nimCar];
  };
  case 2: {
	_nimCar = ["nimCar2"] call TTT_fnc_global;
 	_jbdInUse = format["(%1) animationPhase ""ani_JBD2A""", _nimCar];
  };
  case 3: {
	_nimCar = ["nimCar3"] call TTT_fnc_global;
 	_jbdInUse = format["(%1) animationPhase ""ani_JBD3A""", _nimCar];
  };
  case 4: {
	_nimCar = ["nimCar4"] call TTT_fnc_global;
 	_jbdInUse = format["(%1) animationPhase ""ani_JBD4A""", _nimCar];
  };
};

_activate = format[
	    // "( %1 == 0) and 
	     "(driver _target == _this) and
	     (_target distance %2 < 10)", _jbdInUse, _pos];

format ["Adding action for catapult %1", _name] call BIS_fnc_log;
_plane addAction [ 
	_msg,
	TTT_fnc_catapultLaunch,
	_catapult,
	0,
	false,
	true,
	"",
        _activate
];
