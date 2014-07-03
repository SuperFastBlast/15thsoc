/* 
add local markers to objects
marker pos updates for vehicles
by Fight9

[_obj - object,_case - number,_text - string]

cases:
	0 - no marker
	1 - no marker
	2: {"ColorBlack"};
	3: {"ColorRed"};
	4: {"ColorBlue"};
	5: {"ColorGreen"};
	default: {"ColorBlack"};
*/

private ["_obj","_marker","_text","_indMkr","_name","_mkr","_mkrColor","_loop","_run"];
 
_obj = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_marker = [_this,1,0,[0]] call bis_fnc_param;
_text = [_this,2,"",[""]] call bis_fnc_param;

_indMkr = _obj getVariable ["meu_moduleTeleport_Markers",_marker];
if (_indMkr == 0) then {_indMkr = _marker};
if (_indMkr > 1) then {
	_name = _obj getVariable ["meu_moduleTeleport_name",(name _obj)];
	if (_text != "") then {_name = _text};
	_mkr = createMarkerLocal [(str _obj),(getPos _obj)]; 
	_mkr setMarkerShapeLocal "ICON"; 
	_mkr setMarkerTypeLocal "hd_dot";
	(str _obj) setMarkerTextLocal _name;
	_mkrColor = switch (_indMkr) do {
		case 2: {"ColorBlack"};
		case 3: {"ColorRed"};
		case 4: {"ColorBlue"};
		case 5: {"ColorGreen"};
		default {"ColorBlack"};
	};
	(str _obj) setMarkerColorLocal _mkrColor;
	if (_obj in vehicles) then {
		_loop = [_obj] spawn {
			private ["_unit"];
			_unit = _this select 0;
			_run = true;
			while {_run} do {
				(str _unit) setMarkerPosLocal (getPos _unit);
				while {speed _unit > 20} do {
					(str _unit) setMarkerPosLocal (getPos _unit);
					sleep 0.5;
				};
				if (!alive _unit) then {
					deleteMarkerLocal (str _unit);
					_run = false;
				};
				sleep 10;
			};
		};
	};
};
true;