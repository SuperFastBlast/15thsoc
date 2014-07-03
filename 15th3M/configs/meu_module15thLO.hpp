class meu_Module15thLO: Module_F
	{
		scope = 2; 
		displayName = "Unit Loadouts";
		icon = "\a3\Modules_F_Curator\Data\iconChemlight_ca.paa";		
		category = "meu_3mModules";
		function = "meu_fnc_ab15thLO";
		functionPriority = 0;
		isGlobal = 2;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
 		class Arguments: ArgumentsBaseUnits
		{
			class Units {
				displayName = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_0";
				description = "";
				
				class values {
					class Objects {
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Objects_0";
						value = 0;
						default = 1;
					};
					
					class ObjectsAndGroups {
						name = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_ObjectsAndGroups_0";
						value = 1;
					};
				};
			};
			class LoadoutHQ
  			{
				displayName = "HQ/BAS";
				description = "HQ/BAS Loadouts";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "-"; value = 0; default = 1;};
					class 1	{name = "MEU HQ"; value = 1;};
					class 2	{name = "RTO"; value = 2;};
					class 3	{name = "MEU BAS Corpsman"; value = 3;};
				};
			};
 			class LoadoutInf
  			{
				displayName = "Infantry";
				description = "Infantry Loadouts";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "-"; value = 0; default = 1;};
//					class 1	{name = "HQ"; value = 1;};
					class 2	{name = "Squad Lead"; value = 2;};
					class 3	{name = "Fireteam Lead"; value = 3;};
					class 4 {name = "Rifleman"; value = 4;};
					class 5	{name = "Automatic Rifleman"; value = 5;};
					class 6	{name = "Asst. Automatic Rifleman"; value = 6;};
					class 7	{name = "Designated Marksman"; value = 7;};
				};
			};

			class LoadoutWep
  			{
				displayName = "Weapons";
				description = "Weapons Loadouts";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "-"; value = 0; default = 1;};
					class 1	{name = "MG Squad Leader"; value = 1;};
					class 2	{name = "MG Team Leader"; value = 2;};
					class 3	{name = "MG Gunner"; value = 3;};
					class 4 {name = "MG Ammo Man"; value = 4;};
					class 5	{name = "Assault Squad Leader"; value = 5;};
					class 6	{name = "Assault Team Leader"; value = 6;};
					class 7	{name = "Assault Ammoman"; value = 7;};
				};
			};
			class LoadoutAce
  			{
				displayName = "Ace";
				description = "Ace Loadouts";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "-"; value = 0; default = 1;};
					class 1	{name = "ACE Fixed Pilot"; value = 1;};
					class 2	{name = "ACE Rotary Crew"; value = 2;};
					class 3	{name = "ACE Rotary Pilot"; value = 3;};
				};
			};
			class LoadoutCrew
  			{
				displayName = "Crewmen";
				description = "Gator/Titan/Artillery Crew Loadouts";
				typeName = "NUMBER";
				class values
				{
					class 0 {name = "-"; value = 0; default = 1;};
					class 1	{name = "Artillery Crew"; value = 1;};
					class 2	{name = "Artillery RTO"; value = 2;};
					class 3	{name = "Gator Crew Chief Commander"; value = 3;};
					class 4 {name = "Gator Crewman"; value = 4;};
					class 5	{name = "Titan Commander"; value = 5;};
					class 6	{name = "Titan Crewman"; value = 6;};
				};
			};
		}; 
		class ModuleDescription: ModuleDescription
		{
			description[] = {
				"Sync the module with any unit to give them that loadout",
				"If two options are selected, the lower one will be used",
				"Loadouts by 15th MEU / From 15thAmmo by Riouken"
			};
			sync[] = {"AnyPerson","AnyPerson","AnyPerson"};
			
			class AnyPerson {
				duplicate = 1;
				icon = "iconMan";
				displayName = "Any Unit";
			};
		};
	};