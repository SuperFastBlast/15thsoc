private ["_heli","_pilot","_speed","_height","_ropes","_return","_ramp"];
_heli = _this select 0;
_pilot = _this select 1;
_speed = speed _heli;
_height = (getPos _heli) select 2;
_ropes = _heli getVariable ["currentRopes",[]];
_ramp = _heli animationPhase "ramp";
_return = (alive _heli) && (abs (_speed) < 10) && (_height < MEU_MAX_HEIGHT) && (_height > 5) && ((count _ropes) == 0) && ((_pilot == (driver _heli)) || (_pilot == (commander _heli))) && (_ramp == 1);
_return;