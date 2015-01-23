
class CfgPatches
{
	class CUP_Weapons_M107
	{
		units[] = {};
		weapons[] = {"CUP_srifle_M107_Base"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_10x127_HEIAP_Mag"};
	};
};
class CfgAmmo
{
	class B_127x108_Ball;
	class B_MEU_Mk211: B_127x108_Ball
	{
		hit = 150;
		indirecthit = 20;
	        indirecthitrange = 0.2;
		initSpeed = 853;
		typicalSpeed = 853;
		caliber = 50;
		visibleFire=20;
		visibleFireTime=20;
		audibleFire=20;
		audibleFireTime=15;
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
};
class CfgMagazines
{
	class 5Rnd_127x108_APDS_Mag;
	class MEU_10x127_HEIAP_Mag: 5Rnd_127x108_APDS_Mag {
		scope = 2;
		count = 10;
		initSpeed = 853;
		descriptionshort = "Caliber: 12.7x99mm HEIAP<br />Rounds: 10<br />Used in: Barret M107";
		displayname = "Raufoss Mk 211";
		ammo = "B_MEU_Mk211";
		picture = "\cup\weapons\cup_weapons_m107\M_107_ca.paa";
		lastroundstracer = 0;
		tracersevery = 0;
		mass = 18;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_srifle_M107_Base: Rifle_Long_Base_F
	{
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		maxZeroing = 2000;
		initSpeed = 853;
		cursor = "srifle";
		model = "CUP\Weapons\CUP_Weapons_M107\CUP_M107.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M107\data\UI\gear_M107_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 325;
			class CUP_PicatinnyTopMountM107: CUP_PicatinnyTopMount{};
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
		};
		class ItemInfo
		{
			priority = 1;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		selectionFireAnim = "muzzleFlashNOROT";
		dexterity = 0.45;
		inertia = 1;
	AGM_Bipod = 1;
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.015;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.006;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		displayName = "M107";
		reloadtime = 0.75;
		handanim[] = {"OFP2_ManSkeleton","CUP\Weapons\CUP_Weapons_M107\data\anim\M107b.rtm"};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M107\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_M107\data\sfx\Dry",1,1,35};
		modes[] = {"Single"};
		magazines[] = {"MEU_10x127_HEIAP_Mag"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2","db-12",1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3","db-12",1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"CUP\Weapons\CUP_Weapons_M107\data\sfx\M107_s1",2.51189,1,1300};
				begin2[] = {"CUP\Weapons\CUP_Weapons_M107\data\sfx\M107_s2",2.51189,1,1300};
				begin3[] = {"CUP\Weapons\CUP_Weapons_M107\data\sfx\M107_s3",2.51189,1,1300};
				begin4[] = {"CUP\Weapons\CUP_Weapons_M107\data\sfx\M107_s4",2.51189,1,1300};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			reloadTime = 0.5;
			dispersion = 0.0005;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 1800;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libtextdesc = "M107";
		};
		descriptionshort = "M107";
	};
	};