
class CfgPatches
{
	class prpl_benelliM4_wps
	{
		units[] = {};
		weapons[] = {"MEU_benelli"};
		requiredVersion = 0.3;
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails"};
		magazines[] = {"MEU_8Rnd_12Gauge_Pellets","MEU_8Rnd_12Gauge_Slug"};
	};
};

class CfgRecoils
{
	access = 1;
		
	super90_recoil[] = {
		0,0,0,
		0.04,0.08,0.04,
		0.04,0.04,0.02,
		0.04,0.02,0.01,
		0.04,0.01,0.005,
		0.04,0.005,0.002,
		0.04,-0.01,-0.004,
		0.04,-0.005,-0.02,
		0.04,0,0
	};
};
class CfgAmmo
{
	class B_12Gauge_Slug;
	class B_12Gauge_Pellets;
	class MEU_B_12Gauge_Pellets: B_12Gauge_Pellets  
	{
		hit = 10;
		cartridge = "FxCartridge_slug";
		visibleFire = 1;	// how much is visible when this weapon is fired
		audibleFire = 1;
		visibleFireTime = 2;
		cost = 1;
		tracerColor[] = {1, 0.05, 0.05, 1};
		tracerColorR[] = {1, 0.05, 0.05, 1};
		caliber = 0.5;
		indirectHit = 0;
        	indirectHitRange = 0;
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
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	class MEU_B_12Gauge_Slug : B_12Gauge_Slug  
	{
		hit = 30;
		visibleFire = 1;	// how much is visible when this weapon is fired
		audibleFire = 1;
		visibleFireTime = 2;
		cartridge = "FxCartridge_slug";
		cost = 1;
		tracerColor[] = {1, 0.05, 0.05, 1};
		tracerColorR[] = {1, 0.05, 0.05, 1};
		caliber = 0.5;
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
		class CamShakeHit
		{
			power = 10;
			duration = 1;
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
		ammo="MEU_B_12Gauge_Pellets";
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
		ammo="MEU_B_12Gauge_Slug";
		count=8;
		initspeed=415;
		picture="\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		descriptionshort="Caliber: 12 cal Slug<br />Rounds: 8<br />Used in: M1014";
		reloadaction="GestureReloadM4SSAS";
		mass=4;
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
class asdg_FrontSideRail;
class asdg_OpticRail1913;
	
class CfgWeapons
{
	class Rifle; // External class reference
	class Launcher;
	class UGL_F;
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class GunParticles;
	
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class MEU_benelli : Rifle_Base_F
	{
		//benelli 18.5" barrel
		scope = 2;
		handAnim[] = {"OFP2_ManSkeleton", "\prpl_benelliM4\data\anim\benelli.rtm"};
		model="\prpl_benelliM4\data\models\benelli18fs.p3d";
		displayName = "M1014 Benelli";
		descriptionShort = "$STR_prpl_benelli_desc_short";	
		picture = "\prpl_benelliM4\data\inv\gear_benelli18_x_ca.paa";
		magazines[] = {"MEU_8Rnd_12Gauge_Pellets","MEU_8Rnd_12Gauge_Slug"};
		modes[] = {"Single"};
		dexterity = 1.5;
		reloadAction = "GestureReloadM4SSAS";
		drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10};
		reloadMagazineSound[] = {"\prpl_benelliM4\data\sounds\reload.ogg",1.3,1,30}; 
		discreteDistance[] = {50};
		class GunParticles: GunParticles
		{
		   class SecondEffect
		   {
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		   };
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.707946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.707946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\prpl_benelliM4\data\sounds\benelli.ogg",1.5,1,1200};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.1;
			dispersion = 0.005;
			minRange = 2;
			minRangeProbab = 0.20;
			midRange = 75;
			midRangeProbab = 0.35;
			maxRange = 200;
			maxRangeProbab = 0.45;
			distanceZoomMin = 60;
			distanceZoomMax = 60;
			recoil = "super90_recoil";
			recoilProne = "super90_recoil";
			
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
 		{
 			mass = 83.9; /// default mass of a weapon
 			class MuzzleSlot
 			{
 			  // targetProxy
 			  linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			  // class names with items supported by weapon
 			  compatibleItems[] = {};
			
 			};
 			class asdg_OpticRail_Prpl_Benelli: asdg_OpticRail1913{};
 		};
		
		class Library 
		{
			libTextDesc = "$STR_prpl_benelli18_libdesc";
		};
	};
};


