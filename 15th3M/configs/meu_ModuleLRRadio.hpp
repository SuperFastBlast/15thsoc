class meu_ModuleLRRadio : Logic
	{
		displayName = "TFAR Settings";
		icon = "\a3\Modules_F_Curator\Data\iconRadio_ca.paa";
		category = "meu_3mModules";
		vehicleClass = "Modules";

		class Eventhandlers {
			init = "[] call meu_fnc_TFAR";
		};
		class ModuleDescription
		{
			description[] = {
				"15th TFAR can be placed anywhere",
				"It does not need to be synced",
				"Will stop automatic replacement of backpacks",
				"Will give units 152 for rifleman radios";
				"Task Force Radio by [TF]Nkey"
			}; 
			sync[] = {}; 
			
		};
	};