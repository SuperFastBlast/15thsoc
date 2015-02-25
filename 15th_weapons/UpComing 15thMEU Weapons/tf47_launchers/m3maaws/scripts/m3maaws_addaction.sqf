_unit = _this select 0;
if (local _unit) then 
{
	if (count (secondaryWeaponMagazine  _unit) >0) then
	{
		if ((secondaryWeaponMagazine  _unit) select 0 =="tf47_m3maaws_HE") then
		{
			if (_unit getvariable "AirburstState" =="x") then 
			{
				_AirburstAction = _unit addaction ['<t color=''#088DA5''>' +'Airburst Cfg', "_this execVM '\tf47_launchers\m3maaws\scripts\m3maaws_airburstcfg.sqf'"];
				_unit setvariable ["AirburstAction",_AirburstAction];
				_unit setVariable ["AirburstState","y"];
			};
		}
		else
		{
			if ((secondaryWeaponMagazine  _unit) select 0 =="tf47_m3maaws_ILLUM") then
			{
				if (_unit getvariable "FlareState" =="x") then 
				{
					_FlareAction = _unit addaction ['<t color=''#088DA5''>' +'Flare Cfg', "_this execVM '\tf47_launchers\m3maaws\scripts\m3maaws_flarecfg.sqf'"];
					_unit setvariable ["FlareAction",_FlareAction];
					_unit setVariable ["FlareState","y"];
				};
			}
			else
			{
			_unit removeaction (_unit getvariable "AirburstAction");
			_unit setvariable ["AirburstState","x"];
			_unit removeaction (_unit getvariable "FlareAction");
			_unit setvariable ["FlareState","x"];
			};
		};
	
	} else 	{	
	//	if (_unit getvariable "AirburstState" =="y") then
	//	{
			_unit removeaction (_unit getvariable "AirburstAction");
			_unit setvariable ["AirburstState","x"];
			_unit removeaction (_unit getvariable "FlareAction");
			_unit setvariable ["FlareState","x"];
	//	};
	};
};