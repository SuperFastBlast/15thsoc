#include "weapons.hpp"

enum {
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	STABILIZEDINAXESNONE = 0,
};

class CfgPatches {
	class ExA_HRG31 {
		units[] = {"ExA_RG31_M2","ExA_RG31_M2_OD","ExA_RG31_Mk19","ExA_RG31_Mk19_OD","ExA_RG31_M2_GC","ExA_RG31E_M2"};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class Extended_Init_EventHandlers {
	class ExA_RG31_BASE {
		ExA_RG31_BASE_init = "[_this select 0] execVM '\exa_rg31\scripts\rg31_init.sqf'";
	};
};

class CfgMovesBasic {
	class DefaultDie;	// External class reference

	class ManActions {
		rg31_Driver = "rg31_Driver";
		rg31_Gunner = "rg31_Gunner";
		rg31_Gunner_Turnin = "rg31_Gunner_Turnin";
	};
};



class CfgMovesMaleSdr : CfgMovesBasic {
	class States {

		class Crew;	// External class reference

		class rg31_Driver : Crew {
			file = "\exa_rg31\Data\Anim\rg31_Driver";
			connectTo[] = {"rg31_KIA_Driver", 1};
			speed = 1e+010;
		};
		
		class rg31_KIA_Driver : DefaultDie {
			actions = "DeadActions";
			file = "\exa_rg31\Data\Anim\rg31_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState", 0.1};
		};

		class rg31_Gunner : Crew {
			file = "\exa_rg31\Data\Anim\rg31_Gunner";
			connectTo[] = {"rg31_KIA_Gunner", 1};
			speed = 1e+010;
		};
		
		class rg31_KIA_Gunner : DefaultDie {
			actions = "DeadActions";
			file = "\exa_rg31\Data\Anim\rg31_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState", 0.1};
		};

		class rg31_Gunner_Turnin : Crew {
			file = "\exa_rg31\Data\Anim\rg31_Gunner_turnin";
			connectTo[] = {"rg31_KIA_Gunner", 1};
			speed = 1e+010;
		};
		
	};
};

class WeaponCloudsMGun;	// External class reference

class CfgVehicles {

	class Logic;	// External class reference

	class exa_satcom : Logic {
		displayName = "(ExA) SatCom";
		vehicleClass = "Modules";
		icon = "\ExA_RG31\data\ico\icon_satcom_ca.paa";
		picture = "\ExA_RG31\data\ico\icon_satcom_ca.paa";
		
