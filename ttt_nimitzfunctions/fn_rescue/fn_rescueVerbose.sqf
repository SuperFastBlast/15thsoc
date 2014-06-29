private ["_unit", "_boatSpawn", "_grp", "_all", "_boat", "_wp", "_pos", "_nimCar3"];

_nimCar3 = ["nimCar3"] call TTT_fnc_global;

_unit = _this select 0;

player groupChat "Help is on the way, stay calm.";
sleep 30;

_boatSpawn = _nimCar3 modelToWorld (_nimCar3 selectionposition "boatWater");
_grp = createGroup west;
_all = [_boatSpawn, 0, "B_Lifeboat", _grp] call BIS_fnc_spawnVehicle;
_boat = _all select 0;

_wp = _grp addWaypoint [position _unit, 2];
_wp setWaypointType "MOVE";

waitUntil { (leader _grp) distance _unit < 10 };

player groupChat "You've been rescued, stay calm.";
sleep 10;
cutText ["Moving to carrier", "BLACK IN", 10];

_pos = _nimCar3 modelToWorld (_nimCar3 selectionposition "boatSpawn");
_pos = [_pos select 0, _pos select 1, 8];
_unit setPosASL _pos;

{ deleteVehicle _x } forEach (crew _boat);
deleteVehicle _boat;

// Module function is executed by spawn command, so returned value is not necessary.
// However, it's a good practice to include one.
true;
