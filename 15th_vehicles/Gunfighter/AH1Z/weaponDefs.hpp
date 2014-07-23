class CfgAmmo
{
	class Default;
	class RocketCore;
	class RocketBase;
	class BulletBase;
	class MissileCore;
	class MissileBase;
	class B_762x51_Ball;
	class B_30mm_HE;
	class B_20mm;
	class B_30x113mm_M789_HEDP: B_30mm_HE
	{
		hit=67;indirectHit=15;indirectHitRange=1; // AP/HE mix
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2;
		tracerStartTime = 0.1; // seconds
		tracerEndTime = 2.3; // seconds
		explosive = 0.3; //To get explosive particle effects
		caliber = 2.5;
		airFriction = -0.00078;
	};

	class B_20mm_AP: B_20mm
	{
		hit = 60;
		indirectHit = 10;
		indirectHitRange = 2;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		caliber = 2.33;
	};

	class M_Sidewinder_AA: MissileBase
	{
		model = "gunfighter\ah1z\sidewinder_fly";
		proxyShape = "gunfighter\ah1z\sidewinder_proxy";
		hit = 300;
		indirectHit = 85;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airLock = 1;
		irLock = 1;
		cost = 15000;
		maxSpeed = 828;
		timeToLive = 35;
		sideAirFriction = 0.2;
		trackOversteer = 1.0;
		trackLead = 1;
		initTime = 0.0;
		thrustTime = 5.0;
		thrust = 2900;
		fuseDistance = 500;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 20;
	};

	class M_Hellfire_AT: MissileBase
	{
		model = "gunfighter\ah1z\AGM114Hellfire";
		proxyShape = "gunfighter\ah1z\AGM114Hellfire_proxy";
		airfriction = 0.04;
	airlock = 0;
	cmimmunity = 0.8;
	cost = 1000;
	cratereffects = "ATRocketCrater";
	explosioneffects = "ATRocketExplosion";
	fusedistance = 500;
	hit = 1400;
	indirecthit = 50;
	indirecthitrange = 6.5;
	inittime = 0;
	irlock = 0;
	laserlock = 1;
	maneuvrability = 14;
	manualcontrol = 1;
	maxcontrolrange = 11000;
	maxspeed = 600;
	muzzleeffect = "BIS_fnc_effectFiredHeliRocket";
	sideairfriction = 0.08;
	simulationstep = 0.002;
	soundhit[] = {"", 1, 1, 1900};
	thrust = 366;
	thrusttime = 2;
	timetolive = 19;
	tracklead = 1;
	trackoversteer = 1;
	weaponlocksystem = "2 + 16 + 4";
	whistledist = 8;
	class Hiteffects {
		hitwater = "ImpactEffectsSmall";
	};
	};

	class R_Hydra_HE: RocketBase
	{
		model = "gunfighter\ah1z\70mmRocket";
		hit = 250;
		indirectHit = 50;
		indirectHitRange = 15;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
	};
};

class CfgMagazines
{
	class VehicleMagazine;

	class 2Rnd_Sidewinder_AH1Z: VehicleMagazine
	{
		scope = 2;
		displayName = "SIDEWINDER";
		ammo = "M_Sidewinder_AA";
		count = 2;
		initSpeed = 0;
		maxLeadSpeed = 500;
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};

	class 750Rnd_M197_AH1: VehicleMagazine
	{
		scope = 2;
		displayName = "M197";
		ammo = "B_20mm_AP";
		count = 750;
		initSpeed = 1036;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		nameSound = "cannon";
	};

	class 100Rnd_762x51_M240: VehicleMagazine
	{
		scope = 1;
		displayName = "100rnd_M240";
		count=100;
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound="mgun";
		descriptionShort = "100RND_M240";
	};
	class 1200Rnd_30x113mm_M789_HEDP: VehicleMagazine
	{
		scope = 1;
		displayName = "1200Rnd 30x113mm M789 HEDP";
		ammo="B_30x113mm_M789_HEDP";
		count=1200;
		initSpeed = 805;
		tracersEvery = 1;
		maxLeadSpeed=500;
		nameSound="cannon";
		airLock=1;
	};
	class 8Rnd_Hellfire: VehicleMagazine
	{
		scope = 2;
		displayName = "HELLFIRE";
		count = 8;
		ammo = "M_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 200;
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_2", 1.12202, 1.3, 1100};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
		reloadSound[] = {"A3\sounds_f\dummysound",0.00031622776,1};
		nameSound = "missiles";
	};

