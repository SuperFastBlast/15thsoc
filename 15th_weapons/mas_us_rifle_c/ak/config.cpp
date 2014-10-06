
enum 
{
	destructengine=2,
	destructdefault=6,
	destructwreck=7,
	destructtree=3,
	destructtent=4,
	stabilizedinaxisx=1,
	stabilizedinaxesxyz=4,
	stabilizedinaxisy=2,
	stabilizedinaxesboth=3,
	destructno=0,
	stabilizedinaxesnone=0,
	destructman=5,
	destructbuilding=1
};
class CfgPatches
{
	class mas_weapons_ak
	{
		requiredaddons[] = {"A3_Weapons_F","mas_weapons"};
		requiredversion = 1.0;
		units[] = {"Box_mas_ru_rifle_Wps_F"};
		weapons[] = {"arifle_mas_ak_74m","arifle_mas_ak_74m_h","arifle_mas_ak_74m_ti","arifle_mas_ak_74m_a","arifle_mas_ak_74m_sd","arifle_mas_ak_74m_gl","arifle_mas_ak_74m_gl_h","arifle_mas_ak_74m_gl_ti","arifle_mas_ak_74m_gl_a","arifle_mas_ak_74m_gl_sd","arifle_mas_ak_74m_c","arifle_mas_ak_74m_c_h","arifle_mas_ak_74m_c_ti","arifle_mas_ak_74m_c_a","arifle_mas_ak_74m_c_sd","arifle_mas_ak_74m_gl_c","arifle_mas_ak_74m_gl_c_h","arifle_mas_ak_74m_gl_c_ti","arifle_mas_ak_74m_gl_c_a","arifle_mas_ak_74m_gl_c_sd","arifle_mas_ak_74m_sf","arifle_mas_ak_74m_sf_h","arifle_mas_ak_74m_sf_a","arifle_mas_ak_74m_sf_e","arifle_mas_ak_74m_sf_sd","arifle_mas_ak_74m_sf_gl","arifle_mas_ak_74m_sf_gl_h","arifle_mas_ak_74m_sf_gl_a","arifle_mas_ak_74m_sf_gl_e","arifle_mas_ak_74m_sf_gl_sd","arifle_mas_ak_74m_sf_c","arifle_mas_ak_74m_sf_c_h","arifle_mas_ak_74m_sf_c_a","arifle_mas_ak_74m_sf_c_e","arifle_mas_ak_74m_sf_c_sd","arifle_mas_ak_74m_sf_gl_c","arifle_mas_ak_74m_sf_gl_c_h","arifle_mas_ak_74m_sf_gl_c_a","arifle_mas_ak_74m_sf_gl_c_e","arifle_mas_ak_74m_sf_gl_c_sd","arifle_mas_aks74","arifle_mas_aks74_h","arifle_mas_aks74_a","arifle_mas_aks74_gl","arifle_mas_aks74_gl_h","arifle_mas_aks74_gl_a","arifle_mas_akms","arifle_mas_akms_h","arifle_mas_akms_a","arifle_mas_akms_sd","arifle_mas_akms_gl","arifle_mas_akms_gl_h","arifle_mas_akms_gl_a","arifle_mas_akms_gl_sd","arifle_mas_akms_c","arifle_mas_akms_c_h","arifle_mas_akms_c_a","arifle_mas_akms_c_sd","arifle_mas_akms_gl_c","arifle_mas_akms_gl_c_h","arifle_mas_akms_gl_c_a","arifle_mas_akms_gl_c_sd","arifle_mas_akm","arifle_mas_akm_h","arifle_mas_akm_a","arifle_mas_akm_gl","arifle_mas_akm_gl_h","arifle_mas_akm_gl_a","arifle_mas_m70","arifle_mas_m70_gl","arifle_mas_m70ab","arifle_mas_m70ab_gl","srifle_mas_svd","srifle_mas_svd_h","srifle_mas_svd_sd","srifle_mas_svd_l","srifle_mas_m91","srifle_mas_m91_l","srifle_mas_ksvk","srifle_mas_ksvk_h","srifle_mas_ksvk_sd","srifle_mas_ksvk_c","srifle_mas_ksvk_c_h","srifle_mas_ksvk_c_sd","LMG_mas_rpk_F","LMG_mas_rpk_F_h","LMG_mas_rpk_F_a","LMG_mas_rpk_F_sd","LMG_mas_m72_F","LMG_mas_pkm_F","LMG_mas_pkm_F_h","LMG_mas_pkm_F_a","arifle_mas_aks74u","arifle_mas_aks74u_h","arifle_mas_aks74u_a","arifle_mas_aks74u_sd","arifle_mas_aks74u_c","arifle_mas_aks74u_c_h","arifle_mas_aks74u_c_a","arifle_mas_aks74u_c_sd","arifle_mas_bizon","arifle_mas_bizon_h","arifle_mas_bizon_a","arifle_mas_bizon_sd","arifle_mas_saiga"};
		magazines[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_far_optics1;
class single_far_optics2;
class fullauto_medium;
class SlotInfo;
class InventoryOpticsItem_Base_F;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_MX_Base_F;
	class arifle_MX_F;
	class srifle_EBR_F;
	class optic_Hamr;
	class optic_Arco;
	class optic_Aco;
	class hgun_P07_F;
	class LMG_Mk200_F;
	class LMG_Zafir_F;
	class arifle_Katiba_F;
	class srifle_LRR_F;
	class srifle_GM6_F;
	class arifle_mas_ak_74m: arifle_Katiba_F
	{
		displayname = "AK74M";
		model = "\mas_ru_rifle\mas_ak_74m";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_ak74m.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_ak74m_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.45x39 mm";
		class Library
		{
			libtextdesc = "The AK-74 is an assault rifle developed in the early 1970s in the Soviet Union as the replacement for the earlier AKM. It uses a smaller intermediate cartridge, the 5.45×39mm, replacing the 7.62×39mm chambering of earlier Kalashnikov-pattern weapons.Presently, the rifle continues to be used by the majority of countries of the former USSR. Additionally, unlicensed copies were produced in Bulgaria (AK-74 and AKS-74U), the former East Germany (MPi-AK-74N, MPi-AKS-74N, MPi-AKS-74NK) and Romania (PA md. 86).Besides former Soviet republics and eastern European countries, Mongolia, North Korean Special Forces, and Vietnamese People's Naval infantry use AK-74s.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.251189,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.251189,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\ak74_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\ak74_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_single_ktb";
			recoilProne = "recoil_single_prone_ktb";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\ak74_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\ak74_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_ACO_grn_smg","optic_Holosight_smg","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_ak_74m_h: arifle_mas_ak_74m
	{
		displayName = "AK74M pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_ti: arifle_mas_ak_74m
	{
		displayName = "AK74M TI";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Nightstalker";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_a: arifle_mas_ak_74m
	{
		displayName = "AK74M aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sd: arifle_mas_ak_74m
	{
		displayName = "AK74M SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_GL_F;
	class arifle_mas_ak_74m_gl: arifle_Katiba_GL_F
	{
		displayname = "AK74M GL";
		model = "\mas_ru_rifle\mas_ak_74m_gl";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_ak74mgl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_ak74mg_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.45x39 mm";
		class Library
		{
			libtextdesc = "The AK-74 is an assault rifle developed in the early 1970s in the Soviet Union as the replacement for the earlier AKM. It uses a smaller intermediate cartridge, the 5.45×39mm, replacing the 7.62×39mm chambering of earlier Kalashnikov-pattern weapons.Presently, the rifle continues to be used by the majority of countries of the former USSR. Additionally, unlicensed copies were produced in Bulgaria (AK-74 and AKS-74U), the former East Germany (MPi-AK-74N, MPi-AKS-74N, MPi-AKS-74NK) and Romania (PA md. 86).Besides former Soviet republics and eastern European countries, Mongolia, North Korean Special Forces, and Vietnamese People's Naval infantry use AK-74s.This version is equipped with the GP30 wich is a single-shot 40 mm grenade launcher.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.251189,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.251189,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\ak74_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\ak74_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_single_ktb";
			recoilProne = "recoil_single_prone_ktb";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\ak74_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\ak74_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		muzzles[] = {"this","GP30"};
		class GP30: UGL_F
		{
			displayName = "GP30";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
			cameraDir = "OP_look";
			memoryPointCamera = "OP_eye";
			weaponInfoType = "RscWeaponZeroing";
			discreteDistance[] = {100,200,300};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3"};
			discreteDistanceInitIndex = 1;
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_ACO_grn_smg","optic_Holosight_smg","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_ak_74m_gl_h: arifle_mas_ak_74m_gl
	{
		displayName = "AK74M GL pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_gl_ti: arifle_mas_ak_74m_gl
	{
		displayName = "AK74M GL TI";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Nightstalker";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_gl_a: arifle_mas_ak_74m_gl
	{
		displayName = "AK74M GL aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_gl_sd: arifle_mas_ak_74m_gl
	{
		displayName = "AK74M GL SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_c: arifle_mas_ak_74m
	{
		displayname = "AK74M camo";
		model = "\mas_ru_rifle\mas_ak_74m";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\ak74m_cv.paa","mas_ru_rifle\akm\data\akb_cv.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_ak74m_x_ca.paa";
	};
	class arifle_mas_ak_74m_c_h: arifle_mas_ak_74m_c
	{
		displayName = "AK74M camo pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_c_ti: arifle_mas_ak_74m_c
	{
		displayName = "AK74M camo TI";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Nightstalker";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_c_a: arifle_mas_ak_74m_c
	{
		displayName = "AK74M camo aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_c_sd: arifle_mas_ak_74m_c
	{
		displayName = "AK74M camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_gl_c: arifle_mas_ak_74m_gl
	{
		displayname = "AK74M GL camo";
		model = "\mas_ru_rifle\mas_ak_74m_gl";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\ak74m_cv.paa","mas_ru_rifle\akm\data\gp31_co.paa","mas_ru_rifle\akm\data\akb_cv.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_ak74mg_x_ca.paa";
	};
	class arifle_mas_ak_74m_gl_c_h: arifle_mas_ak_74m_gl_c
	{
		displayName = "AK74M GL camo pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_gl_c_ti: arifle_mas_ak_74m_gl_c
	{
		displayName = "AK74M GL camo TI";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Nightstalker";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_gl_c_a: arifle_mas_ak_74m_gl_c
	{
		displayName = "AK74M GL camo aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_gl_c_sd: arifle_mas_ak_74m_gl_c
	{
		displayName = "AK74M GL camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf: arifle_mas_ak_74m
	{
		displayname = "AK74M SF";
		model = "\mas_ru_rifle\mas_ak_74m_sf";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_ak74m_sf.rtm"};
		picture = "\mas_ru_rifle\ui\gear_ak74msf_x_ca.paa";
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_ACO_grn_smg","optic_Holosight_smg","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_ak_74m_sf_h: arifle_mas_ak_74m_sf
	{
		displayName = "AK74M SF arco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_blk";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_a: arifle_mas_ak_74m_sf
	{
		displayName = "AK74M SF aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_e: arifle_mas_ak_74m_sf
	{
		displayName = "AK74M SF holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Holosight_blk";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_sd: arifle_mas_ak_74m_sf
	{
		displayName = "AK74M SF SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_blk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl: arifle_mas_ak_74m_gl
	{
		displayname = "AK74M SF GL";
		model = "\mas_ru_rifle\mas_ak_74m_sf_gl";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_ak74m_sf_gl.rtm"};
		picture = "\mas_ru_rifle\ui\gear_ak74msfg_x_ca.paa";
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_ACO_grn_smg","optic_Holosight_smg","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_h: arifle_mas_ak_74m_sf_gl
	{
		displayName = "AK74M SF GL arco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_blk";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_a: arifle_mas_ak_74m_sf_gl
	{
		displayName = "AK74M SF GL aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_e: arifle_mas_ak_74m_sf_gl
	{
		displayName = "AK74M SF GL holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Holosight_blk";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_sd: arifle_mas_ak_74m_sf_gl
	{
		displayName = "AK74M SF GL SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_blk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_c: arifle_mas_ak_74m_sf
	{
		displayname = "AK74M SF camo";
		model = "\mas_ru_rifle\mas_ak_74m_sf";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\ak74a_cv.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_ak74msf_x_ca.paa";
	};
	class arifle_mas_ak_74m_sf_c_h: arifle_mas_ak_74m_sf_c
	{
		displayName = "AK74M SF camo arco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_c_a: arifle_mas_ak_74m_sf_c
	{
		displayName = "AK74M SF camo aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_c_e: arifle_mas_ak_74m_sf_c
	{
		displayName = "AK74M SF camo holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Holosight_blk";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_c_sd: arifle_mas_ak_74m_sf_c
	{
		displayName = "AK74M SF camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_c: arifle_mas_ak_74m_sf_gl
	{
		displayname = "AK74M SF GL camo";
		model = "\mas_ru_rifle\mas_ak_74m_sf_gl";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\ak74a_cv.paa","mas_ru_rifle\akm\data\gp31_co.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_ak74msfg_x_ca.paa";
	};
	class arifle_mas_ak_74m_sf_gl_c_h: arifle_mas_ak_74m_sf_gl_c
	{
		displayName = "AK74M SF GL camo arco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_c_a: arifle_mas_ak_74m_sf_gl_c
	{
		displayName = "AK74M SF GL camo aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_c_e: arifle_mas_ak_74m_sf_gl_c
	{
		displayName = "AK74M SF GL camo holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Holosight_blk";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_ak_74m_sf_gl_c_sd: arifle_mas_ak_74m_sf_gl_c
	{
		displayName = "AK74M SF GL camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Arco_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74: arifle_mas_ak_74m
	{
		displayname = "AKS74";
		model = "\mas_ru_rifle\mas_aks74";
		picture = "\mas_ru_rifle\ui\gear_aks74_x_ca.paa";
	};
	class arifle_mas_aks74_h: arifle_mas_aks74
	{
		displayName = "AKS74 pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74_a: arifle_mas_aks74
	{
		displayName = "AKS74 aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74_gl: arifle_mas_ak_74m_gl
	{
		displayname = "AKS74 GL";
		model = "\mas_ru_rifle\mas_aks74gl";
		picture = "\mas_ru_rifle\ui\gear_aks74g_x_ca.paa";
	};
	class arifle_mas_aks74_gl_h: arifle_mas_aks74_gl
	{
		displayName = "AKS74 GL pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74_gl_a: arifle_mas_aks74_gl
	{
		displayName = "AKS74 GL aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms: arifle_mas_ak_74m
	{
		displayname = "AKMS";
		model = "\mas_ru_rifle\mas_akms";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akm.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_762x39_mag","30Rnd_mas_762x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_akms_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x39 mm";
		class Library
		{
			libtextdesc = "The AKM is a 7.62mm assault rifle designed by Mikhail Kalashnikov. It is an upgraded version of the AK-47 rifle and was developed in the 1950s. Introduced into service with the Soviet Army in 1959, the AKM is the most ubiquitous variant of the entire AK series of firearms and it has found widespread use with most member states of the former Warsaw Pact and its many African and Asian allies as well as being widely exported and produced in many other countries. It was officially replaced in Soviet Front-Line service by the AK-74 in the late 1970s, but remains in use worldwide. The main variant of the AKM is the AKMS, which was equipped with an under folding metal shoulder stock in place of the fixed wooden stock.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\akm_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\akm_s2",1.0,1,1200};
				begin3[] = {"\mas_ru_rifle\sounds\akm_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\akm_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\akm_s2",1.0,1,1200};
				begin3[] = {"\mas_ru_rifle\sounds\akm_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_akms_h: arifle_mas_akms
	{
		displayName = "AKMS pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_a: arifle_mas_akms
	{
		displayName = "AKMS aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_sd: arifle_mas_akms
	{
		displayName = "AKMS SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_gl: arifle_mas_ak_74m_gl
	{
		displayname = "AKMS GL";
		model = "\mas_ru_rifle\mas_akms_gl";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akmgl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_762x39_mag","30Rnd_mas_762x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_akmsg_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x39 mm";
		class Library
		{
			libtextdesc = "The AKM is a 7.62mm assault rifle designed by Mikhail Kalashnikov. It is an upgraded version of the AK-47 rifle and was developed in the 1950s. Introduced into service with the Soviet Army in 1959, the AKM is the most ubiquitous variant of the entire AK series of firearms and it has found widespread use with most member states of the former Warsaw Pact and its many African and Asian allies as well as being widely exported and produced in many other countries. It was officially replaced in Soviet Front-Line service by the AK-74 in the late 1970s, but remains in use worldwide. The main variant of the AKM is the AKMS, which was equipped with an under folding metal shoulder stock in place of the fixed wooden stock.This version is equipped with the GP30 wich is a single-shot 40 mm grenade launcher.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\akm_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\akm_s2",1.0,1,1200};
				begin3[] = {"\mas_ru_rifle\sounds\akm_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\akm_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\akm_s2",1.0,1,1200};
				begin3[] = {"\mas_ru_rifle\sounds\akm_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.096;
			dispersion = 0.0011;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_akms_gl_h: arifle_mas_akms_gl
	{
		displayName = "AKMS GL pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_gl_a: arifle_mas_akms_gl
	{
		displayName = "AKMS GL aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_gl_sd: arifle_mas_akms_gl
	{
		displayName = "AKMS GL SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_c: arifle_mas_akms
	{
		displayname = "AKMS camo";
		model = "\mas_ru_rifle\mas_akms";
		hiddenSelections[] = {"camo","camo4"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\zastava_cv.paa","mas_ru_rifle\akm\data\akm_cv.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_akms_x_ca.paa";
	};
	class arifle_mas_akms_c_h: arifle_mas_akms_c
	{
		displayName = "AKMS camo pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_c_a: arifle_mas_akms_c
	{
		displayName = "AKMS camo aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_c_sd: arifle_mas_akms_c
	{
		displayName = "AKMS camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_gl_c: arifle_mas_akms_gl
	{
		displayname = "AKMS GL camo";
		model = "\mas_ru_rifle\mas_akms_gl";
		hiddenSelections[] = {"camo","camo2","camo4"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\zastava_cv.paa","mas_ru_rifle\akm\data\gp31_co.paa","mas_ru_rifle\akm\data\akm_cv.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_akmsg_x_ca.paa";
	};
	class arifle_mas_akms_gl_c_h: arifle_mas_akms_gl_c
	{
		displayName = "AKMS GL camo pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_gl_c_a: arifle_mas_akms_gl_c
	{
		displayName = "AKMS GL camo aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akms_gl_c_sd: arifle_mas_akms_gl_c
	{
		displayName = "AKMS GL camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akm: arifle_mas_akms
	{
		displayname = "AKM";
		model = "\mas_ru_rifle\mas_akm";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akm.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		picture = "\mas_ru_rifle\ui\gear_akm_x_ca.paa";
	};
	class arifle_mas_akm_h: arifle_mas_akm
	{
		displayName = "AKM pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akm_a: arifle_mas_akm
	{
		displayName = "AKM aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akm_gl: arifle_mas_akms_gl
	{
		displayname = "AKM GL";
		model = "\mas_ru_rifle\mas_akm_gl";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akmgl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_762x39_mag","30Rnd_mas_762x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_akmg_x_ca.paa";
	};
	class arifle_mas_akm_gl_h: arifle_mas_akm_gl
	{
		displayName = "AKM GL pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_akm_gl_a: arifle_mas_akm_gl
	{
		displayName = "AKM GL aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m70: arifle_mas_akm
	{
		displayname = "Zastava M70";
		model = "\mas_ru_rifle\mas_m70";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akm.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		picture = "\mas_ru_rifle\ui\gear_akm_x_ca.paa";
		class Library
		{
			libtextdesc = "The Zastava M70 is a 7,62mm assault rifle developed in Yugoslavia, nowadays Kragujevac, Serbia by the Serbian company Zastava Arms. The M70 was designed on the basis of the AKM and became the standard issue assault rifle in the Yugoslav People's Army in 1970. The M70 is an air cooled, magazine fed, selective fire rifle. It is informally referred to as the Yugo M70 or Yugo AK. The M70 can easily be told apart from other AK rifles by the three cooling slots on the foregrip, the light coloured teak furniture and the black rubber buttplate on fixed stock M70s.";
		};
	};
	class arifle_mas_m70_gl: arifle_mas_akm_gl
	{
		displayname = "Zastava M70 GL";
		model = "\mas_ru_rifle\mas_m70_gl";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akmgl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_762x39_mag","30Rnd_mas_762x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_akmg_x_ca.paa";
		class Library
		{
			libtextdesc = "The Zastava M70 is a 7,62mm assault rifle developed in Yugoslavia, nowadays Kragujevac, Serbia by the Serbian company Zastava Arms. The M70 was designed on the basis of the AKM and became the standard issue assault rifle in the Yugoslav People's Army in 1970. The M70 is an air cooled, magazine fed, selective fire rifle. It is informally referred to as the Yugo M70 or Yugo AK. The M70 can easily be told apart from other AK rifles by the three cooling slots on the foregrip, the light coloured teak furniture and the black rubber buttplate on fixed stock M70s. This version is equipped with the GP30 wich is a single shot 40 mm grenade launcher.";
		};
	};
	class arifle_mas_m70ab: arifle_mas_akms
	{
		displayname = "Zastava M70AB(folding stock)";
		model = "\mas_ru_rifle\mas_m70b";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akm.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		picture = "\mas_ru_rifle\ui\gear_akms_x_ca.paa";
		class Library
		{
			libtextdesc = "The Zastava M70 is a 7,62mm assault rifle developed in Yugoslavia, nowadays Kragujevac, Serbia by the Serbian company Zastava Arms. The M70 was designed on the basis of the AKM and became the standard issue assault rifle in the Yugoslav People's Army in 1970. The M70 is an air cooled, magazine fed, selective fire rifle. It is informally referred to as the Yugo M70 or Yugo AK. The M70 can easily be told apart from other AK rifles by the three cooling slots on the foregrip, the light coloured teak furniture and the black rubber buttplate on fixed stock M70s.";
		};
	};
	class arifle_mas_m70ab_gl: arifle_mas_akms_gl
	{
		displayname = "Zastava M70AB GL(folding stock)";
		model = "\mas_ru_rifle\mas_m70b_gl";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_akmgl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_762x39_mag","30Rnd_mas_762x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_akmsg_x_ca.paa";
		class Library
		{
			libtextdesc = "The Zastava M70 is a 7,62mm assault rifle developed in Yugoslavia, nowadays Kragujevac, Serbia by the Serbian company Zastava Arms. The M70 was designed on the basis of the AKM and became the standard issue assault rifle in the Yugoslav People's Army in 1970. The M70 is an air cooled, magazine fed, selective fire rifle. It is informally referred to as the Yugo M70 or Yugo AK. The M70 can easily be told apart from other AK rifles by the three cooling slots on the foregrip, the light coloured teak furniture and the black rubber buttplate on fixed stock M70s. This version is equipped with the GP30 wich is a single shot 40 mm grenade launcher.";
		};
	};
	class srifle_mas_svd: srifle_EBR_F
	{
		displayname = "SVD Dragunov";
		model = "\mas_ru_rifle\mas_svd";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_svd.rtm"};
		reloadAction = "GestureReloadEBR";
		magazines[] = {"10Rnd_mas_762x54_mag","10Rnd_mas_762x54_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_svd_x_ca.paa";
		descriptionshort = "Sniper Rifle<br />Caliber: 7.62x54 mm";
		maxZeroing = 1400;
		class Library
		{
			libtextdesc = "The Dragunov sniper rifle is a semi-automatic sniper rifle/designated marksman rifle chambered in 7.62×54mmR and developed in the Soviet Union. The Dragunov was designed as a squad support weapon since, according to Soviet and Soviet-derived military doctrines, the long-range engagement ability was lost to ordinary troops when submachine guns and assault rifles were adopted. It was selected as the winner of a contest that included three competing designs: by Sergei Simonov, Aleksandr Konstantinov and Yevgeny Dragunov. Extensive field testing of the rifles conducted in a wide range of environmental conditions resulted in Dragunov’s proposal being accepted into service in 1963. An initial pre-production batch consisting of 200 rifles was assembled for evaluation purposes, and from 1964 serial production was carried out by Izhmash. Since then, the Dragunov has become the standard squad support weapon of several countries, including those of the former Warsaw Pact. Licensed production of the rifle was established in China (Type 79 and Type 85) and Iran (as a direct copy of the Chinese Type 79).";
		};
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\svd_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\svd_s2",1.0,1,1200};
				begin3[] = {"\mas_ru_rifle\sounds\svd_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.085;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.0007;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr",0.630957,1,35};
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","muzzle_mas_snds_SVD"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class srifle_mas_svd_h: srifle_mas_svd
	{
		displayName = "SVD Dragunov pso NV";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_nv_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_svd_sd: srifle_mas_svd
	{
		displayName = "SVD Dragunov SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_nv_eo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SVD";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_svd_l: srifle_mas_svd
	{
		displayName = "SVD Dragunov pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso";
			};
		};
	};
	class srifle_mas_m91: srifle_mas_svd
	{
		displayname = "Zastava M91";
		model = "\mas_ru_rifle\mas_m91";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_svd.rtm"};
		reloadAction = "GestureReloadEBR";
		magazines[] = {"10Rnd_mas_762x54_mag","10Rnd_mas_762x54_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_svd_x_ca.paa";
		descriptionshort = "Sniper Rifle<br />Caliber: 7.62x54 mm";
		class Library
		{
			libtextdesc = "The M91 is a semi automatic, air cooled, detachable 10 box magazine fed firearm with a fixed stock. In concept, it is similar to the Russian Dragunov SVD sniper designated marksman rifle. While the design of the M91 is based upon an elongated version of the Avtomat Kalashnikov 1947 AK 47 design just like its predecessor, the Zastava M76, the rifle features several modifications, bringing it closer to its Soviet counterpart, the Dragunov sniper rifle.";
		};
	};
	class srifle_mas_m91_l: srifle_mas_m91
	{
		displayName = "Zastava M91 pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso";
			};
		};
	};
	class srifle_mas_ksvk: srifle_GM6_F
	{
		displayname = "KSVK";
		model = "\mas_ru_rifle\mas_ksvk";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_ksvk.rtm"};
		reloadAction = "GestureReloadLRR";
		magazines[] = {"5Rnd_mas_127x108_mag","5Rnd_mas_127x108_dem_mag","5Rnd_mas_127x108_T_mag","5Rnd_127x108_Mag"};
		picture = "\mas_ru_rifle\ui\gear_ksvk_x_ca.paa";
		descriptionshort = "Sniper Rifle<br />Caliber: 12.7x108 mm";
		maxZeroing = 2300;
		class Library
		{
			libtextdesc = "The KSVK 12.7 is a 12.7mm anti-materiel sniper rifle developed in Russia for the purpose of counter sniping and penetrating thick walls, as well as light armored vehicles. The KSVK anti-materiel rifle was developed in the late 1990s by ZID plant, based in Kovrov, Russia. It is based on the SVN-98 12.7mm experimental rifle. Initially known as ASVK, KSVK is currently used in small numbers by various Russian Special Operation units in Chechnya as a counter-sniper rifle, capable of penetrating a brick or a thick wooden walls and disabling people behind them.";
		};
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00038;
			soundContinuous = 0;
			reloadTime = 1.5;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.12202,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\ksvk_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\ksvk_s2",1.0,1,1200};
				begin3[] = {"\mas_ru_rifle\sounds\ksvk_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			requiredOpticType = 1;
		};
		class medium_optic2: Single
		{
			showToPlayer = 0;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2: far_optic1
		{
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 2500;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class WeaponSlotsInfo
		{
			mass = 120;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","muzzle_mas_snds_KSVK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class srifle_mas_ksvk_h: srifle_mas_ksvk
	{
		displayName = "KSVK pso NV";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_nv_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_ksvk_sd: srifle_mas_ksvk
	{
		displayName = "KSVK SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_nv_eo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_KSVK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_ksvk_c: srifle_mas_ksvk
	{
		displayname = "KSVK camo";
		model = "\mas_ru_rifle\mas_ksvk";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\ksvk_cv.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_ksvk_x_ca.paa";
	};
	class srifle_mas_ksvk_c_h: srifle_mas_ksvk_c
	{
		displayName = "KSVK camo pso NV";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_nv_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_ksvk_c_sd: srifle_mas_ksvk_c
	{
		displayName = "KSVK camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_nv_eo_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SVD";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_rpk_F: LMG_Mk200_F
	{
		displayname = "RPK74";
		model = "\mas_ru_rifle\mas_rpk";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_rpk.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","100Rnd_mas_545x39_mag","100Rnd_mas_545x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_rpk_x_ca.paa";
		descriptionshort = "Light Machinegun<br />Caliber: 5.45x39 mm";
		class Library
		{
			libtextdesc = "The RPK74 was Introduced in 1974 together with the AK-74 assault rifle and chambered for the new 5.45x39mm high-velocity cartridge. The RPK-74 derives from the AK-74 rifle, with modifications that mirror those made to the AKM to create the RPK. The RPK-74 also uses a longer and heavier chrome-plated barrel, which has a new gas block with a gas channel at a 90 degrees angle to the bore axis, and a ring for the cleaning rod. The RPK-74 was also equipped with a folding bipod and a different front sight tower. The muzzle is threaded for a flash suppressor or blank-firing device.";
		};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.075;
			dispersion = 0.00093;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",1.12202,1,10};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",1.12202,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\rpk_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\rpk_s2",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25",0.891251,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26",0.891251,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
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
			midRangeProbab = 0.7;
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
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H_MG"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws_mg","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class LMG_mas_rpk_F_h: LMG_mas_rpk_F
	{
		displayName = "RPK74 Arco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Arco";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_rpk_F_a: LMG_mas_rpk_F
	{
		displayName = "RPK74 aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_rpk_F_sd: LMG_mas_rpk_F
	{
		displayName = "RPK74 SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_MG";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_m72_F: LMG_mas_rpk_F
	{
		displayname = "Zastava M72";
		model = "\mas_ru_rifle\mas_m72";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_rpk.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"100Rnd_mas_762x39_mag","100Rnd_mas_762x39_T_mag","30Rnd_mas_762x39_mag","30Rnd_mas_762x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_rpk_x_ca.paa";
		descriptionshort = "Light Machinegun<br />Caliber: 7.62x39 mm";
		class Library
		{
			libtextdesc = "The Zastava M72 chambers and fires the 7,62x39mm M43 round. It is a gas operated, air cooled, drum fed firearm with a fixed stock. This weapon is a near copy of the Soviet RPK light machine gun. There are a few differences on the M72. It does not have a scope side rail mount, the butt is also different, having the shape of a regular AK 47 rifle.";
		};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.085;
			dispersion = 0.00093;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",1.12202,1,10};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",1.12202,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\akm_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\akm_s2",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25",0.891251,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26",0.891251,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
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
			midRangeProbab = 0.7;
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
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
	};
	class LMG_mas_pkm_F: LMG_Mk200_F
	{
		displayname = "PKM";
		model = "\mas_ru_rifle\mas_pkm";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_pkm.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"100Rnd_mas_762x54_mag","100Rnd_mas_762x54_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_pkm_x_ca.paa";
		descriptionshort = "Machinegun<br />Caliber: 7.62x54 mm";
		class Library
		{
			libtextdesc = "The original PK was a development of Kalashnikov automatic rifle design, firing the 7.62x54mmR Eastern Bloc standard ammunition originally from the Mosin Nagant. It is equipped with a simple bipod and is designed as a squad level support weapon, it is also suitable for installation and vehicle mounting. The PK machine gun can be used as a light anti aircraft weapon when it is put on an AA mount.";
		};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.085;
			dispersion = 0.00093;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",1.12202,1,10};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",1.12202,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\pkm_s1",1.0,1,1200};
				begin2[] = {"\mas_ru_rifle\sounds\pkm_s2",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25",0.891251,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26",0.891251,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
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
			midRangeProbab = 0.7;
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
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H_MG"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws_mg","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class LMG_mas_pkm_F_h: LMG_mas_pkm_F
	{
		displayName = "PKM Arco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Arco";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_pkm_F_a: LMG_mas_pkm_F
	{
		displayName = "PKM aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74u: arifle_Katiba_F
	{
		displayname = "AKS74U";
		model = "\mas_ru_rifle\mas_aks74u";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_aksu.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag"};
		picture = "\mas_ru_rifle\ui\gear_aks74u_x_ca.paa";
		descriptionshort = "Submachinegun<br />Caliber: 5.45x39 mm";
		class Library
		{
			libtextdesc = "The AK-74 is an assault rifle developed in the early 1970s in the Soviet Union as the replacement for the earlier AKM. It uses the 5.45×39mm cartridge. In 1979, a shortened carbine variant of the AKS-74 was adopted into service with the Soviet Army: the AKS-74U, which in terms of tactical deployment, bridges the gap between a submachine gun and an assault rifle. It was intended for use mainly with special forces, airborne infantry, rear-echelon support units and armored vehicle crews. It is still used in these roles. It is also commonly used by law enforcement, for example, each urban police foot patrol is issued at least one.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\AK74U_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\AK74U_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			dispersion = 0.0011;
			recoil = "recoil_single_ktb";
			recoilProne = "recoil_single_prone_ktb";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\AK74U_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\AK74U_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			dispersion = 0.0011;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_ACO_grn_smg","optic_Holosight_smg","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_aks74u_h: arifle_mas_aks74u
	{
		displayName = "AKS74U pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74u_a: arifle_mas_aks74u
	{
		displayName = "AKS74U aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74u_sd: arifle_mas_aks74u
	{
		displayName = "AKS74U SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74u_c: arifle_mas_aks74u
	{
		displayname = "AKS74U camo";
		model = "\mas_ru_rifle\mas_aks74u";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_ru_rifle\akm\data\aks74u_cv.paa"};
		picture = "\mas_ru_rifle\ui\w\gear_aks74u_x_ca.paa";
	};
	class arifle_mas_aks74u_c_h: arifle_mas_aks74u_c
	{
		displayName = "AKS74U camo pso";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_pso_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74u_c_a: arifle_mas_aks74u_c
	{
		displayName = "AKS74U camo aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_aks74u_c_sd: arifle_mas_aks74u_c
	{
		displayName = "AKS74U camo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_ACO_grn_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_bizon: arifle_mas_aks74u
	{
		displayname = "Bizon";
		model = "\mas_ru_rifle\mas_bizon";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_bizon.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"64Rnd_mas_9x18_mag"};
		picture = "\mas_ru_rifle\ui\gear_bizon_x_ca.paa";
		descriptionshort = "Submachinegun<br />Caliber: 9x18 mm";
		class Library
		{
			libtextdesc = "The PP19 Bizon is a 9mm submachine gun developed in the early 1990s at Izhmash by a team of engineers headed by Victor Kalashnikov, son of famed AK-47 designer Mikhail Kalashnikov. Alexi Dragunov, youngest son of Evgeny Dragunov, responsible for the SVD sniper rifle, was also a member of the design team. The Bizon was developed at the request of the Ministry of Internal Affairs MVD and is primarily intended for counter terrorist and law enforcement units that usually need fast and accurate fire at close ranges.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\AK74U_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\AK74U_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			dispersion = 0.0011;
			recoil = "recoil_single_ktb";
			recoilProne = "recoil_single_prone_ktb";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\AK74U_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\AK74U_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			dispersion = 0.0011;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M","muzzle_mas_snds_AK"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_pso","optic_mas_pso_nv","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_pso_eo","optic_mas_pso_nv_eo","optic_mas_pso_c","optic_mas_pso_nv_c","optic_mas_pso_eo_c","optic_mas_pso_nv_eo_c","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_ACO_grn_smg","optic_Holosight_smg","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_bizon_a: arifle_mas_bizon
	{
		displayName = "Bizon aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_bizon_sd: arifle_mas_bizon
	{
		displayName = "Bizon SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn_smg";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_AK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_saiga: arifle_mas_ak_74m
	{
		displayname = "Saiga 12";
		model = "\mas_ru_rifle\mas_saiga";
		reloadAction = "GestureReloadEBR";
		handanim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\Anim\Handanim_saiga.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"10Rnd_mas_12Gauge_Slug","10Rnd_mas_12Gauge_Pellets"};
		picture = "\mas_ru_rifle\ui\gear_saiga_x_ca.paa";
		descriptionshort = "Shotgun<br />Caliber: 12 cal";
		class Library
		{
			libtextdesc = "The Saiga 12 is a 12 gauge shotgun available in a wide range of configurations, visually patterned after the Kalashnikov series of assault rifles. Like the Kalashnikov rifle variants, it is a rotating bolt, gas operated gun that feeds from a box magazine. All Saiga 12 configurations are recognizable as Kalashnikov pattern guns by the large lever safety on the right side of the receiver, the optic mounting rail on the left side of the receiver and the large top mounted dust cover held in place by the rear of the recoil spring assembly.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\m24_s1",1.0,1,900};
				begin2[] = {"\mas_us_rifle\sounds\m24_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.096;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.0011;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 800;
		};
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_aim","optic_mas_aim_c","optic_SOS","optic_MRCO","optic_ACO_grn_smg","optic_Holosight_smg","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
};
class CfgVehicles
{
	class Box_East_Wps_F;
	class Box_mas_ru_rifle_Wps_F: Box_East_Wps_F
	{
		displayName = "Spetsnaz Weapons/Ammo Box";
		maximumLoad = 999999;
		transportMaxWeapons = 50000;
		transportMaxMagazines = 200000;
		transportMaxBackpacks = 2000;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_545x39_mag
			{
				magazine = "30Rnd_mas_545x39_mag";
				count = 120;
			};
			class _xx_30Rnd_mas_545x39_T_mag
			{
				magazine = "30Rnd_mas_545x39_T_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_545x39_mag
			{
				magazine = "100Rnd_mas_545x39_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_545x39_T_mag
			{
				magazine = "100Rnd_mas_545x39_T_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x54_mag
			{
				magazine = "100Rnd_mas_762x54_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x54_T_mag
			{
				magazine = "100Rnd_mas_762x54_T_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x39_mag
			{
				magazine = "100Rnd_mas_762x39_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x39_T_mag
			{
				magazine = "100Rnd_mas_762x39_T_mag";
				count = 60;
			};
			class _xx_30Rnd_mas_762x39_mag
			{
				magazine = "30Rnd_mas_762x39_mag";
				count = 120;
			};
			class _xx_30Rnd_mas_762x39_T_mag
			{
				magazine = "30Rnd_mas_762x39_T_mag";
				count = 60;
			};
			class _xx_64Rnd_mas_9x18_mag
			{
				magazine = "64Rnd_mas_9x18_mag";
				count = 60;
			};
			class _xx_20Rnd_mas_765x17_Mag
			{
				magazine = "20Rnd_mas_765x17_Mag";
				count = 60;
			};
			class _xx_10Rnd_mas_12Gauge_Slug
			{
				magazine = "10Rnd_mas_12Gauge_Slug";
				count = 30;
			};
			class _xx_10Rnd_mas_12Gauge_Pellets
			{
				magazine = "10Rnd_mas_12Gauge_Pellets";
				count = 30;
			};
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 40;
			};
			class _xx_10Rnd_mas_762x54_mag
			{
				magazine = "10Rnd_mas_762x54_mag";
				count = 120;
			};
			class _xx_10Rnd_mas_762x54_T_mag
			{
				magazine = "10Rnd_mas_762x54_T_mag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x108_mag
			{
				magazine = "5Rnd_mas_127x108_mag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x108_dem_mag
			{
				magazine = "5Rnd_mas_127x108_dem_mag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x108_T_mag
			{
				magazine = "5Rnd_mas_127x108_T_mag";
				count = 60;
			};
			class _xx_17Rnd_mas_9x21_Mag
			{
				magazine = "17Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_13Rnd_mas_9x21_Mag
			{
				magazine = "13Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 60;
			};
			class _xx_15Rnd_mas_9x21_Mag
			{
				magazine = "15Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_8Rnd_mas_9x18_Mag
			{
				magazine = "8Rnd_mas_9x18_Mag";
				count = 60;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine = "20Rnd_556x45_UW_mag";
				count = 60;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 16;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 16;
			};
			class _xx_mas_PG7V
			{
				magazine = "mas_PG7V";
				count = 16;
			};
			class _xx_mas_OG7
			{
				magazine = "mas_OG7";
				count = 16;
			};
			class _xx_mas_PG18
			{
				magazine = "mas_PG18";
				count = 16;
			};
			class _xx_mas_Strela
			{
				magazine = "mas_Strela";
				count = 16;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 8;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 8;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 20;
			};
			class _xx_O_IR_Grenade
			{
				magazine = "O_IR_Grenade";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 5;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 5;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 5;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 5;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 5;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 10;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine = "APERSTripMine_Wire_Mag";
				count = 5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 5;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 5;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 5;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 10;
			};
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 10;
			};
			class _xx_Chemlight_yellow
			{
				magazine = "Chemlight_yellow";
				count = 10;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 10;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 12;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_ak_74m
			{
				weapon = "arifle_mas_ak_74m";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_h
			{
				weapon = "arifle_mas_ak_74m_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_ti
			{
				weapon = "arifle_mas_ak_74m_ti";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_a
			{
				weapon = "arifle_mas_ak_74m_a";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sd
			{
				weapon = "arifle_mas_ak_74m_sd";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl
			{
				weapon = "arifle_mas_ak_74m_gl";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_gl_a
			{
				weapon = "arifle_mas_ak_74m_gl_a";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl_h
			{
				weapon = "arifle_mas_ak_74m_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl_ti
			{
				weapon = "arifle_mas_ak_74m_gl_ti";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl_sd
			{
				weapon = "arifle_mas_ak_74m_gl_sd";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_c
			{
				weapon = "arifle_mas_ak_74m_c";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_c_h
			{
				weapon = "arifle_mas_ak_74m_c_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_c_ti
			{
				weapon = "arifle_mas_ak_74m_c_ti";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_c_a
			{
				weapon = "arifle_mas_ak_74m_c_a";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_c_sd
			{
				weapon = "arifle_mas_ak_74m_c_sd";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl_c
			{
				weapon = "arifle_mas_ak_74m_gl_c";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_gl_c_h
			{
				weapon = "arifle_mas_ak_74m_gl_c_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl_c_ti
			{
				weapon = "arifle_mas_ak_74m_gl_c_ti";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl_c_a
			{
				weapon = "arifle_mas_ak_74m_gl_c_a";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_gl_c_sd
			{
				weapon = "arifle_mas_ak_74m_gl_c_sd";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf
			{
				weapon = "arifle_mas_ak_74m_sf";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_sf_h
			{
				weapon = "arifle_mas_ak_74m_sf_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_e
			{
				weapon = "arifle_mas_ak_74m_sf_e";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_sd
			{
				weapon = "arifle_mas_ak_74m_sf_sd";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_gl
			{
				weapon = "arifle_mas_ak_74m_sf_gl";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_a
			{
				weapon = "arifle_mas_ak_74m_sf_gl_a";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_h
			{
				weapon = "arifle_mas_ak_74m_sf_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_sd
			{
				weapon = "arifle_mas_ak_74m_sf_gl_sd";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_c
			{
				weapon = "arifle_mas_ak_74m_sf_c";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_sf_c_h
			{
				weapon = "arifle_mas_ak_74m_sf_c_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_c_e
			{
				weapon = "arifle_mas_ak_74m_sf_c_e";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_c_sd
			{
				weapon = "arifle_mas_ak_74m_sf_c_sd";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_c
			{
				weapon = "arifle_mas_ak_74m_sf_gl_c";
				count = 2;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_c_h
			{
				weapon = "arifle_mas_ak_74m_sf_gl_c_h";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_c_a
			{
				weapon = "arifle_mas_ak_74m_sf_gl_c_a";
				count = 1;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_c_sd
			{
				weapon = "arifle_mas_ak_74m_sf_gl_c_sd";
				count = 1;
			};
			class _xx_arifle_mas_aks74
			{
				weapon = "arifle_mas_aks74";
				count = 2;
			};
			class _xx_arifle_mas_aks74_a
			{
				weapon = "arifle_mas_aks74_a";
				count = 1;
			};
			class _xx_arifle_mas_aks74_gl
			{
				weapon = "arifle_mas_aks74_gl";
				count = 2;
			};
			class _xx_arifle_mas_aks74_gl_a
			{
				weapon = "arifle_mas_aks74_gl_a";
				count = 1;
			};
			class _xx_arifle_mas_aks74u
			{
				weapon = "arifle_mas_aks74u";
				count = 2;
			};
			class _xx_arifle_mas_aks74u_a
			{
				weapon = "arifle_mas_aks74u_a";
				count = 1;
			};
			class _xx_arifle_mas_aks74u_sd
			{
				weapon = "arifle_mas_aks74u_sd";
				count = 1;
			};
			class _xx_arifle_mas_aks74u_c
			{
				weapon = "arifle_mas_aks74u_c";
				count = 2;
			};
			class _xx_arifle_mas_aks74u_c_a
			{
				weapon = "arifle_mas_aks74u_c_a";
				count = 1;
			};
			class _xx_arifle_mas_aks74u_c_sd
			{
				weapon = "arifle_mas_aks74u_c_sd";
				count = 1;
			};
			class _xx_arifle_mas_bizon
			{
				weapon = "arifle_mas_bizon";
				count = 2;
			};
			class _xx_arifle_mas_bizon_a
			{
				weapon = "arifle_mas_bizon_a";
				count = 1;
			};
			class _xx_arifle_mas_bizon_sd
			{
				weapon = "arifle_mas_bizon_sd";
				count = 1;
			};
			class _xx_arifle_mas_akms
			{
				weapon = "arifle_mas_akms";
				count = 2;
			};
			class _xx_arifle_mas_akms_h
			{
				weapon = "arifle_mas_akms_h";
				count = 1;
			};
			class _xx_arifle_mas_akms_a
			{
				weapon = "arifle_mas_akms_a";
				count = 1;
			};
			class _xx_arifle_mas_akms_sd
			{
				weapon = "arifle_mas_akms_sd";
				count = 1;
			};
			class _xx_arifle_mas_akms_gl
			{
				weapon = "arifle_mas_akms_gl";
				count = 2;
			};
			class _xx_arifle_mas_akms_gl_h
			{
				weapon = "arifle_mas_akms_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_akms_gl_a
			{
				weapon = "arifle_mas_akms_gl_a";
				count = 1;
			};
			class _xx_arifle_mas_akms_gl_sd
			{
				weapon = "arifle_mas_akms_gl_sd";
				count = 1;
			};
			class _xx_arifle_mas_akms_c
			{
				weapon = "arifle_mas_akms_c";
				count = 2;
			};
			class _xx_arifle_mas_akms_c_h
			{
				weapon = "arifle_mas_akms_c_h";
				count = 1;
			};
			class _xx_arifle_mas_akms_c_a
			{
				weapon = "arifle_mas_akms_c_a";
				count = 1;
			};
			class _xx_arifle_mas_akms_c_sd
			{
				weapon = "arifle_mas_akms_c_sd";
				count = 1;
			};
			class _xx_arifle_mas_akms_gl_c
			{
				weapon = "arifle_mas_akms_gl_c";
				count = 2;
			};
			class _xx_arifle_mas_akms_gl_c_h
			{
				weapon = "arifle_mas_akms_gl_c_h";
				count = 1;
			};
			class _xx_arifle_mas_akms_gl_c_a
			{
				weapon = "arifle_mas_akms_gl_c_a";
				count = 1;
			};
			class _xx_arifle_mas_akms_gl_c_sd
			{
				weapon = "arifle_mas_akms_gl_c_sd";
				count = 1;
			};
			class _xx_arifle_mas_akm
			{
				weapon = "arifle_mas_akm";
				count = 2;
			};
			class _xx_arifle_mas_akm_a
			{
				weapon = "arifle_mas_akm_a";
				count = 1;
			};
			class _xx_arifle_mas_akm_h
			{
				weapon = "arifle_mas_akm_h";
				count = 1;
			};
			class _xx_arifle_mas_akm_gl
			{
				weapon = "arifle_mas_akm_gl";
				count = 2;
			};
			class _xx_arifle_mas_akm_gl_a
			{
				weapon = "arifle_mas_akm_gl_a";
				count = 1;
			};
			class _xx_arifle_mas_akm_gl_h
			{
				weapon = "arifle_mas_akm_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_m70
			{
				weapon = "arifle_mas_m70";
				count = 2;
			};
			class _xx_arifle_mas_m70_gl
			{
				weapon = "arifle_mas_m70_gl";
				count = 2;
			};
			class _xx_arifle_mas_m70ab
			{
				weapon = "arifle_mas_m70ab";
				count = 2;
			};
			class _xx_arifle_mas_m70ab_gl
			{
				weapon = "arifle_mas_m70ab_gl";
				count = 2;
			};
			class _xx_arifle_mas_saiga
			{
				weapon = "arifle_mas_saiga";
				count = 4;
			};
			class _xx_srifle_mas_svd
			{
				weapon = "srifle_mas_svd";
				count = 2;
			};
			class _xx_srifle_mas_svd_h
			{
				weapon = "srifle_mas_svd_h";
				count = 1;
			};
			class _xx_srifle_mas_svd_sd
			{
				weapon = "srifle_mas_svd_sd";
				count = 1;
			};
			class _xx_srifle_mas_m91
			{
				weapon = "srifle_mas_m91";
				count = 2;
			};
			class _xx_srifle_mas_m91_l
			{
				weapon = "srifle_mas_m91_l";
				count = 1;
			};
			class _xx_srifle_mas_ksvk
			{
				weapon = "srifle_mas_ksvk";
				count = 2;
			};
			class _xx_srifle_mas_ksvk_h
			{
				weapon = "srifle_mas_ksvk_h";
				count = 2;
			};
			class _xx_srifle_mas_ksvk_c
			{
				weapon = "srifle_mas_ksvk_c";
				count = 2;
			};
			class _xx_srifle_mas_ksvk_c_h
			{
				weapon = "srifle_mas_ksvk_c_h";
				count = 2;
			};
			class _xx_LMG_mas_rpk_F
			{
				weapon = "LMG_mas_rpk_F";
				count = 2;
			};
			class _xx_LMG_mas_rpk_F_a
			{
				weapon = "LMG_mas_rpk_F_a";
				count = 1;
			};
			class _xx_LMG_mas_rpk_F_h
			{
				weapon = "LMG_mas_rpk_F_h";
				count = 1;
			};
			class _xx_LMG_mas_m72_F
			{
				weapon = "LMG_mas_m72_F";
				count = 2;
			};
			class _xx_LMG_mas_pkm_F
			{
				weapon = "LMG_mas_pkm_F";
				count = 2;
			};
			class _xx_LMG_mas_pkm_F_a
			{
				weapon = "LMG_mas_pkm_F_a";
				count = 1;
			};
			class _xx_LMG_mas_pkm_F_h
			{
				weapon = "LMG_mas_pkm_F_h";
				count = 1;
			};
			class _xx_hgun_mas_sa61_F
			{
				weapon = "hgun_mas_sa61_F";
				count = 4;
			};
			class _xx_hgun_mas_sa61_F_sd
			{
				weapon = "hgun_mas_sa61_F_sd";
				count = 4;
			};
			class _xx_hgun_mas_mak_F
			{
				weapon = "hgun_mas_mak_F";
				count = 20;
			};
			class _xx_hgun_mas_grach_F
			{
				weapon = "hgun_mas_grach_F";
				count = 10;
			};
			class _xx_hgun_mas_grach_F_sd
			{
				weapon = "hgun_mas_grach_F_sd";
				count = 10;
			};
			class _xx_launch_RPG32_F
			{
				weapon = "launch_RPG32_F";
				count = 4;
			};
			class _xx_mas_launch_RPG7_F
			{
				weapon = "mas_launch_RPG7_F";
				count = 4;
			};
			class _xx_mas_launch_RPG18_F
			{
				weapon = "mas_launch_RPG18_F";
				count = 4;
			};
			class _xx_mas_launch_strela_F
			{
				weapon = "mas_launch_strela_F";
				count = 4;
			};
			class _xx_launch_Titan_short_F
			{
				weapon = "launch_Titan_short_F";
				count = 4;
			};
			class _xx_launch_Titan_F
			{
				weapon = "launch_Titan_F";
				count = 4;
			};
			class _xx_arifle_SDAR_F
			{
				weapon = "arifle_SDAR_F";
				count = 20;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 5;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 5;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 20;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 10;
			};
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 10;
			};
			class _xx_muzzle_mas_snds_LM
			{
				name = "muzzle_mas_snds_LM";
				count = 20;
			};
			class _xx_muzzle_mas_snds_AK
			{
				name = "muzzle_mas_snds_AK";
				count = 20;
			};
			class _xx_muzzle_mas_snds_SVD
			{
				name = "muzzle_mas_snds_SVD";
				count = 20;
			};
			class _xx_muzzle_mas_snds_KSVK
			{
				name = "muzzle_mas_snds_KSVK";
				count = 20;
			};
			class _xx_muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 10;
			};
			class _xx_muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 10;
			};
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 10;
			};
			class _xx_muzzle_snds_L
			{
				name = "muzzle_snds_L";
				count = 10;
			};
			class _xx_muzzle_snds_H_MG
			{
				name = "muzzle_snds_H_MG";
				count = 10;
			};
			class _xx_optic_Hamr
			{
				name = "optic_Hamr";
				count = 10;
			};
			class _xx_optic_mas_Hamr_camo
			{
				name = "optic_mas_Hamr_camo";
				count = 10;
			};
			class _xx_optic_Arco
			{
				name = "optic_Arco";
				count = 10;
			};
			class _xx_optic_mas_Arco_blk
			{
				name = "optic_mas_Arco_blk";
				count = 10;
			};
			class _xx_optic_mas_Arco_camo
			{
				name = "optic_mas_Arco_camo";
				count = 10;
			};
			class _xx_optic_MRCO
			{
				name = "optic_MRCO";
				count = 10;
			};
			class _xx_optic_mas_MRCO_camo
			{
				name = "optic_mas_MRCO_camo";
				count = 10;
			};
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_optic_mas_Holosight_blk
			{
				name = "optic_mas_Holosight_blk";
				count = 10;
			};
			class _xx_optic_mas_Holosight_camo
			{
				name = "optic_mas_Holosight_camo";
				count = 10;
			};
			class _xx_optic_Aco
			{
				name = "optic_Aco";
				count = 10;
			};
			class _xx_optic_mas_Aco_camo
			{
				name = "optic_mas_Aco_camo";
				count = 10;
			};
			class _xx_optic_Aco_grn
			{
				name = "optic_Aco_grn";
				count = 10;
			};
			class _xx_optic_mas_ACO_grn_camo
			{
				name = "optic_mas_ACO_grn_camo";
				count = 10;
			};
			class _xx_optic_mas_aim
			{
				name = "optic_mas_aim";
				count = 10;
			};
			class _xx_optic_mas_aim_c
			{
				name = "optic_mas_aim_c";
				count = 10;
			};
			class _xx_optic_mas_acog
			{
				name = "optic_mas_acog";
				count = 10;
			};
			class _xx_optic_mas_acog_c
			{
				name = "optic_mas_acog_c";
				count = 10;
			};
			class _xx_optic_mas_acog_eo
			{
				name = "optic_mas_acog_eo";
				count = 10;
			};
			class _xx_optic_mas_acog_eo_c
			{
				name = "optic_mas_acog_eo_c";
				count = 10;
			};
			class _xx_optic_mas_acog_rd
			{
				name = "optic_mas_acog_rd";
				count = 10;
			};
			class _xx_optic_mas_acog_rd_c
			{
				name = "optic_mas_acog_rd_c";
				count = 10;
			};
			class _xx_optic_mas_pso
			{
				name = "optic_mas_pso";
				count = 10;
			};
			class _xx_optic_mas_pso_c
			{
				name = "optic_mas_pso_c";
				count = 10;
			};
			class _xx_optic_mas_pso_nv
			{
				name = "optic_mas_pso_nv";
				count = 10;
			};
			class _xx_optic_mas_pso_nv_c
			{
				name = "optic_mas_pso_nv_c";
				count = 10;
			};
			class _xx_optic_mas_pso_eo
			{
				name = "optic_mas_pso_eo";
				count = 10;
			};
			class _xx_optic_mas_pso_eo_c
			{
				name = "optic_mas_pso_eo_c";
				count = 10;
			};
			class _xx_optic_mas_pso_nv_eo
			{
				name = "optic_mas_pso_nv_eo";
				count = 10;
			};
			class _xx_optic_mas_pso_nv_eo_c
			{
				name = "optic_mas_pso_nv_eo_c";
				count = 10;
			};
			class _xx_optic_mas_zeiss
			{
				name = "optic_mas_zeiss";
				count = 10;
			};
			class _xx_optic_mas_zeiss_c
			{
				name = "optic_mas_zeiss_c";
				count = 10;
			};
			class _xx_optic_mas_zeiss_eo
			{
				name = "optic_mas_zeiss_eo";
				count = 10;
			};
			class _xx_optic_mas_zeiss_eo_c
			{
				name = "optic_mas_zeiss_eo_c";
				count = 10;
			};
			class _xx_optic_mas_DMS
			{
				name = "optic_mas_DMS";
				count = 10;
			};
			class _xx_optic_mas_DMS_c
			{
				name = "optic_mas_DMS_c";
				count = 10;
			};
			class _xx_optic_DMS
			{
				name = "optic_DMS";
				count = 10;
			};
			class _xx_optic_SOS
			{
				name = "optic_SOS";
				count = 10;
			};
			class _xx_optic_LRPS
			{
				name = "optic_LRPS";
				count = 10;
			};
			class _xx_optic_NVS
			{
				name = "optic_NVS";
				count = 10;
			};
			class _xx_optic_Nightstalker
			{
				name = "optic_Nightstalker";
				count = 10;
			};
			class _xx_optic_tws
			{
				name = "optic_tws";
				count = 10;
			};
			class _xx_optic_tws_mg
			{
				name = "optic_tws_mg";
				count = 10;
			};
			class _xx_optic_mas_term
			{
				name = "optic_mas_term";
				count = 10;
			};
			class _xx_optic_Holosight_smg
			{
				name = "optic_Holosight_smg";
				count = 10;
			};
			class _xx_optic_Aco_smg
			{
				name = "optic_Aco_smg";
				count = 10;
			};
			class _xx_optic_ACO_grn_smg
			{
				name = "optic_ACO_grn_smg";
				count = 10;
			};
			class _xx_optic_MRD
			{
				name = "optic_MRD";
				count = 10;
			};
			class _xx_optic_Yorris
			{
				name = "optic_Yorris";
				count = 10;
			};
			class _xx_Rangefinder
			{
				name = "Rangefinder";
				count = 10;
			};
			class _xx_Binocular
			{
				name = "Binocular";
				count = 10;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 4;
			};
			class _xx_NVGoggles_OPFOR
			{
				name = "NVGoggles_OPFOR";
				count = 10;
			};
			class _xx_NVGoggles_o_mas
			{
				name = "NVGoggles_o_mas";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask
			{
				name = "NVGoggles_mas_mask";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2
			{
				name = "NVGoggles_mas_mask2";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_b
			{
				name = "NVGoggles_mas_mask_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_b
			{
				name = "NVGoggles_mas_mask2_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_t
			{
				name = "NVGoggles_mas_mask_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_t
			{
				name = "NVGoggles_mas_mask2_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask3
			{
				name = "NVGoggles_mas_mask3";
				count = 10;
			};
		};
	};
};

