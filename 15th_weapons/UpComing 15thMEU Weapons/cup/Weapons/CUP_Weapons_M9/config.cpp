
class CfgPatches
{
	class CUP_Weapons_M9
	{
		units[] = {};
		weapons[] = {"CUP_muzzle_snds_M9","CUP_hgun_M9"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_M882_9mm"};
	};
};
class CfgAmmo
{
	class B_9x21_Ball;
	class B_MEU_M882_9mm: B_9x21_Ball
   	 {
   	    hit = 9;
        cartridge = "FxCartridge_65_caseless";
        cost = 100;
	initSpeed = 381;
        typicalSpeed = 381;
        airFriction = -0.0014;
        caliber = 1.7;
        deflecting = 45;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 1;
        visibleFire = 7;
        audibleFire = 5;
    };
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class MEU_M882_9mm: 16Rnd_9x21_Mag
    	{
	mass = 1;
        scope = 2;
        ammo = "B_MEU_M882_9mm";
        count = 15;
        displayName = "M882 9mm Mag";
        picture = "\CUP\Weapons\CUP_Weapons_M9\data\ui\m_m9_beretta_ca.paa";
        descriptionshort = "Caliber: 9x19 mm STANAG<br />Rounds: 15<br />Used in: Beretta M9";
        initSpeed = 381;
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class CUP_muzzle_snds_M9: ItemCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "Silencer (M9)";
		picture = "\CUP\Weapons\CUP_Weapons_M9\data\ui\gear_snds_m9_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_M9\CUP_M9_silencer.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1.1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
				typicalSpeed = 1.2;
				airFriction = 1.2;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		intertia = 0.2;
	};
	class CUP_hgun_M9: Pistol_Base_F
	{
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		selectionFireAnim = "muzzleFlash";
		jsrs_soundeffect = "JSRS2_Distance_Effects_M9";
		scope = 2;
		initSpeed = 381;
  		inertia = 0.2;
  		dexterity = 1.8;
		model = "\CUP\Weapons\CUP_Weapons_M9\CUP_M9.p3d";
		modelOptics = "-";
		picture = "\CUP\Weapons\CUP_Weapons_M9\data\ui\gear_m9_X_ca.paa";
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.2238721,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.2238721,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.2238721,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
    closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
    closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s1",0.794328,1,700};
			begin2[] = {"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s2",0.794328,1,700};
			begin3[] = {"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s3",0.794328,1,700};
			begin4[] = {"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s4",0.794328,1,700};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		class SilencedSound: BaseSoundModeType
		{
    begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_01",1.0,1,1200};
    begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_02",1.0,1,1200};
    begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_03",1.0,1,1200};
    soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M9\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_M9\data\sfx\Dry",1,1,35};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		reloadtime = 0.13;
		reloadAction = "GestureReloadPistol";
		magazines[] = {"MEU_M882_9mm"};
		displayName = "M9 Beretta";
		class Library
		{
			libTextDesc = "M9 Semiautomatic Pistol";
		};
		descriptionShort = "M9 Beretta";
		autoFire = 0;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M9"};
			};
			class PointerSlot{};
			mass = 25;
		};
	};
};
