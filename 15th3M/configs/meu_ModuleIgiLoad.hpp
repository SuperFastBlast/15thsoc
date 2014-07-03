class meu_ModuleIgiLoad : Logic
	{
		displayName = "IgiLoad";
		icon = "\a3\Modules_F_Curator\Data\iconCuratorSetCosts_ca.paa";
		category = "meu_3mModules";
		vehicleClass = "Modules";

		class Eventhandlers {
			init = "_igiload = execVM '15th3M\IgiLoad\IgiLoadInit.sqf';";
		};
		class ModuleDescription
		{
			description[] = {
				"IgiLoad can be placed anywhere",
				"It does not need to be synced",
				"IgiLoad script by Igi_PL"
			};
			sync[] = {};
			
		};
	};