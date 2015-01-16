//this is a frame work for our own factions using the mef mod as a main "supplier" of units and assets.
/*
plans adding the AGM inits (supplied in the folder) for the mission team to just put down the "type of unit" thats needed without worrying about messing up.
create squad (or platoon sized) groups to make unit placement even easier.
over all the goal of this config is to reduece some of the workload on the mission team. 



*/

class CfgPatches
{
    class meu_Units
    {
        units[] = {};
        weapons[] = {"MEF_Wood_MARPAT_LS","MEF_Desert_MARPAT_LS","MEF_Vest_Tan_Infantry","MEF_Vest_Tan_Armor","MEF_Vest_Tan_Medical","MEF_Woodland_Helmet_MICH","MEF_Desert_Helmet_MICH"};
		author[] = {"Mattastic additions by 15th meu mod team"};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F","A3_Weapons_F_Ammoboxes","A3_Air_F_Heli_Heli_Transport_03","mef_mod"};
    };
};

class CfgFactionClasses 
{
	class meu_MEF_units
	{
		displayName = "15th Marine Expeditionary Unit";
		icon = "\mef_mod\mef_icon.paa";	
		priority = 1;
		side = 1;
	};
};

class CfgVehicleClasses 
{
	class MEF_TF_1 
	{
		displayName = "2/4 Marines [WOOD]";
	};

	class MEF_TF_2 
	{
		displayName = "2/4 Marines [Desert]";
	};
};
