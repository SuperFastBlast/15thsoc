class CfgPatches
{
	class M204G
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {"M240G"};
		magazines[] = {"100Rnd_M240_762x51_Stanag","100Rnd_M240_762x51_T_Stanag"};
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
class M240G: LMG_Mk200_F
	{
		displayName = "M240G";
		scope = 2;
		model = "\M240G\EJ_m240";
		magazines[] = {"100Rnd_M240_762x51_Stanag","100Rnd_M240_762x51_T_Stanag"};
		descriptionshort = "M240 Medium Machinegun<br />Caliber: 7.62x51 mm";
		picture = "";
		class Library
		{
			libtextdesc = "The M240, officially Machine Gun, 7.62mm, M240, is the US military designation for the FN MAG, a family of belt fed, gas operated medium machine guns firing the 7.62×51mm NATO cartridge. The M240 has been used by the United States Armed Forces since the late 1970s. It is used extensively by infantry, most often rifle companies, as well as ground vehicles, watercraft, and aircraft.";
		};
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.010;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation. Use empty string to undefine.
    AGM_Overheating_allowSwapBarrel = 1;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		muzzles[] ={"this"};
		reloadMagazineSound[] = {"\M240G\sounds\M240reload",1,1,30};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			reloadtime = 0.0866666;
			dispersion = 0.003;
			recoil = "recoil_auto_machinegun_10outof10";
			recoilprone = "recoil_auto_machinegun_prone_7outof10";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",1.12202,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",1.12202,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\M240G\sounds\m240_s1",1.0,1,1200};
				begin2[] = {"\M240G\sounds\m240_s2",1.0,1,1200};
				begin3[] = {"\M240G\sounds\m240_s3",1.0,1,1200};
				begin4[] = {"\M240G\sounds\m240_s4",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33,"begin4",0.33};
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
				compatibleItems[] = {};
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
class CfgAmmo
{
	class B_762x51_Ball;
	class B_762x51_Tracer_Red;
	class B_M80_762x54_Ball: B_762x51_Ball
	{
		hit=12; // millimeters of armor penned
		typicalSpeed=853; // muzzle velocity
		caliber=1.05; // penetration value 1 is 7.62
		airFriction = -0.00125;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		deflecting=20; // deflection angle
		deflectingChance = 100; // % chance of deflect
		deflectingRandomness = 0.5; // How shot reacts to surface bump
		visibleFire=5; // how well AI can see rounds
		visibleFireTime=5; //how long can see
		audibleFire=10; // how much can AI hear 
		audibleFireTime=10; //how long can hear
	};
	class B_M80_762x54_Ball_T: B_762x51_Tracer_Red 
	{
		hit=12;
		typicalSpeed=853;
		caliber=1.05;
		airFriction = -0.00125;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=5;
		visibleFireTime=5;
		audibleFire=10;
		audibleFireTime=10;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
};
class CfgMagazines
{
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class 100Rnd_M240_762x51_Stanag: 150Rnd_762x51_Box
	{
		scope = 2;
		mass = 33.8;
		ammo = "B_M80_762x54_Ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 100<br />Used in: M240";
		displayname = "M80 Linked";
        	initspeed = 853;
        	lastroundstracer = 3;
		tracersevery = 5;
	};
	class 100Rnd_M240_762x51_T_Stanag: 150Rnd_762x51_Box_Tracer
	{
		scope = 2;
		mass = 33.8;
		ammo = "B_M80_762x54_Ball_T";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG Tracer<br />Rounds: 100<br />Used in: M240";
		displayname = "M62 Linked";
		tracersevery = 1;
	};
};