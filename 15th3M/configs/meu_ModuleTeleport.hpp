class meu_moduleTeleport: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Teleport Network";
		icon = "\a3\Missions_F_Curator\data\img\iconMPTypeSectorControl_ca.paa";
		category = "meu_3mModules";

		// Name of function triggered once conditions are met
		function = "meu_fnc_teleportInit";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 5;
		// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isGlobal = 0;
		// 1 for persistent execution (i.e. will be called on every JIPped client). Use with caution, can lead to desync
		isPersistent = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
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
			class meu_moduleTeleport_Distance
  			{
				displayName = "Distance"; // Argument label
				description = "Distance to see action"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class 15m	{name = "15 meters";	value = 15;};
					class 10m	{name = "10 meteres"; value = 10; default = 1;};
					class 5m	{name = "5 meteres"; value = 5;};
				};
			};
 			class meu_moduleTeleport_Color
  			{
				displayName = "Text Color";
				description = "Color of Action Text";
				typeName = "NUMBER";
				class values
				{
					class white	{name = "White"; value = 4; default = 1;};
					class red	{name = "Red";	value = 1;};
					class blue	{name = "Blue"; value = 2;};
					class green	{name = "Green"; value = 3;};
				};
			}; 
			class meu_moduleTeleport_Markers
  			{
				displayName = "Markers";
				description = "Markers On Object Locations";
				typeName = "NUMBER";
				class values
				{
					class 1	{name = "False"; value = 0; default = 1;};
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
				"The central module for the Teleport Network",
				"Sync to any object to add it to the network",
				"Action/Marker naming comes from editor name",
				"Underscores (_) will be replaced with spaces",
				"Teleport Network by Fight9"
			};
			sync[] = {"Object1","AnyVehicle","AnyObject"};
			displayName = "Teleport Network Control";
	 
			class Object1
			{
				description = "Sync to Multiple Objects to create the network";
				displayName = "Any Object";
				icon = "\A3\ui_f\data\map\vehicleicons\iconObject_circle_ca.paa"; 
				side = 4;
				duplicate = 1;
				sync[] = {"meu_moduleTeleportAttributes"};
			};
			class AnyVehicle
			{
				duplicate = 1;
				side = 4;
				icon = "iconCar";
				description = "Sync to Multiple Objects to create the network";
				displayName = "Any Object"; 
			};
			class AnyObject
			{
				duplicate = 1;
				side = 4;
				description = "Sync to Multiple Objects to create the network";
				displayName = "Any Object"; 
				icon = "iconCrateSupp"; 
			};
			class meu_moduleTeleportAttributes
			{
				optional = 1;
				duplicate = 1;
				displayName = "Teleport Object Intel";
			};
		};
	};