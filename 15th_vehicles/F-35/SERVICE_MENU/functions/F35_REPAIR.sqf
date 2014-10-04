	_F35 = vehicle player;
	_F35_pilot = driver _F35;
	_default_sleep_time = 3;
	_sleep_time = 3;		
	_F35_stop_speed = 1;
	_damage_F35 = damage _F35;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	if (speed _F35 > _F35_stop_speed) exitWith {if ((player == _F35_pilot)  ) then {titleText ["Repairing canceled...", "PLAIN DOWN",0.3];};};
	if ((player == _F35_pilot)  ) then {titleText ["Repairing...", "PLAIN DOWN",0.3];};

	while {alive _F35} do 
	{
	
		_damage_F35 = damage _F35;
		_F35 Setdamage (_damage_F35 - 0.015);	
		If ((_damage_F35 < 0.01) and (player == _F35_pilot)  ) exitWith {titleText ["Repairing complete...", "PLAIN DOWN",0.6];};
		if (speed _F35 > _F35_stop_speed) exitWith {if ((player == _F35_pilot)  ) then {titleText ["Repairing canceled...", "PLAIN DOWN",0.3];};};
		if ((player == _F35_pilot)  ) then {titleText ["Repairing...", "PLAIN DOWN",0.3];};
		sleep _sleep_time;
	};