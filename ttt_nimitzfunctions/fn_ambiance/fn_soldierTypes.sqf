#include "Config.h"

private ["_ret"];
_ret = SOLDIERS_STD;

if (isClass(configFile >> "CfgVehicles" >> "FUTARM_PILOT_MT")) then {
  _ret = SOLDIERS_FUTARM;
}; 

_ret
