#include "BasicDefines.hpp"
#include "CrewAnimations.hpp"
class DefaultEventhandlers;
 
class CfgPatches
{
        class CATracked2_AAV
        {
                units[] =
                {
                        "AAVB"
                };
                weapons[] = {};
                requiredVersion = 0.10;
        };
};
 
 
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
 
class FDustEffects_none{};
 
class CfgVehicles
{
        class Car;
        class Car_F: Car
        {
        class Engine;
        };
        class Tank: Car
        {
                class Turrets;
        };
        class Tracked_APC:Tank
        {
                class NewTurret;
                class AnimationSources;
                class Turrets:Turrets
                {
                        class MainTurret;
                };
        };
		
        class AAV: Tracked_APC
        {
                scope = 2;
                side=TWest;
                faction=BLU_F;
                displayName="AAVP7A1";
                vehicleClass = "Armored";
                model = "\aavb\aav.p3d"; //changed
                icon="\aavb\Data\icomap_aav_ca.paa";//Changed
                picture="\aavb\Data\AAV_CA.paa";//Changed
                mapSize = 9;
                accuracy=0.70;
                threat[]={1, 1, 0.3};
                armor=210;
                damageResistance = 0.01168;
                cost=4000000;
                maxSpeed=72;
                canFloat = true;
                supplyRadius = 5;
                //wheelCircumference=2.001;
 
                hiddenSelections[] =
                {
                        "Camo1",
                        "Camo2"
                };
                hiddenSelectionsTextures[] =
                {
                        "\aavb\Data\aav_ext_co.paa", //Changed
                        "\aavb\Data\aav_ext2_co.paa" //Changed this
                };
 
                cargoAction[] = {"passenger_generic01_leanleft", "passenger_apc_narrow_generic01", "passenger_apc_narrow_generic01", "passenger_apc_narrow_generic03", "passenger_apc_generic03", "passenger_apc_narrow_generic02", "passenger_generic01_foldhands", "passenger_generic01_leanright"};
                transportSoldier = 19;
				
				getInAction = GetInHigh; // driver
                getOutAction = GetOutHigh;
                driverAction = crew_tank01;
                driverInAction = AAV_Driver;
 
                driverForceOptics = 0;
                commanderUsesPilotView = true;
                driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
				
				/// PhysX part
				simulation = "TankX";
				enginePower                     = 750;// changed orginal 650
				maxOmega                        = 395;
				peakTorque                      = 4932;
				torqueCurve[] = {{0, 0}, {(1600/2640), (2650/2850)}, {(1800/2640), (2800/2850)}, {(1900/2640), (2850/2850)}, {(2000/2640), (2800/2850)}, {(2200/2640), (2750/2850)}, {(2400/2640), (2600/2850)}, {(2640/2640), (2350/2850)}};
 
				thrustDelay                     = 1;            /// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
				clutchStrength          = 160.0;
				fuelCapacity            = 1885;
				brakeIdleSpeed          = 2;    /// speed in m/s below which braking is applied
				latency                         = 0;
				tankTurnForce           = 600000; /// Random magic number, expected to be something like 11 x mass of vehicle
				
				// inwater check
 
				memoryPointTrackFLL = "wheel_1_2_bound";
				memoryPointTrackFLR = "wheel_1_3_bound";
				memoryPointTrackFRR = "wheel_1_4_bound";
				memoryPointTrackFRL = "wheel_1_5_bound";
				memoryPointTrackBLL = "wheel_2_2_bound";
				memoryPointTrackBLR = "wheel_2_3_bound";
				memoryPointTrackBRR = "wheel_2_4_bound";
				memoryPointTrackBRL = "wheel_2_5_bound";
				memoryPointsLeftWaterEffect = "engineeffectl2";
				memoryPointsRightWaterEffect = "engineeffectr2";
				leftEngineEffect = "LEngEffectsSmall";   // http://community.bistudio.com/wiki/A...htEngineEffect
				rightEngineEffect = "REngEffectsSmall";  // http://community.bistudio.com/wiki/A...htEngineEffect
				precision = 15;
				memoryPointsLeftEngineEffect = "EngineEffectL";
				memoryPointsRightEngineEffect = "EngineEffectR";
				steerAheadSimul = 0.5;
				steerAheadPlan = 0.35;
				predictTurnPlan = 0.8;
				predictTurnSimul = 0.6;
				brakeDistance = 5.0; // 50 by boat, may be how long it would take to brake ?
				acceleration = 15;
				turnCoef = 0.75;
				overSpeedBrakeCoef = 0.2;
				engineShiftY = -0.1;
				waterLeakiness = 55.5;
				waterLinearDampingCoefY = 5;
				waterLinearDampingCoefX = 2.0;
				waterAngularDampingCoef = 1.2;
				waterResistanceCoef = 0.015;
				rudderForceCoef = 0.3;
				rudderForceCoefAtMaxSpeed = 0.02;
 