		class Eventhandlers {
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ExA_RG31\modules\satcom\satcom.sqf""};";
		};
	};
	
	class exa_crewduke : Logic {
		displayName = "(ExA) CREW Duke";
		vehicleClass = "Modules";
		icon = "\ExA_RG31\data\ico\icon_crewduke_ca.paa";
		picture = "\ExA_RG31\data\ico\icon_crewduke_ca.paa";
		
		class Eventhandlers {
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ExA_RG31\modules\crewduke\crewduke.sqf""};";
		};
	};

	class exa_boomerang : Logic {
		displayName = "(ExA) Boomerang";
		vehicleClass = "Modules";
		icon = "\ExA_RG31\data\ico\icon_boomerang_ca.paa";
		picture = "\ExA_RG31\data\ico\icon_boomerang_ca.paa";
		
		class Eventhandlers {
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ExA_RG31\modules\boomerang\boomerang.sqf""};";
		};
	};
	
	class exa_spare : Logic {
		displayName = "(ExA) Spare wheels (ACE)";
		vehicleClass = "Modules";
		icon = "\ExA_RG31\data\ico\icon_boomerang_ca.paa";
		picture = "\ExA_RG31\data\ico\icon_boomerang_ca.paa";
		
		class Eventhandlers {
			init = "if (isServer) then {private [""_ok""];_ok = _this execVM ""ExA_RG31\modules\wheels\ace.sqf""};";
		};
	};

	class Land;	// External class reference
	
	class LandVehicle : Land {
		class HitPoints;	// External class reference
	};
	
	class car : LandVehicle {
		class ViewOptics;	// External class reference
		
		class HitPoints {
			class HitLFWheel;	// External class reference
			class HitLBWheel;	// External class reference
			class HitLMWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRBWheel;	// External class reference
			class HitRMWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
		};
		class NewTurret;	// External class reference
		
		class Turrets {
			class MainTurret : NewTurret {
				class ViewGunner;	// External class reference
				class ViewOptics;	// External class reference
			};
		};
		class AnimationSources;	// External class reference
	};
	
	class Wheeled_APC : car {};
	
	class ExA_RG31_BASE : Wheeled_APC {
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;


		scope = 0;
		displayName = "RG-31 M2 (ExA)";
		displayNameShort = "RG-31 (M2)";
		enableGPS = 1;
		model = "\ExA_RG31\ExA_RG31_50";

		Picture = "";
		icon = "\exa_rg31\data\ico\icomap_RG31_m2_ca.paa";

		hiddenSelections[] = {"ID_branch", "ID_letter", "ID_number", "ID_serial", "ID_custom"};
		hiddenSelectionsTextures[] = {"\exa_rg31\data\id\id_usmc_ca.paa", "\exa_rg31\data\id\id_a_ca.paa", "\exa_rg31\data\id\id_1_ca.paa", "", ""};

		mapSize = 6;

		side = West;
		faction = BLU_F;
		vehicleClass = "Car";
		//crew = "USMC_Soldier";
		//typicalCargo[] = {"USMC_Soldier", "USMC_Soldier", "USMC_Soldier_AT", "USMC_Soldier_Officer"};
		cargoAction[] = {"Stryker_Cargo01"};
		transportSoldier = 6;
		transportMaxBackpacks = 6;
		transportMaxMagazines = 999;
		transportMaxWeapons = 50;

		cargoIsCoDriver[] = {1, 0, 0, 0, 0};

		armor = 400;
		damageResistance = 0.01;

//		armor = 150;
		armorStructural = 8.0;
//		damageResistance = 0.02409;
//		damageResistance = 0.0082;

//		armorGlass = 0.5;
//		armorWheels = 0.15;
//		armorBody = 0.4;
//		armorFuel = 1.4;
//		armorLights = 0.4;


		weapons[] = {"CarHorn"};

		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		turnCoef = 2.0;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		predictTurnSimul = 0.9;
		predictTurnPlan = 1.0;
		brakeDistance = 3.0;
		terrainCoef = 1.5;

//		wheelCircumference = 4.172;
		wheelCircumference = 3.316;



		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;

		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCommander = "pos cargo";
		memoryPointsGetInCommanderDir = "pos cargo dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInCoDriver = "pos codriver";
		memoryPointsGetInCoDriverDir = "pos codriver dir";
		memoryPointSupply = "supply";
		memoryPointExhaust = "exhaust_start";
		memoryPointExhaustDir = "exhaust_end";


		selectionFireAnim = "zasleh";


		fuelCapacity = 246;

		crewVulnerable = 0;
		maxSpeed = 100;
		threat[] = {1, 0.4, 0.5};
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;

		LODTurnedOut = 1100;


		driverIsCommander = 0;
		driverAction = "rg31_Driver";
		driverInAction = "rg31_Driver";
		enableManualFire = 0;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				inGunnerMayFire = false;
				outGunnerMayFire = true;
				hideWeaponsGunner = 1;
				canHideGunner = true;
				forceHideGunner = false;

				gunnerOutForceOptics = false;
				gunnerForceOptics = false;
				LODTurnedOut = 0;
				LODTurnedIn = 5000;
				proxyType = "CPGunner";
				primaryGunner = 1;
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons[] = {"M2"};
				magazines[] = {"100Rnd_127x108_Mag"};
				soundServo[] = {"\exa_rg31\data\sound\turret",1,1,70};
				minElev = -15;
				maxElev = 30;
				gunnerAction = "rg31_Gunner";
				gunnerInAction = "rg31_Gunner_Turnin";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				commanding = 1;
				
				turretInfoType = "RscWeaponEmpty";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
				gunnerCompartments = "Compartment1";

				ACE_exposed = 1;

				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					visionMode[] = {"Normal"};
				};

				class ViewGunner {
					initAngleX = 0;
					minAngleX = -40;
					maxAngleX = 45;
					initAngleY = 0;
					minAngleY = -140;
					maxAngleY = 140;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.0;
				};
			};
		};


		class Reflectors {
			class Left {
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "light_left";
				direction = "light_left_end";
				hitpoint = "light_left";
				selection = "light_left";
				size = 0.5;
				brightness = 2.5;
			};
			
			class Right {
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "light_right";
				direction = "light_right_end";
				hitpoint = "light_right";
				selection = "light_right";
				size = 0.5;
				brightness = 2.5;
			};
		};

		class CargoLight {
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
			color[] = {0,0,0,0};
		};

		aggregateReflectors[] = {{"1", "1"}};