	class 14Rnd_FFAR: VehicleMagazine
	{
		scope = 2;
		displayName = "FFAR";
		ammo = "R_Hydra_HE";
		count = 14;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1", 1.12202, 1.3, 1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.00031622776,1};
	};
	class 28Rnd_FFAR: 14Rnd_FFAR
	{
		count = 28;
	};
	class 38Rnd_FFAR: 14Rnd_FFAR
	{
		count = 38;
	};
};
class Mode_SemiAuto;
class Mode_Burst;


class CfgWeapons
{
	class Default;
	class M134_minigun;
	class LauncherCore;
	class RocketPods;
	class CannonCore;
	class MissileLauncher;
	class MGun;
	class M134_minigun_2: M134_minigun {};

	class SidewinderLaucher_AH1Z: MissileLauncher
	{
		displayName = "SIDEWINDER";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_Sidewinder_AH1Z"};
		cursor = "missile";
		cursorSize = 1;
		sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect  = "DefaultRifle";
			begin1[]={"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {Begin1,0.33};


			};
	};

	class M197: CannonCore
	{
		scope = 1;
		cursor = "EmptyCursor";
		cursorAim= "mg";
		cursorSize = 1;
		displayName = "M197";
		nameSound = "cannon";
		magazines[] = {"750Rnd_M197_AH1"};
		canLock = 2;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_M197";
			autoFire = 1;
			//sound[]={"gunfighter\sounds\a10vulcanVII",db5,1,1100};
			sounds[] = {StandardSound};
			class StandardSound{
			weaponSoundEffect  = "DefaultRifle";
			begin1[]={"gunfighter\sounds\a10vulcanVII",db5,1,1100};
			soundBegin[] = {Begin1,0.33};


			};
			reloadTime = 0.06;
			dispersion = 0.00025;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 700;
			minRangeProbab = 0.05;
			midRange = 900;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1400;
			maxRangeProbab = 0.01;
		};
	};

	class M240_veh: MGun
	{
		scope = 1;
		displayName = "M240";
		soundContinuous = false;
		aiDispersionCoefY=21; // 7
		aiDispersionCoefX=21;
		magazines[] = {"100Rnd_762x51_M240"};
		magazineReloadTime=3;
		canLock = 0;

		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
            displayName = "M240";
            autoFire = 1;
			reloadTime = 0.075;
	        dispersion=0.0012;

			showToPlayer = true;
            burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=1;minRangeProbab=0.01;
			midRange=2;midRangeProbab=0.01;
			maxRange=3;maxRangeProbab=0.01;
		}
		class close: manual
		{
            showToPlayer = false;
            soundBurst = false;
            burst = 10; //Rg 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;minRangeProbab=0.05;
			midRange=100;midRangeProbab=0.58;
			maxRange=200;maxRangeProbab=0.04;
		};
		class short: close
		{
			burst = 8; //Rg 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300; //Rg 200;
			minRange=50;minRangeProbab=0.05;
			midRange=200;midRangeProbab=0.58; //Rg 100;
			maxRange=400;maxRangeProbab=0.04; //Rg 200;
		};
		class medium: close
		{
			burst = 4; //Rg 8;
			aiRateOfFire = 3; //Rg 4;
			aiRateOfFireDistance = 600; //Rg 400;
			minRange=300;minRangeProbab=0.05;
			midRange=400;midRangeProbab=0.58; //Rg 300;
			maxRange=600;maxRangeProbab=0.04; //Rg 400;
		};
		class far: close
		{
			burst = 5; //Rg 7;
			aiRateOfFire = 5; //Rg 7;
			aiRateOfFireDistance = 1000; //Rg 600;
			minRange=500;minRangeProbab=0.05;
			midRange=600;midRangeProbab=0.4; //Rg 500;
			maxRange=800;maxRangeProbab=0.01; //Rg 600;
		};
	};
	class M240_veh_2:M240_veh {};

