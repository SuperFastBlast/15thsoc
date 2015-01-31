
class CfgPatches
{
	class CUP_Weapons_SVD
	{
		units[] = {};
		weapons[] = {"CUP_srifle_SVD","CUP_srifle_SVD_des","CUP_srifle_SVD_des_ghillie_pso","CUP_srifle_SVD_wdl_ghillie","CUP_srifle_SVD_pso","CUP_srifle_SVD_Des_pso","CUP_srifle_SVD_NSPU"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","A3_Weapons_F"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M"};
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
	class CUP_10Rnd_762x54_SVD_M: CA_Magazine
	{
		scope = 2;
		displayName = "10 Rnd SVD Mag";
		picture = "\CUP\Weapons\CUP_Weapons_SVD\data\ui\m_svd_ca.paa";
		count = 10;
		ammo = "CUP_B_762x54_Ball_green_Tracer";
		descriptionShort = "10 Rnd SVD Mag";
		mass = 6;
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_srifle_SVD: Rifle_Base_F
	{
		scope = 2;
		model = "CUP\Weapons\CUP_Weapons_SVD\svd.p3d";
		dexterity = 1.57;
		inertia = 0.7;
		displayName = "Dragunov SVD";
		handAnim[] = {"OFP2_ManSkeleton","CUP\Weapons\CUP_Weapons_SVD\Data\anim\svd.rtm"};
		picture = "\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_X_ca.paa";
		modes[] = {"Single"};
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_SVD\data\sfx\SVD_S1",1.77828,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_SVD\data\sfx\SVD_S2",1.77828,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_SVD\data\sfx\SVD_S3",1.77828,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_SVD\data\sfx\SVD_S4",1.77828,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
			closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.15;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.00025;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1300;
			maxRangeProbab = 0.05;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 87;
			class CUP_DovetailMount_SVD: CUP_DovetailMount{};
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
		autoFire = 0;
		aiRateOfFire = 9;
		aiRateOfFireDistance = 1300;
		magazines[] = {"CUP_10Rnd_762x54_SVD_M"};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_SVD\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_SVD\data\sfx\Dry",1,1,35};
		class Library
		{
			libTextDesc = "SVD";
		};
		descriptionShort = "Dragunov SVD Sniper Rifle";
	};
	class CUP_srifle_SVD_des: CUP_srifle_SVD
	{
		model = "CUP\Weapons\CUP_Weapons_SVD\svd_des.p3d";
		dexterity = 1.57;
		displayName = "Dragunov SVD Desert";
		class Library
		{
			libTextDesc = "SVD";
		};
		descriptionShort = "Dragunov SVD Sniper Rifle";
	};
	class CUP_srifle_SVD_des_ghillie_pso: CUP_srifle_SVD
	{
		inertia = 0.8;
		model = "CUP\Weapons\CUP_Weapons_SVD\svd_desert.p3d";
		dexterity = 1.57;
		displayName = "SVD Desert Camo";
		picture = "\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_desert_X_ca.paa";
		descriptionShort = "SVD Desert Camo";
		class Library
		{
			libTextDesc = "SVD Desert Camo";
		};
		optics = 1;
		modelOptics = "CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\pso_optics";
		class OpticsModes
		{
			class PSO
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				cameraDir = "";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
			class CUP_DovetailMount_SVD{};
		};
	};
	class CUP_srifle_SVD_wdl_ghillie: CUP_srifle_SVD_des_ghillie_pso
	{
		model = "CUP\Weapons\CUP_Weapons_SVD\svd_camo.p3d";
		dexterity = 1.57;
		displayName = "SVD Camo";
		picture = "\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_desert_X_ca.paa";
		descriptionShort = "SVD Camo";
		class Library
		{
			libTextDesc = "SVD Camo";
		};
	};
	class CUP_srifle_SVD_pso: CUP_srifle_SVD
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_DovetailMount_SVD";
				item = "CUP_optic_PSO_1";
			};
		};
	};
	class CUP_srifle_SVD_Des_pso: CUP_srifle_SVD_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_DovetailMount_SVD";
				item = "CUP_optic_PSO_1";
			};
		};
	};
	class CUP_srifle_SVD_NSPU: CUP_srifle_SVD
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_DovetailMount_SVD";
				item = "CUP_optic_NSPU";
			};
		};
	};
};
//};
