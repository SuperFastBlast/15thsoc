class meu_moduleVehicleRespawn: Module_F
	{
		scope = 2;
		displayName = "Vehicle Respawn";
		icon = "\a3\Modules_F_Curator\Data\iconRespawnTickets_ca.paa";
		category = "meu_3mModules";
		function = "meu_fnc_vehicleRespawn";
		functionPriority = 1;
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments : ArgumentsBaseUnits {
			class Units 
			{
				displayName = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_0";
				description = "";
				
				class values 
				{
					class Objects 
					{
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Objects_0";
						value = 0;
					};
				};
			};
			
			class delay {
				displayName = "Delay";
				description = "Respawn Delay";
				typeName = NUMBER;
				defaultValue = "30";
			};
			class deserted {
				displayName = "Deserted";
				description = "Time Until Deserted Vehicle Respawns (0 = Disabled)";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class respawns {
				displayName = "Respawns";
				description = "Number Of Possible Respawns (0 = Infinite)";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class effect
  			{
				displayName = "Effect";
				description = "Special Explosion Effect";
				typeName = NUMBER;
				class values
				{
					class 0 {name = "True"; value = 0;};
					class 1	{name = "False"; value = 1; default = 1;};
				};
			};
			class Dynamic
  			{
				displayName = "Dynamic";
				description = "Respawn Where Destroyed. If False, Starting Position Is Used.";
				typeName = NUMBER;
				class values
				{
					class 0 {name = "True"; value = 0;};
					class 1	{name = "False"; value = 1; default = 1;};
				};
			};
		};

		class ModuleDescription
		{
			description[] = {
				"Sync the module to any vehicle to enable respawn",
				"Simple Vehicle Respawn by Tophe"
			};
			sync[] = {"AnyVehicle","AnyVehicle"}; 
			
			class AnyVehicle {
				duplicate = 1;
				icon = "iconCar";
				side = 4;
				displayName = "Any vehicle"
			};
		};
	};