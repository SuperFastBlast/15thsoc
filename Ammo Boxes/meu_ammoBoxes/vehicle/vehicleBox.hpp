	class Box_meu_vehicle: Box_NATO_AmmoVeh_F
	{
		displayname = "[15th] Vehicle Box";
		transportAmmo = 0;
		scope=2;
		supplyRadius = 0;
		class UserActions
		{
			class clearCargo
			{
				userActionID = 50;
				displayName = MEU_GREEN_NAME(Clear Cargo);
				displayNameDefault = "";
				position = "mph_axis";
				radius = 10;
				animPeriod = 2;
				onlyForplayer = 1;
				condition = "(alive this) && (driver (vehicle player) == player) && (vehicle player in vehicles)";
				statement = "[player,[],true,true] call meu_fnc_vehicleLoadout;";
			};
			class rifle: clearCargo
			{
				displayName = MEU_RED_NAME(Rifle Loadout);
				statement = MEU_VICLOADOUT(infantry_rifle.sqf);
			};
			class weapons: clearCargo
			{
				displayName = MEU_RED_NAME(Weapons Loadout);
				statement = MEU_VICLOADOUT(infantry_mg.sqf);
			};
			class assault: clearCargo
			{
				displayName = MEU_RED_NAME(Assault Loadout);
				statement = MEU_VICLOADOUT(infantry_assault.sqf);
			};
			class bas: clearCargo
			{
				displayName = MEU_RED_NAME(Medical Loadout);
				statement = MEU_VICLOADOUT(bas.sqf);
			};
			class marauder: clearCargo
			{
				displayName = MEU_RED_NAME(Marauder Loadout);
				statement = MEU_VICLOADOUT(marauder.sqf);
			};
		};
	};