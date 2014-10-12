class CfgPatches {
	class meu_Nocs {
		units[] = {};
		weapons[] = {meu_MX2A_base};
		requiredVersion = 1.00;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};


class CfgVehicles
{
//inhertance classes
class NATO_BOX_BASE;
class Item_Base_F;
//mx2a box for testing
		class MX2A_box: NATO_Box_Base
		{
			scope = 2;
			accuracy = 1000;
			side = 1;
			faction = "blu_f";
			displayName = "MX2A testing box";
			model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		
		


				class TransportWeapons
				{
					class meu_MX2A_tan
					{
						weapon = "meu_MX2A_tan";
						count = 50;
					};
					class meu_MX2A_olive
					{
						weapon = "meu_MX2A_olive";
						count = 50;
					};
				};
		};		
	



//some definition of the iteam
		class Item_MX2A: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_Rangefinder0";
		author = "$STR_A3_Bohemia_Interactive";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class meu_MX2A_base
			{
				name = "MX2A";
				count = 1;
			};
		};
	};




};//end cfgVehicles

class CfgWeapons
{
	//external classes
	class Binocular;

	// definitions of the functions of the monocular
	class meu_MX2A_tan: Binocular
	{
		author = "15th MEU ModTeam";
		_generalMacro = "Laserdesignator";
		model = "MX2A\meu_MX2A_tan.p3d";
		modelOptics = "\A3\Weapons_F_beta\Binocular\lasermarker_optics";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "MX-2A tan";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Laserdesignator1";
		picture = "\A3\Weapons_F\Data\UI\gear_lasermarker_CA.paa";
		cursor = "laserDesignator";
		cursorAim = "EmptyCursor";
		cursorAimOn = "EmptyCursor";
		showSwitchAction = 1;
		simulation = "weapon";
		forceOptics = 0;
		class WeaponSlotsInfo
		{
			mass = 20;
		};
		Laser = 0;
		descriptionShort = "$STR_DSS_Laserdesignator";
		weaponInfoType = "RscOptics_LaserDesignator";
		visionMode[] = {"TI"};
		thermalMode[] = {0,1};
		opticsZoomMin = 0.22;
		opticsZoomMax = 0.20;
		opticsZoomInit = 0.42;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
	};
	class meu_MX2A_olive : meu_MX2a_tan
	{
	model = "MX2A\meu_MX2A_olive.p3d";	
	displayName = "MX-2A Olive";
	};
};//end cfgweapons

