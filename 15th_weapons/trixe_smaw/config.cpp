#define private		0
#define protected		1
#define public		2

#define LockNo		0
#define LockCadet		1
#define LockYes		2

#define true	1
#define false	0

class CfgPatches {
	class Trixie_Launchers {
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {"Trixie_Launcher_Equipbox"};
		weapons[] = {"Trixie_SMAW", "Trixie_Javelin"};
		Magazines[] = {"Trixie_SMAW_HEAA", "Trixie_SMAW_HEDP", "Trixie_Javelin_Missile"};
		ammo[] = {"Trixie_SMAW_HEAA_R", "Trixie_SMAW_HEDP_R", "Trixie_Javelin_R"};
	};
};

class CfgVehicles {
	class NATO_Box_Base;	// External class reference
	
	class Trixie_Launcher_Equipbox : NATO_Box_Base {
		scope = public;
		vehicleClass = "Ammo";
		displayName = "Trixie's Launcher Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		
		class TransportMagazines {
			class Trixie_SMAW_HEAA {
				magazine = "Trixie_SMAW_HEAA";
				count = 99;
			};
			
			class Trixie_SMAW_HEDP {
				magazine = "Trixie_SMAW_HEDP";
				count = 99;
			};
			
			class Trixie_Javelin_Missile {
				magazine = "Trixie_Javelin_Missile";
				count = 99;
			};
		};
		
		class TransportWeapons {
			class _xx_Trixie_SMAW {
				weapon = "Trixie_SMAW";
				count = 10;
			};
			
			class _xx_Trixie_Javelin {
				weapon = "Trixie_Javelin";
				count = 10;
			};
		};
	};
};

class CfgWeapons {
	class launch_Titan_base;    // External class reference
	class launch_RPG32_F;	// External class reference
	class WeaponSlotsInfo;	// External class reference
	
	class Trixie_SMAW : launch_RPG32_F {
		scope = 2;
		author = "Trixie";
		displayname = "MK153 Mod 0 SMAW";
		descriptionshort = "Shoulder-launched Multipurpose Assault Weapon";
		
		class Library {
			libtextdesc = "The SMAW (Shoulder-launched Multipurpouse Assault Weapon) is a small rocket weapon, which operates as a portable anti-armor rocket launcher.<br/>It fires highly-explosive dual-purpose rockets with an effective range of 500 m and is useful against bunkers, masonry, concentrated walls and light armor.";
		};
		magazines[] = {"Trixie_SMAW_HEAA", "Trixie_SMAW_HEDP"};
		picture = "\Trixie_launchers\UI\w_smaw_ca.paa";
		model = "Trixie_Launchers\smaw.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\trixie_launchers\anim\SMAW.rtm"};
		modes[] = {this};
		minRange = 10;
		midRange = 250;
		maxRange = 500;
		recoil = "recoil_single_law";
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 250;
		modeloptics = "trixie_launchers\optika_TOW.p3d";
		opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
		opticsZoomMin = 0.0625;
		opticsZoomMax = 0.0625;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		reloadaction = "ReloadRPG";
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"\Trixie_Launchers\sound\smaw_fire",
				1.9952624,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry6",
			9.9999997e-005,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\a3\sounds_f\weapons\Launcher\titan_reload_final",
			0.00031622776,
			1,
			20
		};
		soundFly[]=
		{
			"\a3\sounds_f\weapons\Rockets\rocket_fly_1",
			10,
			1.8,
			300
		};
	};
	
	class Trixie_Javelin : launch_Titan_base {
		scope = 2;
		author = "Trixie";
		displayName = "FGM-148 Javelin";
		model = "trixie_launchers\trixie_javelin";
		picture = "\trixie_launchers\ui\w_javelin_ca.paa";
		modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		nameSound = "aalauncher";
		weaponInfoType = "RscOptics_titan";
		cursor = "EmptyCursor";
		cursorSize = 1;
		handAnim[] = {"OFP2_ManSkeleton", "\trixie_Launchers\Anim\Javelin.rtm"};
		cameraDir = "look";
		opticsZoomMin = 0.0277;
		opticsZoomMax = 0.7;
		opticsZoomInit = 0.0625;
		magazines[] = {"Trixie_Javelin_Missile"};
		
		class BaseSoundModeType {
			weaponSoundEffect = "DefaultRifle";
		};
		
		class StandardSound : BaseSoundModeType {
			begin1[] = {"A3\sounds_f\weapons\launcher\nlaw_final_2", 3.16228, 1, 1400};
			soundBegin[] = {"begin1", 1};
		};
		drySound[] = {"A3\sounds_f\weapons\other\dry6", 0.158489, 1, 18};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\missile_reload", 1.0, 1, 20};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.630957, 1.5, 300};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.316228, 1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.316228, 2.5};
		value = 20;
		canLock = LockNo;
		recoil = "recoil_single_titan";
		minRange = 50;
		minRangeProbab = 0.8;
		midRange = 1500;
		midRangeProbab = 0.9;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		aiRateOfFire = 10;	// delay between shots at given distance
		aiRateOfFireDistance = 2500;
		
		class Library {
			libtextdesc = "The Javelin is a manportable fire-and-forget infantry anti-tank munition designed to penetrate the armor of todays heavily armored Main Battle Tanks. The Javelin has replaced the Dragon system in US Army and Marine Corps service.";
		};
		descriptionshort = "Anti-tank missile launcher <br/>Guided";
		
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 160;
		};
		inertia = 1.2;
		
		class ItemInfo {
			priority = 3;
		};
		weaponLockDelay = 3;
		weaponLockSystem = 1;
		cmImmunity = 0.9;
		lockAcquire = 0;
		
		class OpticsModes {
			class StepScope {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsFlare = false;
				opticsZoomMin = 0.08333;
				opticsZoomMax = 0.02167;
				opticsZoomInit = 0.08333;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = {"Normal", "Ti", "nvg"};
				thermalMode[] = {0, 1};
				opticsDisablePeripherialVision = true;
				discretefov[] = {0.08333, 0.02167};
				discreteInitIndex = 0;
			};
		};
	};
};