// ACE STUFF IN HERE

		ace_dmgsys_enable = 1;


/*
		ace_firepos[] = {0, 0, -1};

		ace_era = 0;
		ace_p_detonation_hull = 0.020000;
		ace_p_detonation_turret = 0.020000;
		ace_p_detonation_engine = 0.010000;
		ace_p_fire_hull = 0.050000;
		ace_p_fire_turret = 0.1000000;
		ace_p_fire_engine = 0.18000;
		ace_p_firedetonation = 0.250000;

		ace_minimalhit[] = {19, 70};
		ace_armor_hull[] = {{35, 35}, {18, 18}, {18, 18}, {18, 18}, {18, 18}, {65, 65}};
		ace_armor_turret[] = {{30, 30}, {18, 18}, {18, 18}, {18, 18}, {18, 18}};

//		ace_minimalhit[] = {20, 70};
//		ace_armor_hull[] = {{98, 98}, {50, 50}, {50, 50}, {46, 46}, {33, 33}, {20, 20}};
//		ace_armor_turret[] = {{203, 203}, {150, 150}, {150, 150}, {64, 64}, {39, 39}};

//	ace_armor_hull[] = {{410,450 },{420,460 },{420,460 },{400,440 },{420,460 },{280,320 } };
//	ace_armor_turret[] = {{400,440 },{410,450 },{410,450 },{410,450 },{280,320 } };
*/

////////// STRYKER
		ace_firepos[] = {0, 0, -1};
		ace_minimalhit[] = {19, 70};
		ace_era = 0;
		ace_p_detonation_hull = 0.2;
		ace_p_detonation_turret = 0.2;
		ace_p_detonation_engine = 0;
		ace_p_fire_hull = 0.5;
		ace_p_fire_turret = 0.2;
		ace_p_fire_engine = 0.8;
		ace_p_firedetonation = 0.5;
		ace_armor_hull[] = {{35, 35}, {18, 18}, {18, 18}, {18, 18}, {18, 18}, {20, 20}};
		ace_armor_turret[] = {{30, 30}, {18, 18}, {18, 18}, {18, 18}, {18, 18}};

/////////

		ACE_exposed = 0;
		ACE_Cargo_exposed = 0;

		ace_sys_eject_side = 0;
		ace_sys_eject_weaponCheck = 0;

		ace_sys_repair_spare_tyres = 1;
		ace_sys_repair_tyre_type = "ACE_Spare_Tyre_HDAPC";


// END ACE

// ACRE STUFF IN HERE

		ACRE_attenuationClass = "Helicopter";

		ACRE_hasRack = 1;
		ACRE_hasExternalAccessRack = 1;
		antennas[] = {""};
		
		class ACRE_Racks {
			class MainRack {
				name = "MainRack";
				type = ACRE_VRC111;
				externalAccess = 1;
				canRemove = 1;
				allowedPositions[] = {"driver", "other", "cargo"};
				defaultRadios[] = {};
				antenna = ACRE_13IN_UHF_BNC;
				
				class Position {
					attenuationName = "MainRack";
					modelReference[] = {0, 0, 0};
				};
			};

			class ExtraRack {
				name = "MainRack";
				type = ACRE_VRC103_VIRTUAL;
				externalAccess = 0;
				canRemove = 0;
				allowedPositions[] = {"driver", "other", "cargo"};
				defaultRadios[] = {ACRE_PRC117F};
				antenna = ACRE_13IN_UHF_BNC;
				
				class Position {
					attenuationName = "MainRack";
					modelReference[] = {0, 0, 0};
				};
			};
		};

