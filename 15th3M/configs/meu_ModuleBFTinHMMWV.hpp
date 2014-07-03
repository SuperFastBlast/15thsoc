	class meu_ModuleBFTinHMMWV : Logic {
		displayName = "cTab/BFT in HMMWV";
		icon = "\A3\modules_f\data\iconStrategicMapORBAT_ca.paa";
		category = "meu_3mModules";
		vehicleClass = "Modules";
		
		class Eventhandlers {
			init = "_null = [] call meu_fnc_BFTinHMMWV";
		};
		
		class ModuleDescription {
			description[] = {"BFT in HMMWV can be placed anywhere", "It does not need to be synced", "cTab mod by Riouken"};
			sync[] = {};
		};
	};