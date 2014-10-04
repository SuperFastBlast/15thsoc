	_F35 = vehicle player;
	_F35_pilot = driver _F35;
	_default_sleep_time = 3;
	_i = 0;
	_sleep_time = 3;		
	_F35_stop_speed = 1;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	while {alive _F35} do 
	{
		_i=_i +1;
		if ((_i>=19)) exitWith {_F35 setVehicleAmmo 1; if ((player == _F35_pilot)) then {titleText ["Rearming complete...", "PLAIN DOWN",0.3];};};
		if (speed _F35 > _F35_stop_speed) exitWith {if ((player == _F35_pilot) ) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
		sleep _sleep_time;
		if ((player == _F35_pilot)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};
		
	};