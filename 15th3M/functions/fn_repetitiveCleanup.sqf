//veh = [object, Delay, Deserted timer, Respawns, Effect, Dynamic] execVM "vehicle.sqf"
//veh = [this, 30, 120, 0, FALSE, FALSE] execVM "vehicle.sqf"

private ["_logic","_bodies","_deadVehicles","_immVehicles","_weapons","_explosives","_smokes","_clean"];
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;

_bodies = _logic getVariable ["bodies",1];
_deadVehicles = _logic getVariable ["deadVehicles",5];
_immVehicles = _logic getVariable ["immVehicles",3];
_weapons = _logic getVariable ["weapons",2];
_explosives = _logic getVariable ["explosives",10];
_smokes = _logic getVariable ["smokes",0];

_clean = [
	_bodies*60, 
	_deadVehicles*60, 
	_immVehicles*60, 
	_weapons*60, 
	_explosives*60, 
	_smokes*60
] execVM "15th3M\scripts\repetitive_cleanup.sqf";

diag_log "Repetitive Cleanup Module Initialized";
true;
