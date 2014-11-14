private ["_unit", "_brief", "_range", "_nimspots"];

_nimspots = ["nimspots"] call TTT_fnc_global;

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_brief = [_this, 1, true] call BIS_fnc_param;
_range = [_this, 2, 200] call BIS_fnc_param;

if (_unit isKindOf "Man") then {
  [_unit, _brief, _range, _nimspots] spawn {
    while {true} do {
      private ["_unit", "_pos", "_brief", "_range", "_ship", "_nimCar3"];
      _unit = _this select 0;
      _brief = _this select 1;
      _range = _this select 2;
      _ship = _this select 3;
      waitUntil { (_unit distance _ship < _range) and ((getPosASL _unit select 2) < 2) and
        (vehicle _unit == _unit)};
      if (_brief) then {
        player groupChat "Stay calm, help is on the way.";
        sleep 30;
        player groupChat "You've been rescued";
	_nimCar3 = ["nimCar3"] call TTT_fnc_global;
        _pos = _nimCar3 modelToWorld (_nimCar3 selectionposition "boatSpawn");
        _pos = [_pos select 0, _pos select 1, 8];
        _unit setPosASL _pos;
      } else {
        [_unit] call TTT_fnc_rescueVerbose;
      };
    };
  };
};
