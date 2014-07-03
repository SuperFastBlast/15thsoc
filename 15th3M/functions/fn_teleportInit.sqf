/* 
meu_fnc_teleportMulti
by Fight9

initiates variables and names and sents objects to fn_teleportAct 
runs server side 

*/

private ["_this","_objs","_name","_act","_dist","_logic","_colorSel","_color","_marker"];	
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_objs = [_this,1,[],[[]]] call BIS_fnc_param;
_dist = _logic getVariable ["meu_moduleTeleport_Distance",10];
_colorSel = _logic getVariable ["meu_moduleTeleport_Color",3];
_marker = _logic getVariable ["meu_moduleTeleport_Markers",0];

{
	if (_x getVariable ["meu_moduleTeleport_name",""] != "") then {
		_name = (_x getVariable "meu_moduleTeleport_name");	
	} else {
		if (vehicleVarName _x == "") then {						
			_name = getText (configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName");
		} else {
			_name = [str _x,"_"," "] call CBA_fnc_replace;
		};
	};
	_x setVariable ["meu_moduleTeleport_name",_name,true];
} forEach _objs;	

{	
	if (vehicleVarName _x == "") then {
		_var = _x call BIS_fnc_objectVar;
	};
} forEach _objs;

{
	_act = [[_x,_objs,_dist,_colorSel,_marker],"meu_fnc_teleportAct",true,true,false] call BIS_fnc_mp;
//	_act = [_x,_objs,_dist,_colorSel,_marker] spawn meu_fnc_teleportAct;
} forEach _objs;

diag_log format ["Teleport Network Module Initialized on: %1",_objs];
true;