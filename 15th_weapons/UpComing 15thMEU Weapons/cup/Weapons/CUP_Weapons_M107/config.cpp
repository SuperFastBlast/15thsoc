
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
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class CUP_Weapon_srifle_M107_Base: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
		mapSize = 0.8;
		displayName = "M107";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class CUP_srifle_M107_Base
			{
				weapon = "CUP_srifle_M107_Base";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MEU_10x127_HEIAP_Mag
			{
				magazine = "MEU_10x127_HEIAP_Mag";
				count = 1;
			};
		};
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
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 20;
		suppressionRadiusHit= 7;
		suppressionRadiusBulletClose= 15;
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
		jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
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
		maxRecoilSway = 0.03;
  		swayDecaySpeed = 1.25;
	   deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
           hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           soundBipodDown[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",db-3, 1, 20}; /// sound of unfolding the bipod
           soundBipodUp[]   = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",db-3, 1, 20}; /// sound of folding the bipod
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.015;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.006;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		displayName = "M107";
		reloadtime = 0.75;
		recoil = "recoil_gm6";
		handanim[] = {"OFP2_ManSkeleton","CUP\Weapons\CUP_Weapons_M107\data\anim\M107b.rtm"};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M107\data\sfx\Reload",1,1,35};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",0.56234133,1,15};
		modes[] = {"Single"};
		magazines[] = {"MEU_10x127_HEIAP_Mag"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01",0.39810717,1,40};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02",0.39810717,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_01",7.943283,1,2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_02",7.943283,1,2200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1.9952624,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
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