
class CfgPatches
{
	class CUP_Weapons_PK
	{
		units[] = {};
		weapons[] = {"CUP_lmg_PKM"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","CUP_Weapons_East_Attachments","A3_Weapons_F"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	};
};
class cfgammo
{
	class BulletCore;
	class BulletBase: BulletCore{};
	class CUP_B_762x54_Ball_green_Tracer: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 6;
		audibleFire = 9;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 800;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		airFriction = -0.00096;
	};
};
class cfgmagazines
{
	class CA_Magazine;
	class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M: CA_Magazine
	{
		scope = 2;
		displayName = "100 Rnd PK";
		picture = "\CUP\Weapons\CUP_Weapons_PK\data\ui\m_pk_ca.paa";
		ammo = "CUP_B_762x54_Ball_green_Tracer";
		count = 100;
		type = "2 * 256";
		initSpeed = 850;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "100 Rnd PK";
		mass = 68;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PerchenegMount;
class CUP_EastMuzzleSlotPBS4;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		scope = 2;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadAction = "GestureReloadM200";
		model = "CUP\Weapons\CUP_Weapons_PK\PK_MG_proxy";
		displayName = "PKM";
		inertia = 0.8;
		dexterity = 1.2;
		picture = "\CUP\Weapons\CUP_Weapons_PK\data\ui\gear_pkm_X_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_PK\data\sfx\PKM_s1",1.41254,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_PK\data\sfx\PKM_s2",1.41254,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_PK\data\sfx\PKM_s3",1.41254,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_PK\data\sfx\PKM_s4",1.41254,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.09;
			recoil = "recoil_auto_machinegun_8outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.001;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_PK\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_PK\data\sfx\Dry",1,1,35};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 164;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
		};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		class Library
		{
			libTextDesc = "Russian Machine Gun";
		};
		descriptionShort = "PKM";
	};
};

