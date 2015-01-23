
class CfgPatches
{
	class CUP_Weapons_M110
	{
		units[] = {};
		weapons[] = {"CUP_muzzle_snds_M110","CUP_srifle_M110"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_20x762_Mag"};
	};
};
class CfgAmmo
{
	class B_762x51_Ball;
	class B_MEU_M118LR_Ball: B_762x51_Ball
   	{
        hit=15;
	initSpeed = 783;
        typicalSpeed=783;
        caliber=1.05;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
	visibleFire=18;
	visibleFireTime=18;
	audibleFire=16;
	audibleFireTime=10;
    };
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class MEU_20x762_Mag: 30Rnd_556x45_Stanag
    	{
       		ammo = "B_MEU_M118LR_Ball";
	        scope = 2;
		initSpeed = 783;
        	count = 20;
        	descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 20<br />Used in: M110";
        	displayname = "M118LR";
        	picture = "\cup\Weapons\CUP_Weapons_M110\m_m110_ca.paa";
	        mass = 12;
    	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_muzzle_snds_M110: ItemCore
	{
		scope = 2;
		displayName = "Silencer M110";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_H_MG.paa";
		model = "\A3\Weapons_F\Machineguns\M200\lmg_suppressor";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 12;
			class MagazineCoef
			{
				initSpeed = 1.1;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
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
		inertia = 0.2;
	};
	class CUP_srifle_M110: Rifle_Base_F
	{
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "M110";
		initSpeed = 783;
		selectionFireAnim = "muzzleFlash";
		model = "CUP\Weapons\CUP_Weapons_M110\CUP_M110";
		magazines[] = {"MEU_20x762_Mag"};
		picture = "\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_M110_X_CA.paa";
		reloadTime = 2;
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.25118864,1,20};
		modes[] = {"Single"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 154;
			class CUP_PicatinnyTopMountM110: CUP_PicatinnyTopMount{};
			class CUP_PicatinnySideMountM110: CUP_PicatinnySideMount{};
			class MuzzleSlot
			{
				displayName = "Muzzle Slot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M110"};
			};
			class CowsSlot{};
		};
		inertia = 0.7;
		class ItemInfo
		{
			priority = 1;
		};
	AGM_Bipod = 1;
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M110\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_M110\data\sfx\Dry",1,1,35};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"CUP\Weapons\CUP_Weapons_M110\data\sfx\M110_s1",1.3,1,1400};
				begin2[] = {"CUP\Weapons\CUP_Weapons_M110\data\sfx\M110_s2",1.3,1,1400};
				begin3[] = {"CUP\Weapons\CUP_Weapons_M110\data\sfx\M110_s3",1.3,1,1400};
				begin4[] = {"CUP\Weapons\CUP_Weapons_M110\data\sfx\M110_s4",1.3,1,1400};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.085;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.00012;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
		};
		aiRateOfFire = 10;
		aiRateOfFireDistance = 1000;
		class Library
		{
			libTextDesc = "M110";
		};
		descriptionShort = "M110";
	};
	};