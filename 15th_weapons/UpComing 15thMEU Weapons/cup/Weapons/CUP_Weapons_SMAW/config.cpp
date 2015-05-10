
class CfgPatches
{
	class CUP_Weapons_SMAW
	{
		units[] = {};
		weapons[] = {"CUP_optic_SMAW_NScope","CUP_optic_SMAW_Scope","CUP_launch_Mk153Mod0"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","A3_Weapons_F"};
		magazines[] = {"CUP_SMAW_HEDP_M_N","CUP_SMAW_HEAA_M_N"};
	};
};
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class CUP_Weapon_launch_Mk153Mod0: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyLauncher_Single.p3d";
		mapSize = 0.8;
		displayName = "Mk153 Mod 0 SMAW";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class CUP_launch_Mk153Mod0
			{
				weapon = "CUP_launch_Mk153Mod0";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CUP_SMAW_HEAA_M
			{
				magazine = "CUP_SMAW_HEAA_M_N";
				count = 1;
			};
			class CUP_SMAW_HEDP_M
			{
				magazine = "CUP_SMAW_HEDP_M_N";
				count = 1;
			};
		};
	};
	class CUP_Item_optic_SMAW_Scope: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyItem.p3d";
		mapSize = 0.4;
		displayName = "SMAW Optical Scope";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class CUP_optic_SMAW_Scope
			{
				name = "CUP_optic_SMAW_Scope";
				count = 1;
			};
			class CUP_optic_SMAW_NScope
			{
				name = "CUP_optic_SMAW_NScope";
				count = 1;
			};
		};
	};
};
class CfgAmmo
{
	class RocketBase;
	class CUP_R_SMAW_HEDP_N: RocketBase	// Init speed 220,1.6s @ 250m - probably classified
	{
		audiblefire = 16;
		airfriction = 0.0;
		airlock = 0;
		allowagainstinfantry = 1;
		cost = 200;
		cratereffects = "ATMissileCrater";
		effectsmissile = "EmptyEffect";
		effectsmissileinit = "";
		explosioneffects = "ATMissileExplosion";
		fusedistance = 15;
		hit = 250;
		indirecthit = 75;
		indirecthitrange = 10;
//		inittime = 0.02;
		irlock = 0;
		maneuvrability = 0;
		maxSpeed = 220;//750; CCP
		model = "\CUP\Weapons\CUP_Weapons_SMAW\CUP_smaw_rocket_inflight.p3d";
		sideAirFriction = 0;	//0.22 CCP
		simulationstep = 0.02;
		thrust = 0; //1; //610; CCP
		thrusttime = 0.1;
		timetolive = 6;
		visiblefire = 28;
		whistledist = 24;
		dangerRadiusHit= -1;
		suppressionRadiusHit= 25;
		class CamShakeExplode
		{
			distance = "((5 + 55^0.5)*8)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(55 * 0.2)";
		};
		class CamShakeHit
		{
			distance = 1;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			power = 110;
		};
		class CamShakeFire
		{
			distance = "((20^0.5)*8)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(20^0.25)";
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class CUP_R_SMAW_HEAA_N: CUP_R_SMAW_HEDP_N
	{
		cost = 500;
		allowagainstinfantry = 0;
		cratereffects = "ATRocketCrater";
		explosioneffects = "ATRocketExplosion";
		hit = 750;
		indirecthit = 25;
		indirecthitrange = 3;
		whistledist = 2;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;

	// ******************
	// * Launchers *****
	// ***************

	class CUP_SMAW_HEDP_M_N: CA_LauncherMagazine
	{
		author = "CUP";
		scope = 2;
		count = 1;
		ammo = "CUP_R_SMAW_HEDP_N";
		descriptionshort = "Range: 0 - 500 m <br/>Type: high explosive dual-purpose <br/>Used in: SMAW";
		displayname = "Mk3 Mod 0 HEDP SMAW";
		displaynameshort = "HEDP";
		initspeed = 220;
		mass = 125;
		model = "\CUP\Weapons\CUP_Weapons_SMAW\CUP_smaw_rocket.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_SMAW\data\UI\M_SMAW_CA.paa";
	};
	
	class CUP_SMAW_HEAA_M_N: CUP_SMAW_HEDP_M_N
	{
		ammo = "CUP_R_SMAW_HEAA_N";
		descriptionshort = "Range: 0 - 500 m <br/>Type: high explosive anti-armor <br/>Used in: SMAW";
		displayname = "Mk6 Mod 0 HEAA SMAW";
		displaynameshort = "HEAA";
	};
};


class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_optic_SMAW_Scope: ItemCore
	{
		author = "CUP";
		scope = 2;
		displayName = "SMAW Optical Scope";
		picture = "\CUP\Weapons\CUP_Weapons_SMAW\data\ui\gear_acco_SMAW_optic_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_SMAW\CUP_SMAWK_Scope.p3d";
		descriptionShort = "Scope specifically used on the SMAW";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_SMAW\CUP_optika_TOW.p3d";
			class OpticsModes
			{
				class ShortDot
				{
					opticsID = 1;
					useModelOptics = true;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					distanceZoomMin = 50;
					distanceZoomMax = 500;

