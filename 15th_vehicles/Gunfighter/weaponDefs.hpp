class CfgAmmo
{
	class Default;
	class RocketCore;
	class RocketBase;
	class BulletBase;
	class MissileCore;
	class MissileBase;
	class B_762x51_Ball;
	class B_20mm;
	class B_20mm_AP: B_20mm
	{
		hit = 60;
		indirectHit = 10;
		indirectHitRange = 10;
		visibleFire = 40;
		audibleFire = 40;
		visibleFireTime = 15;
		audiblefiretime = 15;
		deflecting=0;
		deflectingChance = 0;
		deflectingRandomness = 0;
		cost = 25;
		airLock = 1;
		nvgOnly = 1;
		explosive = 0.3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.00077;
		caliber = 2.33;
		whistleDist = 50;
		whistleOnFire = 1;
		dangerRadiusHit= -1;
		suppressionRadiusHit= 25;
  soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",3.1622777,1,1300};
  soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2",3.1622777,1,1300};
  soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3",3.1622777,1,1300};
  soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4",3.1622777,1,1300};
  soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5",3.1622777,1,1300};
  soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6",3.1622777,1,1300};
  multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.1,"soundHit5",0.15,"soundHit6",0.15};
  explosionSoundEffect = "DefaultExplosion";
  CraterEffects = "ExploAmmoCrater";
  explosionEffects = "ExploAmmoExplosion";
  class CamShakeExplode
  {
   power = "(20*0.2)";
   duration = "((round (20^0.5))*0.2 max 0.2)";
   frequency = 20;
   distance = "((1 + 20^0.5)*8)";
  };
  class CamShakeHit
  {
   power = 20;
   duration = "((round (20^0.25))*0.2 max 0.2)";
   frequency = 20;
   distance = 1;
  };
  class CamShakeFire
  {
   power = "(20^0.25)";
   duration = "((round (20^0.5))*0.2 max 0.2)";
   frequency = 20;
   distance = "((20^0.5)*8)";
  };
  class CamShakePlayerFire
  {
   power = 0.01;
   duration = 0.1;
   frequency = 20;
   distance = 1;
  };
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
		irLock = 0;
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
		weaponlocksystem = "2 + 4 + 8";
		cmimmunity = 0.8;
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
	indirecthit = 800;
	indirecthitrange = 10;
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
	soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,2500};
	soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1.5,400};
	thrust = 366;
	thrusttime = 2;
	timetolive = 19;
	tracklead = 1;
	trackoversteer = 1;
	weaponlocksystem = "2 + 16 + 4";
	whistledist = 24;
		dangerRadiusHit= -1;
		suppressionRadiusHit= 25;
	class Hiteffects 
	{
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
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1.5,400};
		whistleDist = 24;
		dangerRadiusHit= -1;
		suppressionRadiusHit= 35;
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
class Mode_FullAuto;

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
	class master_arms_safe: RocketPods
	{
		CanLock = 0;
		displayName = "MASTER ARM - SAFE";
		displayNameMagazine = "MASTER ARM - SAFE";
		shortNameMagazine = "MASTER ARM - SAFE";
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {};
		burst = 0;
		reloadTime = 0.01;
		magazineReloadTime = 0.1;
	};

	class SidewinderLaucher_AH1Z: MissileLauncher
	{
		displayName = "SIDEWINDER";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",1,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",1,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_Sidewinder_AH1Z"};
		cursor = "missile";
		cursorSize = 1;
		weaponlockdelay = 3;
		sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect  = "DefaultRifle";
			begin1[]={"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,2000};
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
		ballisticsComputer = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "M197";
			autoFire = 1;
			sounds[] = {StandardSound};
			class StandardSound{
			weaponSoundEffect  = "DefaultRifle";
			begin1[]={"gunfighter\sounds\a10vulcanVII",db5,1,4500};
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
	class FFARLauncher: RocketPods
	{
		magazines[] = {"38Rnd_FFAR","28Rnd_FFAR"};
		displayName = "HYDRA";
		modes[] = {"Far_AI",
			"Burst1",
			"Burst2",
			"Burst4"};
		showaimcursorinternal = 0;
		weaponlockdelay = 2;
		weaponlocksystem = 4;
		cursor = "EmptyCursor";
		cursoraim = "rocket";
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			burst = 1;
			reloadTime = 0.08;
			autofire = false;
			showToPlayer = 0;
			sounds[] = {StandardSound};
			class StandardSound{
			weaponSoundEffect  = "DefaultRifle";
			begin1[] = {"\gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
		};
		class Burst1: Mode_SemiAuto
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.01;
			displayName="HYDRA 70/Single";
			burst=1;
			canLock=1;
			reloadTime=0.15;
			autoFire=false;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
			begin1[] = {"\gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				2.5,
				1.2,
				700
			};
			soundContinuous=0;
			soundBurst=0;
		};
		class Burst2: Mode_Burst
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			canLock=1;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.001;
			displayName="HYDRA 70/Ripple 2";
			reloadTime=0.25;
			autoFire=false;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
			begin1[] = {"\gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
			burst=2;
			soundContinuous=0;
			soundBurst=0;
		};
		class Burst4: Mode_FullAuto
		{
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			canLock=1;
			maxRange=3;
			maxRangeProbab=0.01;
			reloadTime=0.25;
			autoFire=false;
			displayName="HYDRA 70/Ripple 4";
			burst=4;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
			begin1[] = {"\gunfighter\Sounds\RocketLauncher_Shot21",3.1622777,1,2000};
			soundBegin[] = {Begin1,0.33};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",
				1.1220185,
				1.2,
				700
			};
			soundContinuous=0;
			soundBurst=0;
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
	lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.8,1};
	lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.8,2.5};
	laserPos = "sensors";
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
			Begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1", 1.12202, 1.3, 2000};
			soundfly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 1, 1.1, 700};
			soundBegin[] = {Begin1,0.33};
			};


	};
};