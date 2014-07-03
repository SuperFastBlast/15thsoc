_heli = _this select 0;
_position = _this select 1;
_heli animate ["mainrotor_folded",1-_position];
_heli animate ["mainrotor_unfolded",_position];
