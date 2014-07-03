class meu_moduleRepetitiveCleanup: Module_F
	{
		scope = 2;
		displayName = "Repetitive Cleanup (Map)";
		icon = "\a3\Modules_F_Curator\Data\iconLightning_ca.paa";
		category = "meu_3mModules";
		function = "meu_fnc_repetitiveCleanup";
		functionPriority = 0;
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments 
		{			
			class bodies {
				displayName = "Dead Bodies";
				description = "Minutes to delete dead bodies (0 means don't delete)";
				typeName = NUMBER;
				defaultValue = "1";
			};
			class deadVehicles {
				displayName = "Dead Vehicles";
				description = "Minutes to delete dead vehicles (0 means don't delete)";
				typeName = NUMBER;
				defaultValue = "5";
			};
			class immVehicles {
				displayName = "Immobile Vehicles";
				description = "Minutes to delete immobile vehicles (0 means don't delete)";
				typeName = NUMBER;
				defaultValue = "3";
			};
			class weapons {
				displayName = "Weapons";
				description = "Minutes to delete dropped weapons (0 means don't delete)";
				typeName = NUMBER;
				defaultValue = "2";
			};
			class explosives {
				displayName = "Explosives";
				description = "Minutes to delete planted explosives (0 means don't delete)";
				typeName = NUMBER;
				defaultValue = "10";
			};
			class smokes {
				displayName = "Smokes & Chemlights";
				description = "Minutes to delete dropped smokes/chemlights (0 means don't delete)";
				typeName = NUMBER;
				defaultValue = "0";
			};
		};
		class ModuleDescription
		{
			description[] = {
				"Repetitive Cleanup Module will remove dead/old object from the WHOLE map",
				"It does not need to be synced",
				'use - this setVariable["persistent",true]; - on any objects you want to keep';
				"Repetitive Cleanup script by aeroson"
			}; 
			position = 0;
		};
	};