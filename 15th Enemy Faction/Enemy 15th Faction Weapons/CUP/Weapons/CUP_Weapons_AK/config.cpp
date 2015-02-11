
class CfgPatches
{
	class CUP_Weapons_AK
	{
		units[] = {};
		weapons[] = {"CUP_arifle_AK74","CUP_arifle_AK74_GL","CUP_arifle_AKM","CUP_arifle_RPK74","CUP_arifle_AK74_GL_kobra"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","CUP_Weapons_East_Attachments","A3_Weapons_F"};
		magazines[] = {"CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareGreen_GP25_M","CUP_FlareRed_GP25_M","CUP_FlareYellow_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKERED_GP25_M","CUP_1Rnd_SMOKEGREEN_GP25_M","CUP_1Rnd_SMOKEYELLOW_GP25_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M","CUP_30Rnd_TE1_White_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"};
	};
};
class CfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore{};
	class G_40mm_HE;
	class CUP_B_545x39_Ball: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 3;
		airFriction = -0.001412;
		caliber = 0.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		nvgOnly = 0;
		initSpeed = 900;
		airLock = 1;
	};
	class CUP_B_545x39_Ball_Tracer_Green: CUP_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		cost = 3;
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airLock = 1;
	};
	class CUP_B_762x39_Ball: BulletBase
	{
		hit = 4;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 18;
		audibleFire = 18;
		cost = 5;
		typicalSpeed = 710;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		airFriction = -0.00195;
		caliber = 0.83;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		airLock = 1;
	};
};
	class CfgMagazines
	{
	class CA_Magazine;
	class CUP_30Rnd_545x39_AK_M: CA_Magazine
	{
		scope = 2;
		displayName = "30 Rnd AK-74 Mag";
		ammo = "CUP_B_545x39_Ball";
		count = 30;
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\ui\m_ak74_ca.paa";
		tracersEvery = 0;
		lastRoundsTracer = 3:
		descriptionShort = "30 Rnd AK Magazine";
		mass = 12;
	};
	class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M: CA_Magazine
	{
		scope = 2;
		displayName = "30 Rnd AK-74 Mag Tracer";
		ammo = "CUP_B_545x39_Ball_Tracer_Green";
		count = 30;
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\ui\m_ak74_ca.paa";
		tracersEvery = 1;
		descriptionShort = "30 Rnd AK Magazine with green tracers";
		mass = 12;
	};
	class CUP_1Rnd_HE_GP25_M: CA_Magazine
	{
		scope = 2;
		type = 16;
		cost = 8;
		displayName = "VOG-25 (HE)";
		displayNameShort = "HE Grenade";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_he_ca.paa";
		ammo = "G_40mm_HE";
		initSpeed = 80;
		count = 1;
		nameSound = "grenadelauncher";
		descriptionShort = "1 Rnd GP-25 High Explosive";
		reloadAction = "GestureReloadTrgUGL";
		mass = 6;
	};
	class CUP_FlareWhite_GP25_M: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "GP-25 Flare (White)";
		displayNameShort = "Flare (White)";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_white_ca.paa";
		ammo = "F_40mm_White";
		initSpeed = 80;
		count = 1;
		nameSound = "grenadelauncher";
		mass = 6;
	};
	class CUP_FlareGreen_GP25_M: CUP_FlareWhite_GP25_M
	{
		displayName = "GP-25 Flare (Green)";
		displayNameShort = "Flare (Green)";
		ammo = "F_40mm_Green";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_green_ca.paa";
		descriptionShort = "GP-25 Flare (Green)";
		mass = 6;
	};
	class CUP_FlareRed_GP25_M: CUP_FlareWhite_GP25_M
	{
		displayName = "GP-25 Flare (Red)";
		displayNameShort = "Flare (Red)";
		ammo = "F_40mm_Red";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_red_ca.paa";
		descriptionShort = "GP-25 Flare (Red)";
		mass = 6;
	};
	class CUP_FlareYellow_GP25_M: CUP_FlareWhite_GP25_M
	{
		displayName = "GP-25 Flare (Yellow)";
		displayNameShort = "Flare (Yellow)";
		ammo = "F_40mm_Yellow";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_Yellow_ca.paa";
		descriptionShort = "GP-25 Flare (Yellow)";
		mass = 6;
	};
	class CUP_1Rnd_SMOKE_GP25_M: CUP_1Rnd_HE_GP25_M
	{
		displayName = "GP-25 Smoke Shell (White)";
		displayNameShort = "Smoke Shell (White)";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_white_ca.paa";
		ammo = "G_40mm_Smoke";
		mass = 6;
		descriptionShort = "GP-25 Smoke Shell";
	};
	class CUP_1Rnd_SmokeRed_GP25_M: CUP_1Rnd_SMOKE_GP25_M
	{
		displayName = "GP-25 Smoke Shell (Red)";
		displayNameShort = "Smoke Shell (Red)";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_red_ca.paa";
		ammo = "G_40mm_SmokeRed";
		descriptionShort = "GP-25 Smoke Shell (Red)";
		mass = 6;
	};
	class CUP_1Rnd_SmokeGreen_GP25_M: CUP_1Rnd_SMOKE_GP25_M
	{
		displayName = "GP-25 Smoke Shell (Green)";
		displayNameShort = "Smoke Shell (Green)";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_green_ca.paa";
		ammo = "G_40mm_SmokeGreen";
		descriptionShort = "GP-25 Smoke Shell (Green)";
		mass = 6;
	};
	class CUP_1Rnd_SmokeYellow_GP25_M: CUP_1Rnd_SMOKE_GP25_M
	{
		displayName = "GP-25 Smoke Shell (Yellow)";
		displayNameShort = "Smoke Shell (Yellow)";
		picture = "\CUP\Weapons\CUP_Weapons_AK\Data\UI\m_gp25_yellow_ca.paa";
		ammo = "G_40mm_SmokeYellow";
		descriptionShort = "GP-25 Smoke Shell (Yellow)";
		mass = 6;
	};
	class CUP_30Rnd_762x39_AK47_M: CA_Magazine
	{
		scope = 2;
		displayName = "30 Rnd AK-47 Magazine";
		ammo = "CUP_B_762x39_Ball";
		count = 30;
		initSpeed = 710;
		lastRoundsTracer = 3;
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\ui\m_ak_ca.paa";
		descriptionShort = "30 Round AK-47 magazine";
		mass = 26;
	};
	class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M: CA_Magazine
	{
		scope = 2;
		displayName = "75 Rnd RPK Magazine";
		ammo = "CUP_B_545x39_Ball";
		count = 75;
		type = "2 * 256";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\ui\M_RPK_74_CA.paa";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "75 Round magazine for use in the RPK";
		mass = 36;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CUP_EastMuzzleSlotPBS4;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		scope = 0;
		value = 0;
		model = "";
		displayName = "";
		optics = 1;
		modes[] = {"FullAuto","Single","Burst"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"};
		selectionFireAnim = "muzzleFlash";
		drySound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_Dry",0.56234133,1,10};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_Reload",0.39810717,1,30};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.25118864,1,20};
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.4;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.00125;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
		};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK74_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class GP25Muzzle: UGL_F
		{
			descriptionShort = "$STR_CUP_dn_gp25";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
			discreteDistanceInitIndex = 1;
			displayName = "$STR_CUP_dn_gp25";
			magazines[] = {"CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareGreen_GP25_M","CUP_FlareRed_GP25_M","CUP_FlareYellow_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKERED_GP25_M","CUP_1Rnd_SMOKEGREEN_GP25_M","CUP_1Rnd_SMOKEYELLOW_GP25_M"};
		};
		class ItemInfo
		{
			priority = 1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class CUP_DovetailMount_AK: CUP_DovetailMount{};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlotPBS4{};
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
		};
	};
	class CUP_arifle_AK74: CUP_arifle_AK_Base
	{
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\AK_74";
		displayName = "AK74";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK.rtm"};
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\ui\gear_ak74_X_CA.paa";
		class Library
		{
			libTextDesc = "$STR_CUP_lib_ak74";
		};
		descriptionShort = "$STR_CUP_dss_ak74";
		inertia = 0.5;
		dexterity = 1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 67;
		};
	};
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
	{
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\ak74gl";
		displayName = "AK74 GL";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_ak74gl_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK_gl.rtm"};
		muzzles[] = {"this","GP25Muzzle"};
		class Library
		{
			libTextDesc = "$STR_CUP_lib_ak74";
		};
		descriptionShort = "$STR_CUP_dss_ak74gl";
		inertia = 0.6;
		dexterity = 1.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 101;
		};
	};
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\akm";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_akm_X_CA.paa";
		magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
		displayname = "AK 47";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK.rtm"};
		drySound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_Dry",0.56234133,1,10};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_Reload",0.39810717,1,30};
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 200;
			midRangeProbab = 0.3;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.0018;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
		};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\AK47_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_CUP_lib_akm";
		};
		descriptionShort = "$STR_CUP_dss_akm";
		inertia = 0.5;
		dexterity = 1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 68;
		};
	};
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\RPK_74";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74_X_CA.paa";
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"};
		displayname = "RPK 74";
		aiDispersionCoefY = 18;
		aiDispersionCoefX = 18;
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK.rtm"};
		drySound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_Dry",0.56234133,1,10};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_Reload",0.39810717,1,30};
		modes[] = {"manual","close","short","medium","far","Single"};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.1;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.0012;
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			displayName = "";
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.15;
			midRange = 20;
			midRangeProbab = 0.78;
			maxRange = 50;
			maxRangeProbab = 0.14;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.15;
			midRange = 200;
			midRangeProbab = 0.78;
			maxRange = 400;
			maxRangeProbab = 0.14;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.15;
			midRange = 400;
			midRangeProbab = 0.78;
			maxRange = 600;
			maxRangeProbab = 0.14;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.15;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.11;
		};
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
				begin1[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s1",1,1,1200};
				begin2[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s2",1,1,1200};
				begin3[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s3",1,1,1200};
				begin4[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\RPK_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00125;
			aiRateOfFireDistance = 650;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.1;
			maxRange = 800;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_CUP_lib_rpk";
		};
		descriptionShort = "$STR_CUP_dss_rpk";
		inertia = 0.6;
		dexterity = 1.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
	};
	class CUP_arifle_AK74_GL_kobra: CUP_arifle_AK74_GL
	{
		class LinkedIOtems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_DovetailMount_AK";
				item = "CUP_optic_Kobra";
			};
		};
	};
};