// ACRE END

// HITPOINTS
		class HitPoints : HitPoints {

/*			class HitRGlass {
				armor = 0.3;
				material = -1;
				name = "sklo predni P";
				passThrough = 0;
			};
			
			class HitLGlass {
				armor = 0.3;
				material = -1;
				name = "sklo predni L";
				passThrough = 0;
			};
*/
			
			class HitGlass1 {
				armor = 2;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 1;
			};
			
			class HitGlass2: HitGlass1 {
				name = "glass2";
				visual = "glass2";
			};
			
			class HitGlass3: HitGlass1 {
				name = "glass3";
				visual = "glass3";
			};
			
			class HitGlass4: HitGlass1 {
				name = "glass4";
				visual = "glass4";
			};

			class HitGlass5: HitGlass1 {
				name = "glass5";
				visual = "glass5";
			};

			class HitGlass6: HitGlass1 {
				name = "glass6";
				visual = "glass6";
			};

			class HitGlass7: HitGlass1 {
				name = "glass7";
				visual = "glass7";
			};	

			class HitGlass8: HitGlass1 {
				name = "glass8";
				visual = "glass8";
			};	

			class HitGlass9: HitGlass1 {
				name = "glass9";
				visual = "glass9";
			};	

			class HitGlass10: HitGlass1 {
				name = "glass10";
				visual = "glass10";
			};

			class HitGlass11: HitGlass1 {
				name = "glass11";
				visual = "glass11";
			};

			class HitGlass12: HitGlass1 {
				name = "glass12";
				visual = "glass12";
			};

			class HitGlass13: HitGlass1 {
				name = "glass13";
				visual = "glass13";
			};

			class HitGlass14: HitGlass1 {
				name = "glass14";
				visual = "glass14";
			};


			class HitGlass15: HitGlass1 {
				name = "glass15";
				visual = "glass15";
			};

			class HitGlass16: HitGlass1 {
				name = "glass16";
				visual = "glass16";
			};

			class HitHull {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 1;
			};

			class HitBottomArmor {
				armor = 3;
				material = -1;
				name = "Armor_Bottom";
				visual = "";
				passThrough = 1;
			};

			class HitLeftArmor {
				armor = 2;
				material = -1;
				name = "Armor_Left";
				visual = "";
				passThrough = 0.8;
			};

			class HitRightArmor {
				armor = 2;
				material = -1;
				name = "Armor_Right";
				visual = "";
				passThrough = 0.8;
			};

			class HitTopArmor {
				armor = 3;
				material = -1;
				name = "Armor_Top";
				visual = "";
				passThrough = 0.5;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};

			
			class HitLFWheel {
				armor = 0.20;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0.3;
			};
			
			class HitLBWheel {
				armor = 0.20;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "";
				passThrough = 0.3;
			};
			
			
			class HitRFWheel {
				armor = 0.20;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "";
				passThrough = 0.3;
			};
			
			class HitRBWheel {
				armor = 0.20;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "";
				passThrough = 0.3;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};



		};

