class meu_moduleGroupID: Module_F
	{
		scope = 2;
		displayName = "Group ID/Radio";
		icon = "\a3\Modules_F_Curator\Data\iconEndMission_ca.paa";
		category = "meu_3mModules";
		function = "meu_fnc_groupID";
		functionPriority = 0;
		isGlobal = 2;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments : ArgumentsBaseUnits {
			class Units : Units {};
			
			class groupID {
				displayName = "Group ID";
				description = "Call Sign For Group";
				typeName = "STRING";
				defaultValue = "Haymaker 2-1-A";
			};
			class radio {
				displayName = "Radio";
				description = "Default SW Radio Frequency (Not Applied If Blank)";
				typeName = "STRING";
				defaultValue = "";
			};
			class disable
  			{
				displayName = "DisableAI";
				description = "DisableAI ""MOVE""";
				typeName = "NUMBER";
				class values
				{
					class 1	{name = "True"; value = 1; default = 1;};
					class 2	{name = "False"; value = 2;};
				};
			};
		};

		class ModuleDescription
		{
			description[] = {
				"Sync the module with any unit",
				"If single unit is selected, group name will be applied to the whole group",
				"If trigger is used, units will have a short time to move before disableAI takes effect",
				"Group ID / Radio by Fight9"
			};
			sync[] = {"AnyPerson","EmptyDetector"};
			
			class AnyPerson {
				duplicate = 1;
				icon = "iconMan";
				displayName = "Any Unit";
			};
			class EmptyDetector {
				duplicate = 1;
				optional = 1;
			};
		};
	};