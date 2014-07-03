class meu_moduleAreaCleanUp: Module_F
	{
		scope = 2;
		displayName = "Area Clean Up";
		icon = "\a3\Modules_F_Curator\Data\iconSkiptime_ca.paa";
		category = "meu_3mModules";
		function = "meu_fnc_gearCleanUp";
		functionPriority = 0;
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments
		{
			class size
  			{
				displayName = "Size"; // Argument label
				description = "Radius of Clearing from Module Center"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = "100";

			};
 			class refresh
  			{
				displayName = "Refresh";
				description = "Time Between Clearings - In Seconds";
				typeName = "NUMBER";
				defaultValue = "300";
			}; 
		};

		class ModuleDescription
		{
			description[] = {
				"Area Clean Up will delete small object from the ground",
				"The module will be the center of the radius (size) in the options",
				"It does not need to be synced",
				"Area Clean Up script by Rareks"
			}; 
			position = 1;
		};
	};