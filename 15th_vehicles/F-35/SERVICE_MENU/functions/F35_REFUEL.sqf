	_F35 = vehicle player;
	_F35_pilot = driver _F35;
	_default_sleep_time = 3;
	_sleep_time = 3;		
	_F35_stop_speed = 1;
	_Fuel_F35 = fuel _F35;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	if (speed _F35 > _F35_stop_speed) exitWith {if ((player == _F35_pilot)  ) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
	if ((player == _F35_pilot)  ) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};

	while {alive _F35} do 
	{
	
		_Fuel_F35 = fuel _F35;
		_F35 setfuel (_Fuel_F35 + 0.015);	
		If ((_Fuel_F35 > 0.98) and (player == _F35_pilot)  ) exitWith {titleText ["Refueling complete...", "PLAIN DOWN",0.6];};
		if (speed _F35 > _F35_stop_speed) exitWith {if ((player == _F35_pilot)  ) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
		if ((player == _F35_pilot)  ) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};
		sleep _sleep_time;
	};

	sleep 0.05;
	_loadout = magazines _F35;