	class meu_ModulexReload: Module_F 
	{
		mapSize = 1;
		_generalMacro = "Module_xReload";
		scope = 2;
		displayName = "Vehicle Service (x_Reload)";
		icon = "\a3\Missions_F_Gamma\data\img\iconMPTypeSeize_ca.paa";
		category = "meu_3mModules";
//		function = "meu_fnc_x_reload";
		isGlobal = 2;
		isTriggerActivated = 1;

		class Arguments : ArgumentsBaseUnits {
			class Units {
				displayName = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_0";
				description = "Sync The Module To Any Trigger";
				
				class values {
					class Trigger {
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Trigger_0";
						value = 2;
					};
				};
			};
			class actBy
  			{
				displayName = "Activation"; // Argument label
				description = "Who Can Activate The Trigger"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class 0 {name = "ANY"; value = "ANY"; default = 1;};
					class 1	{name = "WEST"; value = "WEST";};
					class 2	{name = "EAST"; value = "EAST";};
					class 3	{name = "INDEPENDENT"; value = "GUER";};
					class 4	{name = "CIVILIAN"; value = "CIV";};
				};
			};
			class time
  			{
				displayName = "x_Reload Time Factor"; // Argument label
				description = "Time Between Reload Actions"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = "2.01";
			};
		};
		
		class ModuleDescription {
			description[] = {
				"Sync the module with a trigger",
				"All trigger setting will be replaced",
				"x_Reload by Xeno / Updated by Fight9"
			};
			sync[] = {"EmptyDetector"};
			
			class EmptyDetector {
				duplicate = 1;
			};	
		};
		
		class Eventhandlers {
			init = "_ok = _this spawn meu_fnc_x_reloadINIT";
		};		
	};	