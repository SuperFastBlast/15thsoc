
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
	class mas_weapons_nw
	{
		requiredaddons[] = {"A3_Weapons_F","mas_weapons","mas_weapons_m4"};
		requiredversion = 1.0;
		units[] = {"Box_mas_us_rifle_Wps_F"};
		weapons[] = {"arifle_mas_mk16","arifle_mas_mk16_h","arifle_mas_mk16_e","arifle_mas_mk16_sd","arifle_mas_mk16_gl","arifle_mas_mk16_gl_h","arifle_mas_mk16_gl_e","arifle_mas_mk16_gl_sd","arifle_mas_mk16_l","arifle_mas_mk16_l_h","arifle_mas_mk16_l_e","arifle_mas_mk16_l_sd","arifle_mas_mk16_l_gl","arifle_mas_mk16_l_gl_h","arifle_mas_mk16_l_gl_e","arifle_mas_mk16_l_gl_sd","arifle_mas_mk17","arifle_mas_mk17_h","arifle_mas_mk17_e","arifle_mas_mk17_sd","arifle_mas_mk17_gl","arifle_mas_mk17_gl_h","arifle_mas_mk17_gl_e","arifle_mas_mk17_gl_sd","srifle_mas_mk17s","srifle_mas_mk17s_h","srifle_mas_mk17s_sd","srifle_mas_m110","srifle_mas_m110_h","srifle_mas_m110_sd"};
		magazines[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_medium_optics2;
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
	class arifle_TRG21_F;
	class optic_Hamr;
	class optic_Arco;
	class optic_Aco;
	class hgun_P07_F;
	class LMG_Mk200_F;
	class srifle_LRR_F;
	class srifle_GM6_F;
	class LMG_Zafir_F;
	class SMG_02_F;
	class arifle_mas_hk416;
	class arifle_mas_hk416_gl;
	class srifle_mas_hk417;
	class arifle_mas_mk16: arifle_mas_hk416
	{
		displayname = "SCAR-LS";
		model = "\mas_nw_rifle\mas_mk16";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_nw_rifle\anim\Handanim_scar.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag"};
		picture = "\mas_nw_rifle\ui\gear_mk16_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56×45mm NATO cartridge and the SCAR H, for heavy, fires 7.62×51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.";
		};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M4Reload",1,1,30};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\hk416_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\hk416_s2",1.0,1,1200};
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
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00087;
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
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\hk416_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\hk416_s2",1.0,1,1200};
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
			dispersion = 0.00087;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
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
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_SM","muzzle_mas_snds_SMc"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_handle","optic_mas_zeiss","optic_mas_zeiss_eo","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_mas_zeiss_c","optic_mas_zeiss_eo_c","optic_SOS","optic_MRCO","optic_Aco_smg","optic_Holosight_smg","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR","acc_mas_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_mk16_h: arifle_mas_mk16
	{
		displayName = "SCAR-LS hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_e: arifle_mas_mk16
	{
		displayName = "SCAR-LS holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_sd: arifle_mas_mk16
	{
		displayName = "SCAR-LS SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_gl: arifle_mas_hk416_gl
	{
		displayname = "SCAR-LS EGLM";
		model = "\mas_nw_rifle\mas_mk16_gl";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk416gl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag"};
		picture = "\mas_nw_rifle\ui\gear_mk16gl_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56×45mm NATO cartridge and the SCAR H, for heavy, fires 7.62×51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.This version is equipped with EGLM 40mm granade launcher.";
		};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M4Reload",1,1,30};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\hk416_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\hk416_s2",1.0,1,1200};
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
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00087;
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
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\hk416_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\hk416_s2",1.0,1,1200};
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
			dispersion = 0.00087;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
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
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		muzzles[] = {"this","EGLM"};
		class EGLM: UGL_F
		{
			displayName = "EGLM";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"M433_40mm_HEDP_Shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
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
				compatibleItems[] = {"muzzle_mas_snds_SM","muzzle_mas_snds_SMc"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_handle","optic_mas_zeiss","optic_mas_zeiss_eo","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_mas_zeiss_c","optic_mas_zeiss_eo_c","optic_SOS","optic_MRCO","optic_Aco_smg","optic_Holosight_smg","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR","acc_mas_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_mk16_gl_h: arifle_mas_mk16_gl
	{
		displayName = "SCAR-LS EGLM hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_gl_e: arifle_mas_mk16_gl
	{
		displayName = "SCAR-LS EGLM holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_gl_sd: arifle_mas_mk16_gl
	{
		displayName = "SCAR-LS EGLM SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l: arifle_mas_mk16
	{
		displayname = "SCAR-L";
		model = "\mas_nw_rifle\mas_mk16_l";
		picture = "\mas_nw_rifle\ui\gear_mk16l_x_ca.paa";
	};
	class arifle_mas_mk16_l_h: arifle_mas_mk16_l
	{
		displayName = "SCAR-L hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l_e: arifle_mas_mk16_l
	{
		displayName = "SCAR-L holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l_sd: arifle_mas_mk16_l
	{
		displayName = "SCAR-L SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l_gl: arifle_mas_mk16_gl
	{
		displayname = "SCAR-L EGLM";
		model = "\mas_nw_rifle\mas_mk16_l_gl";
		picture = "\mas_nw_rifle\ui\gear_mk16lgl_x_ca.paa";
	};
	class arifle_mas_mk16_l_gl_h: arifle_mas_mk16_l_gl
	{
		displayName = "SCAR-L EGLM hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l_gl_e: arifle_mas_mk16_l_gl
	{
		displayName = "SCAR-L EGLM holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l_gl_sd: arifle_mas_mk16_l_gl
	{
		displayName = "SCAR-L EGLM SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17: arifle_mas_mk16
	{
		displayname = "SCAR-H";
		model = "\mas_nw_rifle\mas_mk17";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_nw_rifle\anim\Handanim_scar.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_nw_rifle\ui\gear_mk17_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56×45mm NATO cartridge and the SCAR H, for heavy, fires 7.62×51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.";
		};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M4Reload",1,1,30};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\m24_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m24_s2",1.0,1,1200};
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
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00087;
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
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\m24_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m24_s2",1.0,1,1200};
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
			dispersion = 0.00087;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
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
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class arifle_mas_mk17_h: arifle_mas_mk17
	{
		displayName = "SCAR-H hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_e: arifle_mas_mk17
	{
		displayName = "SCAR-H holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_sd: arifle_mas_mk17
	{
		displayName = "SCAR-H SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_gl: arifle_mas_mk16_gl
	{
		displayname = "SCAR-H EGLM";
		model = "\mas_nw_rifle\mas_mk17_gl";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk416gl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_nw_rifle\ui\gear_mk17gl_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56×45mm NATO cartridge and the SCAR H, for heavy, fires 7.62×51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.This version is equipped with EGLM 40mm granade launcher.";
		};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M4Reload",1,1,30};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\m24_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m24_s2",1.0,1,1200};
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
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00087;
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
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\m24_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m24_s2",1.0,1,1200};
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
			dispersion = 0.00087;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
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
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class arifle_mas_mk17_gl_h: arifle_mas_mk17_gl
	{
		displayName = "SCAR-H EGLM hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_gl_e: arifle_mas_mk17_gl
	{
		displayName = "SCAR-H EGLM holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_gl_sd: arifle_mas_mk17_gl
	{
		displayName = "SCAR-H EGLM SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_mk17s: srifle_mas_hk417
	{
		displayname = "SCAR-H Mark";
		model = "\mas_nw_rifle\mas_mk17_snp";
		handanim[] = {"OFP2_ManSkeleton","\mas_nw_rifle\anim\Handanim_scar.rtm"};
		reloadAction = "GestureReloadSMG_02";
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_nw_rifle\ui\gear_mk17s_x_ca.paa";
		descriptionshort = "Marksman Rifle<br />Caliber: 7.62x51 mm";
		maxZeroing = 1400;
		class Library
		{
			libtextdesc = "The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56×45mm NATO cartridge and the SCAR H, for heavy, fires 7.62×51mm NATO.This is the 20 inch barrel marksman version.";
		};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M4Reload",1,1,30};
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
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
				begin1[] = {"\mas_us_rifle\sounds\m24_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m24_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m24_s3",1.0,1,1200};
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
				begin1[] = {"\mas_us_rifle\sounds\m24_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m24_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m24_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.085;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			dispersion = 0.0007;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
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
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_SM","muzzle_mas_snds_SMc"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_zeiss","optic_mas_zeiss_eo","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_mas_zeiss_c","optic_mas_zeiss_eo_c","optic_SOS","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR","acc_mas_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class srifle_mas_mk17s_h: srifle_mas_mk17s
	{
		displayName = "SCAR-H Mark Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_mk17s_sd: srifle_mas_mk17s
	{
		displayName = "SCAR-H Mark SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_m110: srifle_mas_mk17s
	{
		displayname = "M110";
		model = "\mas_nw_rifle\mas_m110";
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag","M118LR_Ball","M118LR_Tracer"};
		picture = "\mas_nw_rifle\ui\gear_m110_x_ca.paa";
		descriptionshort = "Marksman Rifle<br />Caliber: 7.62x51 mm";
		maxZeroing = 1600;
		class Library
		{
			libtextdesc = "The M110 Semi Automatic Sniper System M110 SASS is an American semi automatic sniper rifle that is chambered for the 7.62×51mm NATO round, developed by US firearm manufacturer Knight Armament Company. The M110 Semi Automatic Sniper System is intended to replace the M24 Sniper Weapon System used by snipers, spotters, designated marksman, or squad advanced marksmen in the United States Army.";
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
				begin1[] = {"\mas_us_rifle\sounds\m110_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m110_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m110_s3",1.0,1,1200};
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
		class WeaponSlotsInfo
		{
			mass = 155;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_SM","muzzle_mas_snds_SMc"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_zeiss","optic_mas_zeiss_eo","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_mas_zeiss_c","optic_mas_zeiss_eo_c","optic_SOS","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR","acc_mas_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class srifle_mas_m110_h: srifle_mas_m110
	{
		displayName = "M110 Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_m110_sd: srifle_mas_m110
	{
		displayName = "M110 SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class Box_mas_nw_rifle_Wps_F: Box_NATO_Wps_F
	{
		displayName = "SCAR's Weapons/Ammo Box";
		maximumLoad = 999999;
		transportMaxWeapons = 50000;
		transportMaxMagazines = 200000;
		transportMaxBackpacks = 2000;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 120;
			};
			class _xx_30Rnd_mas_556x45_T_Stanag
			{
				magazine = "30Rnd_mas_556x45_T_Stanag";
				count = 60;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 60;
			};
			class _xx_200Rnd_mas_556x45_Stanag
			{
				magazine = "200Rnd_mas_556x45_Stanag";
				count = 60;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x51_Stanag
			{
				magazine = "100Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 60;
			};
			class _xx_20Rnd_mas_762x51_Stanag
			{
				magazine = "20Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_20Rnd_mas_762x51_T_Stanag
			{
				magazine = "20Rnd_mas_762x51_T_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_762x51_Stanag
			{
				magazine = "5Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_762x51_T_Stanag
			{
				magazine = "5Rnd_mas_762x51_T_Stanag";
				count = 30;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_Stanag
			{
				magazine = "5Rnd_mas_127x99_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_dem_Stanag
			{
				magazine = "5Rnd_mas_127x99_dem_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_T_Stanag
			{
				magazine = "5Rnd_mas_127x99_T_Stanag";
				count = 60;
			};
			class _xx_30Rnd_mas_9x21_Stanag
			{
				magazine = "30Rnd_mas_9x21_Stanag";
				count = 60;
			};
			class _xx_30Rnd_mas_9x21d_Stanag
			{
				magazine = "30Rnd_mas_9x21d_Stanag";
				count = 60;
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 60;
			};
			class _xx_25Rnd_mas_9x19_Mag
			{
				magazine = "25Rnd_mas_9x19_Mag";
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
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_10Rnd_mas_45acp_Mag
			{
				magazine = "10Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_8Rnd_mas_45acp_Mag
			{
				magazine = "8Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_7Rnd_mas_12Gauge_Slug
			{
				magazine = "7Rnd_mas_12Gauge_Slug";
				count = 30;
			};
			class _xx_7Rnd_mas_12Gauge_Pellets
			{
				magazine = "7Rnd_mas_12Gauge_Pellets";
				count = 30;
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
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 16;
			};
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 16;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 16;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
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
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 20;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 20;
			};
			class _xx_I_IR_Grenade
			{
				magazine = "I_IR_Grenade";
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
			class _xx_arifle_mas_mk16
			{
				weapon = "arifle_mas_mk16";
				count = 2;
			};
			class _xx_arifle_mas_mk16_h
			{
				weapon = "arifle_mas_mk16_h";
				count = 1;
			};
			class _xx_arifle_mas_mk16_e
			{
				weapon = "arifle_mas_mk16_e";
				count = 1;
			};
			class _xx_arifle_mas_mk16_sd
			{
				weapon = "arifle_mas_mk16_sd";
				count = 1;
			};
			class _xx_arifle_mas_mk16_gl
			{
				weapon = "arifle_mas_mk16_gl";
				count = 2;
			};
			class _xx_arifle_mas_mk16_gl_h
			{
				weapon = "arifle_mas_mk16_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_mk16_gl_e
			{
				weapon = "arifle_mas_mk16_gl_e";
				count = 1;
			};
			class _xx_arifle_mas_mk16_gl_sd
			{
				weapon = "arifle_mas_mk16_gl_sd";
				count = 1;
			};
			class _xx_arifle_mas_mk16_l
			{
				weapon = "arifle_mas_mk16_l";
				count = 2;
			};
			class _xx_arifle_mas_mk16_l_h
			{
				weapon = "arifle_mas_mk16_l_h";
				count = 1;
			};
			class _xx_arifle_mas_mk16_l_e
			{
				weapon = "arifle_mas_mk16_l_e";
				count = 1;
			};
			class _xx_arifle_mas_mk16_l_sd
			{
				weapon = "arifle_mas_mk16_l_sd";
				count = 1;
			};
			class _xx_arifle_mas_mk16_l_gl
			{
				weapon = "arifle_mas_mk16_l_gl";
				count = 2;
			};
			class _xx_arifle_mas_mk16_l_gl_h
			{
				weapon = "arifle_mas_mk16_l_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_mk16_l_gl_e
			{
				weapon = "arifle_mas_mk16_l_gl_e";
				count = 1;
			};
			class _xx_arifle_mas_mk16_l_gl_sd
			{
				weapon = "arifle_mas_mk16_l_gl_sd";
				count = 1;
			};
			class _xx_arifle_mas_mk17
			{
				weapon = "arifle_mas_mk17";
				count = 2;
			};
			class _xx_arifle_mas_mk17_h
			{
				weapon = "arifle_mas_mk17_h";
				count = 1;
			};
			class _xx_arifle_mas_mk17_e
			{
				weapon = "arifle_mas_mk17_e";
				count = 1;
			};
			class _xx_arifle_mas_mk17_sd
			{
				weapon = "arifle_mas_mk17_sd";
				count = 1;
			};
			class _xx_arifle_mas_mk17_gl
			{
				weapon = "arifle_mas_mk17_gl";
				count = 2;
			};
			class _xx_arifle_mas_mk17_gl_h
			{
				weapon = "arifle_mas_mk17_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_mk17_gl_e
			{
				weapon = "arifle_mas_mk17_gl_e";
				count = 1;
			};
			class _xx_arifle_mas_mk17_gl_sd
			{
				weapon = "arifle_mas_mk17_gl_sd";
				count = 1;
			};
			class _xx_srifle_mas_mk17s
			{
				weapon = "srifle_mas_mk17s";
				count = 2;
			};
			class _xx_srifle_mas_mk17s_h
			{
				weapon = "srifle_mas_mk17s_h";
				count = 1;
			};
			class _xx_srifle_mas_mk17s_sd
			{
				weapon = "srifle_mas_mk17s_sd";
				count = 1;
			};
			class _xx_srifle_mas_m110
			{
				weapon = "srifle_mas_m110";
				count = 2;
			};
			class _xx_srifle_mas_m110_h
			{
				weapon = "srifle_mas_m110_h";
				count = 1;
			};
			class _xx_srifle_mas_m110_sd
			{
				weapon = "srifle_mas_m110_sd";
				count = 1;
			};
			class _xx_hgun_mas_uzi_F
			{
				weapon = "hgun_mas_uzi_F";
				count = 4;
			};
			class _xx_hgun_mas_uzi_F_sd
			{
				weapon = "hgun_mas_uzi_F_sd";
				count = 4;
			};
			class _xx_hgun_mas_usp_F
			{
				weapon = "hgun_mas_usp_F";
				count = 4;
			};
			class _xx_hgun_mas_usp_l_F
			{
				weapon = "hgun_mas_usp_l_F";
				count = 4;
			};
			class _xx_hgun_mas_m23_F
			{
				weapon = "hgun_mas_m23_F";
				count = 4;
			};
			class _xx_hgun_mas_m23_l_F
			{
				weapon = "hgun_mas_m23_l_F";
				count = 4;
			};
			class _xx_hgun_mas_m9_F
			{
				weapon = "hgun_mas_m9_F";
				count = 4;
			};
			class _xx_hgun_mas_bhp_F
			{
				weapon = "hgun_mas_bhp_F";
				count = 4;
			};
			class _xx_hgun_mas_acp_F
			{
				weapon = "hgun_mas_acp_F";
				count = 4;
			};
			class _xx_hgun_mas_glock_F
			{
				weapon = "hgun_mas_glock_F";
				count = 4;
			};
			class _xx_hgun_mas_glocksf_F
			{
				weapon = "hgun_mas_glocksf_F";
				count = 4;
			};
			class _xx_hgun_P07_F
			{
				weapon = "hgun_P07_F";
				count = 4;
			};
			class _xx_hgun_P07_snds_F
			{
				weapon = "hgun_P07_snds_F";
				count = 4;
			};
			class _xx_launch_NLAW_F
			{
				weapon = "launch_NLAW_F";
				count = 4;
			};
			class _xx_mas_launch_M136_F
			{
				weapon = "mas_launch_M136_F";
				count = 4;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 4;
			};
			class _xx_mas_launch_stinger_F
			{
				weapon = "mas_launch_stinger_F";
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
				count = 10;
			};
			class _xx_arifle_mas_mp5sd_ds
			{
				weapon = "arifle_mas_mp5sd_ds";
				count = 10;
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
			class _xx_acc_mas_pointer_IR
			{
				name = "acc_mas_pointer_IR";
				count = 20;
			};
			class _xx_muzzle_mas_snds_M
			{
				name = "muzzle_mas_snds_M";
				count = 10;
			};
			class _xx_muzzle_mas_snds_Mc
			{
				name = "muzzle_mas_snds_Mc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SM
			{
				name = "muzzle_mas_snds_SM";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SMc
			{
				name = "muzzle_mas_snds_SMc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SH
			{
				name = "muzzle_mas_snds_SH";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SHc
			{
				name = "muzzle_mas_snds_SHc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SV
			{
				name = "muzzle_mas_snds_SV";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SVc
			{
				name = "muzzle_mas_snds_SVc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_C
			{
				name = "muzzle_mas_snds_C";
				count = 20;
			};
			class _xx_muzzle_mas_snds_L
			{
				name = "muzzle_mas_snds_L";
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
			class _xx_NVGoggles
			{
				name = "NVGoggles";
				count = 10;
			};
			class _xx_NVGoggles_mas
			{
				name = "NVGoggles_mas";
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