
class CfgPatches
{
	class CUP_Weapons_Colt1911
	{
		units[] = {};
		weapons[] = {"CUP_hgun_Colt1911","CUP_hgun_Colt1911_snds"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_T2AAF_45ACP"};
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
        visibleFire = 5;
        audibleFire = 9;
        cost = 100;
        typicalSpeed = 280;
        airFriction = -0.0018;
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
		initSpeed = 280;
		picture = "\CUP\Weapons\CUP_Weapons_Colt1911\data\ui\m_colt1911_ca.paa";
		type = 16;
		descriptionShort = "45 ACP rounds for M1911";
	};
};
class Mode_SemiAuto;
class SlotInfo;
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
		model = "\CUP\Weapons\CUP_Weapons_Colt1911\CUP_Colt1911.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_Colt1911\data\ui\gear_colt1911_X_ca.paa";
		magazines[] = {"MEU_T2AAF_45ACP"};
		displayname = "M1911";
		descriptionShort = "M1911";
		class Library
		{
			libTextDesc = "M1911 Pistol";
		};
		reloadTime = 0.13;
		bullet1[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_01",0.2238721,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_02",0.2238721,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_03",0.2238721,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.0351422,1,30};
			closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.0351422,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CUP\Weapons\CUP_Weapons_Colt1911\data\sfx\M1911_S1",0.794328,1,700};
			begin2[] = {"CUP\Weapons\CUP_Weapons_Colt1911\data\sfx\M1911_S2",0.794328,1,700};
			begin3[] = {"CUP\Weapons\CUP_Weapons_Colt1911\data\sfx\M1911_S3",0.794328,1,700};
			begin4[] = {"CUP\Weapons\CUP_Weapons_Colt1911\data\sfx\M1911_S4",0.794328,1,700};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"CUP\Weapons\CUP_Weapons_Colt1911\data\sfx\Dry",0.39810717,1,20};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_Colt1911\data\sfx\Reload",0.56234133,1,30};
		recoil = "recoil_pistol_heavy";
		recoilProne = "recoil_prone_pistol_heavy";
		inertia = 0.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30.5;
			class CowsSlot{};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_acp"};
			};
		};
	};
	class CUP_hgun_Colt1911_snds: CUP_hgun_Colt1911
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_acp";
			};
		};
	};
};
//};