// ANIMATION SOURCES

		class AnimationSources : AnimationSources {

			class HitLFWheel {
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			
			class HitRFWheel : HitLFWheel {
				hitpoint = "HitRFWheel";
			};
			
			class HitLBWheel : HitLFWheel {
				hitpoint = "HitLBWheel";
			};
			
			class HitRBWheel : HitLFWheel {
				hitpoint = "HitRBWheel";
			};
			
/*			class HitLGlass {
				source = "Hit";
				hitpoint = "HitLGlass";
				raw = 1;
			};

			class HitRGlass {
				source = "Hit";
				hitpoint = "HitRGlass";
				raw = 1;
			};
*/
		
			class HitGlass1 {
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			
			class HitGlass2 : HitGlass1 {
				hitpoint = "HitGlass2";
			};
			
			class HitGlass3 : HitGlass1 {
				hitpoint = "HitGlass3";
			};
			
			class HitGlass4 : HitGlass1 {
				hitpoint = "HitGlass4";
			};

			class HitGlass5 : HitGlass1 {
				hitpoint = "HitGlass5";
			};

			class HitGlass6 : HitGlass1 {
				hitpoint = "HitGlass6";
			};

			class HitGlass7 : HitGlass1 {
				hitpoint = "HitGlass7";
			};


			class HitGlass8 : HitGlass1 {
				hitpoint = "HitGlass8";
			};


			class HitGlass9 : HitGlass1 {
				hitpoint = "HitGlass9";
			};


			class HitGlass10 : HitGlass1 {
				hitpoint = "HitGlass10";
			};

			class HitGlass11 : HitGlass1 {
				hitpoint = "HitGlass11";
			};

			class HitGlass12 : HitGlass1 {
				hitpoint = "HitGlass12";
			};

			class HitGlass13 : HitGlass1 {
				hitpoint = "HitGlass13";
			};

			class HitGlass14 : HitGlass1 {
				hitpoint = "HitGlass14";
			};

			class HitGlass15 : HitGlass1 {
				hitpoint = "HitGlass15";
			};

			class HitGlass16 : HitGlass1 {
				hitpoint = "HitGlass16";
			};

			class vs17 {
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};

			class camonet {
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};

			class SYS_crewduke {
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};

			class SYS_boomerang {
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};

			class SYS_satcom {
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
			
			class left_spare {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};

			class right_spare {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};


			class antenna {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};

		};


// SOUNDS

		SoundGear[] = {"", 0.00177828, 1};
		soundGetIn[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin", 0.707946, 1};
		soundGetOut[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getout", 0.562341, 1, 50};
		soundEngineOnInt[] = {
				"\exa_rg31\data\sound\INT_On", 0.562341, 1.000000
		};
		soundEngineOnExt[] = {
				"\exa_rg31\data\sound\EXT_On", 0.562341, 1.000000, 350
		};
		soundEngineOffInt[] = {
				"\exa_rg31\data\sound\INT_Off", 0.562341, 1.000000
		};
		soundEngineOffExt[] = {
				"\exa_rg31\data\sound\EXT_Off", 0.562341, 1.000000, 350
		};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class SoundEvents {
			class AccelerationIn 
			{
				sound[] = {
						"\exa_rg31\data\sound\INT_Acc", 0.4, 1
				};
				limit = 0.15;
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[0.5,5]) min (speed factor[5,0.5]))";
			};

			class AccelerationOut 
			{
				sound[] = {
						"\exa_rg31\data\sound\EXT_Acc", 1, 1, 200
				};
				limit = 0.15;
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[0.5,5]) min (speed factor[5,0.5]))";
			};
		};
		
		class Sounds {
			class Engine 
			{
				sound[] = {
						"\exa_rg31\data\sound\EXT_Low", 1.000000, 1.000000, 650
				};
				frequency = "(randomizer*0.02+0.98)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.3, 1])";
				cone[] = {1.75,2,1.5,1.25};
			};

			class EngineHighOut 
			{
				sound[] = {
						"\exa_rg31\data\sound\EXT_High", 1.000000, 0.900000, 400
				};
				frequency = "(randomizer*0.02+0.98)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.3, 1])";
			};

			class IdleOut 
			{
				sound[] = {
						"\exa_rg31\data\sound\EXT_Idle", 0.562341, 1.000000, 100
				};
				frequency = "1";
				volume = "1.25*engineOn*camPos*(rpm factor[0.5,0.15])";
				cone[] = {1.75,2,1.5,1.25};
			};
			
			class TiresRockOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.1, 1.0, 50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.1, 1.0, 50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.1, 1.0, 50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.1, 1.0, 50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.1, 1.0, 50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.1, 1.0, 50};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			

			class NoiseOut 
			{
				sound[] = {"\exa_rg31\data\sound\EXT_noises", 2, 1, 200
				};
				frequency = "1";
				volume = "camPos*(speed factor[2, 20])";
			};

			class EngineLowIn 
			{
				sound[] = {
						"\exa_rg31\data\sound\INT_Low", 1.000000, 1.000000
				};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.3, 1])";
			};

			class EngineHighIn 
			{
				sound[] = {
						"\exa_rg31\data\sound\INT_High", 1.000000, 0.900000
				};
				frequency = "(randomizer*0.15+1.05)*rpm";	
				volume = "(1-camPos)*engineOn*(rpm factor[0.3,1.2])";
			};

			class IdleIn 
			{
				sound[] = {
						"\exa_rg31\data\sound\INT_Idle", 0.398107, 1.000000
				};
				frequency = "1";
				volume = "engineOn*(rpm factor[1.0, 0])*(1-camPos)";
			};

			
			class TiresRockIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn 
			{
				sound[] = {"\exa_rg31\data\sound\INT_noises", 2, 1
				};
				frequency = "1";
				volume = "(1-camPos)*(speed factor[2, 20])";
			};
			
			class Movement {
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};

