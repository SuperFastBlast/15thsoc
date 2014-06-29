//written by JDog, modified by TeTeT

private ["_JBD", "_phase", "_nimCar2", "_nimCar3", "_sound"];

_nimCar2 = ["nimCar2"] call TTT_fnc_global;
_nimCar3 = ["nimCar3"] call TTT_fnc_global;

_JBD = [_this, 0, 1] call BIS_fnc_param;
_phase = [_this, 1, 0] call BIS_fnc_param;

if (_phase == 0) then {
  	_sound = "JBDdown";
} else { 
	_sound = "JBDup";
};

if(_JBD == 1) then {
	_nimCar2 say _sound;
	_nimCar2 animate["ani_JBD1C",_phase];
	sleep 0.17;
	_nimCar2 animate["ani_JBD1B",_phase];
	sleep 0.32;
	_nimCar2 animate["ani_JBD1A",_phase];
};

if(_JBD == 2) then {
	_nimCar2 say _sound;
	_nimCar2 animate["ani_JBD2B",_phase];
	sleep 0.3;
	_nimCar2 animate["ani_JBD2A",_phase];
	sleep 0.18;
	_nimCar2 animate["ani_JBD2C",_phase];
};
	
if(_JBD == 3) then {
	_nimCar3 say _sound;
	_nimCar3 animate["ani_JBD3A",_phase];
	sleep 0.14;
	_nimCar3 animate["ani_JBD3C",_phase];
	sleep 0.36;
	_nimCar3 animate["ani_JBD3B",_phase];
};
	
if(_JBD == 4) then {
	_nimCar3 say _sound;
	_nimCar3 animate["ani_JBD4A",_phase];
	sleep 0.32;
	_nimCar3 animate["ani_JBD4B",_phase];
};

