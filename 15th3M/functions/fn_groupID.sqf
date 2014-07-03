private ["_logic","_objs","_activated","_id","_disable","_radio","_freq"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_objs = [_this,1,[],[[]]] call BIS_fnc_param;
_activated = [_this,2,false,[true]] call bis_fnc_param;
_id = _logic getVariable ["GroupID",""];
_disable = _logic getVariable ["disable",1];
_radio = _logic getVariable ["radio",""];

if (_activated) then {
	if (_disable == 1) then {
		{
			if (_x isKindOf "Man") then {
				_x disableAI "MOVE";
			};
		} foreach _objs;
	};
	if (_id != "") then {
		{
			if (_x isKindOf "Man") then {
				group _x setGroupID [_id];
			};
		} foreach _objs;
	};
	if (_radio != "") then {
		sleep 10;
		{
			if (_x isKindOf "Man") then {
				[(call TFAR_fnc_activeSwRadio), _radio] call TFAR_fnc_setSwFrequency;
					sleep 0.1;
					_freq = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwFrequency;
					if (_freq == _radio) then {
						systemChat format ["SW Radio Set To: %1",_radio];
					} else {
						systemChat format ["Channel %1 Not Set",_radio];
					};
			};
		} foreach _objs;
	};
};
diag_log format ["Group ID/Radio Module Initialized on: %1",_objs];
true;