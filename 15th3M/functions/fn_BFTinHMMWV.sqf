
0 = [] spawn {
	sleep 0.5;
	cTab_Veh_check = 
	{
		private["_unit", "_return"];
		_unit = _this select 0;
		_veh = _this select 1;
		_return = false;
		if (vehicle _unit isKindOf "MRAP_01_base_F") then {_return = True;};
		if (vehicle _unit isKindOf "Wheeled_APC_F") then {_return = True;};
		if (vehicle _unit isKindOf "Tank") then {_return = True;};
		if (vehicle _unit isKindOf "Truck_01_base_F") then {_return = True;};
		if (vehicle _unit isKindOf "HMMWV_Base") then {_return = True;};
	_return;
	};
};
diag_log "cTab Module Initialized. Function: cTab_Veh_check replaced.";
true;