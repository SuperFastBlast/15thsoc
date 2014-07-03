class meu_moduleTeleportAttributes: Module_F
	{
		scope = 2;
		displayName = "Teleport Object Intel";
		icon = "\a3\Modules_f\data\iconSectorDummy_ca.paa";
		category = "meu_3mModules";
		function = "meu_fnc_teleportAttributes";
		functionPriority = 1;
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
			class meu_moduleTeleport_name
  			{
				displayName = "Name"; // Argument label
				description = "Name of location for other locations"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = "";

			};
 			class meu_moduleTeleport_returning
  			{
				displayName = "Return Actions";
				description = "Actions available for return teleport";
				typeName = "NUMBER";
				class values
				{
					class 1	{name = "True"; value = 1; default = 1;};
					class 2	{name = "False"; value = 2;};
				};
			}; 
 			class meu_moduleTeleport_hide
  			{
				displayName = "Hide Object";
				description = "Hide Object At Location";
				typeName = "NUMBER";
				class values
				{
					class 0	{name = "False"; value = 0; default = 1;};
					class 1	{name = "True"; value = 1;};
				};
			};
			class meu_moduleTeleport_damage
  			{
				displayName = "Damage";
				description = "Allow Damage";
				typeName = "NUMBER";
				class values
				{
					class 0	{name = "False"; value = 0;};
					class 1	{name = "True"; value = 1; default = 1;};
				};
			}; 
			class meu_moduleTeleport_Markers
  			{
				displayName = "Markers";
				description = "Markers On Object Locations";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "-"; value = 0; default = 1;};
					class 1	{name = "False"; value = 1;};
					class 2 {name = "Black"; value = 2;};
					class 3 {name = "Red"; value = 3;};
					class 4 {name = "Blue"; value = 4;};
					class 5 {name = "Green"; value = 5;};
				};
			}; 
		};

		class ModuleDescription: ModuleDescription
		{
			description[] = {
				"Attribute Module for the Teleport Network",
				"Sync to one of the Objects and adjust options",
				"Teleport Network by Fight9"
			};
			sync[] = {"Object1"};
			optional = 1;
			displayName = "Teleport Object Intel";
	 
			class Object1
			{
				description = "Objects in the Teleport Network to be adjusted";
				displayName = "Any Object";
				icon = "\A3\ui_f\data\map\vehicleicons\iconObject_circle_ca.paa"; 
				side = 4;
				duplicate = 1;
				sync[] = {"meu_moduleTeleport"};
			};

			class meu_moduleTeleport{
				dispayName = "Teleport Network Control";
			};
		};
	};