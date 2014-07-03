////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.30
//Mon Feb 03 16:41:04 2014 : Source 'file' date Mon Feb 03 16:41:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#include "basicdefines.hpp"
#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class DefaultEventhandlers;
class CfgPatches
{
	class M1_Abrams_F
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
    
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
    
    /*
     * Total Mass: 62100 Kg
     * Engine Power: 1120 Kw
     * Max RPM: ~3000
     * Torque: 3728 NM
     * Max Speed: 42 MPH
     * Acceleration (0-20): 7.2s
     * Transmission: 4 Gear FWD, 2 Gear reverse
     */
	class M1_Base_F: Tank_F
	{
		simulation = "tankX"; // Use tank simulation
        maxOmega = 314.16;
		enginePower = 1119;
		peakTorque = 7321;
        
		torqueCurve[] = {
			{0 , 0},
			{0.14 , 0.92},
			{0.29 , 0.86},
			{0.43 , 0.79},
			{0.57 , 0.72},
			{0.71 , 0.65},
			{0.86 , 0.58},
			{1 , 0.51},
		};
        
		thrustDelay = 0.1;
		clutchStrength = 180.0;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
        latency = 1.0;
		switchTime = 0.1;
		tankTurnForce = 683100; // ~(TotalMass * 11)
		idleRpm = 700; // IdleRpm
		redRpm = 3000; // MaxRpm
		engineLosses = 25;
		transmissionLosses = 15;
        
		class complexGearbox
		{
			GearboxRatios[] = { "R1",-2,
            					"R2",-3,
                                "N",0,
                                "D1",3,
                                "D2",2,
                                "D3",1.325,
                                "D4",0.975
            };
			TransmissionRatios[] = { "High", 15 };
			gearBoxMode = "auto";
			moveOffGear = 3;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.1;
		};
        
        changeGearMinEffectivity[]   = { 0.95, 0.95, 0.15, 0.95, 0.95, 0.95, 0.95 };
        
		class Wheels
		{
			class L1
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
                damping = 75.0;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 30;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				dampingRate = 0.5;
				dampingRateInAir = 8830.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
                sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
            class L2: L1
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
                
				sprungMass = 5692.0;
				springStrength = 324000;
				springDamperRate = 36000;
				maxDroop = 0.15;
				maxCompression = 0.15;
			};
			class L3: L2
			{
				boneName = "wheel_podkoloL2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkoloL3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkoloL4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkoloL5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkoloL6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName = "wheel_podkoloL7";
				center = "wheel_1_8_axis";
				boundary = "wheel_1_8_bound";
			};
			class L9: L1
			{
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
			};
            
