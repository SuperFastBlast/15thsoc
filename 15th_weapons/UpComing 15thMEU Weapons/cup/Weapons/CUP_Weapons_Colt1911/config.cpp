
class CfgPatches
{
	class CUP_Weapons_Colt1911
	{
		units[] = {};
		weapons[] = {"CUP_hgun_Colt1911"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_T2AAF_45ACP"};
	};
};
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class CUP_Weapon_hgun_Colt1911: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "A3\Weapons_F\DummyPistol_Single.p3d";
		mapSize = 0.4;
		displayName = "M1911";
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
		{
			class CUP_hgun_Colt1911
			{
				weapon = "CUP_hgun_Colt1911";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MEU_T2AAF_45ACP
			{
				magazine = "MEU_T2AAF_45ACP";
				count = 1;
			};
		};
	};
};
class CfgAmmo
{
	class B_9x21_Ball;
	class B_MEU_T2AAF_45ACP: B_9x21_Ball
    	{
    	hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_65_caseless";
        caliber = 2.6;
        deflecting = 45;
	visibleFire=14;
	visibleFireTime=14;
	audibleFire=12;
	audibleFireTime=10;
        cost = 100;
        typicalSpeed = 251;
	initSpeed = 251;
        airFriction = -0.0018;
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 12;
		suppressionRadiusHit= 4;
		suppressionRadiusBulletClose= 8;
   };
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class MEU_T2AAF_45ACP: 16Rnd_9x21_Mag
	{
		scope = 2;
		displayName = "7Rnd M1911";
		mass = 2;
		ammo = "B_MEU_T2AAF_45ACP";
		count = 7;
		initSpeed = 251;
		picture = "\CUP\Weapons\CUP_Weapons_Colt1911\data\ui\m_colt1911_ca.paa";
		type = 16;
		descriptionShort = "45 ACP rounds for M1911";
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class asdg_MuzzleSlot_556;
class asdg_UnderSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class CUP_hgun_Colt1911: Pistol_Base_F
	{
		scope = 2;
		jsrs_soundeffect = "JSRS2_Distance_Effects_1911";
		initSpeed = 251;
		dexterity = 1.7;
		inertia = 0.2;
		model = "CUP\Weapons\CUP_Weapons_Colt1911\CUP_Colt1911.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_Colt1911\data\ui\gear_colt1911_X_ca.paa";
		magazines[] = {"MEU_T2AAF_45ACP"};
		displayname = "M1911";
		descriptionShort = "M1911";
		class Library
		{
			libTextDesc = "M1911 Pistol";
		};
		reloadTime = 0.13;
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
		sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_01",0.31622776,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_02",0.31622776,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",0.39810717,1,20};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_Colt1911\data\sfx\Reload",0.56234133,1,30};
		recoil = "recoil_pistol_heavy";
		recoilProne = "recoil_prone_pistol_heavy";
		class WeaponSlotsInfo
		{
			mass = 30.5;
			class MuzzleSlot
			{
				access = 1;
				displayName = "Muzzle SLot";
				linkProxy = "A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_acp"};
			};
			class asdg_FrontSideRail_rifles: asdg_FrontSideRail{};
			class asdg_OpticRail_rifles: asdg_OpticRail1913{};
			class asdg_OpticRail1913_long: asdg_OpticRail1913{};
			class asdg_UnderSlot;
			class cowslot
			{
				access = 1;
				compatibleItems[] = {};
				displayName = "Optics Slot";
				iconPicture = "A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.52,0.36};
				iconScale = 0.15;
				linkProxy = "A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
		};
	};
};
