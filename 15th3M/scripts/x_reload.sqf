_object = _this select 0;
_time = _this select 1;
_pos = getPos _object;
_type = typeOf _object;
_name = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

if (!(_object isKindOf "man")) then {
	if (_object getVariable ["xNotRunning",true]) then {
		_null = [_object] spawn xReload_fnc_hint;
		_object setVariable ["xNotRunning",false];
		x_reload_time_factor = _time;

			_object setVehicleAmmo 1;

			_object vehicleChat format ["Servicing %1... Please stand by...", _name];
			sleep x_reload_time_factor;
			_magazines = getArray(configFile >> "CfgVehicles" >> _type >> "magazines");

		if (_object distance _pos < 5) then {
			if (count _magazines > 0) then {
				_removed = [];
				{
					if (!(_x in _removed)) then {
						_object removeMagazines _x;
						_removed = _removed + [_x];
					};
				} forEach _magazines;
			};
		};

			if (count _magazines > 0) then {
				{
					_name2 = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
					if (_name2 == "") then {
						_temp = getText (configFile >> "CfgMagazines" >> _x >> "ammo");
						_name2 = [_temp,"_"," "] call CBA_fnc_replace;
					};
					_object vehicleChat format ["Reloading %1", _name2];
					sleep x_reload_time_factor;
					_object addMagazine _x;
				} forEach _magazines;
			};

		_count = count (configFile >> "CfgVehicles" >> _type >> "Turrets");

			if (_count > 0) then {
				for "_i" from 0 to (_count - 1) do {
					scopeName "xx_reload2_xx";
					_config = (configFile >> "CfgVehicles" >> _type >> "Turrets") select _i;
					_magazines = getArray(_config >> "magazines");
					_removed = [];
					{
						if (!(_x in _removed)) then {
							_object removeMagazines _x;
							_removed = _removed + [_x];
						};
					} forEach _magazines;
					{
						_name3 = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
						if (_name3 == "") then {
							_temp = getText (configFile >> "CfgMagazines" >> _x >> "ammo");
							_name3 = [_temp,"_"," "] call CBA_fnc_replace;
						};
						_object vehicleChat format ["Reloading %1", _name3];
						sleep x_reload_time_factor;
						_object addMagazine _x;
						sleep x_reload_time_factor;
					} forEach _magazines;
			
					_count_other = count (_config >> "Turrets");
					if (_count_other > 0) then {
						for "_i" from 0 to (_count_other - 1) do {
							_config2 = (_config >> "Turrets") select _i;
							_magazines = getArray(_config2 >> "magazines");
							_removed = [];
							{
								if (!(_x in _removed)) then {
									_object removeMagazines _x;
									_removed = _removed + [_x];
								};
							} forEach _magazines;
							{
								_name4 = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
								if (_name4 == "") then {
									_temp = getText (configFile >> "CfgMagazines" >> _x >> "ammo");
									_name4 = [_temp,"_"," "] call CBA_fnc_replace;
								};
								_object vehicleChat format ["Reloading %1", _name4]; 
								sleep x_reload_time_factor;
								_object addMagazine _x;
								sleep x_reload_time_factor;
							} forEach _magazines;
						};
					};
				};
			};


			_object setVehicleAmmo 1;	// Reload turrets / drivers magazine

			sleep x_reload_time_factor;
			_object vehicleChat "Repairing...";
			_object setDamage 0;
			sleep x_reload_time_factor;
			_object vehicleChat "Refueling...";
			while {fuel _object < 0.99} do {
				//_object setFuel ((fuel _vehicle + 0.1) min 1);
				_object setFuel 1;
				sleep 0.01;
			};
			sleep x_reload_time_factor;
			_object vehicleChat format ["%1 is ready...", _name];
			_null = [_object] spawn xReload_fnc_hint;
			sleep 10;
			_object setVariable ["xNotRunning",true];

	};
};
true;