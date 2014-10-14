
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
	class mas_weapons_m4
	{
		requiredaddons[] = {"A3_Weapons_F","mas_weapons"};
		requiredversion = 1.0;
		units[] = {"Box_mas_us_rifle_Wps_F","BoxNewAmmo"};
		weapons[] = {"M4Car203","M4Car","arifle_mas_hk416","arifle_mas_hk416_t","arifle_mas_hk416_h","arifle_mas_hk416_a","arifle_mas_hk416_e","arifle_mas_hk416_sd","arifle_mas_hk416_gl","arifle_mas_hk416_gl_t","arifle_mas_hk416_gl_h","arifle_mas_hk416_gl_a","arifle_mas_hk416_gl_e","arifle_mas_hk416_gl_sd","arifle_mas_hk416_m203","arifle_mas_hk416_m203_t","arifle_mas_hk416_m203_h","arifle_mas_hk416_m203_a","arifle_mas_hk416_m203_e","arifle_mas_hk416_m203_sd","arifle_mas_hk416_v","arifle_mas_hk416_v_t","arifle_mas_hk416_v_h","arifle_mas_hk416_v_a","arifle_mas_hk416_v_e","arifle_mas_hk416_v_sd","arifle_mas_hk416_gl_v","arifle_mas_hk416_gl_v_t","arifle_mas_hk416_gl_v_h","arifle_mas_hk416_gl_v_a","arifle_mas_hk416_gl_v_e","arifle_mas_hk416_gl_v_sd","arifle_mas_hk416_m203_v","arifle_mas_hk416_m203_v_t","arifle_mas_hk416_m203_v_h","arifle_mas_hk416_m203_v_a","arifle_mas_hk416_m203_v_e","arifle_mas_hk416_m203_v_sd","arifle_mas_hk416_d","arifle_mas_hk416_d_t","arifle_mas_hk416_d_h","arifle_mas_hk416_d_a","arifle_mas_hk416_d_e","arifle_mas_hk416_d_sd","arifle_mas_hk416_gl_d","arifle_mas_hk416_gl_d_t","arifle_mas_hk416_gl_d_h","arifle_mas_hk416_gl_d_a","arifle_mas_hk416_gl_d_e","arifle_mas_hk416_gl_d_sd","arifle_mas_hk416_m203_d","arifle_mas_hk416_m203_d_t","arifle_mas_hk416_m203_d_h","arifle_mas_hk416_m203_d_a","arifle_mas_hk416_m203_d_e","arifle_mas_hk416_m203_d_sd","arifle_mas_hk416c","arifle_mas_hk416c_h","arifle_mas_hk416c_e","arifle_mas_hk416c_sd","arifle_mas_hk416_m203c","arifle_mas_hk416_m203c_h","arifle_mas_hk416_m203c_e","arifle_mas_hk416_m203c_sd","arifle_mas_hk416c_v","arifle_mas_hk416c_v_h","arifle_mas_hk416c_v_e","arifle_mas_hk416c_v_sd","arifle_mas_hk416_m203c_v","arifle_mas_hk416_m203c_v_h","arifle_mas_hk416_m203c_v_e","arifle_mas_hk416_m203c_v_sd","arifle_mas_hk416c_d","arifle_mas_hk416c_d_h","arifle_mas_hk416c_d_e","arifle_mas_hk416c_d_sd","arifle_mas_hk416_m203c_d","arifle_mas_hk416_m203c_d_h","arifle_mas_hk416_m203c_d_e","arifle_mas_hk416_m203c_d_sd","arifle_mas_hk417c","arifle_mas_hk417c_h","arifle_mas_hk417c_e","arifle_mas_hk417c_sd","arifle_mas_hk417_m203c","arifle_mas_hk417_m203c_h","arifle_mas_hk417_m203c_e","arifle_mas_hk417_m203c_sd","arifle_mas_hk417c_v","arifle_mas_hk417c_v_h","arifle_mas_hk417c_v_e","arifle_mas_hk417c_v_sd","arifle_mas_hk417_m203c_v","arifle_mas_hk417_m203c_v_h","arifle_mas_hk417_m203c_v_e","arifle_mas_hk417_m203c_v_sd","arifle_mas_hk417c_d","arifle_mas_hk417c_d_h","arifle_mas_hk417c_d_e","arifle_mas_hk417c_d_sd","arifle_mas_hk417_m203c_d","arifle_mas_hk417_m203c_d_h","arifle_mas_hk417_m203c_d_e","arifle_mas_hk417_m203c_d_sd","arifle_mas_m4","arifle_mas_m4_t","arifle_mas_m4_ti","arifle_mas_m4_h","arifle_mas_m4_a","arifle_mas_m4_e","arifle_mas_m4_sd","arifle_mas_m4_gl","arifle_mas_m4_gl_t","arifle_mas_m4_gl_ti","arifle_mas_m4_gl_h","arifle_mas_m4_gl_a","arifle_mas_m4_gl_e","arifle_mas_m4_gl_sd","arifle_mas_m4_m203","arifle_mas_m4_m203_t","arifle_mas_m4_m203_ti","arifle_mas_m4_m203_h","arifle_mas_m4_m203_a","arifle_mas_m4_m203_e","arifle_mas_m4_m203_sd","arifle_mas_m4_v","arifle_mas_m4_v_t","arifle_mas_m4_v_ti","arifle_mas_m4_v_h","arifle_mas_m4_v_a","arifle_mas_m4_v_e","arifle_mas_m4_v_sd","arifle_mas_m4_gl_v","arifle_mas_m4_gl_v_t","arifle_mas_m4_gl_v_ti","arifle_mas_m4_gl_v_h","arifle_mas_m4_gl_v_a","arifle_mas_m4_gl_v_e","arifle_mas_m4_gl_v_sd","arifle_mas_m4_m203_v","arifle_mas_m4_m203_v_t","arifle_mas_m4_m203_v_ti","arifle_mas_m4_m203_v_h","arifle_mas_m4_m203_v_a","arifle_mas_m4_m203_v_e","arifle_mas_m4_m203_v_sd","arifle_mas_m4_d","arifle_mas_m4_d_t","arifle_mas_m4_d_ti","arifle_mas_m4_d_h","arifle_mas_m4_d_a","arifle_mas_m4_d_e","arifle_mas_m4_d_sd","arifle_mas_m4_gl_d","arifle_mas_m4_gl_d_t","arifle_mas_m4_gl_d_ti","arifle_mas_m4_gl_d_h","arifle_mas_m4_gl_d_a","arifle_mas_m4_gl_d_e","arifle_mas_m4_gl_d_sd","arifle_mas_m4_m203_d","arifle_mas_m4_m203_d_t","arifle_mas_m4_m203_d_ti","arifle_mas_m4_m203_d_h","arifle_mas_m4_m203_d_a","arifle_mas_m4_m203_d_e","arifle_mas_m4_m203_d_sd","arifle_mas_m4c","arifle_mas_m4c_h","arifle_mas_m4c_e","arifle_mas_m4c_sd","arifle_mas_m4_m203c","arifle_mas_m4_m203c_h","arifle_mas_m4_m203c_e","arifle_mas_m4_m203c_sd","arifle_mas_m4c_v","arifle_mas_m4c_v_h","arifle_mas_m4c_v_e","arifle_mas_m4c_v_sd","arifle_mas_m4_m203c_v","arifle_mas_m4_m203c_v_h","arifle_mas_m4_m203c_v_e","arifle_mas_m4_m203c_v_sd","arifle_mas_m4c_d","arifle_mas_m4c_d_h","arifle_mas_m4c_d_e","arifle_mas_m4c_d_sd","arifle_mas_m4_m203c_d","arifle_mas_m4_m203c_d_h","arifle_mas_m4_m203c_d_e","arifle_mas_m4_m203c_d_sd","arifle_mas_l119","arifle_mas_l119_t","arifle_mas_l119_ti","arifle_mas_l119_h","arifle_mas_l119_a","arifle_mas_l119_e","arifle_mas_l119_sd","arifle_mas_l119_gl","arifle_mas_l119_gl_t","arifle_mas_l119_gl_ti","arifle_mas_l119_gl_h","arifle_mas_l119_gl_a","arifle_mas_l119_gl_e","arifle_mas_l119_gl_sd","arifle_mas_l119_m203","arifle_mas_l119_m203_t","arifle_mas_l119_m203_ti","arifle_mas_l119_m203_h","arifle_mas_l119_m203_a","arifle_mas_l119_m203_e","arifle_mas_l119_m203_sd","arifle_mas_l119_v","arifle_mas_l119_v_t","arifle_mas_l119_v_ti","arifle_mas_l119_v_h","arifle_mas_l119_v_a","arifle_mas_l119_v_e","arifle_mas_l119_v_sd","arifle_mas_l119_gl_v","arifle_mas_l119_gl_v_t","arifle_mas_l119_gl_v_ti","arifle_mas_l119_gl_v_h","arifle_mas_l119_gl_v_a","arifle_mas_l119_gl_v_e","arifle_mas_l119_gl_v_sd","arifle_mas_l119_m203_v","arifle_mas_l119_m203_v_t","arifle_mas_l119_m203_v_ti","arifle_mas_l119_m203_v_h","arifle_mas_l119_m203_v_a","arifle_mas_l119_m203_v_e","arifle_mas_l119_m203_v_sd","arifle_mas_l119_d","arifle_mas_l119_d_t","arifle_mas_l119_d_ti","arifle_mas_l119_d_h","arifle_mas_l119_d_a","arifle_mas_l119_d_e","arifle_mas_l119_d_sd","arifle_mas_l119_gl_d","arifle_mas_l119_gl_d_t","arifle_mas_l119_gl_d_ti","arifle_mas_l119_gl_d_h","arifle_mas_l119_gl_d_a","arifle_mas_l119_gl_d_e","arifle_mas_l119_gl_d_sd","arifle_mas_l119_m203_d","arifle_mas_l119_m203_d_t","arifle_mas_l119_m203_d_ti","arifle_mas_l119_m203_d_h","arifle_mas_l119_m203_d_a","arifle_mas_l119_m203_d_e","arifle_mas_l119_m203_d_sd","arifle_mas_m16","arifle_mas_m16_t","arifle_mas_m16_a","arifle_mas_m16_e","arifle_mas_m16_sd","arifle_mas_m16_gl","arifle_mas_m16_gl_t","arifle_mas_m16_gl_a","arifle_mas_m16_gl_e","arifle_mas_m16_gl_sd","srifle_mas_hk417","srifle_mas_hk417_h","srifle_mas_hk417_sd","srifle_mas_hk417_v","srifle_mas_hk417_v_h","srifle_mas_hk417_v_sd","srifle_mas_hk417_d","srifle_mas_hk417_d_h","srifle_mas_hk417_d_sd","srifle_mas_sr25","srifle_mas_sr25_h","srifle_mas_sr25_sd","srifle_mas_sr25_v","srifle_mas_sr25_v_h","srifle_mas_sr25_v_sd","srifle_mas_sr25_d","srifle_mas_sr25_d_h","srifle_mas_sr25_d_sd","srifle_mas_ebr","srifle_mas_ebr_a","srifle_mas_ebr_t","srifle_mas_ebr_h","srifle_mas_ebr_sd","srifle_mas_m24","srifle_mas_m24_h","srifle_mas_m24_v","srifle_mas_m24_v_h","srifle_mas_m24_d","srifle_mas_m24_d_h","arifle_mas_mp5","arifle_mas_mp5_a","arifle_mas_mp5_e","arifle_mas_mp5_sd","arifle_mas_mp5_v","arifle_mas_mp5_v_a","arifle_mas_mp5_v_e","arifle_mas_mp5_v_sd","arifle_mas_mp5_d","arifle_mas_mp5_d_a","arifle_mas_mp5_d_e","arifle_mas_mp5_d_sd","arifle_mas_mp5sd","arifle_mas_mp5sd_a","arifle_mas_mp5sd_e","arifle_mas_mp5sd_d","srifle_mas_m107","srifle_mas_m107_h","srifle_mas_m107_sd","srifle_mas_m107_v","srifle_mas_m107_v_h","srifle_mas_m107_v_sd","srifle_mas_m107_d","srifle_mas_m107_d_h","srifle_mas_m107_d_sd","LMG_mas_Mk200_F","LMG_mas_Mk200_F_t","LMG_mas_Mk200_F_h","LMG_mas_Mk200_F_a","LMG_mas_Mk200_F_sd","LMG_mas_M249_F","LMG_mas_M249_F_t","LMG_mas_M249_F_h","LMG_mas_M249_F_a","LMG_mas_M249_F_sd","LMG_mas_M249_F_v","LMG_mas_M249_F_v_t","LMG_mas_M249_F_v_h","LMG_mas_M249_F_v_a","LMG_mas_M249_F_v_sd","LMG_mas_M249_F_d","LMG_mas_M249_F_d_t","LMG_mas_M249_F_d_h","LMG_mas_M249_F_d_a","LMG_mas_M249_F_d_sd","LMG_mas_M249a_F","LMG_mas_M249a_F_t","LMG_mas_M249a_F_a","LMG_mas_Mk48_F","LMG_mas_Mk48_F_t","LMG_mas_Mk48_F_h","LMG_mas_Mk48_F_a","LMG_mas_Mk48_F_v","LMG_mas_Mk48_F_v_t","LMG_mas_Mk48_F_v_h","LMG_mas_Mk48_F_v_a","LMG_mas_Mk48_F_d","LMG_mas_Mk48_F_d_t","LMG_mas_Mk48_F_d_h","LMG_mas_Mk48_F_d_a","LMG_mas_M240_F","LMG_mas_M240_F_h","LMG_mas_M240_F_a","LMG_mas_mg3_F","LMG_mas_mg3_F_h","arifle_mas_g3","arifle_mas_g3_h","arifle_mas_g3_a","arifle_mas_g3_m203","arifle_mas_g3_m203_h","arifle_mas_g3_m203_a","arifle_mas_g3s","arifle_mas_g3s_h","arifle_mas_g3s_a","arifle_mas_g3s_m203","arifle_mas_g3s_m203_h","arifle_mas_g3s_m203_a","arifle_mas_fal","arifle_mas_fal_h","arifle_mas_fal_a","arifle_mas_fal_m203","arifle_mas_fal_m203_h","arifle_mas_fal_m203_a","arifle_mas_m1014"};
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
	class arifle_mas_hk416: arifle_MX_F
	{
		displayname = "HK416";
		model = "\mas_us_rifle\mas_hk416";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk416.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_TEST1_556x45_Stanag","30Rnd_TEST2_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag","30Rnd_M4_556x45_Stanag","30Rnd_M4_556x45_T_Stanag","30Rnd_M16_556x45_Stanag","30Rnd_M16_556x45_T_Stanag"};
		picture = "\mas_us_rifle\ui\gear_hk416_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The Heckler & Koch HK416 is an assault rifle designed and manufactured by Heckler & Koch. It uses the AR-15 platform, originally conceived as an improvement to the Colt M4 carbine family issued to the U.S. military, with the notable inclusion of an HK-proprietary short-stroke gas piston system derived from the Heckler & Koch G36. USSOCOM and other country's Special Forces are equipped with the HK416, it fires the .223 caliber, or 5.56mm NATO round.";
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
			mass = 77;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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
	class arifle_mas_hk416_t: arifle_mas_hk416
	{
		displayName = "HK416 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_h: arifle_mas_hk416
	{
		displayName = "HK416 hamr";
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
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_a: arifle_mas_hk416
	{
		displayName = "HK416 aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_e: arifle_mas_hk416
	{
		displayName = "HK416 holo";
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
	class arifle_mas_hk416_sd: arifle_mas_hk416
	{
		displayName = "HK416 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F
	{
		displayname = "HK416 AG36";
		model = "\mas_us_rifle\mas_hk416_gl";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk416gl.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_TEST1_556x45_Stanag","30Rnd_TEST2_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag", "30Rnd_M4_556x45_Stanag","30Rnd_M4_556x45_T_Stanag","30Rnd_M16_556x45_Stanag","30Rnd_M16_556x45_T_Stanag"};
		picture = "\mas_us_rifle\ui\gear_hk416g_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The Heckler & Koch HK416 is an assault rifle designed and manufactured by Heckler & Koch. It uses the AR-15 platform, originally conceived as an improvement to the Colt M4 carbine family issued to the U.S. military, with the notable inclusion of an HK-proprietary short-stroke gas piston system derived from the Heckler & Koch G36. USSOCOM and other country's Special Forces are equipped with the HK416, it fires the .223 caliber, or 5.56mm NATO round. This version is equipped with the AG36 wich is a single-shot 40 mm grenade launcher.";
		};
		muzzles[] ={"this","AG36"};
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
		class AG36: UGL_F
		{
			displayName = "AG36";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\mas_us_rifle\sounds\M203_s1",0.100000,1,400};
			soundBegin[] = {"begin1",1};
		};
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
			mass = 82;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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
	class arifle_mas_hk416_gl_t: arifle_mas_hk416_gl
	{
		displayName = "HK416 AG36 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_h: arifle_mas_hk416_gl
	{
		displayName = "HK416 AG36 hamr";
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
	class arifle_mas_hk416_gl_a: arifle_mas_hk416_gl
	{
		displayName = "HK416 AG36 aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_e: arifle_mas_hk416_gl
	{
		displayName = "HK416 AG36 holo";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_sd: arifle_mas_hk416_gl
	{
		displayName = "HK416 AG36 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203: arifle_mas_hk416_gl
	{
		displayname = "HK416 M203";
		model = "\mas_us_rifle\mas_hk416_m203";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk416m203.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"30Rnd_TEST1_556x45_Stanag","30Rnd_TEST2_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag", "30Rnd_M4_556x45_Stanag","30Rnd_M4_556x45_T_Stanag","30Rnd_M16_556x45_Stanag","30Rnd_M16_556x45_T_Stanag"};
		picture = "\mas_us_rifle\ui\gear_hk416m_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The Heckler & Koch HK416 is an assault rifle designed and manufactured by Heckler & Koch. It uses the AR-15 platform, originally conceived as an improvement to the Colt M4 carbine family issued to the U.S. military, with the notable inclusion of an HK-proprietary short-stroke gas piston system derived from the Heckler & Koch G36. USSOCOM and other country's Special Forces are equipped with the HK416, it fires the .223 caliber, or 5.56mm NATO round. This version is equipped with the M203 wich is a single-shot 40 mm grenade launcher.";
		};
		muzzles[] ={"this","M203a"};
		class M203a: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
					sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\mas_us_rifle\sounds\M203_s1",0.100000,1,400};
			soundBegin[] = {"begin1",1};
		};
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
	};
	class arifle_mas_hk416_m203_t: arifle_mas_hk416_m203
	{
		displayName = "HK416 M203 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_h: arifle_mas_hk416_m203
	{
		displayName = "HK416 M203 hamr";
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
	class arifle_mas_hk416_m203_a: arifle_mas_hk416_m203
	{
		displayName = "HK416 M203 aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_e: arifle_mas_hk416_m203
	{
		displayName = "HK416 M203 holo";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_sd: arifle_mas_hk416_m203
	{
		displayName = "HK416 M203 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_v: arifle_mas_hk416
	{
		displayname = "HK416 Wood";
		model = "\mas_us_rifle\mas_hk416";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_hk416_x_ca.paa";
	};
	class arifle_mas_hk416_v_t: arifle_mas_hk416_v
	{
		displayName = "HK416 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_v_h: arifle_mas_hk416_v
	{
		displayName = "HK416 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_v_a: arifle_mas_hk416_v
	{
		displayName = "HK416 Wood aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_v_e: arifle_mas_hk416_v
	{
		displayName = "HK416 Wood holo";
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
	class arifle_mas_hk416_v_sd: arifle_mas_hk416_v
	{
		displayName = "HK416 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_v: arifle_mas_hk416_gl
	{
		displayname = "HK416 AG36 Wood";
		model = "\mas_us_rifle\mas_hk416_gl";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cv.paa","mas_us_rifle\416\data\ag37.paa"};
		picture = "\mas_us_rifle\ui\w\gear_hk416g_x_ca.paa";
	};
	class arifle_mas_hk416_gl_v_t: arifle_mas_hk416_gl_v
	{
		displayName = "HK416 AG36 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_v_h: arifle_mas_hk416_gl_v
	{
		displayName = "HK416 AG36 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_v_a: arifle_mas_hk416_gl_v
	{
		displayName = "HK416 AG36 Wood aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_v_e: arifle_mas_hk416_gl_v
	{
		displayName = "HK416 AG36 Wood holo";
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
	class arifle_mas_hk416_gl_v_sd: arifle_mas_hk416_gl_v
	{
		displayName = "HK416 AG36 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_v: arifle_mas_hk416_m203
	{
		displayname = "HK416 M203 Wood";
		model = "\mas_us_rifle\mas_hk416_m203";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cv.paa","mas_us_rifle\416\data\m16_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_hk416m_x_ca.paa";
	};
	class arifle_mas_hk416_m203_v_t: arifle_mas_hk416_m203_v
	{
		displayName = "HK416 M203 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_v_h: arifle_mas_hk416_m203_v
	{
		displayName = "HK416 M203 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_v_a: arifle_mas_hk416_m203_v
	{
		displayName = "HK416 M203 Wood aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_v_e: arifle_mas_hk416_m203_v
	{
		displayName = "HK416 M203 Wood holo";
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
	class arifle_mas_hk416_m203_v_sd: arifle_mas_hk416_m203_v
	{
		displayName = "HK416 M203 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_d: arifle_mas_hk416
	{
		displayname = "HK416 Des";
		model = "\mas_us_rifle\mas_hk416";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_hk416_x_ca.paa";
	};
	class arifle_mas_hk416_d_t: arifle_mas_hk416_d
	{
		displayName = "HK416 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_d_h: arifle_mas_hk416_d
	{
		displayName = "HK416 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_d_a: arifle_mas_hk416_d
	{
		displayName = "HK416 Des aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_d_e: arifle_mas_hk416_d
	{
		displayName = "HK416 Des holo";
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
	class arifle_mas_hk416_d_sd: arifle_mas_hk416_d
	{
		displayName = "HK416 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_d: arifle_mas_hk416_gl
	{
		displayname = "HK416 AG36 Des";
		model = "\mas_us_rifle\mas_hk416_gl";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cd.paa","mas_us_rifle\416\data\ag38.paa"};
		picture = "\mas_us_rifle\ui\d\gear_hk416g_x_ca.paa";
	};
	class arifle_mas_hk416_gl_d_t: arifle_mas_hk416_gl_d
	{
		displayName = "HK416 AG36 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_d_h: arifle_mas_hk416_gl_d
	{
		displayName = "HK416 AG36 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_d_a: arifle_mas_hk416_gl_d
	{
		displayName = "HK416 AG36 Des aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_gl_d_e: arifle_mas_hk416_gl_d
	{
		displayName = "HK416 AG36 Des holo";
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
	class arifle_mas_hk416_gl_d_sd: arifle_mas_hk416_gl_d
	{
		displayName = "HK416 AG36 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_d: arifle_mas_hk416_m203
	{
		displayname = "HK416 M203 Des";
		model = "\mas_us_rifle\mas_hk416_m203";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cd.paa","mas_us_rifle\416\data\m16_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_hk416m_x_ca.paa";
	};
	class arifle_mas_hk416_m203_d_t: arifle_mas_hk416_m203_d
	{
		displayName = "HK416 M203 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_d_h: arifle_mas_hk416_m203_d
	{
		displayName = "HK416 M203 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_d_a: arifle_mas_hk416_m203_d
	{
		displayName = "HK416 M203 Des aco";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203_d_e: arifle_mas_hk416_m203_d
	{
		displayName = "HK416 M203 Des holo";
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
	class arifle_mas_hk416_m203_d_sd: arifle_mas_hk416_m203_d
	{
		displayName = "HK416 M203 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416c: arifle_mas_hk416
	{
		displayname = "HK416 CQB";
		model = "\mas_us_rifle\mas_hk416_cqb";
		picture = "\mas_us_rifle\ui\gear_hk416_x_ca.paa";
	};
	class arifle_mas_hk416c_h: arifle_mas_hk416c
	{
		displayName = "HK416 CQB hamr";
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
	class arifle_mas_hk416c_e: arifle_mas_hk416c
	{
		displayName = "HK416 CQB holo";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416c_sd: arifle_mas_hk416c
	{
		displayName = "HK416 CQB SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203c: arifle_mas_hk416_m203
	{
		displayname = "HK416 CQB M203";
		model = "\mas_us_rifle\mas_hk416_m203_cqb";
		picture = "\mas_us_rifle\ui\gear_hk416m_x_ca.paa";
	};
	class arifle_mas_hk416_m203c_h: arifle_mas_hk416_m203c
	{
		displayName = "HK416 CQB M203 hamr";
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
	class arifle_mas_hk416_m203c_e: arifle_mas_hk416_m203c
	{
		displayName = "HK416 CQB M203 holo";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203c_sd: arifle_mas_hk416_m203c
	{
		displayName = "HK416 CQB M203 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416c_v: arifle_mas_hk416c
	{
		displayname = "HK416 CQB Wood";
		model = "\mas_us_rifle\mas_hk416_cqb";
		picture = "\mas_us_rifle\ui\w\gear_hk416_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cv.paa"};
	};
	class arifle_mas_hk416c_v_h: arifle_mas_hk416c_v
	{
		displayName = "HK416 CQB Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416c_v_e: arifle_mas_hk416c_v
	{
		displayName = "HK416 CQB Wood holo";
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
	class arifle_mas_hk416c_v_sd: arifle_mas_hk416c_v
	{
		displayName = "HK416 CQB Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203c_v: arifle_mas_hk416_m203c
	{
		displayname = "HK416 CQB M203 Wood";
		model = "\mas_us_rifle\mas_hk416_m203_cqb";
		picture = "\mas_us_rifle\ui\w\gear_hk416m_x_ca.paa";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cv.paa","mas_us_rifle\416\data\m16_cv.paa"};
	};
	class arifle_mas_hk416_m203c_v_h: arifle_mas_hk416_m203c_v
	{
		displayName = "HK416 CQB M203 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203c_v_e: arifle_mas_hk416_m203c_v
	{
		displayName = "HK416 CQB M203 Wood holo";
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
	class arifle_mas_hk416_m203c_v_sd: arifle_mas_hk416_m203c_v
	{
		displayName = "HK416 CQB M203 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416c_d: arifle_mas_hk416c
	{
		displayname = "HK416 CQB Des";
		model = "\mas_us_rifle\mas_hk416_cqb";
		picture = "\mas_us_rifle\ui\d\gear_hk416_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cd.paa"};
	};
	class arifle_mas_hk416c_d_h: arifle_mas_hk416c_d
	{
		displayName = "HK416 CQB Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416c_d_e: arifle_mas_hk416c_d
	{
		displayName = "HK416 CQB Des holo";
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
	class arifle_mas_hk416c_d_sd: arifle_mas_hk416c_d
	{
		displayName = "HK416 CQB Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203c_d: arifle_mas_hk416_m203c
	{
		displayname = "HK416 CQB M203 Des";
		model = "\mas_us_rifle\mas_hk416_m203_cqb";
		picture = "\mas_us_rifle\ui\d\gear_hk416m_x_ca.paa";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\416_cd.paa","mas_us_rifle\416\data\m16_cd.paa"};
	};
	class arifle_mas_hk416_m203c_d_h: arifle_mas_hk416_m203c_d
	{
		displayName = "HK416 CQB M203 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk416_m203c_d_e: arifle_mas_hk416_m203c_d
	{
		displayName = "HK416 CQB M203 Des holo";
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
	class arifle_mas_hk416_m203c_d_sd: arifle_mas_hk416_m203c_d
	{
		displayName = "HK416 CQB M203 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417c: arifle_mas_hk416
	{
		displayname = "HK417 CQB";
		model = "\mas_us_rifle\mas_hk417_cqb";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk416.rtm"};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_us_rifle\ui\gear_hk416_x_ca.paa";
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The Heckler & Koch HK417 is a battle rifle designed and manufactured in Germany by Heckler & Koch. It is a gas-operated, selective fire rifle with a rotating bolt and is essentially an enlarged HK416 assault rifle. Chambered for the full power 7.62x51mm NATO round, instead of a less powerful intermediate cartridge, the HK417 is intended for use as a designated marksman rifle, and in other roles where the greater penetrative power and range of the 7.62x51mm NATO round are required. It has been adopted for service by a number of armed forces, special forces, and police organizations.";
		};
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
			reloadTime = 0.085;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
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
			reloadTime = 0.085;
			dispersion = 0.00087;
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
	class arifle_mas_hk417c_h: arifle_mas_hk417c
	{
		displayName = "HK417 CQB hamr";
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
	class arifle_mas_hk417c_e: arifle_mas_hk417c
	{
		displayName = "HK417 CQB holo";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417c_sd: arifle_mas_hk417c
	{
		displayName = "HK417 CQB SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417_m203c: arifle_mas_hk416_m203
	{
		displayname = "HK417 CQB M203";
		model = "\mas_us_rifle\mas_hk417_m203_cqb";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk417m203.rtm"};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_us_rifle\ui\gear_hk416m_x_ca.paa";
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The Heckler & Koch HK417 is a battle rifle designed and manufactured in Germany by Heckler & Koch. It is a gas-operated, selective fire rifle with a rotating bolt and is essentially an enlarged HK416 assault rifle. Chambered for the full power 7.62x51mm NATO round, instead of a less powerful intermediate cartridge, the HK417 is intended for use as a designated marksman rifle, and in other roles where the greater penetrative power and range of the 7.62x51mm NATO round are required. It has been adopted for service by a number of armed forces, special forces, and police organizations. This version is equipped with the M203 wich is a single-shot 40 mm grenade launcher.";
		};
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
			reloadTime = 0.085;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
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
			reloadTime = 0.085;
			dispersion = 0.00087;
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
	class arifle_mas_hk417_m203c_h: arifle_mas_hk417_m203c
	{
		displayName = "HK417 CQB M203 hamr";
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
	class arifle_mas_hk417_m203c_e: arifle_mas_hk417_m203c
	{
		displayName = "HK417 CQB M203 holo";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417_m203c_sd: arifle_mas_hk417_m203c
	{
		displayName = "HK417 CQB M203 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417c_v: arifle_mas_hk417c
	{
		displayname = "HK417 CQB Wood";
		model = "\mas_us_rifle\mas_hk417_cqb";
		picture = "\mas_us_rifle\ui\w\gear_hk416_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\417_cv.paa"};
	};
	class arifle_mas_hk417c_v_h: arifle_mas_hk417c_v
	{
		displayName = "HK417 CQB Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417c_v_e: arifle_mas_hk417c_v
	{
		displayName = "HK417 CQB Wood holo";
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
	class arifle_mas_hk417c_v_sd: arifle_mas_hk417c_v
	{
		displayName = "HK417 CQB Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417_m203c_v: arifle_mas_hk417_m203c
	{
		displayname = "HK417 CQB M203 Wood";
		model = "\mas_us_rifle\mas_hk417_m203_cqb";
		picture = "\mas_us_rifle\ui\w\gear_hk416m_x_ca.paa";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\417_cv.paa","mas_us_rifle\416\data\m16_cv.paa"};
	};
	class arifle_mas_hk417_m203c_v_h: arifle_mas_hk417_m203c_v
	{
		displayName = "HK417 CQB M203 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417_m203c_v_e: arifle_mas_hk417_m203c_v
	{
		displayName = "HK417 CQB M203 Wood holo";
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
	class arifle_mas_hk417_m203c_v_sd: arifle_mas_hk417_m203c_v
	{
		displayName = "HK417 CQB M203 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417c_d: arifle_mas_hk417c
	{
		displayname = "HK417 CQB Des";
		model = "\mas_us_rifle\mas_hk417_cqb";
		picture = "\mas_us_rifle\ui\d\gear_hk416_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\417_cd.paa"};
	};
	class arifle_mas_hk417c_d_h: arifle_mas_hk417c_d
	{
		displayName = "HK417 CQB Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417c_d_e: arifle_mas_hk417c_d
	{
		displayName = "HK417 CQB Des holo";
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
	class arifle_mas_hk417c_d_sd: arifle_mas_hk417c_d
	{
		displayName = "HK417 CQB Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417_m203c_d: arifle_mas_hk417_m203c
	{
		displayname = "HK417 CQB M203 Des";
		model = "\mas_us_rifle\mas_hk417_m203_cqb";
		picture = "\mas_us_rifle\ui\d\gear_hk416m_x_ca.paa";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\417_cd.paa","mas_us_rifle\416\data\m16_cd.paa"};
	};
	class arifle_mas_hk417_m203c_d_h: arifle_mas_hk417_m203c_d
	{
		displayName = "HK417 CQB M203 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_hk417_m203c_d_e: arifle_mas_hk417_m203c_d
	{
		displayName = "HK417 CQB M203 Des holo";
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
	class arifle_mas_hk417_m203c_d_sd: arifle_mas_hk417_m203c_d
	{
		displayName = "HK417 CQB M203 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4: arifle_mas_hk416
	{
		displayname = "M4A1";
		model = "\mas_us_rifle\mas_m4";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m4.rtm"};
		picture = "\mas_us_rifle\ui\gear_m4_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The M4A1 is a gas-operated, magazine-fed, selective fire, shoulder-fired weapon with a telescoping stock. A shortened variant of the M16A2 rifle, the M4A1 has a 14.5 in (370 mm) barrel, allowing its user to better operate in close quarters combat. Like the rest of the M16 family, it fires the .223 caliber, or 5.56mm NATO round. US Army, USSF and many other country's Special Forces are equipped with the M4A1.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			dispersion = 0.00087;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
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
			mass = 63;
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
	class arifle_mas_m4_t: arifle_mas_m4
	{
		displayName = "M4A1 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_h: arifle_mas_m4
	{
		displayName = "M4A1 hamr";
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
	class arifle_mas_m4_a: arifle_mas_m4
	{
		displayName = "M4A1 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_e: arifle_mas_m4
	{
		displayName = "M4A1 holo";
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
	class arifle_mas_m4_sd: arifle_mas_m4
	{
		displayName = "M4A1 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_ti: arifle_mas_m4
	{
		displayName = "M4A1 TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl: arifle_mas_hk416_gl
	{
		displayname = "M4A1 AG36";
		model = "\mas_us_rifle\mas_m4_gl";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m4gl.rtm"};
		picture = "\mas_us_rifle\ui\gear_m4g_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The M4A1 is a gas-operated, magazine-fed, selective fire, shoulder-fired weapon with a telescoping stock. A shortened variant of the M16A2 rifle, the M4A1 has a 14.5 in (370 mm) barrel, allowing its user to better operate in close quarters combat. Like the rest of the M16 family, it fires the .223 caliber, or 5.56mm NATO round. US Army, USSF and many other country's Special Forces are equipped with the M4A1. This version is equipped with the AG36 wich is a single-shot 40 mm grenade launcher.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			dispersion = 0.00087;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
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
			mass = 93.9;
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
	class arifle_mas_m4_gl_t: arifle_mas_m4_gl
	{
		displayName = "M4A1 AG36 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_h: arifle_mas_m4_gl
	{
		displayName = "M4A1 AG36 hamr";
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
	class arifle_mas_m4_gl_a: arifle_mas_m4_gl
	{
		displayName = "M4A1 AG36 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_e: arifle_mas_m4_gl
	{
		displayName = "M4A1 AG36 holo";
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
	class arifle_mas_m4_gl_sd: arifle_mas_m4_gl
	{
		displayName = "M4A1 AG36 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_ti: arifle_mas_m4_gl
	{
		displayName = "M4A1 AG36 TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203: arifle_mas_hk416_gl
	{
		displayname = "M4A1 M203";
		model = "\mas_us_rifle\mas_m4_m203";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m4m203.rtm"};
		picture = "\mas_us_rifle\ui\gear_m4m_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The M4A1 is a gas-operated, magazine-fed, selective fire, shoulder-fired weapon with a telescoping stock. A shortened variant of the M16A2 rifle, the M4A1 has a 14.5 in (370 mm) barrel, allowing its user to better operate in close quarters combat. Like the rest of the M16 family, it fires the .223 caliber, or 5.56mm NATO round. US Army, USSF and many other country's Special Forces are equipped with the M4A1. This version is equipped with the M203 wich is a single-shot 40 mm grenade launcher.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		muzzles[] ={"this","M203b"};
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			dispersion = 0.00087;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
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
		class M203b: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
					sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\mas_us_rifle\sounds\M203_s1",0.100000,1,400};
			soundBegin[] = {"begin1",1};
		};
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
			mass = 93.9;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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
	class arifle_mas_m4_m203_t: arifle_mas_m4_m203
	{
		displayName = "M4A1 M203 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_h: arifle_mas_m4_m203
	{
		displayName = "M4A1 M203 hamr";
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
	class arifle_mas_m4_m203_a: arifle_mas_m4_m203
	{
		displayName = "M4A1 M203 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_e: arifle_mas_m4_m203
	{
		displayName = "M4A1 M203 holo";
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
	class arifle_mas_m4_m203_ti: arifle_mas_m4_m203
	{
		displayName = "M4A1 M203 TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_sd: arifle_mas_m4_m203
	{
		displayName = "M4A1 M203 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_v: arifle_mas_m4
	{
		displayname = "M4A1 Wood";
		model = "\mas_us_rifle\mas_m4";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_m4_x_ca.paa";
	};
	class arifle_mas_m4_v_t: arifle_mas_m4_v
	{
		displayName = "M4A1 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_v_h: arifle_mas_m4_v
	{
		displayName = "M4A1 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_v_a: arifle_mas_m4_v
	{
		displayName = "M4A1 Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_v_e: arifle_mas_m4_v
	{
		displayName = "M4A1 Wood holo";
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
	class arifle_mas_m4_v_ti: arifle_mas_m4_v
	{
		displayName = "M4A1 Wood TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_v_sd: arifle_mas_m4_v
	{
		displayName = "M4A1 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_v: arifle_mas_m4_gl
	{
		displayname = "M4A1 AG36 Wood";
		model = "\mas_us_rifle\mas_m4_gl";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cv.paa","mas_us_rifle\416\data\ag37.paa"};
		picture = "\mas_us_rifle\ui\w\gear_m4g_x_ca.paa";
	};
	class arifle_mas_m4_gl_v_t: arifle_mas_m4_gl_v
	{
		displayName = "M4A1 AG36 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_v_h: arifle_mas_m4_gl_v
	{
		displayName = "M4A1 AG36 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_v_a: arifle_mas_m4_gl_v
	{
		displayName = "M4A1 AG36 Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_v_e: arifle_mas_m4_gl_v
	{
		displayName = "M4A1 AG36 Wood holo";
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
	class arifle_mas_m4_gl_v_ti: arifle_mas_m4_gl_v
	{
		displayName = "M4A1 AG36 Wood TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_v_sd: arifle_mas_m4_gl_v
	{
		displayName = "M4A1 AG36 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_v: arifle_mas_m4_m203
	{
		displayname = "M4A1 M203 Wood";
		model = "\mas_us_rifle\mas_m4_m203";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cv.paa","mas_us_rifle\416\data\m16_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_m4m_x_ca.paa";
	};
	class arifle_mas_m4_m203_v_t: arifle_mas_m4_m203_v
	{
		displayName = "M4A1 M203 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_v_h: arifle_mas_m4_m203_v
	{
		displayName = "M4A1 M203 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_v_a: arifle_mas_m4_m203_v
	{
		displayName = "M4A1 M203 Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_v_e: arifle_mas_m4_m203_v
	{
		displayName = "M4A1 M203 Wood holo";
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
	class arifle_mas_m4_m203_v_ti: arifle_mas_m4_m203_v
	{
		displayName = "M4A1 M203 Wood TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_v_sd: arifle_mas_m4_m203_v
	{
		displayName = "M4A1 M203 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_d: arifle_mas_m4
	{
		displayname = "M4A1 Des";
		model = "\mas_us_rifle\mas_m4";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_m4_x_ca.paa";
	};
	class arifle_mas_m4_d_t: arifle_mas_m4_d
	{
		displayName = "M4A1 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_d_h: arifle_mas_m4_d
	{
		displayName = "M4A1 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_d_a: arifle_mas_m4_d
	{
		displayName = "M4A1 Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_d_e: arifle_mas_m4_d
	{
		displayName = "M4A1 Des holo";
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
	class arifle_mas_m4_d_ti: arifle_mas_m4_d
	{
		displayName = "M4A1 Des TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_d_sd: arifle_mas_m4_d
	{
		displayName = "M4A1 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_d: arifle_mas_m4_gl
	{
		displayname = "M4A1 AG36 Des";
		model = "\mas_us_rifle\mas_m4_gl";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cd.paa","mas_us_rifle\416\data\ag38.paa"};
		picture = "\mas_us_rifle\ui\d\gear_m4g_x_ca.paa";
	};
	class arifle_mas_m4_gl_d_t: arifle_mas_m4_gl_d
	{
		displayName = "M4A1 AG36 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_d_h: arifle_mas_m4_gl_d
	{
		displayName = "M4A1 AG36 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_d_a: arifle_mas_m4_gl_d
	{
		displayName = "M4A1 AG36 Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_d_e: arifle_mas_m4_gl_d
	{
		displayName = "M4A1 AG36 Des holo";
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
	class arifle_mas_m4_gl_d_ti: arifle_mas_m4_gl_d
	{
		displayName = "M4A1 AG36 Des TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_gl_d_sd: arifle_mas_m4_gl_d
	{
		displayName = "M4A1 AG36 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_d: arifle_mas_m4_m203
	{
		displayname = "M4A1 M203 Des";
		model = "\mas_us_rifle\mas_m4_m203";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cd.paa","mas_us_rifle\416\data\m16_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_m4m_x_ca.paa";
	};
	class arifle_mas_m4_m203_d_t: arifle_mas_m4_m203_d
	{
		displayName = "M4A1 M203 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_d_h: arifle_mas_m4_m203_d
	{
		displayName = "M4A1 M203 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_d_a: arifle_mas_m4_m203_d
	{
		displayName = "M4A1 M203 Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_d_e: arifle_mas_m4_m203_d
	{
		displayName = "M4A1 M203 Des holo";
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
	class arifle_mas_m4_m203_d_ti: arifle_mas_m4_m203_d
	{
		displayName = "M4A1 M203 Des TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203_d_sd: arifle_mas_m4_m203_d
	{
		displayName = "M4A1 M203 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4c: arifle_mas_m4
	{
		displayname = "M4A1 CQB";
		model = "\mas_us_rifle\mas_m4_cqb";
		picture = "\mas_us_rifle\ui\gear_m4_x_ca.paa";
	};
	class arifle_mas_m4c_h: arifle_mas_m4c
	{
		displayName = "M4A1 CQB hamr";
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
	class arifle_mas_m4c_e: arifle_mas_m4c
	{
		displayName = "M4A1 CQB holo";
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
	class arifle_mas_m4c_sd: arifle_mas_m4c
	{
		displayName = "M4A1 CQB SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203c: arifle_mas_m4_m203
	{
		displayname = "M4A1 CQB M203";
		model = "\mas_us_rifle\mas_m4_m203_cqb";
		picture = "\mas_us_rifle\ui\gear_m4m_x_ca.paa";
	};
	class arifle_mas_m4_m203c_h: arifle_mas_m4_m203c
	{
		displayName = "M4A1 CQB M203 hamr";
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
	class arifle_mas_m4_m203c_e: arifle_mas_m4_m203c
	{
		displayName = "M4A1 CQB M203 holo";
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
	class arifle_mas_m4_m203c_sd: arifle_mas_m4_m203c
	{
		displayName = "M4A1 CQB M203 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4c_v: arifle_mas_m4c
	{
		displayname = "M4A1 CQB Wood";
		model = "\mas_us_rifle\mas_m4_cqb";
		picture = "\mas_us_rifle\ui\w\gear_m4_x_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cv.paa","mas_us_rifle\416\data\ak74a_cv.paa"};
	};
	class arifle_mas_m4c_v_h: arifle_mas_m4c_v
	{
		displayName = "M4A1 CQB Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4c_v_e: arifle_mas_m4c_v
	{
		displayName = "M4A1 CQB Wood holo";
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
	class arifle_mas_m4c_v_sd: arifle_mas_m4c_v
	{
		displayName = "M4A1 CQB Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203c_v: arifle_mas_m4_m203c
	{
		displayname = "M4A1 CQB M203 Wood";
		model = "\mas_us_rifle\mas_m4_m203_cqb";
		picture = "\mas_us_rifle\ui\w\gear_m4m_x_ca.paa";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cv.paa","mas_us_rifle\416\data\ak74a_cv.paa","mas_us_rifle\416\data\m16_cv.paa"};
	};
	class arifle_mas_m4_m203c_v_h: arifle_mas_m4_m203c_v
	{
		displayName = "M4A1 CQB M203 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203c_v_e: arifle_mas_m4_m203c_v
	{
		displayName = "M4A1 CQB M203 Wood holo";
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
	class arifle_mas_m4_m203c_v_sd: arifle_mas_m4_m203c_v
	{
		displayName = "M4A1 CQB M203 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4c_d: arifle_mas_m4c
	{
		displayname = "M4A1 CQB Des";
		model = "\mas_us_rifle\mas_m4_cqb";
		picture = "\mas_us_rifle\ui\d\gear_m4_x_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cd.paa","mas_us_rifle\416\data\ak74a_cd.paa"};
	};
	class arifle_mas_m4c_d_h: arifle_mas_m4c_d
	{
		displayName = "M4A1 CQB Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4c_d_e: arifle_mas_m4c_d
	{
		displayName = "M4A1 CQB Des holo";
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
	class arifle_mas_m4c_d_sd: arifle_mas_m4c_d
	{
		displayName = "M4A1 CQB Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203c_d: arifle_mas_m4_m203c
	{
		displayname = "M4A1 CQB M203 Des";
		model = "\mas_us_rifle\mas_m4_m203_cqb";
		picture = "\mas_us_rifle\ui\d\gear_m4m_x_ca.paa";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m4_cd.paa","mas_us_rifle\416\data\ak74a_cd.paa","mas_us_rifle\416\data\m16_cd.paa"};
	};
	class arifle_mas_m4_m203c_d_h: arifle_mas_m4_m203c_d
	{
		displayName = "M4A1 CQB M203 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m4_m203c_d_e: arifle_mas_m4_m203c_d
	{
		displayName = "M4A1 CQB M203 Des holo";
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
	class arifle_mas_m4_m203c_d_sd: arifle_mas_m4_m203c_d
	{
		displayName = "M4A1 CQB M203 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119: arifle_mas_m4
	{
		displayname = "L119A1";
		model = "\mas_us_rifle\mas_l119";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_l119.rtm"};
		picture = "\mas_us_rifle\ui\gear_l119_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The L119A1 Special Forces Weapon SFW features a longer, 410 mm barrel of a heavier profile than the C8A1. It is designed to provide a fire support capability in carbine form. The front sight base is strengthened for mounting of the Heckler & Koch AGC UGL grenade launcher. The British military acquired a number of SFWs, primarily for their special forces, under the designation L119A1. This version of the C8 is also in service with the Norwegian MJK and HJK.";
		};
	};
	class arifle_mas_l119_t: arifle_mas_l119
	{
		displayName = "L119A1 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_h: arifle_mas_l119
	{
		displayName = "L119A1 hamr";
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
	class arifle_mas_l119_a: arifle_mas_l119
	{
		displayName = "L119A1 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_e: arifle_mas_l119
	{
		displayName = "L119A1 holo";
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
	class arifle_mas_l119_sd: arifle_mas_l119
	{
		displayName = "L119A1 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_ti: arifle_mas_l119
	{
		displayName = "L119A1 TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl: arifle_mas_m4_gl
	{
		displayname = "L119A1 UGL";
		model = "\mas_us_rifle\mas_l119_gl";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m4gl.rtm"};
		picture = "\mas_us_rifle\ui\gear_l119g_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The L119A1 Special Forces Weapon SFW features a longer, 410 mm barrel of a heavier profile than the C8A1. It is designed to provide a fire support capability in carbine form. The front sight base is strengthened for mounting of the Heckler & Koch AGC UGL grenade launcher. The British military acquired a number of SFWs, primarily for their special forces, under the designation L119A1. This version of the C8 is also in service with the Norwegian MJK and HJK. This version is equipped with the UGL wich is a single shot 40 mm grenade launcher.";
		};
	};
	class arifle_mas_l119_gl_t: arifle_mas_l119_gl
	{
		displayName = "L119A1 UGL acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_h: arifle_mas_l119_gl
	{
		displayName = "L119A1 UGL hamr";
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
	class arifle_mas_l119_gl_a: arifle_mas_l119_gl
	{
		displayName = "L119A1 UGL aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_e: arifle_mas_l119_gl
	{
		displayName = "L119A1 UGL holo";
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
	class arifle_mas_l119_gl_sd: arifle_mas_l119_gl
	{
		displayName = "L119A1 UGL SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_ti: arifle_mas_l119_gl
	{
		displayName = "L119A1 UGL TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203: arifle_mas_m4_m203
	{
		displayname = "L119A1 M203";
		model = "\mas_us_rifle\mas_l119_m203";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m4m203.rtm"};
		picture = "\mas_us_rifle\ui\gear_l119m_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The L119A1 Special Forces Weapon SFW features a longer, 410 mm barrel of a heavier profile than the C8A1. It is designed to provide a fire support capability in carbine form. The front sight base is strengthened for mounting of the Heckler & Koch AGC UGL grenade launcher. The British military acquired a number of SFWs, primarily for their special forces, under the designation L119A1. This version of the C8 is also in service with the Norwegian MJK and HJK. This version is equipped with the M203 wich is a single shot 40 mm grenade launcher.";
		};
	};
	class arifle_mas_l119_m203_t: arifle_mas_l119_m203
	{
		displayName = "L119A1 M203 acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_h: arifle_mas_l119_m203
	{
		displayName = "L119A1 M203 hamr";
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
	class arifle_mas_l119_m203_a: arifle_mas_l119_m203
	{
		displayName = "L119A1 M203 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_e: arifle_mas_l119_m203
	{
		displayName = "L119A1 M203 holo";
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
	class arifle_mas_l119_m203_ti: arifle_mas_l119_m203
	{
		displayName = "L119A1 M203 TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_sd: arifle_mas_l119_m203
	{
		displayName = "L119A1 M203 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_v: arifle_mas_l119
	{
		displayname = "L119A1 Wood";
		model = "\mas_us_rifle\mas_l119";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\l119_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_l119_x_ca.paa";
	};
	class arifle_mas_l119_v_t: arifle_mas_l119_v
	{
		displayName = "L119A1 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_v_h: arifle_mas_l119_v
	{
		displayName = "L119A1 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_v_a: arifle_mas_l119_v
	{
		displayName = "L119A1 Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_v_e: arifle_mas_l119_v
	{
		displayName = "L119A1 Wood holo";
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
	class arifle_mas_l119_v_ti: arifle_mas_l119_v
	{
		displayName = "L119A1 Wood TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_v_sd: arifle_mas_l119_v
	{
		displayName = "L119A1 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_v: arifle_mas_l119_gl
	{
		displayname = "L119A1 UGL Wood";
		model = "\mas_us_rifle\mas_l119_gl";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\l119_cv.paa","mas_us_rifle\416\data\ag37.paa"};
		picture = "\mas_us_rifle\ui\w\gear_l119g_x_ca.paa";
	};
	class arifle_mas_l119_gl_v_t: arifle_mas_l119_gl_v
	{
		displayName = "L119A1 UGL Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_v_h: arifle_mas_l119_gl_v
	{
		displayName = "L119A1 UGL Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_v_a: arifle_mas_l119_gl_v
	{
		displayName = "L119A1 UGL Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_v_e: arifle_mas_l119_gl_v
	{
		displayName = "L119A1 UGL Wood holo";
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
	class arifle_mas_l119_gl_v_ti: arifle_mas_l119_gl_v
	{
		displayName = "L119A1 UGL Wood TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_v_sd: arifle_mas_l119_gl_v
	{
		displayName = "L119A1 UGL Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_v: arifle_mas_l119_m203
	{
		displayname = "L119A1 M203 Wood";
		model = "\mas_us_rifle\mas_l119_m203";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\l119_cv.paa","mas_us_rifle\416\data\m16_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_l119m_x_ca.paa";
	};
	class arifle_mas_l119_m203_v_t: arifle_mas_l119_m203_v
	{
		displayName = "L119A1 M203 Wood acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_v_h: arifle_mas_l119_m203_v
	{
		displayName = "L119A1 M203 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_v_a: arifle_mas_l119_m203_v
	{
		displayName = "L119A1 M203 Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_v_e: arifle_mas_l119_m203_v
	{
		displayName = "L119A1 M203 Wood holo";
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
	class arifle_mas_l119_m203_v_ti: arifle_mas_l119_m203_v
	{
		displayName = "L119A1 M203 Wood TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_v_sd: arifle_mas_l119_m203_v
	{
		displayName = "L119A1 M203 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_d: arifle_mas_l119
	{
		displayname = "L119A1 Des";
		model = "\mas_us_rifle\mas_l119";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\l119_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_l119_x_ca.paa";
	};
	class arifle_mas_l119_d_t: arifle_mas_l119_d
	{
		displayName = "L119A1 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_d_h: arifle_mas_l119_d
	{
		displayName = "L119A1 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_d_a: arifle_mas_l119_d
	{
		displayName = "L119A1 Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_d_e: arifle_mas_l119_d
	{
		displayName = "L119A1 Des holo";
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
	class arifle_mas_l119_d_ti: arifle_mas_l119_d
	{
		displayName = "L119A1 Des TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_d_sd: arifle_mas_l119_d
	{
		displayName = "L119A1 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_d: arifle_mas_l119_gl
	{
		displayname = "L119A1 UGL Des";
		model = "\mas_us_rifle\mas_l119_gl";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\l119_cd.paa","mas_us_rifle\416\data\ag38.paa"};
		picture = "\mas_us_rifle\ui\d\gear_l119g_x_ca.paa";
	};
	class arifle_mas_l119_gl_d_t: arifle_mas_l119_gl_d
	{
		displayName = "L119A1 UGL Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_d_h: arifle_mas_l119_gl_d
	{
		displayName = "L119A1 UGL Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_d_a: arifle_mas_l119_gl_d
	{
		displayName = "L119A1 UGL Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_d_e: arifle_mas_l119_gl_d
	{
		displayName = "L119A1 UGL Des holo";
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
	class arifle_mas_l119_gl_d_ti: arifle_mas_l119_gl_d
	{
		displayName = "L119A1 UGL Des TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_gl_d_sd: arifle_mas_l119_gl_d
	{
		displayName = "L119A1 UGL Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_d: arifle_mas_l119_m203
	{
		displayname = "L119A1 M203 Des";
		model = "\mas_us_rifle\mas_l119_m203";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\l119_cd.paa","mas_us_rifle\416\data\m16_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_l119m_x_ca.paa";
	};
	class arifle_mas_l119_m203_d_t: arifle_mas_l119_m203_d
	{
		displayName = "L119A1 M203 Des acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_d_h: arifle_mas_l119_m203_d
	{
		displayName = "L119A1 M203 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_d_a: arifle_mas_l119_m203_d
	{
		displayName = "L119A1 M203 Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_d_e: arifle_mas_l119_m203_d
	{
		displayName = "L119A1 M203 Des holo";
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
	class arifle_mas_l119_m203_d_ti: arifle_mas_l119_m203_d
	{
		displayName = "L119A1 M203 Des TI";
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
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_l119_m203_d_sd: arifle_mas_l119_m203_d
	{
		displayName = "L119A1 M203 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_Mc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m16: arifle_mas_hk416
	{
		displayname = "M16A4";
		model = "\mas_us_rifle\mas_m16";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m16.rtm"};
		picture = "\mas_us_rifle\ui\gear_m16_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The M16 is a gas operated, selective fire weapon, chambered for the 5.56 x 45mm round. M16A1 improved version of the original M16. It has been adopted by the US Army as a standard rifle in 1967, M16A2 a variant of the previous M16A1, adapted for the new SS109 5.56 x 45 mm standard NATO round. This assault rifle had heavier barrel and different rear sight. A full-auto firing mode was replaced with three round burst mode. It's ejection port also has a spent case deflector. The M16A2 has been adopted by the US Army in 1982 and by the US Marine Corps in 1983. Soon it became the general issue rifle, M16A3 improved version, fitted with Picatinny-type rail instead of the carrying handle, which accepts a variety of scopes. A detachable carrying handle can still be installed. Weapon's trigger mechanism has a semi- and full-auto modes only, M16A4 similar to the M16A3, however has a three-round burst mode instead of the full-auto mode.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.;
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			soundBurst = 0;
			burst = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
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
			mass = 71.4;
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
	class arifle_mas_m16_t: arifle_mas_m16
	{
		displayName = "M16A4 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_a: arifle_mas_m16
	{
		displayName = "M16A4 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_e: arifle_mas_m16
	{
		displayName = "M16A4 SOS";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_sd: arifle_mas_m16
	{
		displayName = "M16A4 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_gl: arifle_mas_hk416_gl
	{
		displayname = "M16A4 M203";
		model = "\mas_us_rifle\mas_m16_gl";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m16m203.rtm"};
		picture = "\mas_us_rifle\ui\gear_m16g_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The M16 is a gas operated, selective fire weapon, chambered for the 5.56 x 45mm round. M16A1 improved version of the original M16. It has been adopted by the US Army as a standard rifle in 1967, M16A2 a variant of the previous M16A1, adapted for the new SS109 5.56 x 45 mm standard NATO round. This assault rifle had heavier barrel and different rear sight. A full-auto firing mode was replaced with three round burst mode. It's ejection port also has a spent case deflector. The M16A2 has been adopted by the US Army in 1982 and by the US Marine Corps in 1983. Soon it became the general issue rifle, M16A3 improved version, fitted with Picatinny-type rail instead of the carrying handle, which accepts a variety of scopes. A detachable carrying handle can still be installed. Weapon's trigger mechanism has a semi- and full-auto modes only, M16A4 similar to the M16A3, however has a three-round burst mode instead of the full-auto mode. This version is equipped with the M203 wich is a single-shot 40 mm grenade launcher.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		muzzles[] ={"this","M203c"};
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			soundBurst = 0;
			burst = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
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
		class M203c: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
					sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\mas_us_rifle\sounds\M203_s1",0.100000,1,400};
			soundBegin[] = {"begin1",1};
		};
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
			mass = 100.5;
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
	class M4Car: arifle_mas_hk416
	{	
		displayname = "M4 Carbine";
		model = "\mas_us_rifle\mas_m4";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m4.rtm"};
		picture = "\mas_us_rifle\ui\gear_m4_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The M4 Carbine is a gas-operated, magazine-fed, selective fire, shoulder-fired weapon with a telescoping stock. A shortened variant of the M16A2 rifle, the M4 Carbine has a 14.5 in (370 mm) barrel, allowing its user to better operate in close quarters combat. Like the rest of the M16 family, it fires the .223 caliber, or 5.56mm NATO round. US Army, USSF and many other country's Special Forces are equipped with the M4.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			soundBurst = 0;
			burst = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
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
			mass = 63;
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
	class M4Car203: arifle_mas_hk416_gl
	{	
		displayname = "M4 Carbine 203";
		model = "\mas_us_rifle\mas_m4_m203";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m4m203.rtm"};
		picture = "\mas_us_rifle\ui\gear_m4m_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The M4 Carbine is a gas-operated, magazine-fed, selective fire, shoulder-fired weapon with a telescoping stock. A shortened variant of the M16A2 rifle, the M4 Carbine has a 14.5 in (370 mm) barrel, allowing its user to better operate in close quarters combat. Like the rest of the M16 family, it fires the .223 caliber, or 5.56mm NATO round. US Army, USSF and many other country's Special Forces are equipped with the M4. This version is equipped with the M203 wich is a single-shot 40 mm grenade launcher.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		muzzles[] ={"this","M203c"};
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"\mas_us_rifle\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\m4_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.0799999;
			soundBurst = 0;
			burst = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
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
		class M203c: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
					sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\mas_us_rifle\sounds\M203_s1",0.100000,1,400};
			soundBegin[] = {"begin1",1};
		};
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
			mass = 93.9;
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
	class arifle_mas_m16_gl_t: arifle_mas_m16_gl
	{
		displayName = "M16A4 M203 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_gl_a: arifle_mas_m16_gl
	{
		displayName = "M16A4 M203 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_gl_e: arifle_mas_m16_gl
	{
		displayName = "M16A4 M203 SOS";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_gl_sd: arifle_mas_m16_gl
	{
		displayName = "M16A4 M203 SD";
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
				item = "muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_hk417: srifle_EBR_F
	{
		displayname = "HK417";
		model = "\mas_us_rifle\mas_hk417";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_hk417.rtm"};
		reloadAction = "GestureReloadSMG_02";
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_us_rifle\ui\gear_hk417_x_ca.paa";
		descriptionshort = "Marksman Rifle<br />Caliber: 7.62x51 mm";
		maxZeroing = 1600;
		class Library
		{
			libtextdesc = "The Heckler & Koch HK417 is a battle rifle designed and manufactured in Germany by Heckler & Koch. It is a gas-operated, selective fire rifle with a rotating bolt and is essentially an enlarged HK416 assault rifle. Chambered for the full power 7.62x51mm NATO round, instead of a less powerful intermediate cartridge, the HK417 is intended for use as a designated marksman rifle, and in other roles where the greater penetrative power and range of the 7.62x51mm NATO round are required. It has been adopted for service by a number of armed forces, special forces, and police organizations.";
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
	class srifle_mas_hk417_h: srifle_mas_hk417
	{
		displayName = "HK417 Scope";
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
	class srifle_mas_hk417_sd: srifle_mas_hk417
	{
		displayName = "HK417 Scope SD";
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
	class srifle_mas_hk417_v: srifle_mas_hk417
	{
		displayname = "HK417 Wood";
		model = "\mas_us_rifle\mas_hk417";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\417_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_hk417_x_ca.paa";
	};
	class srifle_mas_hk417_v_h: srifle_mas_hk417_v
	{
		displayName = "HK417 Wood Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_hk417_v_sd: srifle_mas_hk417_v
	{
		displayName = "HK417 Wood Scope SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SMc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_hk417_d: srifle_mas_hk417
	{
		displayname = "HK417 Des";
		model = "\mas_us_rifle\mas_hk417";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\417_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_hk417_x_ca.paa";
	};
	class srifle_mas_hk417_d_h: srifle_mas_hk417_d
	{
		displayName = "HK417 Des Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_hk417_d_sd: srifle_mas_hk417_d
	{
		displayName = "HK417 Des Scope SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SMc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_sr25: srifle_mas_hk417
	{
		displayname = "SR25";
		model = "\mas_us_rifle\mas_sr25";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_sr25.rtm"};
		picture = "\mas_us_rifle\ui\gear_sr25_x_ca.paa";
		descriptionshort = "Marksman Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The SR-25 is a semi-automatic sniper rifle designed by Eugene Stoner and manufactured by Knight's Armament Company. The SR-25 uses a rotating bolt and a direct impingement gas system. It is loosely based on Stoner's AR-10, rebuilt in its original 7.62×51mm NATO caliber. SR-25 barrels were originally manufactured by Remington Arms with its 5R rifling. The heavy 20 in barrel is free-floating, so handguards are attached to the front of the receiver and do not touch the barrel. First military purchase was spearheaded by the US Navy in the early 1990s, the first operational deployment and use of the SR-25 sniper rifle was with US Navy SEAL snipers supporting operations in Somalia 1993.";
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
	};
	class srifle_mas_sr25_h: srifle_mas_sr25
	{
		displayName = "SR25 Scope";
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
	class srifle_mas_sr25_sd: srifle_mas_sr25
	{
		displayName = "SR25 Scope SD";
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
	class srifle_mas_sr25_v: srifle_mas_sr25
	{
		displayname = "SR25 Wood";
		model = "\mas_us_rifle\mas_sr25";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\sr25_cv.paa","mas_us_rifle\416\data\416_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_sr25_x_ca.paa";
	};
	class srifle_mas_sr25_v_h: srifle_mas_sr25_v
	{
		displayName = "SR25 Wood Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_sr25_v_sd: srifle_mas_sr25_v
	{
		displayName = "SR25 Wood Scope SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SMc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_sr25_d: srifle_mas_sr25
	{
		displayname = "SR25 Des";
		model = "\mas_us_rifle\mas_sr25";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\sr25_cd.paa","mas_us_rifle\416\data\416_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_sr25_x_ca.paa";
	};
	class srifle_mas_sr25_d_h: srifle_mas_sr25_d
	{
		displayName = "SR25 Des Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_sr25_d_sd: srifle_mas_sr25_d
	{
		displayName = "SR25 Des Scope SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SMc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_ebr: srifle_EBR_F
	{
		displayname = "M14 EBR";
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		maxZeroing = 1400;
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","muzzle_mas_snds_SM","muzzle_mas_snds_SMc"};
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
	class srifle_mas_ebr_a: srifle_mas_ebr
	{
		displayName = "M14 EBR Aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_ebr_t: srifle_mas_ebr
	{
		displayName = "M14 EBR hamr";
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
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_ebr_h: srifle_mas_ebr
	{
		displayName = "M14 EBR Scope";
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
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_ebr_sd: srifle_mas_ebr
	{
		displayName = "M14 EBR Scope SD";
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
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m24: srifle_LRR_F
	{
		displayname = "M24";
		model = "\mas_us_rifle\mas_m24";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m24.rtm"};
		magazines[] = {"5Rnd_mas_762x51_Stanag","5Rnd_mas_762x51_T_Stanag"};
		picture = "\mas_us_rifle\ui\gear_m24_x_ca.paa";
		descriptionshort = "Sniper Rifle<br />Caliber: 7.62x51 mm";
		maxZeroing = 1600;
		class Library
		{
			libtextdesc = "The M24 Sniper Weapon System is the military and police version of the Remington 700 rifle, M24 being the model name assigned by the United States Army after adoption as their standard sniper rifle in 1988. The M24 is referred to as a weapons system because it consists of not only a rifle, but also a detachable telescopic sight and other accessories. The M24 SWS had the long action bolt version of the Remington 700 receiver. It turned out there was an insufficient amount of rounds in a single lot of manufacture, so the operational requirement changed to use the dimensionally smaller 7,62×51mm NATO M118 Match Grade cartridge.";
		};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M24Reload",1,1,30};
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 1.5;
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
				begin1[] = {"\mas_us_rifle\sounds\Realm24_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\Realm24_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\Realm24_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 150;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 700;
			requiredOpticType = 1;
		};
		class medium_optic2: Single
		{
			showToPlayer = 0;
			minRange = 250;
			minRangeProbab = 0.1;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 6.0;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2: far_optic1
		{
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 1050;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 2000;
			requiredOpticType = 2;
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_SH","muzzle_mas_snds_SHc"};
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
	class srifle_mas_m24_h: srifle_mas_m24
	{
		displayName = "M24 Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_zeiss_eo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m24_v: srifle_mas_m24
	{
		displayname = "M24 Wood";
		model = "\mas_us_rifle\mas_m24";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m24_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_m24_x_ca.paa";
	};
	class srifle_mas_m24_v_h: srifle_mas_m24_v
	{
		displayName = "M24 Wood Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_zeiss_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m24_d: srifle_mas_m24
	{
		displayname = "M24 Des";
		model = "\mas_us_rifle\mas_m24";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m24_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_m24_x_ca.paa";
	};
	class srifle_mas_m24_d_h: srifle_mas_m24_d
	{
		displayName = "M24 Des Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_zeiss_eo_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_mp5: SMG_02_F
	{
		displayname = "MP5A5";
		model = "\mas_us_rifle\mas_HKM5_A5";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_mp5.rtm"};
		magazines[] = {"30Rnd_mas_9x21_Stanag","30Rnd_9x21_Mag"};
		picture = "\mas_us_rifle\ui\gear_mp5_x_ca.paa";
		descriptionshort = "Submachinegun<br />Caliber: 9x21 mm";
		class Library
		{
			libtextdesc = "The Heckler & Koch MP5 is a 9mm submachine gun of German design, developed in the 1960s by a team of engineers from the German small arms manufacturer Heckler & Koch GmbH of Oberndorf am Neckar. There are over 100 variants of the MP5, including a semi-automatic version. The MP5 is one of the most widely used submachine guns in the world, having been adopted by 40 nations and numerous military, law enforcement, intelligence, and security organizations.";
		};
		drySound[] = {"\mas_us_rifle\sounds\mp5_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\MP5Reload",1,1,30};
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\mp5_s1",1.0,1,500};
				begin2[] = {"\mas_us_rifle\sounds\mp5_s2",1.0,1,500};
				begin3[] = {"\mas_us_rifle\sounds\mp5_s3",1.0,1,500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0545;
			dispersion = 0.0011;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 300;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\mp5_s1",1.0,1,500};
				begin2[] = {"\mas_us_rifle\sounds\mp5_s2",1.0,1,500};
				begin3[] = {"\mas_us_rifle\sounds\mp5_s3",1.0,1,500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.0545;
			dispersion = 0.0011;
			recoil = "recoil_burst_smg_02";
			recoilProne = "recoil_burst_prone_smg_02";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 250;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\mp5_s1",1.0,1,500};
				begin2[] = {"\mas_us_rifle\sounds\mp5_s2",1.0,1,500};
				begin3[] = {"\mas_us_rifle\sounds\mp5_s3",1.0,1,500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.0545;
			dispersion = 0.0011;
			recoil = "recoil_auto_smg_02";
			recoilProne = "recoil_auto_prone_smg_02";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 50;
		};
		class WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_C"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_Aco_smg","optic_Holosight_smg","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
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
	class arifle_mas_mp5_a: arifle_mas_mp5
	{
		displayName = "MP5A5 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_e: arifle_mas_mp5
	{
		displayName = "MP5A5 holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_sd: arifle_mas_mp5
	{
		displayName = "MP5A5 SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_C";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_v: arifle_mas_mp5
	{
		displayname = "MP5A5 Wood";
		model = "\mas_us_rifle\mas_HKM5_A5";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\mp5_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_mp5_x_ca.paa";
	};
	class arifle_mas_mp5_v_a: arifle_mas_mp5_v
	{
		displayName = "MP5A5 Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_v_e: arifle_mas_mp5_v
	{
		displayName = "MP5A5 Wood holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_v_sd: arifle_mas_mp5_v
	{
		displayName = "MP5A5 Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_C";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_d: arifle_mas_mp5
	{
		displayname = "MP5A5 Des";
		model = "\mas_us_rifle\mas_HKM5_A5";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\mp5_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_mp5_x_ca.paa";
	};
	class arifle_mas_mp5_d_a: arifle_mas_mp5_d
	{
		displayName = "MP5A5 Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_d_e: arifle_mas_mp5_d
	{
		displayName = "MP5A5 Des holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5_d_sd: arifle_mas_mp5_d
	{
		displayName = "MP5A5 Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_C";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5sd: SMG_02_F
	{
		displayname = "MP5SD6";
		model = "\mas_us_rifle\mas_HKM5_SD6";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_mp5.rtm"};
		magazines[] = {"30Rnd_mas_9x21_Stanag","30Rnd_9x21_Mag"};
		visibleFire = 0.0;
		audibleFire = 0.3;
		visibleFireTime = 0.0;
		audibleFireTime = 0.5;
		picture = "\mas_us_rifle\ui\gear_mp5sd_x_ca.paa";
		descriptionshort = "Submachinegun<br />Caliber: 9x21 mm";
		class Library
		{
			libtextdesc = "The Heckler & Koch MP5 is a 9mm submachine gun of German design, developed in the 1960s by a team of engineers from the German small arms manufacturer Heckler & Koch GmbH of Oberndorf am Neckar. There are over 100 variants of the MP5, including a semi-automatic version. The MP5 is one of the most widely used submachine guns in the world, having been adopted by 40 nations and numerous military, law enforcement, intelligence, and security organizations.";
		};
		class AmmoCoef
		{
			hit = 1;
			visibleFire = 0.3;
			audibleFire = 0.3;
			visibleFireTime = 0.5;
			audibleFireTime = 0.5;
			cost = 1.0;
			typicalSpeed = 1.0;
			airFriction = 1.0;
		};
		drySound[] = {"\mas_us_rifle\sounds\mp5_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\MP5Reload",1,1,30};
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.0545;
			dispersion = 0.0011;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 300;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			weaponSoundEffect = "DefaultRifle";
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.0545;
			dispersion = 0.0011;
			recoil = "recoil_burst_smg_02";
			recoilProne = "recoil_burst_prone_smg_02";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 250;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.0545;
			dispersion = 0.0011;
			recoil = "recoil_auto_smg_02";
			recoilProne = "recoil_auto_prone_smg_02";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 50;
		};
		class WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_Aco_smg","optic_Holosight_smg","optic_NVS","optic_Nightstalker","optic_tws","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_DMS","optic_LRPS","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
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
	class arifle_mas_mp5sd_a: arifle_mas_mp5sd
	{
		displayName = "MP5SD6 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5sd_e: arifle_mas_mp5sd
	{
		displayName = "MP5SD6 holo";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class arifle_mas_mp5sd_ds: arifle_mas_mp5sd
	{
		displayName = "MP5SD6 UW Scuba";
		magazines[] = {"30Rnd_mas_9x21_Stanag","30Rnd_mas_9x21d_Stanag","30Rnd_9x21_Mag"};
		canShootInWater = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class srifle_mas_m107: srifle_GM6_F
	{
		displayname = "M107";
		model = "\mas_us_rifle\mas_m107";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m107.rtm"};
		reloadAction = "GestureReloadEBR";
		magazines[] = {"5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_dem_Stanag","5Rnd_mas_127x99_T_Stanag"};
		picture = "\mas_us_rifle\ui\gear_m107_x_ca.paa";
		descriptionshort = "Sniper Rifle<br />Caliber: 12.7x99 mm";
		maxZeroing = 2300;
		class Library
		{
			libtextdesc = "The M107 is a recoil-operated, semi-automatic anti-materiel rifle developed by the American Barrett Firearms Manufacturing company. A heavy SASR (Special Application Scoped Rifle), it is used by many units and armies around the world. It is also called the Light Fifty for its .50 BMG (12.7×99mm NATO) chambering. The weapon is found in two variants, the original M82A1 (and A3) and the bullpup M82A2. It has been adopted for service by a number of armed forces and special forces.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M107Reload",1,1,30};
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00038;
			soundContinuous = 0;
			reloadTime = 0.085;
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
				begin1[] = {"\mas_us_rifle\sounds\m107_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m107_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m107_s3",1.0,1,1200};
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
			mass = 330;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","muzzle_mas_snds_SV","muzzle_mas_snds_SVc"};
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
	class srifle_mas_m107_h: srifle_mas_m107
	{
		displayName = "M107 Scope";
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
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m107_sd: srifle_mas_m107
	{
		displayName = "M107 Scope SD";
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
				item = "muzzle_mas_snds_SV";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m107_v: srifle_mas_m107
	{
		displayname = "M107 Wood";
		model = "\mas_us_rifle\mas_m107";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m107_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_m107_x_ca.paa";
	};
	class srifle_mas_m107_v_h: srifle_mas_m107_v
	{
		displayName = "M107 Wood Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m107_v_sd: srifle_mas_m107_v
	{
		displayName = "M107 Wood Scope SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SVc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m107_d: srifle_mas_m107
	{
		displayname = "M107 Des";
		model = "\mas_us_rifle\mas_m107";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m107_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_m107_x_ca.paa";
	};
	class srifle_mas_m107_d_h: srifle_mas_m107_d
	{
		displayName = "M107 Des Scope";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class srifle_mas_m107_d_sd: srifle_mas_m107_d
	{
		displayName = "M107 Des Scope SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_DMS_c";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_SVc";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_Mk200_F: LMG_Mk200_F
	{
		displayName = "Stoner LMG";
		magazines[] = {"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag"};
		descriptionshort = "Light Machinegun<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc = "The Stoner LMG is a light machine gun system developed by Eugene Stoner and manufactured by Knight's Armament Company (KAC). It is also known as the KAC Stoner 96 LMG to differentiate it from the earlier ArmaLite Stoner 63 LMG and Ares Stoner 86 LMG it is derived from. The Stoner LMG is billed by KAC as the lightest 5.56mm machine gun. It weighs 10 pounds with magazine and has a length of 35.25 inches. The Stoner LMG is belt-fed, gas operated, air-cooled, and fully automatic, firing at a rate of 550 rounds per minute. Stoner designed the weapon as a replacement for the Stoner 63. Neither weapons system gained much popularity as the FN Minimi would become the LMG adopted by the United States military, which dubbed the FN weapon the M249.";
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
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",1.12202,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",1.12202,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\m249_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m249_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m249_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
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
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H_MG"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_handle","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws_mg","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
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
	class LMG_mas_Mk200_F_t: LMG_mas_Mk200_F
	{
		displayName = "Stoner LMG MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_Mk200_F_h: LMG_mas_Mk200_F
	{
		displayName = "Stoner LMG hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_Mk200_F_a: LMG_mas_Mk200_F
	{
		displayName = "Stoner LMG aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_Mk200_F_sd: LMG_mas_Mk200_F
	{
		displayName = "Stoner LMG SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
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
	class LMG_mas_M249_F: LMG_Mk200_F
	{
		displayName = "M249 Para";
		scope = 2;
		model = "\mas_us_rifle\mas_m249";
		magazines[] = {"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag","30Rnd_M4_556x45_Stanag","30Rnd_M4_556x45_T_Stanag","30Rnd_M16_556x45_Stanag","30Rnd_M16_556x45_T_Stanag","200Rnd_M249_556x45_Stanag","200Rnd_M249_556x45_T_Stanag"};
		descriptionshort = "Light Machinegun<br />Caliber: 5.56x45 mm";
		picture = "\mas_us_rifle\ui\gear_m249_x_ca.paa";
		class Library
		{
			libtextdesc = "The M249 light machine gun (LMG), previously designated the M249 Squad Automatic Weapon (SAW), and formally written as Light Machine Gun, 5.56 mm, M249, is an American version of the Belgian FN Minimi, a light machine gun manufactured by the Belgian company FN Herstal (FN). The M249 is manufactured in the United States and is widely used by the U.S. Armed Forces. The weapon was introduced in 1984 after being judged the most effective of a number of candidate weapons to address the lack of automatic firepower in small units. The M249 provides infantry squads with the heavy volume of fire of a machine gun combined with accuracy and portability approaching that of a rifle.";
		};
    AGM_Jamming_Reliability = 0.001;    // malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.010;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 1;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M249R",1,1,30};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
	    	dispersion = 0.0035;
	    	recoil = "recoil_auto_machinegun_7outof10";
	    	recoilprone = "recoil_auto_machinegun_prone_4outof10";
	    	reloadtime = 0.0799999;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",1.12202,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",1.12202,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\m249_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\m249_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\m249_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
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
			mass = 165.8;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H_MG"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_handle","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws_mg","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
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
	class LMG_mas_M249_F_t: LMG_mas_M249_F
	{
		displayName = "M249 Para MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_h: LMG_mas_M249_F
	{
		displayName = "M249 Para hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_a: LMG_mas_M249_F
	{
		displayName = "M249 Para aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_sd: LMG_mas_M249_F
	{
		displayName = "M249 Para SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_MG";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_v: LMG_mas_M249_F
	{
		displayname = "M249 Para Wood";
		model = "\mas_us_rifle\mas_m249";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m249_para_cv.paa","mas_us_rifle\416\data\stockpouch_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_m249_x_ca.paa";
	};
	class LMG_mas_M249_F_v_t: LMG_mas_M249_F_v
	{
		displayName = "M249 Para Wood MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_MRCO_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_v_h: LMG_mas_M249_F_v
	{
		displayName = "M249 Para Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_v_a: LMG_mas_M249_F_v
	{
		displayName = "M249 Para Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_v_sd: LMG_mas_M249_F_v
	{
		displayName = "M249 Para Wood SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_MRCO_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_MG";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_d: LMG_mas_M249_F
	{
		displayname = "M249 Para Des";
		model = "\mas_us_rifle\mas_m249";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m249_para_cd.paa","mas_us_rifle\416\data\stockpouch_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_m249_x_ca.paa";
	};
	class LMG_mas_M249_F_d_t: LMG_mas_M249_F_d
	{
		displayName = "M249 Para Des MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_MRCO_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_d_h: LMG_mas_M249_F_d
	{
		displayName = "M249 Para Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_d_a: LMG_mas_M249_F_d
	{
		displayName = "M249 Para Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249_F_d_sd: LMG_mas_M249_F_d
	{
		displayName = "M249 Para Des SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_MRCO_camo";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_MG";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_M249a_F: LMG_mas_M249_F
	{
		displayName = "M249";
		scope = 2;
		model = "\mas_us_rifle\mas_m249a";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_m249a.rtm"};
		magazines[] = {"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag","30Rnd_M4_556x45_Stanag","30Rnd_M4_556x45_T_Stanag","30Rnd_M16_556x45_Stanag","30Rnd_M16_556x45_T_Stanag","200Rnd_M249_556x45_Stanag","200Rnd_M249_556x45_T_Stanag"};
		descriptionshort = "Light Machinegun<br />Caliber: 5.56x45 mm";
		picture = "\mas_us_rifle\ui\gear_m249a_x_ca.paa";
	};
	class LMG_mas_M249a_F_t: LMG_mas_M249a_F
	{
		displayName = "M249 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_M249a_F_a: LMG_mas_M249a_F
	{
		displayName = "M249 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F: LMG_Mk200_F
	{
		displayName = "Mk48";
		scope = 2;
		model = "\mas_us_rifle\mas_mk48";
		magazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","150Rnd_762x51_Box","150Rnd_762x51_Box_Tracer"};
		descriptionshort = "Machinegun<br />Caliber: 7.62x51 mm";
		picture = "\mas_us_rifle\ui\gear_mk48_x_ca.paa";
		class Library
		{
			libtextdesc = "The Mk48 is a lightweight belt fed machine gun, firing 7.62×51mm NATO cartridges from a disintegrating belt of ammunition. It is manufactured by Fabrique Nationale Manufacturing, Inc, a division of FN Herstal based in the United States. The Mk48 has been developed in conjunction with the U.S. Special Operations Command (USSOCOM), which has adopted the weapon and started its fielding process, beginning with special operations units.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.010;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 1;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M249R",1,1,30};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			reloadtime = 0.0866666;
			dispersion = 0.003;
			recoil = "recoil_auto_machinegun_10outof10";
			recoilprone = "recoil_auto_machinegun_prone_7outof10";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",1.12202,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",1.12202,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_us_rifle\sounds\mk48_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\mk48_s2",1.0,1,1200};
				begin3[] = {"\mas_us_rifle\sounds\mk48_s3",1.0,1,1200};
				begin4[] = {"\mas_us_rifle\sounds\mk48_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33,"begin4",0.33};
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
			mass = 242;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H_MG"};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_handle","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_mas_term","optic_NVS","optic_Nightstalker","optic_tws_mg","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
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
	class LMG_mas_mk48_F_t: LMG_mas_mk48_F
	{
		displayName = "Mk48 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F_h: LMG_mas_mk48_F
	{
		displayName = "Mk48 hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F_a: LMG_mas_mk48_F
	{
		displayName = "Mk48 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F_v: LMG_mas_mk48_F
	{
		displayname = "Mk48 Wood";
		model = "\mas_us_rifle\mas_mk48";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m249_cv.paa","mas_us_rifle\416\data\mk48_cv.paa"};
		picture = "\mas_us_rifle\ui\w\gear_mk48_x_ca.paa";
	};
	class LMG_mas_mk48_F_v_t: LMG_mas_mk48_F_v
	{
		displayName = "Mk48 Wood MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_MRCO_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F_v_h: LMG_mas_mk48_F_v
	{
		displayName = "Mk48 Wood hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F_v_a: LMG_mas_mk48_F_v
	{
		displayName = "Mk48 Wood aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F_d: LMG_mas_mk48_F
	{
		displayname = "Mk48 Des";
		model = "\mas_us_rifle\mas_mk48";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"mas_us_rifle\416\data\m249_cd.paa","mas_us_rifle\416\data\mk48_cd.paa"};
		picture = "\mas_us_rifle\ui\d\gear_mk48_x_ca.paa";
	};
	class LMG_mas_mk48_F_d_t: LMG_mas_mk48_F_d
	{
		displayName = "Mk48 Des MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_MRCO_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_Mk48_F_d_h: LMG_mas_mk48_F_d
	{
		displayName = "Mk48 Des hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_Hamr_camo";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_mk48_F_d_a: LMG_mas_mk48_F_d
	{
		displayName = "Mk48 Des aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class LMG_mas_m240_F: LMG_mas_mk48_F
	{
		displayName = "M240";
		scope = 2;
		model = "\mas_us_rifle\mas_m240";
		magazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","150Rnd_762x51_Box","150Rnd_762x51_Box_Tracer","100Rnd_M240_762x51_Stanag","100Rnd_M240_762x51_T_Stanag"};
		descriptionshort = "Machinegun<br />Caliber: 7.62x51 mm";
		picture = "\mas_us_rifle\ui\gear_m240_x_ca.paa";
		class Library
		{
			libtextdesc = "The M240, officially Machine Gun, 7.62mm, M240, is the US military designation for the FN MAG, a family of belt fed, gas operated medium machine guns firing the 7.62×51mm NATO cartridge. The M240 has been used by the United States Armed Forces since the late 1970s. It is used extensively by infantry, most often rifle companies, as well as ground vehicles, watercraft, and aircraft.";
		};
		muzzles[] ={"this"};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M240reload",1,1,30};
	};
	class LMG_mas_m240_F_h: LMG_mas_m240_F
	{
		displayName = "M240 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_m240_F_a: LMG_mas_m240_F
	{
		displayName = "M240 aim";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class LMG_mas_mg3_F: LMG_mas_m240_F
	{
		displayName = "MG3";
		model = "\mas_us_rifle\mas_mg3";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_mg3.rtm"};
		magazines[] = {"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","150Rnd_762x51_Box","150Rnd_762x51_Box_Tracer"};
		descriptionshort = "Machinegun<br />Caliber: 7.62x51 mm";
		picture = "\mas_us_rifle\ui\gear_mg3_x_ca.paa";
		class Library
		{
			libtextdesc = "The MG3 is a German general purpose machine gun chambered for the 7,62×51mm NATO cartridge. The weapon's design is derived from the World War II era MG 42 universal machine gun that fired the 7,92×57mm Mauser round. The MG3 was standardized in the late 1950s and adopted into service with the newly formed Bundeswehr, where it continues to serve to this day as a squad support weapon and vehicle mounted machine gun. The weapon and its derivatives have also been acquired by the armed forces of over 30 countries. Production rights to the machine gun were purchased by Italy, Spain, Pakistan, Greece, Iran, Sudan and Turkey.";
		};
	};
	class LMG_mas_mg3_F_h: LMG_mas_mg3_F
	{
		displayName = "MG3 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
	};
	class arifle_mas_g3: arifle_mas_hk416
	{
		displayname = "G3";
		model = "\mas_us_rifle\mas_g3";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_g3.rtm"};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_us_rifle\ui\gear_g3_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The G3 is a 7,62 battle rifle developed in the 1950s by the German armament manufacturer Heckler & Koch GmbH (H&K) in collaboration with the Spanish state owned design and development agency CETME , it fires the 762×51mm NATO round.";
		};
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
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
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
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_g3_h: arifle_mas_g3
	{
		displayName = "G3 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_g3_a: arifle_mas_g3
	{
		displayName = "G3 aco";
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
	class arifle_mas_g3_m203: arifle_mas_hk416_m203
	{
		displayname = "G3 M203";
		model = "\mas_us_rifle\mas_g3_m203";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_g3m203.rtm"};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_us_rifle\ui\gear_g3m_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The G3 is a 7,62 battle rifle developed in the 1950s by the German armament manufacturer Heckler & Koch GmbH (H&K) in collaboration with the Spanish state owned design and development agency CETME , it fires the 762×51mm NATO round. This version is equipped with the M203 wich is a single-shot 40 mm grenade launcher.";
		};
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
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
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
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_g3_m203_h: arifle_mas_g3_m203
	{
		displayName = "G3 M203 MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_g3_m203_a: arifle_mas_g3_m203
	{
		displayName = "G3 M203 aco";
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
	class arifle_mas_g3s: arifle_mas_g3
	{
		displayname = "G3(folding stock)";
		model = "\mas_us_rifle\mas_g3_fs";
		picture = "\mas_us_rifle\ui\gear_g3s_x_ca.paa";
	};
	class arifle_mas_g3s_h: arifle_mas_g3s
	{
		displayName = "G3(folding stock) MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_g3s_a: arifle_mas_g3s
	{
		displayName = "G3(folding stock) aco";
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
	class arifle_mas_g3s_m203: arifle_mas_g3_m203
	{
		displayname = "G3 M203(folding stock)";
		model = "\mas_us_rifle\mas_g3_fs_m203";
		picture = "\mas_us_rifle\ui\gear_g3sm_x_ca.paa";
	};
	class arifle_mas_g3s_m203_h: arifle_mas_g3s_m203
	{
		displayName = "G3 M203(folding stock) MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_g3s_m203_a: arifle_mas_g3s_m203
	{
		displayName = "G3 M203(folding stock) aco";
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
	class arifle_mas_fal: arifle_mas_g3
	{
		displayname = "FN FAL";
		model = "\mas_us_rifle\mas_fnfal";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_fal.rtm"};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_us_rifle\ui\gear_fal_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The Fusil Automatique Leger or FAL is a self loading, selective fire battle rifle produced by the Belgian armaments manufacturer Fabrique Nationale de Herstal. During the Cold War it was adopted by many North Atlantic Treaty Organization NATO countries, with the notable exception of the United States. It is one of the most widely used rifles in history, having been used by more than 90 countries. The FAL was predominantly chambered for the 7.62×51mm NATO round, and because of its prevalence and widespread use among the armed forces of many NATO countries during the Cold War it was nicknamed The right arm of the Free World. A British Commonwealth derivative of the FN FAL has been produced under licence as the L1A1 Self Loading Rifle.";
		};
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_fal_h: arifle_mas_fal
	{
		displayName = "FN FAL MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_fal_a: arifle_mas_fal
	{
		displayName = "FN FAL aco";
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
	class arifle_mas_fal_m203: arifle_mas_g3_m203
	{
		displayname = "FN FAL GL";
		model = "\mas_us_rifle\mas_fnfal_m203";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_falm203.rtm"};
		magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","20Rnd_762x51_Mag"};
		picture = "\mas_us_rifle\ui\gear_falm_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc = "The Fusil Automatique Leger or FAL is a self loading, selective fire battle rifle produced by the Belgian armaments manufacturer Fabrique Nationale de Herstal. During the Cold War it was adopted by many North Atlantic Treaty Organization NATO countries, with the notable exception of the United States. It is one of the most widely used rifles in history, having been used by more than 90 countries. The FAL was predominantly chambered for the 7.62×51mm NATO round, and because of its prevalence and widespread use among the armed forces of many NATO countries during the Cold War it was nicknamed The right arm of the Free World. A British Commonwealth derivative of the FN FAL has been produced under licence as the L1A1 Self Loading Rifle. This version is equipped with the M203 wich is a single shot 40 mm grenade launcher.";
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
	class arifle_mas_fal_m203_h: arifle_mas_fal_m203
	{
		displayName = "FN FAL GL MRCO";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_mas_fal_m203_a: arifle_mas_fal_m203
	{
		displayName = "FN FAL GL aco";
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
	class arifle_mas_m1014: arifle_mas_hk416
	{
		displayname = "Benelli M1014";
		model = "\mas_us_rifle\mas_m1014";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\mas_us_rifle\Anim\Handanim_benelli.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		magazines[] = {"7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets"};
		picture = "\mas_us_rifle\ui\gear_m1014_x_ca.paa";
		descriptionshort = "Shotgun<br />Caliber: 12 cal";
		class Library
		{
			libtextdesc = "The Benelli M4 Super 90 is an Italian semi automatic shotgun manufactured by Benelli Armi SpA.";
		};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\m1014reload",1,1,30};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
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
				begin1[] = {"\mas_us_rifle\sounds\M1014_s1",1.0,1,1200};
				begin2[] = {"\mas_us_rifle\sounds\M1014_s2",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.005;
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
			mass = 83.9;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot
			{
				access = 1;
				compatibleitems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_mas_acog","optic_mas_acog_eo","optic_mas_acog_rd","optic_mas_aim","optic_mas_acog_c","optic_mas_acog_eo_c","optic_mas_acog_rd_c","optic_mas_aim_c","optic_MRCO","optic_Aco_smg","optic_Holosight_smg","optic_mas_Holosight_blk","optic_mas_Arco_blk","optic_mas_Holosight_camo","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo"};
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
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class Box_mas_us_rifle_Wps_F: Box_NATO_Wps_F
	{
		displayName = "NATO SF Weapons/Ammo Box";
		maximumLoad = 999999;
		transportMaxWeapons = 50000;
		transportMaxMagazines = 200000;
		transportMaxBackpacks = 2000;
		class TransportMagazines
		{
			class _xx_M80_Ball_100Rnd_762x51
			{
				magazine = "M80_Ball_100Rnd_762x51";
				count = 50;
			};
			class _xx_M80_Ball_Tracer_100Rnd_762x51
			{
				magazine = "M80_Ball_Tracer_100Rnd_762x51";
				count = 50;
			};
			class _xx_M855A1_M4_30Rnd
			{
				magazine = "M855A1_M4_30Rnd";
				count = 50;
			};
			class _xx_M855A1_tracer_M4_30Rnd
			{
				magazine = "M855A1_tracer_M4_30Rnd";
				count = 50;
			};
			class _xx_M855A1_M16_30Rnd
			{
				magazine = "M855A1_M16_30Rnd";
				count = 50;
			};
			class _xx_M855A1_tracer_M16_30Rnd
			{
				magazine = "M855A1_tracer_M16_30Rnd";
				count = 50;
			};
			class _xx_M249_200Rnd_556x45_Stanag
			{
				magazine = "M249_200Rnd_556x45_Stanag";
				count = 50;
			};
			class _xx_M249_200Rnd_556x45_Stanag_tracer
			{
				magazine = "M249_200Rnd_556x45_Stanag_tracer";
				count = 50;
			};
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
			class _xx_M4Car
			{
				weapon = "M4Car";
				count = 1;
			};
			class _xx_M4Car203
			{
				weapon = "M4Car203";
				count = 1;
			};
			class _xx_arifle_mas_hk416
			{
				weapon = "arifle_mas_hk416";
				count = 1;
			};
			class _xx_arifle_mas_hk416c
			{
				weapon = "arifle_mas_hk416c";
				count = 1;
			};
			class _xx_arifle_mas_hk416_h
			{
				weapon = "arifle_mas_hk416_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_h
			{
				weapon = "arifle_mas_hk416c_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_sd
			{
				weapon = "arifle_mas_hk416_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_sd
			{
				weapon = "arifle_mas_hk416c_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk416_gl
			{
				weapon = "arifle_mas_hk416_gl";
				count = 2;
			};
			class _xx_arifle_mas_hk416_gl_h
			{
				weapon = "arifle_mas_hk416_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203
			{
				weapon = "arifle_mas_hk416_m203";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203c
			{
				weapon = "arifle_mas_hk416_m203c";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203_h
			{
				weapon = "arifle_mas_hk416_m203_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203c_h
			{
				weapon = "arifle_mas_hk416_m203c_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_v
			{
				weapon = "arifle_mas_hk416_v";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_v
			{
				weapon = "arifle_mas_hk416c_v";
				count = 1;
			};
			class _xx_arifle_mas_hk416_v_h
			{
				weapon = "arifle_mas_hk416_v_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_v_h
			{
				weapon = "arifle_mas_hk416c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_v_sd
			{
				weapon = "arifle_mas_hk416_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_v_sd
			{
				weapon = "arifle_mas_hk416c_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk416_gl_v
			{
				weapon = "arifle_mas_hk416_gl_v";
				count = 2;
			};
			class _xx_arifle_mas_hk416_gl_v_h
			{
				weapon = "arifle_mas_hk416_gl_v_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203_v
			{
				weapon = "arifle_mas_hk416_m203_v";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203c_v
			{
				weapon = "arifle_mas_hk416_m203c_v";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203_v_h
			{
				weapon = "arifle_mas_hk416_m203_v_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203c_v_h
			{
				weapon = "arifle_mas_hk416_m203c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_d
			{
				weapon = "arifle_mas_hk416_d";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_d
			{
				weapon = "arifle_mas_hk416c_d";
				count = 1;
			};
			class _xx_arifle_mas_hk416_d_h
			{
				weapon = "arifle_mas_hk416_d_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_d_h
			{
				weapon = "arifle_mas_hk416c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_d_sd
			{
				weapon = "arifle_mas_hk416_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk416c_d_sd
			{
				weapon = "arifle_mas_hk416c_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk416_gl_d
			{
				weapon = "arifle_mas_hk416_gl_d";
				count = 2;
			};
			class _xx_arifle_mas_hk416_gl_d_h
			{
				weapon = "arifle_mas_hk416_gl_d_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203_d
			{
				weapon = "arifle_mas_hk416_m203_d";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203c_d
			{
				weapon = "arifle_mas_hk416_m203c_d";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203_d_h
			{
				weapon = "arifle_mas_hk416_m203_d_h";
				count = 1;
			};
			class _xx_arifle_mas_hk416_m203c_d_h
			{
				weapon = "arifle_mas_hk416_m203c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_hk417c
			{
				weapon = "arifle_mas_hk417c";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_h
			{
				weapon = "arifle_mas_hk417c_h";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_sd
			{
				weapon = "arifle_mas_hk417c_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk417_m203c
			{
				weapon = "arifle_mas_hk417_m203c";
				count = 1;
			};
			class _xx_arifle_mas_hk417_m203c_h
			{
				weapon = "arifle_mas_hk417_m203c_h";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_v
			{
				weapon = "arifle_mas_hk417c_v";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_v_h
			{
				weapon = "arifle_mas_hk417c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_v_sd
			{
				weapon = "arifle_mas_hk417c_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk417_m203c_v
			{
				weapon = "arifle_mas_hk417_m203c_v";
				count = 1;
			};
			class _xx_arifle_mas_hk417_m203c_v_h
			{
				weapon = "arifle_mas_hk417_m203c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_d
			{
				weapon = "arifle_mas_hk417c_d";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_d_h
			{
				weapon = "arifle_mas_hk417c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_hk417c_d_sd
			{
				weapon = "arifle_mas_hk417c_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_hk417_m203c_d
			{
				weapon = "arifle_mas_hk417_m203c_d";
				count = 1;
			};
			class _xx_arifle_mas_hk417_m203c_d_h
			{
				weapon = "arifle_mas_hk417_m203c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4
			{
				weapon = "arifle_mas_m4";
				count = 1;
			};
			class _xx_arifle_mas_m4c
			{
				weapon = "arifle_mas_m4c";
				count = 1;
			};
			class _xx_arifle_mas_m4_h
			{
				weapon = "arifle_mas_m4_h";
				count = 1;
			};
			class _xx_arifle_mas_m4c_h
			{
				weapon = "arifle_mas_m4c_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_sd
			{
				weapon = "arifle_mas_m4_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4c_sd
			{
				weapon = "arifle_mas_m4c_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4_ti
			{
				weapon = "arifle_mas_m4_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_gl
			{
				weapon = "arifle_mas_m4_gl";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_h
			{
				weapon = "arifle_mas_m4_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203
			{
				weapon = "arifle_mas_m4_m203";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c
			{
				weapon = "arifle_mas_m4_m203c";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_h
			{
				weapon = "arifle_mas_m4_m203_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_h
			{
				weapon = "arifle_mas_m4_m203c_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_ti
			{
				weapon = "arifle_mas_m4_m203_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_v
			{
				weapon = "arifle_mas_m4_v";
				count = 1;
			};
			class _xx_arifle_mas_m4c_v
			{
				weapon = "arifle_mas_m4c_v";
				count = 1;
			};
			class _xx_arifle_mas_m4_v_h
			{
				weapon = "arifle_mas_m4_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4c_v_h
			{
				weapon = "arifle_mas_m4c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_v_sd
			{
				weapon = "arifle_mas_m4_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4c_v_sd
			{
				weapon = "arifle_mas_m4c_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4_v_ti
			{
				weapon = "arifle_mas_m4_v_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_gl_v
			{
				weapon = "arifle_mas_m4_gl_v";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_v_h
			{
				weapon = "arifle_mas_m4_gl_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_v
			{
				weapon = "arifle_mas_m4_m203_v";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_v
			{
				weapon = "arifle_mas_m4_m203c_v";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_v_h
			{
				weapon = "arifle_mas_m4_m203_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_v_h
			{
				weapon = "arifle_mas_m4_m203c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_v_ti
			{
				weapon = "arifle_mas_m4_m203_v_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_d
			{
				weapon = "arifle_mas_m4_d";
				count = 1;
			};
			class _xx_arifle_mas_m4c_d
			{
				weapon = "arifle_mas_m4c_d";
				count = 1;
			};
			class _xx_arifle_mas_m4_d_h
			{
				weapon = "arifle_mas_m4_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4c_d_h
			{
				weapon = "arifle_mas_m4c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_d_sd
			{
				weapon = "arifle_mas_m4_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4c_d_sd
			{
				weapon = "arifle_mas_m4c_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4_d_ti
			{
				weapon = "arifle_mas_m4_d_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_gl_d
			{
				weapon = "arifle_mas_m4_gl_d";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_d_h
			{
				weapon = "arifle_mas_m4_gl_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_d
			{
				weapon = "arifle_mas_m4_m203_d";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_d
			{
				weapon = "arifle_mas_m4_m203c_d";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_d_h
			{
				weapon = "arifle_mas_m4_m203_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_d_h
			{
				weapon = "arifle_mas_m4_m203c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_d_ti
			{
				weapon = "arifle_mas_m4_m203_d_ti";
				count = 1;
			};
			class _xx_arifle_mas_l119
			{
				weapon = "arifle_mas_l119";
				count = 2;
			};
			class _xx_arifle_mas_l119_h
			{
				weapon = "arifle_mas_l119_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_sd
			{
				weapon = "arifle_mas_l119_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_gl
			{
				weapon = "arifle_mas_l119_gl";
				count = 2;
			};
			class _xx_arifle_mas_l119_gl_h
			{
				weapon = "arifle_mas_l119_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_gl_sd
			{
				weapon = "arifle_mas_l119_gl_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_m203
			{
				weapon = "arifle_mas_l119_m203";
				count = 2;
			};
			class _xx_arifle_mas_l119_m203_h
			{
				weapon = "arifle_mas_l119_m203_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_m203_sd
			{
				weapon = "arifle_mas_l119_m203_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_v
			{
				weapon = "arifle_mas_l119_v";
				count = 2;
			};
			class _xx_arifle_mas_l119_v_h
			{
				weapon = "arifle_mas_l119_v_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_v_sd
			{
				weapon = "arifle_mas_l119_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_gl_v
			{
				weapon = "arifle_mas_l119_gl_v";
				count = 2;
			};
			class _xx_arifle_mas_l119_gl_v_h
			{
				weapon = "arifle_mas_l119_gl_v_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_gl_v_sd
			{
				weapon = "arifle_mas_l119_gl_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_m203_v
			{
				weapon = "arifle_mas_l119_m203_v";
				count = 2;
			};
			class _xx_arifle_mas_l119_m203_v_h
			{
				weapon = "arifle_mas_l119_m203_v_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_m203_v_sd
			{
				weapon = "arifle_mas_l119_m203_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_d
			{
				weapon = "arifle_mas_l119_d";
				count = 2;
			};
			class _xx_arifle_mas_l119_d_h
			{
				weapon = "arifle_mas_l119_d_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_d_sd
			{
				weapon = "arifle_mas_l119_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_gl_d
			{
				weapon = "arifle_mas_l119_gl_d";
				count = 2;
			};
			class _xx_arifle_mas_l119_gl_d_h
			{
				weapon = "arifle_mas_l119_gl_d_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_gl_d_sd
			{
				weapon = "arifle_mas_l119_gl_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_l119_m203_d
			{
				weapon = "arifle_mas_l119_m203_d";
				count = 2;
			};
			class _xx_arifle_mas_l119_m203_d_h
			{
				weapon = "arifle_mas_l119_m203_d_h";
				count = 1;
			};
			class _xx_arifle_mas_l119_m203_d_sd
			{
				weapon = "arifle_mas_l119_m203_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_arifle_mas_m16_t
			{
				weapon = "arifle_mas_m16_t";
				count = 1;
			};
			class _xx_arifle_mas_m16_e
			{
				weapon = "arifle_mas_m16_e";
				count = 1;
			};
			class _xx_arifle_mas_m16_gl
			{
				weapon = "arifle_mas_m16_gl";
				count = 4;
			};
			class _xx_arifle_mas_m16_gl_t
			{
				weapon = "arifle_mas_m16_gl_t";
				count = 1;
			};
			class _xx_arifle_mas_m16_gl_e
			{
				weapon = "arifle_mas_m16_gl_e";
				count = 1;
			};
			class _xx_arifle_mas_m1014
			{
				weapon = "arifle_mas_m1014";
				count = 4;
			};
			class _xx_arifle_mas_g3
			{
				weapon = "arifle_mas_g3";
				count = 4;
			};
			class _xx_arifle_mas_g3s
			{
				weapon = "arifle_mas_g3s";
				count = 4;
			};
			class _xx_arifle_mas_g3_m203
			{
				weapon = "arifle_mas_g3_m203";
				count = 4;
			};
			class _xx_arifle_mas_g3s_m203
			{
				weapon = "arifle_mas_g3s_m203";
				count = 4;
			};
			class _xx_arifle_mas_fal
			{
				weapon = "arifle_mas_fal";
				count = 4;
			};
			class _xx_arifle_mas_fal_m203
			{
				weapon = "arifle_mas_fal_m203";
				count = 4;
			};
			class _xx_LMG_mas_Mk200_F
			{
				weapon = "LMG_mas_Mk200_F";
				count = 2;
			};
			class _xx_LMG_mas_Mk200_F_h
			{
				weapon = "LMG_mas_Mk200_F_h";
				count = 1;
			};
			class _xx_LMG_mas_Mk200_F_a
			{
				weapon = "LMG_mas_Mk200_F_a";
				count = 1;
			};
			class _xx_LMG_mas_M249a_F
			{
				weapon = "LMG_mas_M249a_F";
				count = 2;
			};
			class _xx_LMG_mas_M249a_F_t
			{
				weapon = "LMG_mas_M249a_F_t";
				count = 1;
			};
			class _xx_LMG_mas_M249a_F_a
			{
				weapon = "LMG_mas_M249a_F_a";
				count = 1;
			};
			class _xx_LMG_mas_M249_F
			{
				weapon = "LMG_mas_M249_F";
				count = 2;
			};
			class _xx_LMG_mas_M249_F_t
			{
				weapon = "LMG_mas_M249_F_t";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_a
			{
				weapon = "LMG_mas_M249_F_a";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_v
			{
				weapon = "LMG_mas_M249_F_v";
				count = 2;
			};
			class _xx_LMG_mas_M249_F_v_t
			{
				weapon = "LMG_mas_M249_F_v_t";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_v_a
			{
				weapon = "LMG_mas_M249_F_v_a";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_d
			{
				weapon = "LMG_mas_M249_F_d";
				count = 2;
			};
			class _xx_LMG_mas_M249_F_d_t
			{
				weapon = "LMG_mas_M249_F_d_t";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_d_a
			{
				weapon = "LMG_mas_M249_F_d_a";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F
			{
				weapon = "LMG_mas_mk48_F";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F_h
			{
				weapon = "LMG_mas_mk48_F_h";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_a
			{
				weapon = "LMG_mas_mk48_F_a";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_v
			{
				weapon = "LMG_mas_mk48_F_v";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F_v_h
			{
				weapon = "LMG_mas_mk48_F_v_h";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_v_a
			{
				weapon = "LMG_mas_mk48_F_v_a";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_d
			{
				weapon = "LMG_mas_mk48_F_d";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F_d_h
			{
				weapon = "LMG_mas_mk48_F_d_h";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_d_a
			{
				weapon = "LMG_mas_mk48_F_d_a";
				count = 1;
			};
			class _xx_LMG_mas_m240_F
			{
				weapon = "LMG_mas_m240_F";
				count = 2;
			};
			class _xx_LMG_mas_m240_F_h
			{
				weapon = "LMG_mas_m240_F_h";
				count = 1;
			};
			class _xx_LMG_mas_m240_F_a
			{
				weapon = "LMG_mas_m240_F_a";
				count = 1;
			};
			class _xx_LMG_mas_mg3_F
			{
				weapon = "LMG_mas_mg3_F";
				count = 2;
			};
			class _xx_LMG_mas_mg3_F_h
			{
				weapon = "LMG_mas_mg3_F_h";
				count = 1;
			};
			class _xx_arifle_mas_mp5
			{
				weapon = "arifle_mas_mp5";
				count = 2;
			};
			class _xx_arifle_mas_mp5_sd
			{
				weapon = "arifle_mas_mp5_sd";
				count = 1;
			};
			class _xx_arifle_mas_mp5_v
			{
				weapon = "arifle_mas_mp5_v";
				count = 2;
			};
			class _xx_arifle_mas_mp5_v_sd
			{
				weapon = "arifle_mas_mp5_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_mp5_d
			{
				weapon = "arifle_mas_mp5_d";
				count = 2;
			};
			class _xx_arifle_mas_mp5_d_sd
			{
				weapon = "arifle_mas_mp5_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_mp5sd
			{
				weapon = "arifle_mas_mp5sd";
				count = 2;
			};
			class _xx_srifle_mas_hk417
			{
				weapon = "srifle_mas_hk417";
				count = 1;
			};
			class _xx_srifle_mas_hk417_h
			{
				weapon = "srifle_mas_hk417_h";
				count = 1;
			};
			class _xx_srifle_mas_hk417_sd
			{
				weapon = "srifle_mas_hk417_sd";
				count = 1;
			};
			class _xx_srifle_mas_hk417_v
			{
				weapon = "srifle_mas_hk417_v";
				count = 1;
			};
			class _xx_srifle_mas_hk417_v_h
			{
				weapon = "srifle_mas_hk417_v_h";
				count = 1;
			};
			class _xx_srifle_mas_hk417_v_sd
			{
				weapon = "srifle_mas_hk417_v_sd";
				count = 1;
			};
			class _xx_srifle_mas_hk417_d
			{
				weapon = "srifle_mas_hk417_d";
				count = 1;
			};
			class _xx_srifle_mas_hk417_d_h
			{
				weapon = "srifle_mas_hk417_d_h";
				count = 1;
			};
			class _xx_srifle_mas_hk417_d_sd
			{
				weapon = "srifle_mas_hk417_d_sd";
				count = 1;
			};
			class _xx_srifle_mas_sr25
			{
				weapon = "srifle_mas_sr25";
				count = 1;
			};
			class _xx_srifle_mas_sr25_h
			{
				weapon = "srifle_mas_sr25_h";
				count = 1;
			};
			class _xx_srifle_mas_sr25_v
			{
				weapon = "srifle_mas_sr25_v";
				count = 1;
			};
			class _xx_srifle_mas_sr25_v_h
			{
				weapon = "srifle_mas_sr25_v_h";
				count = 1;
			};
			class _xx_srifle_mas_sr25_d
			{
				weapon = "srifle_mas_sr25_d";
				count = 1;
			};
			class _xx_srifle_mas_sr25_d_h
			{
				weapon = "srifle_mas_sr25_d_h";
				count = 1;
			};
			class _xx_srifle_mas_ebr
			{
				weapon = "srifle_mas_ebr";
				count = 1;
			};
			class _xx_srifle_mas_ebr_t
			{
				weapon = "srifle_mas_ebr_t";
				count = 1;
			};
			class _xx_srifle_mas_ebr_h
			{
				weapon = "srifle_mas_ebr_h";
				count = 1;
			};
			class _xx_srifle_mas_m24_h
			{
				weapon = "srifle_mas_m24_h";
				count = 2;
			};
			class _xx_srifle_mas_m24_v_h
			{
				weapon = "srifle_mas_m24_v_h";
				count = 2;
			};
			class _xx_srifle_mas_m24_d_h
			{
				weapon = "srifle_mas_m24_d_h";
				count = 2;
			};
			class _xx_srifle_mas_m107
			{
				weapon = "srifle_mas_m107";
				count = 1;
			};
			class _xx_srifle_mas_m107_h
			{
				weapon = "srifle_mas_m107_h";
				count = 1;
			};
			class _xx_srifle_mas_m107_v
			{
				weapon = "srifle_mas_m107_v";
				count = 1;
			};
			class _xx_srifle_mas_m107_v_h
			{
				weapon = "srifle_mas_m107_v_h";
				count = 1;
			};
			class _xx_srifle_mas_m107_d
			{
				weapon = "srifle_mas_m107_d";
				count = 1;
			};
			class _xx_srifle_mas_m107_d_h
			{
				weapon = "srifle_mas_m107_d_h";
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