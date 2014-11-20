class CfgPatches
{
	class M249
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {"M249"};
		magazines[] = {};
	};
};
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
	class LMG_Mk200_F;
	class M249: LMG_Mk200_F
	{
		displayName = "M249";
		scope = 2;
		model = "\M249\ej_m249.p3d";
		magazines[] = {"30Rnd_M855A1_556x45_Stanag","30Rnd_M855A1_556x45_T_Stanag","200Rnd_M249_556x45_Stanag","200Rnd_M249_556x45_T_Stanag"};
		descriptionshort = "Light Machinegun<br />Caliber: 5.56x45 mm";
		picture = "\M249\m249_x_ca.paa";
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
		reloadMagazineSound[] = {"\M249\sounds\M249R",1,1,30};
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
				begin1[] = {"\M249\sounds\m249_s1",1.0,1,1200};
				begin2[] = {"\M249\sounds\m249_s2",1.0,1,1200};
				begin3[] = {"\M249\sounds\m249_s3",1.0,1,1200};
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
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
};