//





	};
	
	class ExA_RG31_M2 : ExA_RG31_BASE {
		scope = 2;
		model = "\ExA_RG31\ExA_RG31_50";
		displayName = "RG-31 M2 (ExA)";
		icon = "\exa_rg31\data\ico\icomap_RG31_m2_ca.paa";
		destrType = "DestructWreck";

		transportSoldier = 6;

		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = "m2";
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = "m2";
			};
			
			class Revolving {
				source = "revolving";
				weapon = "m2";
			};

			class camonet {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
		};

		class Damage {
			tex[] = {};
			mat[] = {
				"ca\wheeled\data\detailmapy\auta_skla.rvmat",
				"ExA_RG31\data\exa_rg31_glass_full_d.rvmat",
				"ExA_RG31\data\exa_rg31_glass_full_d.rvmat",
				"ExA_RG31\data\exa_rg31_body.rvmat",
				"ExA_RG31\data\exa_rg31_body_damage.rvmat",
				"ExA_RG31\data\exa_rg31_body_destruct.rvmat",
				"ExA_RG31\data\exa_rg31_body2.rvmat",
				"ExA_RG31\data\exa_rg31_body2_damage.rvmat",
				"ExA_RG31\data\exa_rg31_body2_destruct.rvmat",
				"ExA_RG31\data\exa_RG31_interior.rvmat",
				"ExA_RG31\data\exa_RG31_interior.rvmat",
				"ExA_RG31\data\exa_RG31_interior_destruct.rvmat",
				"ExA_RG31\data\exa_RG31_interior2.rvmat",
				"ExA_RG31\data\exa_RG31_interior2.rvmat",
				"ExA_RG31\data\exa_RG31_interior2_destruct.rvmat"
				};
		};

	};

	class ExA_RG31_M2_OD : ExA_RG31_M2 {
		scope = 2;
		model = "\ExA_RG31\ExA_RG31_50_OD";
		displayName = "RG-31 M2 OD (ExA)";
	};



	class ExA_RG31_M2_GC : ExA_RG31_M2 {
		scope = 2;
		model = "\ExA_RG31\ExA_RG31_50_GC";
		displayName = "RG-31 M2 GC (ExA)";

		transportSoldier = 5;

		class AnimationSources : AnimationSources {

			class Gyrocam {
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
		};

		class UserActions {

			class UseCam {
				displayName = "Use Gyrocam";
				position = "pos_action";
				radius = 7.5;
				onlyForPlayer = "false";
				condition = " (PLAYER == commander this) AND !exa_rg31_gyrocam";
				statement = "this execVM ""\ExA_RG31\scripts\gyrocam.sqf"";";
			};

		};

		class Turrets : Turrets {

			class MainTurret : MainTurret {};
			
			class CommanderObs : MainTurret {
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxytype = "CPCommander";
				proxyIndex = 1;
				gunnerName = $STR_POSITION_COMMANDER;
				primaryGunner = 0;
				primaryObserver = 1;
				startEngine = 0;
				hasGunner = 1;
				gunnerAction = "Stryker_Cargo01";
				gunnerInAction = "Stryker_Cargo01";
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				outGunnerMayFire = 1;
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGun = "gun_end";
				commanding = 1;
				weapons[] = {};
				magazines[] = {};


				minElev = -50;
				maxElev = 85;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;

				memoryPointGunnerOptics = "commanderview";
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 0;

				gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				turretInfoType = "RscUnitInfo_AH64D_gunner";


				class ViewOptics {
					initAngleX = 0;
					minAngleX = -50;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.8;
					minFov = 0.0083;
					maxFov = 0.8;
					turretInfoType = "RscUnitInfo_AH64D_gunner";
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
				};

				class ViewGunner {
					initAngleX = 0;
					minAngleX = -50;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.8;
					minFov = 0.0083;
					maxFov = 0.8;
				};

				gunnerCompartments = "Compartment1";
				soundServo[] = {"", 0.01, 1.0};
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;

			};
		};


	};

	class ExA_RG31_Mk19 : ExA_RG31_BASE {
		scope = 2;
		model = "\ExA_RG31\ExA_RG31_mk19";
		displayName = "RG-31 Mk.19 (ExA)";
		displayNameShort = "RG-31 (Mk19)";
		icon = "\exa_rg31\data\ico\icomap_RG31_mk19_ca.paa";
		destrType = "DestructWreck";


		class AnimationSources : AnimationSources {
			class belt_rotation {
				source = "reload";
				weapon = MK19;
			};
		};

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {MK19};
				magazines[] = {"48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "48Rnd_40mm_MK19"};
				
				class GunFire : WeaponCloudsMGun {
					interval = 0.01;
				};
			};
		};

		class Damage {
			tex[] = {};
			mat[] = {
				"ca\wheeled\data\detailmapy\auta_skla.rvmat",
				"ExA_RG31\data\exa_rg31_glass_full_d.rvmat",
				"ExA_RG31\data\exa_rg31_glass_full_d.rvmat",
				"ExA_RG31\data\exa_rg31_body.rvmat",
				"ExA_RG31\data\exa_rg31_body_damage.rvmat",
				"ExA_RG31\data\exa_rg31_body_destruct.rvmat",
				"ExA_RG31\data\exa_rg31_body2.rvmat",
				"ExA_RG31\data\exa_rg31_body2_damage.rvmat",
				"ExA_RG31\data\exa_rg31_body2_destruct.rvmat",
				"ExA_RG31\data\exa_RG31_interior.rvmat",
				"ExA_RG31\data\exa_RG31_interior.rvmat",
				"ExA_RG31\data\exa_RG31_interior_destruct.rvmat",
				"ExA_RG31\data\exa_RG31_interior2.rvmat",
				"ExA_RG31\data\exa_RG31_interior2.rvmat",
				"ExA_RG31\data\exa_RG31_interior2_destruct.rvmat"
				};
		};

	};

	class ExA_RG31_Mk19_OD : ExA_RG31_Mk19 {
		scope = 2;
		model = "\ExA_RG31\ExA_RG31_mk19_OD";
		displayName = "RG-31 Mk.19 OD (ExA)";
	};


	class ExA_RG31E_M2 : ExA_RG31_M2 {
		scope = 2;
		model = "\ExA_RG31\ExA_RG31_MK5E_50";
		displayName = "RG-31 Mk5E M2 (ExA)";
		transportSoldier = 8;

		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		turnCoef = 3.0;
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		predictTurnSimul = 0.9;
		predictTurnPlan = 1.0;
		brakeDistance = 3.5;
		terrainCoef = 1.5;

//		wheelCircumference = 4.172;
		wheelCircumference = 3.316;
	};




};
