private ["_heli","_rope1","_rope2","_totalRopes","_keep"];
_heli = _this select 0;
_rope1 = createVehicle ["land_rope_f", [0,0,0], [], 0, "CAN_COLLIDE"];
_rope1 attachTo [_heli,[1, -5, -24]];
_rope2 = createVehicle ["land_rope_f", [0,0,0], [], 0, "CAN_COLLIDE"];
_rope2 attachTo [_heli,[1, 1, -26.8]];
_totalRopes = [_rope1,_rope2];
_heli setVariable ["currentRopes",_totalRopes,true];
_keep = [_heli,_totalRopes] spawn meu_fnc_keepRopes; // func for keeping ropes attached
true;