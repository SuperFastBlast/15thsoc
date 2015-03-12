
class CfgPatches
{
	class CUP_Weapons_Makarov
	{
		units[] = {};
		weapons[] = {"CUP_hgun_Makarov"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","CUP_Weapons_East_Attachments","A3_Weapons_F"};
		magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_MakarovSD_M"};
	};
};
class CFGAmmo
{
	class BulletCore;
	class BulletBase: BulletCore{};
	class CUP_B_9x18_Ball: BulletBase
	{
		hit = 6;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		cost = 20;
		typicalSpeed = 350;
		airFriction = -0.002751;
		caliber = 0.33;
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		nvgOnly = 0;
		initSpeed = 350;
	};
	class CUP_B_9x18_SD: BulletBase
	{
		hit = 6;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.33;
		visibleFire = 0.035;
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		initSpeed = 350;
		audibleFire = 0.035;
		visibleFireTime = 2;
		cost = 15;
		typicalSpeed = 310;
		airFriction = -0.001893;
	};
};
	class cfgmagazines
	{
	class CA_magazine;
	class CUP_8Rnd_9x18_Makarov_M: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "8 Rnd 9x18 Makarov";
		picture = "\CUP\Weapons\CUP_Weapons_makarov\data\ui\m_makarov_CA.paa";
		ammo = "CUP_B_9x18_Ball";
		count = 8;
		initSpeed = 320;
		descriptionShort = "8 Rnd 9x18 Makarov";
		mass = 6;
	};
	class CUP_8Rnd_9x18_MakarovSD_M: CUP_8Rnd_9x18_Makarov_M
	{
		scope = 2;
		displayName = "Makarov SD mag";
		ammo = "CUP_B_9x18_SD";
		initSpeed = 310;
		descriptionShort = "Russian Silenced pistol mag";
		mass = 6;
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class CUP_hgun_Makarov: Pistol_Base_F
	{
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_Makarov\CUP_makarov.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_Makarov\data\UI\gear_makarov_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_MakarovSD_M"};
		reloadAction = "GestureReloadPistol";
		displayname = "Makarov";
		jsrs_soundeffect = "JSRS2_Distance_Effects_PM";
		dexterity = 2;
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
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0351422,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0351422,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CUP\Weapons\CUP_Weapons_Makarov\data\sfx\Maka_s1",0.794328,1,700};
			begin2[] = {"CUP\Weapons\CUP_Weapons_Makarov\data\sfx\Maka_s2",0.794328,1,700};
			begin3[] = {"CUP\Weapons\CUP_Weapons_Makarov\data\sfx\Maka_s3",0.794328,1,700};
			begin4[] = {"CUP\Weapons\CUP_Weapons_Makarov\data\sfx\Maka_s4",0.794328,1,700};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		inertia = 0.2;
		reloadtime = 0.13;
		dispersion = 0.003;
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_Makarov\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_Makarov\data\sfx\Dry",1,1,35};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		class Library
		{
			libTextDesc = "Makarov 9mm Pistol";
		};
		descriptionShort = "Russian made semi-automatic pistol";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 16;
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSLot{};
		};
		class ItemInfo
		{
			priority = 2;
		};
	};
};
//};
