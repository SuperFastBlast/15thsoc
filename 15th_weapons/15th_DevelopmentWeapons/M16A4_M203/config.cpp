class CfgPatches
{
	class M16A4_M203
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {"M16A4"};
		magazines[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class single_medium_optics1;
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
	class UGL_F;
	class arifle_MX_GL_F;
	class M16A4_M203: arifle_MX_GL_F
	{
		displayname = "M16A4 M203";
		model = "\M16A4\M16A4.p3d";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\M16A4\Anim\SCAR.rtm"};
		picture = "\M16A4\m16_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[] = {"30Rnd_M855A1_556x45_Stanag","30Rnd_M855A1_556x45_T_Stanag"};
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
		reloadMagazineSound[] = {"\15th_MEU_Sounds\M4R",1,1,30};
		drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10};
		changeFiremodeSound[]={"A3\sounds_f\weapons\closure\firemode_changer_2",0.5,1};	
		muzzles[] ={"this","M203"};
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
				begin1[] = {"\15th_MEU_Sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\15th_MEU_Sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\15th_MEU_Sounds\m4_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
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
				begin1[] = {"\15th_MEU_Sounds\m4_s1",1.0,1,1200};
				begin2[] = {"\15th_MEU_Sounds\m4_s2",1.0,1,1200};
				begin3[] = {"\15th_MEU_Sounds\m4_s3",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
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
		class M203: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
					sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\15th_MEU_Sounds\M203_s1",0.100000,1,400};
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
				compatibleItems[] = {"muzzle_snds_M"};
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
};