class CfgAmmo {
	class R_PG32V_F;	// External class reference
	class R_TBG32V_F;	// External class reference
	class M_Titan_AT;	// External class reference
	
	class Trixie_SMAW_HEDP_R: R_TBG32V_F { // HE, 25mm RHA, 20cm concrete
    	scope = public;
    	// Combat effects, DP does more indirect damage than AA but less direct damage
		hit = 250;
		indirectHit = 75;
		indirectHitRange = 10;
        
		cost = 200;
        
        // Apply larger explosive effects
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
        
        // AI can use this against infantry as DP is an effective round
		allowAgainstInfantry = true;
        
        mass = 67;
        
        class CamShakeExplode {
			power = (110*0.2);
			duration = "((round (110^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((5 + 110^0.5)*8);
		};
		
		class CamShakeHit {
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		
		class CamShakeFire {
			power = (20^0.25);
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((20^0.5)*8);
		};
		
		class CamShakePlayerFire {
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Trixie_SMAW_HEAA_R: R_PG32V_F {
        scope = public;
        
        // Combat effects
		hit = 750; // Increased damage to direct hits
		indirectHit = 25; // Reduced damage to indirect hits, there's less explosive
		indirectHitRange = 3; // Reduced shrapnel distance, there's less explosive
        
        // Use AT effects
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
        
        // AI shouldn't use AA rockets against infantry, it's not designed for it
		allowAgainstInfantry = false;
        
        mass = 67; // Weight of a single rocket in KG
		
		class CamShakeExplode {
			power = (55*0.2);
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((5 + 55^0.5)*8);
		};
		
		class CamShakeHit {
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		
		class CamShakeFire {
			power = (20^0.25);
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((20^0.5)*8);
		};
		
		class CamShakePlayerFire {
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	class Trixie_Javelin_R : M_Titan_AT {
		model = "trixie_launchers\trixie_javelin_rocket.p3d";
		hit = 1500;
		indirectHit = 250;
		indirectHitRange = 5;
		locktype = 0;
		airlock = true;
		irlock = true;
		laserlock = true;
		manualControl = false;
		autoSeekTarget = 1;
	};
};

class CfgMagazines {
	class RPG32_F;	// External class reference
	class Titan_AA;	// External class reference
	
	class Trixie_SMAW_HEAA : RPG32_F {
		author = "Trixie";
		ammo = "Trixie_SMAW_HEAA_R";
		count = 1;
		descriptionshort = "Range: 0 - 500 m <br/>Type: high explosive anti-armor <br/>Used in: SMAW";
		displayname = "SMAW HEAA";
		displaynameshort = "HEAA";
		model = "trixie_launchers\SMAW_rocket.p3d";
		modelspecial = "trixie_launchers\SMAW_loaded.p3d";
		picture = "\trixie_launchers\ui\smaw_ammo.paa";
		initspeed = 220;
		mass = 60;
	};
	
	class Trixie_SMAW_HEDP : RPG32_F {
		author = "Trixie";
		ammo = "Trixie_SMAW_HEDP_R";
		count = 1;
		descriptionshort = "Range: 0 - 500 m <br/>Type: high explosive dual-purpose <br/>Used in: SMAW";
		displayname = "SMAW HEDP";
		displaynameshort = "HEDP";
		model = "trixie_launchers\SMAW_rocket.p3d";
		modelspecial = "trixie_launchers\SMAW_loaded.p3d";
		picture = "\trixie_launchers\ui\smaw_ammo.paa";
		initspeed = 220;
		mass = 60;
	};
	
	class Trixie_Javelin_Missile : Titan_AA {
		author = "Trixie";
		ammo = "Trixie_Javelin_R";
		displayName = "Javelin Missile";
		displayNameShort = "Javelin Missile";
		descriptionShort = "Javelin Missile";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		modelSpecial = "\trixie_launchers\trixie_javelin_loaded";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
		mass = 100;
	};
};
};