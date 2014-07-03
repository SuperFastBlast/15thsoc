	class meu_Modulefar_revive : Logic
	{
		displayName = "Farooq's Revive";
		icon = "\a3\Modules_f\data\iconRespawn_ca.paa";
		category = "meu_3mModules";
		vehicleClass = "Modules";

		class Eventhandlers {
			init = "call compileFinal preprocessFileLineNumbers '15th3M\FAR_revive\FAR_revive_init.sqf';";
		};
		
		class ModuleDescription
		{
			description[] = {
				"Farooq's Revive can be placed anywhere",
				"It does not need to be synced",
				"FAR Revive 1.5 by farooqaaa"
			}; 
			sync[] = {};
			
		};
	};