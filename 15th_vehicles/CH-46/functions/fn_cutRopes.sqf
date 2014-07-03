private ["_heli","_ropes"];
_heli = _this select 0;
_ropes = _heli getVariable ["currentRopes",[]];
if ((count _ropes) != 0) then {
	{deleteVehicle _x;} forEach _ropes;
};
_heli setVariable ["currentRopes",[],true];
true;