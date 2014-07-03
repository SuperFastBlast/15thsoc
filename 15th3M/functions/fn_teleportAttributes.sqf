/* 
fn_teleportAttributes
by fight9

Set object information for teleport network
 */

private ["_logic","_objs","_name","_return"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_objs = [_this,1,[],[[]]] call BIS_fnc_param;

_name = _logic getVariable ["meu_moduleTeleport_name",""];
_return = _logic getVariable ["meu_moduleTeleport_returning",1];
_hide = _logic getVariable ["meu_moduleTeleport_hide",0];
_marker = _logic getVariable ["meu_moduleTeleport_Markers",0];
_damage = _logic getVariable ["meu_moduleTeleport_damage",1];

{
	if (_hide == 1) then {
		hideObject _x;
	};		
	if (_name != "") then {
		_x setVariable ["meu_moduleTeleport_name",_name,true];
		};
	if (_damage == 0) then {
		_x allowDamage false;
	};
	_x setVariable ["meu_moduleTeleport_returning",_return];
	_x setVariable ["meu_moduleTeleport_Markers",_marker];
} foreach _objs;

diag_log format ["Teleport Intel Module Initialized First on: %1",_objs];
true;