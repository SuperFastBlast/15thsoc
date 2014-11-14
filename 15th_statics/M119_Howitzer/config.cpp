#define PREFIX meu_m119
#define COMPONENT main
#define MAJOR 2
#define MINOR 0
#define PATCHLVL 0
#define BUILD 1
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define REQUIRED_VERSION 1.0
#include "\x\cba\addons\main\script_macros_common.hpp"


//#include "BasicDefines.hpp"//added
#include "CrewAnimations.hpp"//added
class DefaultEventhandlers;//added

class CfgPatches
{
	class PREFIX 
	{
		units[] = {"M119"};
		requiredAddons[] = {"CBA_MAIN"};
		requiredVersion = REQUIRED_VERSION;
		versionDesc = "cTab";
		versionAct = "";
		VERSION_CONFIG;
		author[] = {"15th Mod Team"};
		authorUrl = "";
	};
};



//Not needed right now.
/*
class CfgAmmo
{
    class Sh_120mm_HE;
    class meu_sh_105mm_HE : Sh_120mm_HE
    {
	explosive = 0.7;
	hit = 310;
	indirecthit = 40;
	indirecthitrange = 7;
	typicalspeed = 1300;

    };
    
};


class CfgMagazines
{
    class 30Rnd_120mm_HE_shells;
    class 30rd_105mm_meu_HE : 30Rnd_120mm_HE_shells
    {
	ammo = "Sh_120mm_HE";
	count = 30;
	displayname = "HE 105mm Shells";
	displaynameshort = "HE 105mm";
	initspeed = 1350;
	maxleadspeed = 290;
    };

    class 15rd_105mm_meu_Smoke : 30rd_105mm_meu_HE
    {
	ammo = "Smoke_120mm_AMOS_White";
	count = 15;
	displayname = "Smoke (White) 105mm";
	displaynameshort = "White Smoke";

    };

    class 15rd_105mm_meu_Guided : 30rd_105mm_meu_HE
    {
	ammo = "Sh_155mm_AMOS_guided";
	count = 15;
	displayname = "Guided 105mm";
	displaynameshort = "Guided";

    };

    class 2rd_105mm_meu_LaserGu : 30rd_105mm_meu_HE
    {
	ammo = "Sh_155mm_AMOS_LG";
	count = 2;
	displayname = "Laser Guided 105mm";
	displaynameshort = "Laser Guided";

    };
    
    class 5rd_105mm_meu_Cluster : 30rd_105mm_meu_HE
    {
	ammo = "Cluster_155mm_AMOS";
	count = 5;
	displayname = "Cluster Round 105mm";
	displaynameshort = "Cluster Round";

    };
};

//Not needed right now, but will config later.
/*
class CfgWeapons
{
    class mortar_155mm_AMOS;
    class meu_m119_howitzer : mortar_155mm_AMOS
    {
	cursoraim = "EmptyCursor";
	displayname = "M119 Howitzer";
        magazines[]={"30rd_105mm_meu_HE","15rd_105mm_meu_Smoke","15rd_105mm_meu_Guided","2rd_105mm_meu_LaserGu","5rd_105mm_meu_Cluster"};
    };
};
*/





class CfgVehicles
{
	class LandVehicle;	
	class StaticWeapon: LandVehicle
	{
		class Turrets;		
	};


	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};

	};


	class M119: StaticMortar
	{
   		htMin = 1;
   		htMax = 480;
   		afMax = 0;
   		mfMax = 0;
   		mFact = 1;
   		tBody = 450;
		displayname = "M119 Howitzer";
		vehicleClass = "Static";//added
		side = 3;//West
		//crew =
	    faction = "BLU_F";//added
		scope = 2; //added
   		//model and Icon 
		model = "\M119_Howitzer\m119.p3d";   				
		icon = "\M119_Howitzer\data\Icon\icomap_m119_ca.paa";//added
		artilleryScanner = 1;
		ARTY_IsArtyVehicle = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"M119_Howitzer\data\m119_co.paa"};
		muzzleend = "gun_chamber";
		muzzlepos = "gun_muzzle";


		class AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "mortar_155mm_AMOS";
            };
        };
		
		/*
		class UserActions
		{
			class pushGun
			{
				displayName="Push Weapon";
				displayNameDefault="Push Weapon";
				position = "";
				radius=3;
				onlyForPlayer=true;
				condition=true;
				statement="_this call meu_fnc_m119_push;";
			};

		};		
		*/
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner= "pos_gunner";
				memoryPointsGetInGunnerDir= "pos_gunner_dir";				
				magazines[]= {"32Rnd_155mm_Mo_shells", "6Rnd_155mm_Mo_smoke", "2Rnd_155mm_Mo_guided", "2Rnd_155mm_Mo_LG", "6Rnd_155mm_Mo_mine", "2Rnd_155mm_Mo_Cluster", "6Rnd_155mm_Mo_AT_mine"};
				cameradir = "look";
				elevationmode = 0;
				gunneraction = "Mortar_Gunner";
				gunnerforceoptics = 1;
				gunneropticsmodel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				turretinfotype = "RscWeaponRangeArtillery";
				weapons[] = {"mortar_155mm_AMOS"};


					class ViewOptics
					{
						initanglex = 0;
						initangley = 0;
						initfov = 0.174;
						maxanglex = 30;
						maxangley = 100;
						maxfov = 0.14;
						maxmovex = 0;
						maxmovey = 0;
						maxmovez = 0;
						minanglex = -30;
						minangley = -100;
						minfov = 0.0077778;
						minmovex = 0;
						minmovey = 0;
						minmovez = 0;
						visionmode[] = {"Normal", "NVG"};
					};

			};
		};		
	};
		
		

	class B_supplyCrate_F;
	class meu_m119_ammo_box : B_supplyCrate_F {
		displayname = "[15th] M119 Ammo Box";
		icon = "iconCrateLarge";
		//model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		scope = 2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportammo = 200000;

		class TransportItems {

		};
	
	
		class TransportMagazines {
			
		};
		
		class TransportWeapons {};
	
	};
	

		
		
		
	//class M119_Base: M119
	//{
	//};
};
class Extended_Init_EventHandlers {

	class M119
	{
		M119init = "[_this select 0] execVM '\M119_Howitzer\scripts\obj_init.sqf';";
	};

};

class Extended_PostInit_EventHandlers
{
	class PREFIX
	{
		//init = "[_this select 0] execVM '\M119_Howitzer\scripts\obj_init.sqf';";
		clientInit = QUOTE(call COMPILE_FILE2(\M119_Howitzer\scripts\client_init.sqf));

		//serverInit = QUOTE(call COMPILE_FILE2(\cTab\server_init.sqf));
	};
};