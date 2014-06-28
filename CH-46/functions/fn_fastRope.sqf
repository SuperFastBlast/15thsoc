private ["_heli","_unit","_ropes","_rope","_zmax","_zdelta","_zc","_height","_ropeHeight"];
_heli = _this select 0;
_unit = _this select 1;
_ropes = _heli getVariable ["currentRopes",[]];
_rope = _ropes call BIS_fnc_selectRandom;
_zmax = 22;
_zdelta = 7 / 10;
_zc = _zmax;
_unit action ["eject", _heli];
//  _unit switchMove "gunner_standup01";
_unit switchMove "M2_Gunner"; // Dependent on RDS_StaticW
_unit setPos [(getPos _unit select 0)+ 1, (getPos _unit select 1) + 1,(getPos _unit select 2) - 3];
_height = (getPos _unit) select 2;
_ropeHeight = -24 + _height;
//    while {alive _unit and (getPos _unit select 2) > 1 and (abs (speed _heli)) < 10  and _zc > -24} do {
 while {(_zc > _ropeHeight) && (alive _unit) && (abs (speed _heli) < 10)} do {
	_unit attachTo [_rope, [0,0,_zc]];
	_zc = _zc - _zdelta;
	sleep 0.1;
}; 
_unit switchMove "";
detach _unit;
true;