				cargoIsCoDriver[] = {0};         // This token declares which (if any) cargo positions are 'in the front' (Ie front windscreen)
				ejectDeadDriver = 1;     // eject if dead (ejectDeadCargo , ejectDeadGunner , ejectDeadDriver ,ejectDeadCommander )
				insideSoundCoef = 1;
				extCameraPosition[] = {0,1.0,-8.0};
				leftFastWaterEffect = "LFastWaterEffects";
				rightFastWaterEffect = "RFastWaterEffects";
				waterEffectSpeed = 5;
				engineStartSpeed = 5;
				engineEffectSpeed = 5;
				waterFastEffectSpeed = 28;
				antiRollbarForceCoef = 24;
				antiRollbarForceLimit = 30;
				antiRollbarSpeedMin = 15;
				antiRollbarSpeedMax = 65;
				differentialType = "all_limited";
                damperSize = 1;
                damperForce = 3;
                damperDamping = 1;
                frontRearSplit = 0.5;
                frontBias = 1.3;
                dampersBumpCoef = 4.5;
                rearBias = 1.3;
                centreBias = 1.3;
                dampingRateFullThrottle = 0.08;
                dampingRateZeroThrottleClutchEngaged = 2.0;
                dampingRateZeroThrottleClutchDisengaged = 0.05;
                terrainCoef = 3.0;
                waterPPInVehicle = 0;
 
				// in water check ends
				/// Gearbox and transmission
				idleRpm = 200; // RPM at which the engine idles.
				redRpm = 2990; // RPM at which the engine redlines.
				engineLosses = 5; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
				transmissionLosses = 90; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)
 
				class complexGearbox 
				{
					GearboxRatios[] = {"R1",-2.235,"N",0,"D1",2,"D2",1.5,"D3",1.125,"D4",0.85};
					TransmissionRatios[] = {"High",9};
					gearBoxMode        = "full-auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
					moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
					driveString        = "D"; // string to display in the HUD for forward gears.
					neutralString      = "N"; // string to display in the HUD for neutral gear.
					reverseString      = "R"; // string to display in the HUD for reverse gears.
					transmissionDelay  = 0;
				};
				/// end of gearbox
 
		class Wheels
		{
			class L2
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75.0;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 10;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 5642.0;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1.0;
				dampingRateInAir = 6030.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName = "wheel_podkolol7";
				center = "wheel_1_8_axis";
				boundary = "wheel_1_8_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName = "wheel_podkolop7";
				center = "wheel_2_8_axis";
				boundary = "wheel_2_8_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
				/// End of PhysX
                class Exhausts
                {
                        class Exhaust1
                        {
                                position = "vyfuk start";
                                direction = "vyfuk konec";
                                effect = "ExhaustsEffectBig";
                        };
                };
 
