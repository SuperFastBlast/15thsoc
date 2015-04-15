
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
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class CUP_Weapon_hgun_M9: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "A3\Weapons_F\DummyPistol_Single.p3d";
		mapSize = 0.4;
		displayName = "M9";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class CUP_hgun_M9
			{
				weapon = "CUP_hgun_M9";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MEU_M882_9mm
			{
				magazine = "MEU_M882_9mm";
				count = 1;
			};
		};
	};
	class CUP_Item_muzzle_snds_M9: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "A3\Weapons_F\DummyItem.p3d";
		mapSize = 0.4;
		displayName = "Silencer (M9)";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class CUP_muzzle_snds_M9
			{
				name = "CUP_muzzle_snds_M9";
				count = 1;
			};
		};
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
        model = "A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 1;
        visibleFire = 7;
        audibleFire = 5;
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 12;
		suppressionRadiusHit= 4;
		suppressionRadiusBulletClose= 8;
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
		model = "CUP\Weapons\CUP_Weapons_M9\CUP_M9_silencer.p3d";
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
		model = "CUP\Weapons\CUP_Weapons_M9\CUP_M9.p3d";
		modelOptics = "-";
		reloadAction = "GestureReloadPistol";
		magazines[] = {"MEU_M882_9mm"};
		displayName = "M9 Beretta";
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M9\data\sfx\Reload",1,1,35};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.2238721,1,20};
		recoil = "recoil_pistol_rook40";
		picture = "\CUP\Weapons\CUP_Weapons_M9\data\ui\gear_m9_X_ca.paa";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
			{
		closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
		closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.1622777,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.1622777,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.1622777,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.4125376,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		reloadtime = 0.13;
		};
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
