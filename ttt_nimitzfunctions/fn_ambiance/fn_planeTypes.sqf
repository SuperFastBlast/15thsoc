#include "Config.h"

private ["_ret"];
_ret = JETS select STDPLANES;

if (isClass(configFile >> "CfgPatches" >> "JS_JC_FA18")) then {
  _ret = JETS select FA18PLANES;
}; 

_ret
