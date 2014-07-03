/*  
CH46 FastRope script v0.3
by Harrington
Based off Zealots fastrope script
rewritten for CH46/15thMEU use
init = "_this execVM 'scriptName.sqf'";
 
Notes:
Animations are local and only seen by unit fast roping. I need a global animation I can switch too and from immediately.
Currently using animation "M2_Gunner" from RDS_StaticW addon
 
To Do:
Find working animations
send animations globally
reposition ropes attachTo
fix meu_fnc_keepRopes - fnc_cutRopes being called twice
Rename addActions with colored Text - perhaps icons as well
Double check ropeHeight variable math - fnc_fastRope
 */
 
#define MEU_MAX_HEIGHT 30
 
meu_fnc_deployCheck = {
        private ["_heli","_pilot","_speed","_height","_ropes","_return","_ramp"];
        _heli = _this select 0;
        _pilot = _this select 1;
        _speed = speed _heli;
        _height = (getPos _heli) select 2;
        _ropes = _heli getVariable ["currentRopes",[]];
        _ramp = _heli animationPhase "ramp";
        _return = (alive _heli) && (abs (_speed) < 10) && (_height < MEU_MAX_HEIGHT) && (_height > 5) && ((count _ropes) == 0) && ((_pilot == (driver _heli)) || (_pilot == (commander _heli))) && (_ramp == 1);
        _return;
};
 
meu_fnc_fastCheck = {
        private ["_heli","_unit","_speed","_height","_ropes","_return"];
        _heli = _this select 0;
        _unit = _this select 1;
        _speed = speed _heli;
        _height = (getPos _heli) select 2;
        _ropes = _heli getVariable ["currentRopes",[]];
        _return = (alive _heli) && (abs (_speed) < 10) && (_height < MEU_MAX_HEIGHT) && ((count _ropes) != 0) && (_unit != (driver _heli)) && (_unit != (commander _heli)) && (_unit in _heli);
        _return;
};
 
meu_fnc_cutCheck = {
        private ["_heli","_pilot","_ropes","_return"];
        _heli = _this select 0;
        _pilot = _this select 1;
        _ropes = _heli getVariable ["currentRopes",[]];
        _return = (alive _heli) && ((count _ropes) != 0) && ((_pilot == (driver _heli)) || (_pilot == (commander _heli)));
        _return;
};
 
meu_fnc_deployRopes = {
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
};
 
meu_fnc_fastRope = {
    private ["_heli","_unit","_ropes","_rope","_zmax","_zdelta","_zc","_height","_ropeHeight"];
    _heli = _this select 0;
    _unit = _this select 1;
    _ropes = _heli getVariable ["currentRopes",[]];
    _rope = _ropes call BIS_fnc_selectRandom;
    _zmax = 22;
    _zdelta = 7 / 10;
    _zc = _zmax;
    _unit action ["eject", _heli];
        _unit switchMove "gunner_standup01";
//  _unit switchMove "M2_Gunner"; // Dependent on RDS_StaticW
    _unit setPos [(getPos _unit select 0)+ 1, (getPos _unit select 1) + 1,(getPos _unit select 2) - 3];
    _height = (getPos _unit) select 2;
        _ropeHeight = 24 - _height;
//    while {alive _unit and _height > 1 and (abs (speed _heli)) < 10  and _zc > -24} do {
  while {(_zc > _ropeHeight) && (alive _unit) && (abs (speed _heli) < 10)} do {
//              _height = (getPos _unit) select 2;
                _unit attachTo [_rope, [0,0,_zc]];
                _zc = _zc - _zdelta;
                sleep 0.1;
                if ((getPosATL _unit) select 2 < 1) exitwith {};
    };
    _unit switchMove "";
    detach _unit;
    true;
};
 
meu_fnc_cutRopes = {
        private ["_heli","_ropes"];
        _heli = _this select 0;
        _ropes = _heli getVariable ["currentRopes",[]];
        if ((count _ropes) != 0) then {
                {deleteVehicle _x;} forEach _ropes;
        };
        _heli setVariable ["currentRopes",[],true];
        true;
};
 
meu_fnc_keepRopes = {
        private ["_heli","_ropes","_cut"];
        _heli = _this select 0;
        _ropes = _this select 1;
        waitUntil {(!(alive _heli)) || (count (_heli getvariable ["currentRopes", []]) == 0)};
        _cut = [_heli] call meu_fnc_cutRopes;
        _cut;
};
 
(_this select 0) addAction ["MEU - Deploy Ropes", meu_fnc_deployRopes, [], -1, false, true, '','[_target,_this] call meu_fnc_deployCheck'];
(_this select 0) addAction ["MEU - Fast Rope", meu_fnc_fastRope, [], 6, false, true, '','[_target,_this] call meu_fnc_fastCheck'];
(_this select 0) addAction ["MEU - Cut Ropes", meu_fnc_cutRopes, [], -1, false, true, '','[_target,_this] call meu_fnc_cutCheck'];
diag_log ["FRS Initiated", (_this select 0)];