class FFARLauncher: RocketPods
	{
		magazines[] = {"38Rnd_FFAR","28Rnd_FFAR"};
		displayName = "HYDRA";
		modes[] = {"Far_AI","Burst"};
		showaimcursorinternal = 0;
		weaponlockdelay = 2;
		weaponlocksystem = 4;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			burst = 2;
			reloadTime = 0.08;
			autofire = false;
			showToPlayer = 0;
			sounds[] = {StandardSound};
			class StandardSound{
			weaponSoundEffect  = "DefaultRifle";
			begin1[] = {"\gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,1100};
			soundBegin[] = {Begin1,0.33};

			};
		};
		class Burst: RocketPods
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "HYDRA-PAIR";
			burst = 1;
			reloadTime = 0.2;
			soundContinuous = 1;
			autofire = false;
						sounds[] = {StandardSound};
			class StandardSound{
			weaponSoundEffect  = "DefaultRifle";
			begin1[] = {"\gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,1100};
			soundBegin[] = {Begin1,0.33};
		};
		};
	};

class FFARLauncher_14:FFARLauncher
{
	magazines[] = {"14Rnd_FFAR"};
};


	class HellfireLauncher: MissileLauncher
	{
	displayName = "HELLFIRE";
	airateoffire = 5;
	airateoffiredistance = 500;
	autofire = 0;
	cursor = "EmptyCursor";
	cursoraim = "EmptyCursor";
	cursoraimon = "EmptyCursor";
	lockedtargetsound[] = {""};
	lockingtargetsound[] = {""};
	laserPos = "sensors"
	magazines[] = {"8Rnd_Hellfire"};
	maxrange = 9000;
	maxrangeprobab = 0.01;
	midrange = 2500;
	laser = 1;
	midrangeprobab = 0.9;
	minrange = 300;
	minrangeprobab = 0.25;
	namesound = "MissileLauncher";
	texturetype = "fullAuto";
	weaponlockdelay = 3;

	weaponsoundeffect = "DefaultRifle";

	sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect  = "DefaultRifle";
			Begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1", 1.12202, 1.3, 1100};
			soundfly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 1, 1.1, 700};
			soundBegin[] = {Begin1,0.33};
			};


	};
	class M230: CannonCore
	{
		scope = 1;
		displayName = "M230";
		nameSound="cannon";
		autoFire = 1;
		magazines[] = {"1200Rnd_30x113mm_M789_HEDP"};
		canLock = 2;

		flash = gunfire;
		flashSize = 0.1;
		recoil = Empty;
		ballisticsComputer = 1;

		aiDispersionCoefX = 6; // 2
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;

		cursor= "EmptyCursor";
		cursorAim= "mg";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
      displayName = "M230";
      autoFire = 1;
	    sound[]={"gunfighter\sounds\a10vulcanVII",db5,1,1100};

      reloadTime = 0.096;
	    dispersion=0.002;
			soundContinuous = 0;
			initspeed = 820;

			showToPlayer = true;
			burst = 1;
			multiplier = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;

			minRange=1;minRangeProbab=0.001;
			midRange=2;midRangeProbab=0.001;
			maxRange=3;maxRangeProbab=0.001;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		}
		class close: manual
		{
      showToPlayer = false;
      soundBurst = false;
      burst = 15; //Rg 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 400;
			minRange=0;minRangeProbab=0.04;
			midRange=200;midRangeProbab=0.2;
			maxRange=400;maxRangeProbab=0.1;
		};
		class short: close
		{
			burst = 10; //Rg 6;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600; //Rg 200;
			minRange=200;minRangeProbab=0.1;
			midRange=500;midRangeProbab=0.2; //Rg 100;
			maxRange=800;maxRangeProbab=0.1; //Rg 200;
		};
		class medium: close
		{
			burst = 7; //Rg 8;
			aiRateOfFire = 2; //Rg 4;
			aiRateOfFireDistance = 800; //Rg 400;
			minRange=600;minRangeProbab=0.1;
			midRange=800;midRangeProbab=0.2; //Rg 300;
			maxRange=1000;maxRangeProbab=0.1; //Rg 400;
		};
		class far: close
		{
			burst = 4; //Rg 7;
			aiRateOfFire = 3; //Rg 7;
			aiRateOfFireDistance = 1000; //Rg 600;
			minRange=800;minRangeProbab=0.1;
			midRange=1000;midRangeProbab=0.2; //Rg 500;
			maxRange=1500;maxRangeProbab=0.4; //Rg 600;
		};
	};
};