                attenuationEffectType = "TankAttenuation";
                soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
                soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 20};
                soundDammage[] = {"", 0.562341, 1};
                soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_start", 0.630957, 1.0};
                soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_start", 0.794328, 1.0, 200};
                soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_stop", 0.630957, 1.0};
                soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_stop", 0.794328, 1.0, 200};
                buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
                buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
                buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
                buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
                soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
                WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
                WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
                WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
                WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
                WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1.0, 1, 200};
                WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
                soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
                ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
                ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
                ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
                ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
                soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
 
 
                class Sounds {
                        class Idle_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm1", 0.794328, 1, 200};
                                frequency = "0.95       +       ((rpm/  2640) factor[(400/      2640),(900/     2640)])*0.15";
                                volume = "engineOn*camPos*(((rpm/       2640) factor[(100/      2640),(200/     2640)]) *       ((rpm/  2640) factor[(900/      2640),(700/     2640)]))";
                        };
                       
                        class Engine {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm2", 0.891251, 1, 240};
                                frequency = "0.8        +       ((rpm/  2640) factor[(700/      2640),(1100/    2640)])*0.2";
                                volume = "engineOn*camPos*(((rpm/       2640) factor[(705/      2640),(850/     2640)]) *       ((rpm/  2640) factor[(1100 /    2640),(950/     2640)]))";
                        };
                       
                        class Engine1_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm3", 1.12202, 1, 280};
                                frequency = "0.8        +       ((rpm/  2640) factor[(950/      2640),(1400/    2640)])*0.2";
                                volume = "engineOn*camPos*(((rpm/       2640) factor[(900/      2640),(1050/    2640)]) *       ((rpm/  2640) factor[(1400/     2640),(1200/    2640)]))";
                        };
                       
                        class Engine2_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm4", 1.25893, 1, 320};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1200/     2640),(1700/    2640)])*0.2";
                                volume = "engineOn*camPos*(((rpm/       2640) factor[(1170/     2640),(1380/    2640)]) *       ((rpm/  2640) factor[(1700/     2640),(1500/    2640)]))";
                        };
                       
                        class Engine3_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm5", 1.41254, 1, 360};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1500/     2640),(2100/    2640)])*0.1";
                                volume = "engineOn*camPos*(((rpm/       2640) factor[(1500/     2640),(1670/    2640)]) *       ((rpm/  2640) factor[(2100/     2640),(1800/    2640)]))";
                        };
                       
                        class Engine4_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm6", 1.58489, 1, 400};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1800/     2640),(2300/    2640)])*0.1";
                                volume = "engineOn*camPos*(((rpm/       2640) factor[(1780/     2640),(2060/    2640)]) *       ((rpm/  2640) factor[(2450/     2640),(2200/    2640)]))";
                        };
                       
                        class Engine5_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm7", 1.77828, 1, 440};
                                frequency = "0.8        +       ((rpm/  2640) factor[(2100/     2640),(2640/    2640)])*0.1";
                                volume = "engineOn*camPos*((rpm/        2640) factor[(2150/     2640),(2500/    2640)])";
                        };
                       
                        class IdleThrust {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1", 1.12202, 1, 200};
                                frequency = "0.8        +       ((rpm/  2640) factor[(400/      2640),(900/     2640)])*0.15";
                                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    2640) factor[(100/      2640),(200/     2640)]) *       ((rpm/  2640) factor[(900/      2640),(700/     2640)]))";
                        };
                       
                        class EngineThrust {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2", 1.41254, 1, 200};
                                frequency = "0.8        +       ((rpm/  2640) factor[(700/      2640),(1100/    2640)])*0.2";
                                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    2640) factor[(705/      2640),(850/     2640)]) *       ((rpm/  2640) factor[(1100 /    2640),(950/     2640)]))";
                        };
                       
                        class Engine1_Thrust_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3", 1.77828, 1, 230};
                                frequency = "0.8        +       ((rpm/  2640) factor[(950/      2640),(1400/    2640)])*0.2";
                                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    2640) factor[(900/      2640),(1050/    2640)]) *       ((rpm/  2640) factor[(1400/     2640),(1200/    2640)]))";
                        };
                       
                        class Engine2_Thrust_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4", 1.99526, 1, 290};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1200/     2640),(1700/    2640)])*0.2";
                                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    2640) factor[(1170/     2640),(1380/    2640)]) *       ((rpm/  2640) factor[(1700/     2640),(1500/    2640)]))";
                        };
                       
                        class Engine3_Thrust_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5", 1.77828, 1, 350};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1500/     2640),(2100/    2640)])*0.1";
                                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    2640) factor[(1500/     2640),(1670/    2640)]) *       ((rpm/  2640) factor[(2100/     2640),(1800/    2640)]))";
                        };
                       
                        class Engine4_Thrust_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6", 2.23872, 1, 400};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1800/     2640),(2300/    2640)])*0.1";
                                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    2640) factor[(1780/     2640),(2060/    2640)]) *       ((rpm/  2640) factor[(2450/     2640),(2200/    2640)]))";
                        };
                       
                        class Engine5_Thrust_ext {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7", 2.51189, 1, 450};
                                frequency = "0.8        +       ((rpm/  2640) factor[(2100/     2640),(2640/    2640)])*0.1";
                                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/     2640) factor[(2150/     2640),(2500/    2640)])";
                        };
                       
                        class Idle_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1", 0.501187, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(400/      2640),(900/     2640)])*0.15";
                                volume = "engineOn*(1-camPos)*(((rpm/   2640) factor[(100/      2640),(200/     2640)]) *       ((rpm/  2640) factor[(900/      2640),(700/     2640)]))";
                        };
                       
                        class Engine_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2", 0.354813, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(700/      2640),(1100/    2640)])*0.2";
                                volume = "engineOn*(1-camPos)*(((rpm/   2640) factor[(705/      2640),(850/     2640)]) *       ((rpm/  2640) factor[(1100 /    2640),(950/     2640)]))";
                        };
                       
                        class Engine1_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3", 0.398107, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(950/      2640),(1400/    2640)])*0.2";
                                volume = "engineOn*(1-camPos)*(((rpm/   2640) factor[(900/      2640),(1050/    2640)]) *       ((rpm/  2640) factor[(1400/     2640),(1200/    2640)]))";
                        };
                       
                        class Engine2_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4", 0.446684, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1200/     2640),(1700/    2640)])*0.2";
                                volume = "engineOn*(1-camPos)*(((rpm/   2640) factor[(1170/     2640),(1380/    2640)]) *       ((rpm/  2640) factor[(1700/     2640),(1500/    2640)]))";
                        };
                       
                        class Engine3_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5", 0.501187, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1500/     2640),(2100/    2640)])*0.1";
                                volume = "engineOn*(1-camPos)*(((rpm/   2640) factor[(1500/     2640),(1670/    2640)]) *       ((rpm/  2640) factor[(2100/     2640),(1800/    2640)]))";
                        };
                       
                        class Engine4_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6", 0.562341, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1800/     2640),(2300/    2640)])*0.1";
                                volume = "engineOn*(1-camPos)*(((rpm/   2640) factor[(1780/     2640),(2060/    2640)]) *       ((rpm/  2640) factor[(2450/     2640),(2200/    2640)]))";
                        };
                       
                        class Engine5_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7", 0.630957, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(2100/     2640),(2640/    2640)])*0.1";
                                volume = "engineOn*(1-camPos)*((rpm/    2640) factor[(2150/     2640),(2500/    2640)])";
                        };
                       
                        class IdleThrust_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1", 0.630957, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(400/      2640),(900/     2640)])*0.15";
                                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/        2640) factor[(100/      2640),(200/     2640)]) *       ((rpm/  2640) factor[(900/      2640),(700/     2640)]))";
                        };
                       
                        class EngineThrust_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2", 0.398107, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(700/      2640),(1100/    2640)])*0.2";
                                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/        2640) factor[(705/      2640),(850/     2640)]) *       ((rpm/  2640) factor[(1100 /    2640),(950/     2640)]))";
                        };
                       
                        class Engine1_Thrust_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3", 0.446684, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(950/      2640),(1400/    2640)])*0.2";
                                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/        2640) factor[(900/      2640),(1050/    2640)]) *       ((rpm/  2640) factor[(1400/     2640),(1200/    2640)]))";
                        };
                       
                        class Engine2_Thrust_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4", 0.446684, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1200/     2640),(1700/    2640)])*0.2";
                                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/        2640) factor[(1170/     2640),(1380/    2640)]) *       ((rpm/  2640) factor[(1700/     2640),(1500/    2640)]))";
                        };
                       
                        class Engine3_Thrust_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5", 0.501187, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1500/     2640),(2100/    2640)])*0.1";
                                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/        2640) factor[(1500/     2640),(1670/    2640)]) *       ((rpm/  2640) factor[(2100/     2640),(1800/    2640)]))";
                        };
                       
                        class Engine4_Thrust_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6", 0.562341, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(1800/     2640),(2300/    2640)])*0.1";
                                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/        2640) factor[(1780/     2640),(2060/    2640)]) *       ((rpm/  2640) factor[(2450/     2640),(2200/    2640)]))";
                        };
                       
                        class Engine5_Thrust_int {
                                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7", 0.630957, 1};
                                frequency = "0.8        +       ((rpm/  2640) factor[(2100/     2640),(2640/    2640)])*0.1";
                                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/     2640),(2500/    2640)])";
                        };
                       
                        class NoiseInt {
                                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.501187, 1.0};
                                frequency = "1";
                                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
                        };
                       
                        class NoiseExt {
                                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.891251, 1.0, 50};
                                frequency = "1";
                                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
                        };
                       
                        class ThreadsOutH0 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01", 0.398107, 1.0, 140};
                                frequency = "1";
                                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-0) max 0)/       60),(((-5) max 5)/      60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/     60),(((-10) max 10)/    60)]))";
                        };
                       
                        class ThreadsOutH1 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02", 0.446684, 1.0, 160};
                                frequency = "1";
                                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-10) max 10)/     60),(((-15) max 15)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/     60),(((-25) max 25)/    60)]))";
                        };
                       
                        class ThreadsOutH2 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03", 0.501187, 1.0, 180};
                                frequency = "1";
                                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-25) max 25)/     60),(((-30) max 30)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/     60),(((-40) max 40)/    60)]))";
                        };
                       
                        class ThreadsOutH3 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04", 0.562341, 1.0, 200};
                                frequency = "1";
                                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-40) max 40)/     60),(((-45) max 45)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/     60),(((-50) max 50)/    60)]))";
                        };
                       
                        class ThreadsOutH4 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05", 0.562341, 1.0, 220};
                                frequency = "1";
                                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/     60) factor[(((-49) max 49)/     60),(((-53) max 53)/    60)])";
                        };
                       
                        class ThreadsOutS0 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01", 0.316228, 1.0, 120};
                                frequency = "1";
                                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-0) max 0)/       60),(((-5) max 5)/      60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/     60),(((-10) max 10)/    60)]))";
                        };
                       
                        class ThreadsOutS1 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02", 0.354813, 1.0, 140};
                                frequency = "1";
                                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-10) max 10)/     60),(((-15) max 15)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/     60),(((-25) max 25)/    60)]))";
                        };
                       
                        class ThreadsOutS2 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03", 0.398107, 1.0, 160};
                                frequency = "1";
                                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-25) max 25)/     60),(((-30) max 30)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/     60),(((-40) max 40)/    60)]))";
                        };
                       
                        class ThreadsOutS3 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04", 0.446684, 1.0, 180};
                                frequency = "1";
                                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-40) max 40)/     60),(((-45) max 45)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/     60),(((-50) max 50)/    60)]))";
                        };
                       
                        class ThreadsOutS4 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05", 0.501187, 1.0, 200};
                                frequency = "1";
                                volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/     60) factor[(((-49) max 49)/     60),(((-53) max 53)/    60)])";
                        };
                       
                        class ThreadsInH0 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01", 0.251189, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/        60) factor[(((-0) max 0)/       60),(((-5) max 5)/      60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/     60),(((-10) max 10)/    60)]))";
                        };
                       
                        class ThreadsInH1 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02", 0.281838, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/        60) factor[(((-10) max 10)/     60),(((-15) max 15)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/     60),(((-25) max 25)/    60)]))";
                        };
                       
                        class ThreadsInH2 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03", 0.316228, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/        60) factor[(((-25) max 25)/     60),(((-30) max 30)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/     60),(((-40) max 40)/    60)]))";
                        };
                       
                        class ThreadsInH3 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04", 0.354813, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/        60) factor[(((-40) max 40)/     60),(((-45) max 45)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/     60),(((-50) max 50)/    60)]))";
                        };
                       
                        class ThreadsInH4 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05", 0.398107, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/     60),(((-53) max 53)/    60)])";
                        };
                       
                        class ThreadsInS0 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01", 0.316228, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-0) max 0)/       60),(((-5) max 5)/      60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/     60),(((-10) max 10)/    60)]))";
                        };
                       
                        class ThreadsInS1 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02", 0.316228, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-10) max 10)/     60),(((-15) max 15)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/     60),(((-25) max 25)/    60)]))";
                        };
                       
                        class ThreadsInS2 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03", 0.354813, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-25) max 25)/     60),(((-30) max 30)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/     60),(((-40) max 40)/    60)]))";
                        };
                       
                        class ThreadsInS3 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04", 0.354813, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/    60) factor[(((-40) max 40)/     60),(((-45) max 45)/    60)])   *       ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/     60),(((-50) max 50)/    60)]))";
                        };
                       
                        class ThreadsInS4 {
                                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05", 0.398107, 1.0};
                                frequency = "1";
                                volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/     60) factor[(((-49) max 49)/     60),(((-53) max 53)/    60)])";
                        };
                };
 
                viewDriverShadow = true;
                viewGunnerShadow = true;
                viewCargoShadow = true;
                viewCargoShadowDiff = 0.05;
                viewDriverShadowDiff = 0.05;
                viewGunnerShadowDiff = 0.05;
 
                class Turrets: Turrets
                {
                        class MainTurret: MainTurret
                        {
                                castGunnerShadow=1;
                                viewGunnerShadow=1;
                                weapons[] = {"GMG_40mm", HMG_127_APC}; //Replaced For now
                                magazines[] = {"96Rnd_40mm_G_belt", "500Rnd_127x99_mag_Tracer_Red"};
                                gunnerForceOptics = 1;
                                gunnerAction = AAV_Gunner_OUT;
                                gunnerInAction = AAV_Gunner;
                                selectionFireAnim = "zasleh_1";
                                memoryPointGun = "machinegun";
                                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1"};
                                gunnerOutOpticsEffect[] = {};
                                gunnerOutOpticsModel = "";
                                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1.0, 10};
                                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
                                discreteDistanceInitIndex = 2;
                               
                                class Turrets {};
                                class GunFire :WeaponCloudsMGun{interval = 0.01;};
                                class ViewOptics
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
                                                        visionMode[] = {"Normal", "TI"};
                                                        thermalMode[] = {1, 2};
                                };
                                outGunnerMayFire = true;
                                startEngine = 0;
                                stabilizedInAxes = 0;
                        };
                        class CommanderOptics: NewTurret
                        {
                                proxyType = CPCommander;
                                proxyIndex = 1;
                                gunnerName = $STR_POSITION_COMMANDER;
                                primaryGunner = 0;
                                primaryObserver = 1;
                                gunnerForceOptics = 0;
 
                                body = "ObsTurret";
                                gun = "ObsGun";
                                animationSourceBody = "obsTurret";
                                animationSourceGun = "obsGun";
 
                                gunnerAction = AAV_Commander_OUT;
                                gunnerInAction = AAV_Commander;
 
 
 
                                gunBeg = ""; //gunBeg = endpoint of the gun
                                gunEnd = ""; //gunEnd = chamber of the gun
 
                                commanding = 2;
                                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1.0, 30};
                                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
                                gunnerOpticsColor[] = {1,1,1,1};
                                gunnerOutOpticsModel = "";
                                gunnerOutOpticsShowCursor = false;
                                memoryPointGunnerOutOptics = "commander_weapon_view";
                                memoryPointGunnerOptics= "commanderview";
                                memoryPointsGetInGunner= "pos commander";
                                memoryPointsGetInGunnerDir= "pos commander dir";
                                gunnerGetInAction = GetInHigh;
                                gunnerGetOutAction = GetOutHigh;
                                animationSourceHatch = "hatchCommander";
                                minElev=-10; maxElev=+35; initElev=0;
                                minTurn=-360; maxTurn=+360; initTurn=0;
 
                                weapons[] = {"SmokeLauncher"};
                                magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
 
                                outGunnerMayFire = true;
                                class ViewOptics
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
                                        visionMode[] = {"Normal", "TI"};
                                        thermalMode[] = {1, 2};
                                };
                                startEngine = 0;
                                stabilizedInAxes = 0;
                        };
                };
                class AnimationSources: AnimationSources
                {
                        class plate_front
                        {
                                source = "user";
                                animPeriod = 3;
                                initPhase = 0;
                        };
                        class turbine_cover_left:plate_front{};
                        class turbine_cover_right:plate_front{};
                };
                class EventHandlers : DefaultEventhandlers
                {
                        init="_this execVM ""\AAVB\scripts\init.sqf""";
                };
                class Damage
                {
                        tex[]={};
                        mat[]=
                        {
                                "aavb\data\aav_ext.rvmat",
                                "aavb\data\aav_ext_damage.rvmat",
                                "aavb\data\aav_ext_destruct.rvmat",
                                "aavb\data\aav_ext2.rvmat",
                                "aavb\data\aav_ext2_damage.rvmat",
                                "aavb\data\aav_ext2_destruct.rvmat",
                                "aavb\data\aav_tracks.rvmat",
                                "aavb\data\aav_tracks_damage.rvmat",
                                "aavb\data\aav_tracks_destruct.rvmat"
                        };
                };
                class Library{libTextDesc = "AAVP7A1";};
                //For smoke launchers
                smokeLauncherGrenadeCount=4; //Number of smoke shells launched at once
                smokeLauncherVelocity=14; //Velocity which smoke shells are launched at
                smokeLauncherOnTurret=1; //0 if smoke launchers are on hull, 1 if on turret
                smokeLauncherAngle=90; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)
 
        };
        class AAV_cutscene:AAV
        {
                scope = 1;
                transportSoldier = 4;
                model = \AAVB\AAV02;
                cargoAction[] = {AAV_Cargo01,AAV_Cargo03,AAV_Cargo02,AAV_Cargo04};
                crewVulnerable = true;
                ejectDeadCargo = true;
                class AnimationSources: AnimationSources
                {
                        class hide_bikes
                        {
                                source = "user";
                                animPeriod = 0.001;
                                initPhase = 1;
                        };
                };
        };
};