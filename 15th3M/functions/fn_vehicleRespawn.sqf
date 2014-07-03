//veh = [object, Delay, Deserted timer, Respawns, Effect, Dynamic] execVM "vehicle.sqf"
//veh = [this, 30, 120, 0, FALSE, FALSE] execVM "vehicle.sqf"

private ["_logic","_objs","_activated","_delay","_deserted","_respawns","_effect","_dynamic","_veh"];
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_objs = [_this,1,[],[[]]] call BIS_fnc_param;

_delay = _logic getVariable ["delay",30];
_deserted = _logic getVariable ["deserted",0];
_respawns = _logic getVariable ["respawns",0];
_effect = if (_logic getVariable ["effect",1] == 1) then {false} else {true};
_dynamic = if (_logic getVariable ["dynamic",1] == 1) then {false} else {true};

{
	_veh = [_x, _delay, _deserted, _respawns, _effect, _dynamic] execVM "15th3M\scripts\vehicleRespawn.sqf"
} foreach _objs;

diag_log format ["Vehicle Respawn Module Initialized On: %1",_objs];
true;