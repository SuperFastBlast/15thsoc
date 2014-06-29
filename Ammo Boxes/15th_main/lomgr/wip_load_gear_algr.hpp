	{
		_test = typeName _x;
		_index = _forEachIndex;
		switch (_index) do
		{		
			case 8:
			{
				private ["_temp"];
				_temp = _x;
				{
					(unitBackpack player) additemCargo [_x,1];
				} forEach _temp;
			};

			case 9:
			{
				private ["_temp"];
				_temp = _x;
				{
					player addHandgunItem _x;
				} forEach _temp;				
			};

			case 10:
			{
				private ["_temp"];
				_temp = _x;
				{
					player addPrimaryWeaponItem _x;
				} forEach _temp;				
			};
			case 11:
			{
				private ["_temp"];
				{
					player addSecondaryWeaponItem _x;
				} forEach _temp;				
			};

			default
			{
				switch (_test) do
				{
					case "ARRAY":
					{
						private ["_temp"];
						_temp = _x;
						{
							_nop = [player,_x] call BIS_fnc_invAdd;
						} forEach _temp;

					};

					case "STRING":
					{
						_nop = [player,_x] call BIS_fnc_invAdd;
					};

					default
					{
						_nop = [player,_x] call BIS_fnc_invAdd;
					};
				};
				
			};
		};
	} forEach _gear;