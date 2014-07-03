class meu_moduleVAS: Module_F
	{
		scope = 2;
		displayName = "VAS";
		icon = "\a3\Modules_F_Curator\Data\iconPostProcess_ca.paa";
		category = "meu_3mModules";
		function = "meu_fnc_VAS";
		functionPriority = 0;
		isGlobal = 2;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
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
			class config
  			{
				displayName = "Config";
				description = "All Gear or 15th Only";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "All Gear"; value = 0; default = 1;};
					class 1	{name = "15th Approved Gear"; value = 1;};
				};
			};
		};

		class ModuleDescription: ModuleDescription
		{
			description[] = {
				"The VAS Module can be synced with any object",
				"All synced objects will have the action attached",
				"Virtual Ammobox System by Tonic"
			};
			sync[] = {"Object1","AnyObject"};
	 
			class Object1
			{
				description = "Sync to object to add action";
				displayName = "Any Object";
				icon = "\A3\ui_f\data\map\vehicleicons\iconObject_circle_ca.paa"; 
				side = 4;
				duplicate = 1;
			};
			class AnyObject
			{
				description = "Sync to object to add action";
				displayName = "Any Object";
				side = 4;
				duplicate = 1;
				icon = "iconCrateAmmo";
			};

		};
	};	