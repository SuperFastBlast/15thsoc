#include "Common.h"
#include "Config.h"

private ["_dir", "_soldiers", "_center", "_unit", "_nimspots", "_nimCar2"];
_dir = [_this, 0, 0] call BIS_fnc_param;
_nim = [_this, 1, ObjNull] call BIS_fnc_param;

_soldiers = [] call TTT_fnc_soldierTypes;

_nimspots = ["nimspots", _nim] call TTT_fnc_global;
_nimCar2 = ["nimCar2", _nim] call TTT_fnc_global;

_center = position _nimspots;

// {
  // _unit = [_x, _center, DECK, _dir] call TTT_fnc_placeVehicle;
  // removeAllWeapons _unit;
  // _center = CIRCLEPOS2(_center, random(360), random(5));
  // sleep 0.5;
// } forEach _soldiers;

// Fuel crew
_hose1 =  _nimCar2 modelToWorld (_nimCar2 selectionPosition "fuelHose1pos");
_grape = _soldiers select GRAPE;
_unit = [_grape, _hose1, DECK, _dir - 90] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "REPAIR_VEH_KNEEL"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_pos = CIRCLEPOS2(_hose1, random(360), 2);
_unit = [_grape, _pos, DECK, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

// Medics
_wirepos = _nimspots modelToWorld (_nimspots selectionPosition "WireCenter");
_white = _soldiers select WHITE;
_pos = CIRCLEPOS2(_wirepos, _dir + 60, 30);
_unit = [_white, _pos, DECK, _dir - 90] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_pos = CIRCLEPOS2(_pos, random(360), 2);
_unit = [_white, _pos, DECK, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

// Wire crew
_green = _soldiers select GREEN;
_pos = CIRCLEPOS2(_wirepos, _dir - 90, 30);
_unit = [_green, _pos, DECK, _dir - 90] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_pos = CIRCLEPOS2(_pos, _dir - 90, 1);
_unit = [_green, _pos, DECK, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "REPAIR_VEH_KNEEL"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

// Cat crew
_cat = _nimspots modelToWorld (_nimspots selectionPosition "C1");
_pos = CIRCLEPOS2(_cat, _dir + 90, 5);
_yellow = _soldiers select YELLOW;
_unit = [_yellow, _pos, DECK, _dir - 180] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
[[_unit, "REPAIR_VEH_KNEEL"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_unit setBehaviour "Careless";
_pos = CIRCLEPOS2(_pos, random(360), 2);
_unit = [_yellow, _pos, DECK, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

true
