
class CfgPatches
{
	class CUP_Weapons_M1014
	{
		units[] = {};
		weapons[] = {"CUP_sgun_M1014"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","A3_Weapons_F"};
		magazines[] = {"MEU_8Rnd_12Gauge_Pellets","MEU_8Rnd_12Gauge_Slug"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_MEU_12Gauge_Pellets: BulletBase  
	{
		simulation = "shotSpread";
		hit = 10;
		cartridge = "FxCartridge_slug";
		caliber = 0.5;
		indirectHit = 0;
        	indirectHitRange = 0;
		cost = 2;
		typicalSpeed = 410;
		visibleFire=18;
		visibleFireTime=18;
		audibleFire=16;
		audibleFireTime=10;
		airFriction = -0.00715;
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
	};
	class B_MEU_12Gauge_Slug: BulletBase 
	{
		hit = 30;
		cartridge = "FxCartridge_slug";
		caliber = 0.5;
		typicalSpeed = 600;
		visibleFire=18;
		visibleFireTime=18;
		audibleFire=16;
		audibleFireTime=10;
		airFriction = -0.00715;
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class MEU_8Rnd_12Gauge_Pellets: CA_Magazine
	{
		scope = 2;
		displayname="12cal Pellets M1014";
		ammo="B_MEU_12Gauge_Pellets";
		count=8;
		initspeed=395;
		picture="\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		descriptionshort="Caliber: 12 cal Pellets<br />Rounds: 8<br />Used in: M1014";
		reloadaction="GestureReloadM4SSAS";
		mass=4;
	};
	class MEU_8Rnd_12Gauge_Slug: CA_Magazine
	{
		scope = 2;
		displayname="12cal Slug M1014";
		ammo="B_MEU_12Gauge_Slug";
		count=8;
		initspeed=415;
		picture="\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		descriptionshort="Caliber: 12 cal Slug<br />Rounds: 8<br />Used in: M1014";
		reloadaction="GestureReloadM4SSAS";
		mass=4;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopShortMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_sgun_M1014: Rifle_Base_F
	{
		scope = 2;
		jsrs_soundeffect = "JSRS2_Distance_Effects_Shotgun";
		model = "CUP\Weapons\CUP_Weapons_M1014\CUP_M1014";
		picture = "\CUP\Weapons\CUP_Weapons_M1014\data\ui\gear_M1014_X_ca.paa";
		magazines[] = {"MEU_8Rnd_12Gauge_Pellets","MEU_8Rnd_12Gauge_Slug"};
		inertia = 0.5;
		dexterity = 1.5;
  		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
		bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.5011872,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.5011872,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.5011872,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.5011872,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.39810717,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\reload.ogg",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\Dry",1,1,35};
		optics = 1;
		modelOptics = "-";
		displayname = "M1014";
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single"};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		fireSpreadAngle = 0.7848246;
		class GunParticles: GunParticles
		{
		   class SecondEffect
		   {
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		   };
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
    				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.31622776,1,10};
    				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.31622776,1.1,10};
    				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\M1014_s1",1.3,1,1400};
				begin2[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\M1014_s2",1.3,1,1400};
				begin3[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\M1014_s3",1.3,1,1400};
				begin4[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\M1014_s4",1.3,1,1400};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			dispersion = 0.005;
			soundContinuous = 0;
			reloadTime = 0.07;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
		};
		class Library
		{
			libTextDesc = "M1014 shotgun";
		};
		descriptionShort = "M1014";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 83.9;
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
			class CUP_PicatinnyTopMountM1014: CUP_PicatinnyTopShortMount{};
		};
	};
};