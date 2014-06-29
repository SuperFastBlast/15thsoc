// Based on JDogs launch script, rewritten by TeTeT

private ["_plane", "_catapult", "_action", "_catNr", "_time", 
         "_nimspots", "_use", "_nimcar3", "_nimcar2"];

_nimspots = ["nimspots"] call TTT_fnc_global;
_nimcar2 = ["nimcar2"] call TTT_fnc_global;
_nimcar3 = ["nimcar3"] call TTT_fnc_global;

_plane = [_this, 0] call BIS_fnc_param;
_action = [_this, 2] call BIS_fnc_param;
_catapult = [_this, 3] call BIS_fnc_param;

_catNr = [_catapult, 3] call BIS_fnc_param;

if (vehicle player != _plane) exitWith {};
_plane removeAction _action;

_time = 1 + random 2;
sleep _time;

// Blur pilot
_catBlur = ppEffectCreate ["radialBlur", 450];
_catBlur ppEffectEnable true;
_catBlur ppEffectAdjust [0.01,0.01,0.15,0.15];
_catBlur ppEffectCommit 1;

// Launch
detach _plane;

_nimspots setVariable ["nimCat1FX", 1, true];
[_plane] spawn TTT_fnc_steamShot;
if (_catNr < 3) then {
  "_nimcar2 say catlaunch" call BIS_fnc_log;
  _nimcar2 say "catLaunch";
} else {
  "_nimcar3 say catlaunch" call BIS_fnc_log;
  _nimcar3 say "catLaunch";
};

_v=1;
while {(_v<50) and (alive _plane)} do {    
	(vehicle _plane) setvelocity [_v* sin (getdir (vehicle player)),_v * cos (getdir (vehicle player)),.01];
	_v=_v+6;
	sleep 0.12;
};

// Fade out Blur
_catBlur ppEffectAdjust [0,0,0,0];
_catBlur ppEffectCommit 5;

// stop steam
_nimspots setVariable ["nimCat1FX", 0, true];

sleep 3;

[_catNr, 0] spawn TTT_fnc_catapultJbd;
_use = format ["nimCat%1Use", _catNr];
_nimspots setVariable [_use, 0, true];

sleep 10;
ppEffectDestroy _catBlur;  // Remove blur effect so it can be used again

// initialize action again
[_plane, objNull, _catapult] call TTT_fnc_addCatapultAction;
