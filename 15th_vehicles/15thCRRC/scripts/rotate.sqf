
_newDir = getdir _this + 00;

_this setDir _newDir;
_newPos = _this modelToWorld [0,4,0];
if (surfaceIsWater getPos _this) then [{_this setPosASL _newPos},{_this setPos _newPos}];

