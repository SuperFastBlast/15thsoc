class CfgWeapons {
    
    class WeaponSlotsInfo;
    class SlotInfo;
    
    // External class references
	class Launcher_Base_F;
	
	class SMAW_Launcher: Launcher_Base_F {
		scope = public;
		displayName = "Mk153 Mod 0 SMAW";
        descriptionShort = "SMAW Launcher";
		model = "MK153_SMAW\SMAW.p3d";
		picture = "\MK153_SMAW\data\equip\w_smaw_ca.paa";
        muzzles[] = { "this" };
        
        handAnim[]= { "OFP2_ManSkeleton", "MK153_SMAW\data\anim\SMAW.rtm" };
		magazineReloadTime = 10;
		magazines[] = { SMAW_HEAA, SMAW_HEDP };
        
       	sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.9952624,1,900};
			soundBegin[] = {"begin1",1};
		};
        
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.031622775,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.56234133,1,50};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.31622776,1.5,700};
        
		recoil = "recoil_single_law";
		canLock = LockNo;
		lockAcquire = false;
        
        weaponInfoType = "RscWeaponZeroing";
                
		class GunParticles {
			class effect1 {
				positionName = "konec hlavne"; // Correct
				directionName = "usti hlavne"; // Correct
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		
        // Slot info
		class WeaponSlotsInfo: WeaponSlotsInfo {      
            mass = 76;
		};
        
        // Optic info
        optics = true;
		modelOptics = "\MK153_SMAW\optika_SMAW";
		useModelOptics = true;
		opticsPPEffects[] = { "Normal" };
		opticsZoomMin = 0.263;
		opticsZoomMax = 0.263;
		opticsZoomInit = 0.263;
		visionMode[] = {};
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		distanceZoomMin = 100;
        distanceZoomMax = 100;
        // dispersion = 0.05; // Has no effect on rockets
        
       	// Zeroing info
        discreteDistanceInitIndex = 0;
        discreteDistance[] = { 100, 200, 300, 400, 500 };
        cameraDir = "look";
        discreteDistanceCameraPoint[] = {"eye", "eye2", "eye3", "eye4", "eye5"};
		
		class Library {
			libTextDesc = "libTextDesc";
		};
	};
    
};
