private ["_logic","_size","_refresh","_clear"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;

_size = _logic getVariable "size";
_refresh = _logic getVariable "refresh"; 

diag_log format ["Gear Clean Up Module Starting Loop. Looping Every: %1 Seconds, with a: %2 Radius",_refresh,_size];

while {true} do {
    
_clear = nearestObjects [_logic,["weaponholder"],_size + 50];
	for "_i" from 0 to count _clear - 1 do {
		deleteVehicle (_clear select _i);
		sleep 0.056;
	};
sleep _refresh;
};

true;