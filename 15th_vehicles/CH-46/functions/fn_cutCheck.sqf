private ["_heli","_pilot","_ropes","_return"];
_heli = _this select 0;
_pilot = _this select 1;
_ropes = _heli getVariable ["currentRopes",[]];
_return = (alive _heli) && ((count _ropes) != 0) && ((_pilot == (driver _heli)) || (_pilot == (commander _heli)));
_return;