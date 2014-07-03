meu_fnc_m119_push = 
{
	private ["_gun","_unit","_gunDir","_pushDirTemp"];
	_gun = _this select 0;
	_unit = _this select 1;
	_gunDir = getDir _gun;
	
	_pushDirTemp = [_gun, _unit] call BIS_fnc_relativeDirTo;
	
	_unit playMove "AmovPercMstpSnonWnonDnon_AinvPercMstpSnonWnonDnon_Putdown"; 
	
	sleep 1;
	
	if (_pushDirTemp < 180 ) then 
	{
		_gunDir = _gunDir + 10;
		if (_gunDir < 0) then {_gunDir = _gunDir + 360};
		if (_gunDir > 360) then {_gunDir = _gunDir - 360};
		
		_gun setDir _gunDir;		
	}
	else
	{
		_gunDir = _gunDir - 10;
		if (_gunDir < 0) then {_gunDir = _gunDir + 360};
		if (_gunDir > 360) then {_gunDir = _gunDir - 360};
		
		_gun setDir _gunDir;		

	};
	
};

meu_fnc_m119_attachTow = 
{
	private ["_gun","_unit","_veh"];
	_gun = _this select 0;
	_unit = _this select 1;
	_veh = nearestObject [_gun, "Car_F"];
	if (_gun getVariable ["meuTowed",false]) exitWith {};
	
	_gun attachTo [_veh,[0,-7,-1]];
	_gun setDir 180;
	_gun setVariable ["meuTowed",true,true];
	["meu_addAction",[_gun,"Un-Tow","_this call meu_fnc_m119_unTow;"]] call CBA_fnc_globalEvent;
	
};

meu_fnc_m119_unTow = 
{
	private ["_gun","_unit","_veh"];
	_gun = _this select 0;
	_unit = _this select 1;
	_veh = nearestObject [_gun, "Car_F"];
	
	detach _gun;
	
	["meu_removeAction",[_gun]] call CBA_fnc_globalEvent;
	_gun setVariable ["meuTowed",false,true];

};

//["meu_addAction",[_veh,"Un-Tow",""]] call CBA_fnc_globalEvent;
["meu_addAction", 
  { 
  
	private ["_obj","_text","_scrpt","_params","_actionId"];
	_obj = (_this select 0);
	_text = (_this select 1);
	_scrpt = (_this select 2);
	_params = (_this select 3);
	_actionId = _obj addAction [_text,_scrpt,_params];
	
	_obj setVariable ["meu_actionId",_actionId,true];
	       
    }
    ] call CBA_fnc_addEventHandler;

["meu_removeAction", 
  { 
  
	private ["_gun","_actionId"];
	_gun = (_this select 0);
	_actionId = _gun getVariable ["meu_actionId",0];
	
	_gun removeAction _actionId;
	
    }
    ] call CBA_fnc_addEventHandler;

 	