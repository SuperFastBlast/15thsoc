
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
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class CUP_Weapon_sgun_M1014: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
		mapSize = 0.8;
		displayName = "M1014";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class CUP_sgun_M1014
			{
				weapon = "CUP_sgun_M1014";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MEU_8Rnd_12Gauge_Pellets
			{
				magazine = "MEU_8Rnd_12Gauge_Pellets";
				count = 1;
			};
		};
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
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 20;
		suppressionRadiusHit= 15;
		suppressionRadiusBulletClose= 15;
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
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 20;
		suppressionRadiusHit= 15;
		suppressionRadiusBulletClose= 15;
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
		picture="\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		descriptionshort="Caliber: 12 cal Slug<br />Rounds: 8<br />Used in: M1014";
		reloadaction="GestureReloadM4SSAS";
		mass=4;
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
};
class Mode_SemiAuto;
class asdg_MuzzleSlot_556;
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
		model = "CUP\Weapons\CUP_Weapons_M1014\CUP_M1014.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M1014\data\ui\gear_M1014_X_ca.paa";
		magazines[] = {"MEU_8Rnd_12Gauge_Pellets","MEU_8Rnd_12Gauge_Slug"};
		inertia = 0.5;
		dexterity = 1.5;
  		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
	   deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
	   hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           soundBipodDown[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",db-3, 1, 20}; /// sound of unfolding the bipod
           soundBipodUp[]   = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",db-3, 1, 20}; /// sound of folding the bipod
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\reload.ogg",1,1,35};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",0.5011872,1,20};
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
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.7782794,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.7782794,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.5118864,1,2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.5118864,1,2200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",1.9952624,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
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
		class WeaponSlotsInfo
		{
			mass = 83.9;
			class asdg_FrontSideRail_rifles: asdg_FrontSideRail{};
			class asdg_OpticRail_rifles: asdg_OpticRail1913{};
			class asdg_OpticRail1913_long: asdg_OpticRail1913{};
			class asdg_UnderSlot;
			class cowslot
			{
				access = 1;
				compatibleItems[] = {};
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.52,0.36};
				iconScale = 0.15;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
		};
	};
};