            class R1: L1
			{
                side = "right";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
			};
            class R2: L2
			{
                side = "right";
				boneName = "wheel_podkoloP1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
			};
			class R3: R2
			{
				boneName = "wheel_podkoloP2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkoloP3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkoloP4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkoloP5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkoloP6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName = "wheel_podkoloP7";
				center = "wheel_2_8_axis";
				boundary = "wheel_2_8_bound";
			};
			class R9: R1
			{
				boneName = "";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
			};
		};
		scope = 2;
		maxSpeed = 67;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 2.8;
		predictTurnSimul = 2.6;
		brakeDistance = 15;
		precision = 5;
		transportSoldier = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_flatground_leanleft","passenger_flatground_generic01","passenger_flatground_generic02","passenger_flatground_generic03","passenger_flatground_generic04","passenger_flatground_generic05"};
		waterResistance = 3;
		waterDamageEngine = 0.1;
		wheelCircumference = 3.82;
		tracksSpeed = -1;
		driverAction = "driver_apctracked3_out";
		driverInAction = "driver_apctracked3_in";
		extCameraPosition[] = {0,2.25,-9};
		forceHideDriver = 1;
		class ViewOptics: ViewOptics {
			visionMode[] = {"Normal","NVG"};
		};
		armor = 700;
		armorStructural = 6;
		damageResistance = 0.00547;
		cost = 2500000;
		crewVulnerable = 0;
		epeImpulseDamageCoef = 18;
		model = "\M1_Abrams\M1_Abrams.p3d";
		picture = "\A3\Armor_F_EPB\MBT_03\Data\UI\MBT_03_Ca.paa";
		icon = "\A3\Armor_F_EPB\MBT_03\Data\UI\map_MBT_03_Ca.paa";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 0.6;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.18;
				explosionShielding = 1.2;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 0.6;
				material = -1;
				name = "motor";
				passThrough = 0.8;
				minimalHit = 0.18;
				explosionShielding = 1.2;
				radius = 0.25;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.4;
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 4.75;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.4;
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 4.75;
				radius = 0.3;
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x,(random 1)]} forEach ['HideHull','HideTurret']}";
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust_dir2";
				effect = "ExhaustEffectTankSide";
			};
		};
		insideSoundCoef = 0.9;
		threat[] = {1,1,0.3};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_start",0.63095737,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_start",0.7943282,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_stop",0.63095737,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_stop",0.7943282,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_1",0.7943282,1,200};
				frequency = "0.95	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_2",0.8912509,1,240};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_3",1.1220185,1,280};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_4",1.2589254,1,320};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_5",1.4125376,1,360};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_6",1.5848932,1,400};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_7",1.7782794,1,440};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*camPos*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_1",1.1220185,1,200};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_2",1.4125376,1,200};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_3",1.7782794,1,230};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_4",1.9952624,1,290};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_5",1.7782794,1,350};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_6",2.2387211,1,400};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_7",2.5118864,1,450};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_1",0.5011872,1};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_2",0.35481337,1};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_3",0.39810717,1};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_1",0.63095737,1};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_2",0.39810717,1};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_3",0.4466836,1};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",0.8912509,1.0,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2",0.35481337,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1",0.25118864,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2",0.2818383,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4",0.35481337,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3",0.35481337,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4",0.35481337,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
        
		aggregateReflectors[] = {{ "Left","Right" }};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
        
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunBeg = "Usti hlavne2";
						gunEnd = "Konec hlavne2";
						memoryPointGun = "usti hlavne2";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"HMG_127_APC","SmokeLauncher"};
						magazines[] = {"500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","SmokeLauncherMag"};
						soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "commander_mbt3_out";
						gunnerInAction = "commander_mbt3_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						class ViewGunner: ViewCargo{};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {2,3};
						};
						startEngine = 0;
						gunnerHasFlares = 1;
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						viewGunnerInExternal = 1;
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.1;
								material = -1;
								name = "vezVelitele";
								visual = "vezVelitele";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
							class HitGun
							{
								armor = 0.1;
								material = -1;
								name = "zbranVelitele";
								visual = "zbranVelitele";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
						};
					};
				};
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				gunnerAction = "gunner_mbt3_out";
				gunnerInAction = "gunner_mbt3_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"cannon_120mm","LMG_coax"};
				soundServo[] = {"A3\sounds_f\dummysound",0.031622775,1.0,30};
				magazines[] = {"32Rnd_120mm_APFSDS_shells_Tracer_Red","16Rnd_120mm_HE_shells_Tracer_Red","2000Rnd_65x39_Belt_Yellow","2000Rnd_65x39_Belt_Yellow"};
				forceHideGunner = 0;
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "usti hlavne3";
				minElev = -5;
				maxElev = 20;
				initElev = 10;
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_w_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_m_F.p3d";
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_n_F.p3d";
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.8;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_damage.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_destruct.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_damage.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_destruct.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_damage.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_destruct.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_track.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_track_damage.rvmat","A3\Armor_F_EPB\MBT_03\data\MBT_03_track_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
		};
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_MBT_03_base_F_Library0";
		};
	};
};