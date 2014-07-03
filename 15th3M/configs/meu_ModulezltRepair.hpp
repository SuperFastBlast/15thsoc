class meu_ModulezltRepair : Logic
	{
		displayName = "ZLT Field Repair";
		icon = "\a3\Modules_F_Curator\Data\iconFlare_ca.paa";
		category = "meu_3mModules";
		vehicleClass = "Modules";

		class Eventhandlers {
			init = "[] execVM '15th3M\scripts\zlt_fieldrepair.sqf';";
		};
		class ModuleDescription
		{
			description[] = {
				"ZLT Field Repair can be placed anywhere",
				"It does not need to be synced",
				"Field repair by [STELS]Zealot"
			}; 
			sync[] = {};
			
		};
	};