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
	class prpl_benelli : Rifle_Base_F
	{
		//benelli 18.5" barrel
		scope = 2;
		handAnim[] = {"OFP2_ManSkeleton", "\prpl_benelliM4\data\anim\benelli.rtm"};
		model="\prpl_benelliM4\data\models\benelli18fs.p3d";
		displayName = "M1014 Benelli";
		descriptionShort = "$STR_prpl_benelli_desc_short";	
		picture = "\prpl_benelliM4\data\inv\gear_benelli18_x_ca.paa";
		magazines[] = {"15th_8Rnd_12Gauge_Pellets","15th_8Rnd_12Gauge_Slug"};
		modes[] = {"Single"};
		dexterity = 1.5;
		reloadAction = "GestureReloadM4SSAS";
		drySound[] = {"A3\Sounds_F\weapons\Other\dry6.wav",0.1,1};
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