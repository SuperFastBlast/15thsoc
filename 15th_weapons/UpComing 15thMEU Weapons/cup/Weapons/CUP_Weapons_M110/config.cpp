
class CfgPatches
{
	class CUP_Weapons_M110
	{
		units[] = {};
		weapons[] = {"CUP_muzzle_snds_M110","CUP_srifle_M110"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","a3_weapons_f"};
		magazines[] = {"MEU_20x762_Mag"};
	};
};
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class CUP_Item_muzzle_snds_M110: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyItem.p3d";
		mapSize = 0.4;
		displayName = "Silencer M110";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class CUP_muzzle_snds_M110
			{
				name = "CUP_muzzle_snds_M110";
				count = 1;
			};
		};
	};

	class CUP_Weapon_srifle_M110: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
		mapSize = 0.8;
		displayName = "M110";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class CUP_srifle_M110
			{
				weapon = "CUP_srifle_M110";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MEU_20x762_Mag
			{
				magazine = "MEU_20x762_Mag";
				count = 1;
			};
		};
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
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 18;
		suppressionRadiusHit= 6;
		suppressionRadiusBulletClose= 10;
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
		inertia = 0.7;
		dexterity = 1.3;
		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
		selectionFireAnim = "muzzleFlash";
		model = "CUP\Weapons\CUP_Weapons_M110\CUP_M110";
		magazines[] = {"MEU_20x762_Mag"};
		picture = "\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_M110_X_CA.paa";
		reloadTime = 2;
		reloadAction = "GestureReloadMX";
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
		class ItemInfo
		{
			priority = 1;
		};
	jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
	   deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
           hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
           soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		recoil = "recoil_ebr";
		reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_M110\data\sfx",1,1,35};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Dry",0.251189,1,20};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
    				closure1[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01",0.398107,1,30};
    				closure2[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_01",1.77828,1,1800};
				begin2[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_02",1.77828,1,1800};
				begin3[] = {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_03",1.77828,1,1800};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_interior",1.99526,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
    begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",1,1,400};
    begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_02",1,1,400};
    begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_03",1,1,400};
    soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
    				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_interior",1.99526,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
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