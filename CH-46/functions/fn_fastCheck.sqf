private ["_heli","_unit","_speed","_height","_ropes","_return"];
_heli = _this select 0;
_unit = _this select 1;
_speed = speed _heli;
_height = (getPos _heli) select 2;
_ropes = _heli getVariable ["currentRopes",[]];
_return = (alive _heli) && (abs (_speed) < 10) && (_height < MEU_MAX_HEIGHT) && ((count _ropes) != 0) && (_unit != (driver _heli)) && (_unit != (commander _heli)) && (_unit in _heli);
_return;