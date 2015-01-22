
class CfgPatches
{
	class Mohawk_skins
	{
		units[] = {"CH49_Warhorse"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_02"};
	};
};
class cfgVehicles
{
	class Heli_Transport_02_base_F;
	class CH49_Warhorse: Heli_Transport_02_base_F
	{
		_generalMacro = "B_Heli_Transport_02_base_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		displayName = "CH49 Warhorse";
		crew = "B_Helipilot_F";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"CH49_warhorse\Data\CH49_warhorse.paa","CH49_warhorse\Data\CH49_warhorse2.paa","CH49_warhorse\Data\CH49_warhorse3.paa"};
		typicalCargo[] = {"B_Helipilot_F"};
		availableForSupportTypes[] = {"Drop","Transport"};
		maximumLoad = 10000;
		slingLoadMaxCargoMass = 10000;
		liftForceCoef = 1.5;
	};
};
