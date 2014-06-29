// do the actual launch procedure from a catapult

private ["_pilot", "_plane", "_catapult", "_pos", "_name", "_msg",
	 "_catNr", "_steamFX", "_action", "_catDirections", "_dir",
	 "_catEnd", "_nimspots", "_msg"];

_nimspots = ["nimspots"] call TTT_fnc_global;

_catDirections = [nil, 355, 358.3, 355.3, 0.2];

// unclear why this is vehicle, should be the target?
_plane = vehicle ([_this, 0, ObjNull] call BIS_fnc_param);
_pilot = [_this, 1, ObjNull] call BIS_fnc_param;
_action = [_this, 2, -1] call BIS_fnc_param;
_catapult = [_this, 3, []] call BIS_fnc_param;

format ["Activating catapult %1 for %2 in %3", _catapult, _pilot, _plane] call BIS_fnc_log;

_plane removeAction _action;

if (driver _plane != _pilot) exitWith {};

_pos = _catapult select 0;
_name = _catapult select 1;
_short = _catapult select 2;
_catNr = _catapult select 3;

while {(_plane distance _pos > 10) && alive _plane} do {
  _msg = format ["Move closer to %1 (%2)", _name, _plane distance _pos];
  titleText [_msg, "PLAIN DOWN"];
  sleep 1;
};

// this process is a bit weird, but works
// first stop the plane, then set it at the right spot
// next attach it to the Nimitz, so it owns it's coordinate system
// and the player cannot move it
// set it to a fixed direction

_catEnd = format["%1T", _short];
(format ["End of cat: %1", _catEnd]) call BIS_fnc_log;

_plane setVelocity [0,0,0];
// force plane to catapult
[_plane, _short] call TTT_fnc_setObjPos; 
[_plane, _catEnd] call TTT_fnc_setObjDir;
// raise jet blast deflector
[_catNr, 1] spawn TTT_fnc_catapultJbd;

sleep 1;
// hinder player from moving away
_plane attachTo [_nimspots];
_plane setDir (_catDirections select _catNr);

// steam 
switch (_catNr) do {
	case 1: { _nimspots setVariable["nimCat1Use", 1, true]};
	case 2: { _nimspots setVariable["nimCat2Use", 1, true]};
	case 3: { _nimspots setVariable["nimCat3Use", 1, true]};
	case 4: { _nimspots setVariable["nimCat4Use", 1, true]};
};

format ["Calling steam for %1", _catNr] call BIS_fnc_log;
_steamFX = [_catNr] spawn TTT_fnc_steamStart;
JDG_steamFX = _catNr;
publicVariable "JDG_steamFX";
_msg = "Salute" call TTT_fnc_colAct;
_plane addAction[
	_msg,
	TTT_fnc_launch,
	_catapult,
	5,
	false,
	true,
	"",
	"driver _target == _this"
];