					opticsZoomInit = 0.0625;
					memoryPointCamera = "opticView";
					opticsFlare = true;
					opticsDisablePeripherialVision = true;

					visionMode[] = {"Normal"};//vison modes
					// discretefov[] = {0.071945,0.071945,0.071945,0.071945};
      					discreteDistance[] = {50,100,150,200,250, 300, 350, 400, 450, 500};
       					discreteDistanceInitIndex = 0;
					discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7", "eye_8", "eye_9","eye_10"};
					// memoryPointCamera = "eye";
					cameraDir = "look";
				};
			};
		};
	};
	class CUP_optic_SMAW_NScope: CUP_optic_SMAW_Scope
	{
		scope = 2;
		displayName = "SMAW Optical Scope (NIGHT)";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_SMAW\CUP_optika_TOW.p3d";
			class OpticsModes
			{
				class ShortDot
				{
					opticsID = 1;
					useModelOptics = true;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					distanceZoomMin = 50;
					distanceZoomMax = 500;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "opticView";
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					visionMode[] = {"NVG"};//vison modes
					// discretefov[] = {0.071945,0.071945,0.071945,0.071945};
      					discreteDistance[] = {50,100,150,200,250, 300, 350, 400, 450, 500};
       					discreteDistanceInitIndex = 0;
					discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7", "eye_8", "eye_9","eye_10"};
					// memoryPointCamera = "eye";
					cameraDir = "look";
				};
			};
		};
	};

	class CUP_launch_Mk153Mod0: Launcher_Base_F
	{
		author = "CUP";
		scope = 2;
		displayName = "Mk153 Mod 0 SMAW"; //$$STR_DN_M136;

		model = "\CUP\Weapons\CUP_Weapons_SMAW\CUP_SMAW.p3d";

		picture = "\CUP\Weapons\CUP_Weapons_SMAW\data\ui\gear_SMAW_X_ca.paa";
		UiPicture = "\a3\weapons_f\data\ui\icon_at_ca.paa";

		modelOptics = "-";

		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		cursorAim = "\a3\weapons_f\data\clear_empty";
		//cursor = "missile"; //"\a3\weapons_f\data\clear_empty.paa";
		cursorSize = 1;
		reloadAction = "ReloadRPG";

		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_SMAW\Data\Anim\SMAW.rtm"};

		/*opticsZoomMin = 0.0277;
		opticsZoomMax = 0.7;
		opticsZoomInit = 0.0625;*/
		magazines[] = {"CUP_SMAW_HEAA_M_N","CUP_SMAW_HEDP_M_N"};
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		sounds[] = {"StandardSound"};

        //JSRS3 compability
        jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";

        AGM_Backblast_Angle = 60;
    	AGM_Backblast_Range = 30;
    	AGM_Backblast_Damage = 3;

		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CUP\Weapons\CUP_Weapons_smaw\data\sfx\SMAW_S1",10,1,1300};
			begin2[] = {"CUP\Weapons\CUP_Weapons_smaw\data\sfx\SMAW_S2",10,1,1300};
			begin3[] = {"CUP\Weapons\CUP_Weapons_smaw\data\sfx\SMAW_S3",10,1,1300};
			begin4[] = {"CUP\Weapons\CUP_Weapons_smaw\data\sfx\SMAW_S4",10,1,1300};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_smaw\data\sfx\reload",1,1,35};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.17782794,1,15};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_smaw\data\sfx\fly",0.31622776,1.5,900};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
		recoil = "recoil_single_nlaw";

		weaponInfoType = "RscWeaponZeroing";
      		discreteDistance[] = {100};
       		discreteDistanceInitIndex = 0;
		discreteDistanceCameraPoint[] = {"eye_1"};
		cameraDir = "look";

		value = 20;
		canLock = 0;

		minRange = 20;
		midRange = 250;
		maxRange = 500;
		class Library {libTextDesc = "REPLACE ME";};
		descriptionShort = "Mk153 Mod 0 SMAW";
		aiRateOfFire = 10;
		aiRateOfFireDistance = 250;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 165;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"CUP_optic_SMAW_Scope"};
			};
		};
		inertia = 1.1;
		dexterity = 1.1;
		class ItemInfo
		{
			priority = 3;
		};

		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class LinkedItems
		{
			class LinkedItemsOptics
			{
				slot = "CowsSlot";
				item = "CUP_optic_SMAW_Scope";
			};
		};
	};
};
