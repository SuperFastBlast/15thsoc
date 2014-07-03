	class meu_ModuleVicLO: Module_F
	{
		scope = 2; 
		displayName = "Vehicle Loadouts";
		icon = "\a3\Modules_F_Curator\Data\iconTracers_ca.paa";		
		category = "meu_3mModules";
		function = "meu_fnc_vehicleLoadout";
		functionPriority = 0;
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
 		class Arguments: ArgumentsBaseUnits
		{
			class Units {
				displayName = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_0";
				description = "";
				
				class values {
					class Objects {
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Objects_0";
						value = 0;
						default = 1;
					};
					
					class ObjectsAndGroups {
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_ObjectsAndGroups_0";
						value = 1;
					};
				};
			};
			class clear
			{
				displayName = "Clear Cargo";
				description = "Clear Initial Cargo";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "False"; value = 0; default = 1;};
					class 1	{name = "True"; value = 1;};
				};
			};
			class loadout
  			{
				displayName = "Loadout";
				description = "Select Loadout";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "-"; value = 0; default = 1;};
					class 1	{name = "Infantry"; value = 1;};
					class 2	{name = "Weapons"; value = 2;};
					class 3	{name = "BAS"; value = 3;};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description[] = {
				"Sync the module with any vehicle to give them that loadout",
				"Loadouts by 15th MEU / From 15thAmmo by Riouken"
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