class CfgPatches
{
	class M4_M203_Camo
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {"M4a1_M203"};
		magazines[] = {""};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_medium_optics2;
class single_far_optics1;
class single_far_optics2;
class SlotInfo;
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
class arifle_MX_GL_F;
class arifle_mas_m4_m203: arifle_MX_GL_F
	{
		displayname = "M4A1 M203";
		model = "\M4_M203_Camo\M4_M203_camo";
		handanim[] = {"OFP2_ManSkeleton","\M4_M203_Camo\Anim\Handanim_m4m203.rtm"};
		picture = "\M4_M203_Camo\data\ui\gear_m4m_x_ca.paa";
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
				begin1[] = {"\M4_M203_Camo\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\M4_M203_Camo\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\M4_M203_Camo\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\M4_M203_Camo\sounds\m4_s4",1.0,1,1200};
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
				begin1[] = {"\M4_M203_Camo\sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\M4_M203_Camo\sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\M4_M203_Camo\sounds\m4_s3",1.0,1,1200};
				begin4[] = {"\M4_M203_Camo\sounds\m4_s4",1.0,1,1200};
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
		class UGL_F;
		class M203b: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
					sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\M4_M203_Camo\sounds\M203_s1",0.100000,1,400};
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
				compatibleItems[] = {"muzzle_mas_snds_M","muzzle_mas_snds_Mc"};
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