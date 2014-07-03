/* 
add teleport action
by Fight9

send to clients via fn_MP
*/


_obj = 		[_this,0,objNull,[objNull]] call BIS_fnc_param;
_objs = 	[_this,1,[],[[]]] call BIS_fnc_param;
_dist = 	[_this,2,10,[0]] call bis_fnc_param;
_colorSel = [_this,3,4,[0]] call bis_fnc_param;
_marker = 	[_this,4,0,[0]] call bis_fnc_param;

_indMkr = _obj getVariable ["meu_moduleTeleport_Markers",_marker];
_name = _obj getVariable "meu_moduleTeleport_name";


_color = switch (_colorSel) do {
	case 1: {"#FF0000"}; //Red
	case 2: {"#3F5AFA"}; // blue
	case 3: {"#99FF00"}; // green
	case 4: {"#FFFFFF"}; // white
};

_cond = if ( isNil {_obj getVariable "BIS_fnc_moduleRespawnVehicle_posType"} && isNil {_obj getVariable "TopheRespawn"} ) then {1} else {2};
if (_obj getVariable ["meu_moduleTeleport_returning",1] == 1) then {
	switch (_cond) do {

		case 1: {
			
			{
				if (_obj != _x) then {
					_name = (_x getVariable "meu_moduleTeleport_name");
					_dest = vehicleVarName _x;
					_act = _obj addAction [
						(format [("<t color=""%2"">"+("Teleport to %1")+"</t>"), _name,_color]),
						meu_fnc_teleportSetPos,
						[_dest,_dist], 
						4,
						true,
						true,
						"",
						format ["((_target distance _this) < %1) && (vehicle player == player) && (alive _target) && (alive %2)",_dist,_x] 
					];
				};
			} foreach _objs;
			_mkr = [_obj,_marker] call meu_fnc_teleportMarkers;
		};
		
		case 2: {
			_objs = _objs - [_obj];
			_temp = _obj;
			_varname = vehicleVarName _temp;
			_obj = objnull;
			while {true} do {
				waitUntil {
					call compile format ["_obj = %1",_varname];
					alive _obj;
				};
				sleep 3;
				_obj setVariable ["meu_moduleTeleport_name",_name]; // for markers
				_obj setVariable ["meu_moduleTeleport_Markers",_indMkr];
				while {alive _obj && _obj getVariable ["meu_moduleTeleport_meuNeedsAct",true]} do {
					{
						if (_obj != _x) then {
							_name = (_x getVariable "meu_moduleTeleport_name");
							_dest = vehicleVarName _x;
							_act = _obj addAction [
								(format [("<t color=""%2"">"+("Teleport to %1")+"</t>"), _name,_color]),
								meu_fnc_teleportSetPos,
								[_dest,_dist], 
								4,
								true,
								true,
								"",
								format ["((_target distance _this) < %1) && (vehicle player == player) && (alive _target) && (alive %2)",_dist,_x] 
							];
						};
					} foreach _objs;
					_mkr = [_obj,_marker] call meu_fnc_teleportMarkers;
					_obj setVariable ["meu_moduleTeleport_meuNeedsAct",false];
					sleep 2;
				};
				sleep 5;
				if (_obj getvariable ["TopheRespawnEnd",false]) exitWith {};
			}; 
		};	
		
	};
	
};

//diag_log [_obj,_objs,_dist,_colorSel,_marker,_returning,_name,_color,_cond];
true;