
#include "Crewanimations.hpp"
#include "weaponDefs.hpp"

class CfgPatches
{
	class Gunfighter
	{
		units[] ={"meu_AH1Z" , "meu_UH1Y"};
		weapons[] = {"FFARLauncher_14","M197","SidewinderLaucher_AH1Z","HellfireLauncher"};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
		Magazines[] = {"2Rnd_Sidewinder_AH1Z", "750Rnd_M197_AH1", "8Rnd_Hellfire","14Rnd_FFAR","38Rnd_FFAR"};
	};
};

class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class HitPoints;
		class ViewPilot;
	};
	class Helicopter: Air
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets
		{
			class MainTurret;
		};
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
		class AnimationSources;
		class RotorLibHelicopterProperties;
		};
		class Helicopter_Base_F: Helicopter
		{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
		class AnimationSources;
		class RotorLibHelicopterProperties;
	};
	class meu_AH1Z: Helicopter
	{

		destrType="DestructWreck";
		crew = "B_Helipilot_F";
		scope=2;
		side=1;
		faction = "BLU_F";
		displayName="AH-1Z Cobra";
		accuracy=1000;
		// crewVulnerable = 0; // does not have bulletproof glass canopy
		driveraction = "AH1Z_Pilot";
		memoryPointsGetInDriver= "pos_driver";
		memoryPointsGetInDriverDir= "pos_driver_dir";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		typicalCargo[]={"B_Helipilot_F", "B_Helipilot_F"};
		driverCompartments = "Compartment1";
		enableManualFire = 1;

		//Adding PhysX stuff here
		selectionHRotorStill = "mainRotorStatic";
		selectionHRotorMove = "mainRotorBlurred";
		selectionVRotorStill = "tailRotorStatic";
		selectionVRotorMove = "tailRotorBlurred";
		altFullForce = 3000;
		altNoForce = 5000;
		bodyFrictionCoef = 0.6;
		cyclicasideforcecoef = 2;//banking
		cyclicforwardforcecoef = 2.5;//fowards backwards.
		frontRotorForceCoef = 3;//front rotor(strenth of lift)
		backRotorForceCoef = 4;//tailrotor(strength of horzontal movement=)
		simulation = "helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Beta\Heli_Attack_01\RTD_Heli_Attack_01.xml";
			defaultCollective = 0.675;
			autoHoverCorrection[] = {3.5,5.2,0};
			retreatBladeStallWarningSpeed = 92.778;
			maxTorque = 4500;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 185000;
			maxTailRotorStress = 30000;
			rtd_center = "rtd_center";
		};
		maxSpeed = 296;
		fuelCapacity=1200;
		fuelConsumptionRate=0.138;

		vehicleClass="Air";
		enableSweep = true;
		precision = 200;
		availableForSupportTypes[]={"CAS_Heli"};
		camouflage = 7;
		maxfordingdepth = 1;
		sensitivity = 3;
		sensitivityear = 3;
		canBeShot = true;
		audible = 5;
		
		minGForce = 0.2;
		maxGForce = 2;
		washDownStrength = "1.0f";
		washDownDiameter = "40.0f";
		gForceShakeAttenuation = 0.5;
		neutralMainRotorDive = 0;
		mainBladeRadius = 7;
		tailBladeRadius = 1.8;

		maxMainRotorDive = 7;
		minMainRotorDive = -7;
		liftForceCoef = 1.5;
		mainrotordive = 1.0;
		backrotordive = 1.0;
		mainRotorSpeed = -1.0;
		backRotorSpeed = 1.0;
		flapsFrictionCoef = 0.5;

		driverCanEject=1;
		extCameraPosition[] = {0,6,-18};
		leftDustEffect = "vbs2_fx_lowTrackDustEffects";
		rightDustEffect = "vbs2_fx_lowTrackDustEffects";
		//end PhysX stuff

		// stick animation
		driverlefthandanimname = "lever_pilot";
		driverleftleganimname = "pedalL";
		driverrighthandanimname = "stick_pilot";
		driverrightleganimname = "pedalR";
		//end stick animation
		
		memoryPointLMissile = "Missile_1"; //zkusim otocit
		memoryPointRMissile = "Missile_2"; //zkusim otocit
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		laserScanner = 1;
		selectionFireAnim = "muzzleflash";
		getInRadius = 2.5;
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 8;
		LockDetectionSystem = "1 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		armor=60;
		armorStructural = 1;
		damageResistance = 0.004;
		cost=10000;
		model="gunfighter\ah1z\ah1z.p3d";
		picture = "gunfighter\ui\ah1z_CA";
		mapSize = 15.5;
		Icon="gunfighter\ui\icomap_ah1z_CA";
		weapons[]={"FFARLauncher","CMFlareLauncher"};
		magazines[]={"38Rnd_FFAR","240Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelectionsTextures[] = {"gunfighter\ah1z\data\ah1z_body_co.paa","gunfighter\ah1z\data\ah1z_engines_co.paa"};

		attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10.0,1};
		soundGetIn[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\close",1.0,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\open",1.0,1,50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_start",0.8466836,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_start",2.5848932,1.0,800};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_stop",0.4466836,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_stop",1.5848932,1.0,800};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",1.0,1};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",2.5118864,1.0,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",1.0,1.0,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",1.0,1.0,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1.0,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1.0,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_engine",3.2387211,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_rotor_normal",1.4125376,1.0,1100};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorSwist
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\swist",1.0,1.0,300};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_engine",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_rotor",1.1220185,1.0};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.39810717,1.0,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1.0,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_engine",3.2387211,1.0,800};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_rotor_normal",1.4125376,1.0,1100};
					frequency = "rotorSpeed * (1 - rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class RotorSwist
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\swist",1.0,1.0,300};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_engine",1.0,1.0};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_rotor",1.1220185,1.0};
					frequency = "rotorSpeed * (1 - rotorThrust/5)";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.39810717,1.0,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1.0,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {1.0,1.0,1.0,1.0};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0.0,0.0};
				helmetDown[] = {0.0,-0.05,0.0};
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.347,0.345};
					};
					class HorizonVector
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.990727,0.987899};
						angle = 0;
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class VerticalSpeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -15;
						max = 15;
						minPos[] = {0,-0.15};
						maxPos[] = {0,0.15};
					};
				};
				class Draw
				{
					alpha = 1.0;
					color[] = {0.25,1.0,0.25};
					condition = "on";
					class Static
					{
						type = "line";
						width = 4.0;
						points[] = {{ { 0.48,0.14 },1 },{ { 0.5,0.12 },1 },{ { 0.52,0.14 },1 },{  },{ { 0.4,0.86 },1 },{ { 0.4,0.94 },1 },{ { 0.6,0.94 },1 },{ { 0.6,0.86 },1 },{ { 0.4,0.86 },1 },{  },{ { 0.4,0.9 },1 },{ { 0.408,0.9 },1 },{  },{ { 0.6,0.9 },1 },{ { 0.592,0.9 },1 },{  },{ { 0.5,0.86 },1 },{ { 0.5,0.868 },1 },{  },{ { 0.5,0.94 },1 },{ { 0.5,0.932 },1 }};
					};
					class VelocityLine
					{
						type = "line";
						width = 4.0;
						points[] = {{ "HUDCenter",1 },{ "VelocityVector",1 }};
					};
					class CollectiveGroup
					{
						condition = "simulRTD";
						class CollectiveText
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{ 0.22,0.2 },1};
							right[] = {{ 0.28,0.2 },1};
							down[] = {{ 0.22,0.24 },1};
						};
						class CollectiveNumber
						{
							type = "text";
							source = "rtdCollective";
							sourceScale = 100;
							align = "left";
							scale = 1;
							pos[] = {{ 0.22,0.2 },1};
							right[] = {{ 0.28,0.2 },1};
							down[] = {{ 0.22,0.24 },1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = {{ 0.16,0.48 },1};
						right[] = {{ 0.22,0.48 },1};
						down[] = {{ 0.16,0.52 },1};
					};
					class AltNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{ 0.84,0.48 },1};
						right[] = {{ 0.9,0.48 },1};
						down[] = {{ 0.84,0.52 },1};
					};
					class Weapons
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 0.5;
						pos[] = {{ 0.0,0.85 },1};
						right[] = {{ 0.04,0.85 },1};
						down[] = {{ 0.0,0.89 },1};
					};
					class Ammo
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 0.5;
						pos[] = {{ 0.0,0.9 },1};
						right[] = {{ 0.04,0.9 },1};
						down[] = {{ 0.0,0.94 },1};
					};
					class VerticalSpeedScale
					{
						type = "line";
						width = 4.0;
						points[] = {{ "VerticalSpeedBone",{ 0.85,0.48 },1 },{ "VerticalSpeedBone",{ 0.87,0.5 },1 },{ "VerticalSpeedBone",{ 0.85,0.52 },1 },{  },{ { 0.875,0.35 },1 },{ { 0.885,0.35 },1 },{  },{ { 0.875,0.4 },1 },{ { 0.885,0.4 },1 },{  },{ { 0.875,0.45 },1 },{ { 0.885,0.45 },1 },{  },{ { 0.875,0.5 },1 },{ { 0.895,0.5 },1 },{  },{ { 0.875,0.55 },1 },{ { 0.885,0.55 },1 },{  },{ { 0.875,0.6 },1 },{ { 0.885,0.6 },1 },{  },{ { 0.875,0.65 },1 },{ { 0.885,0.65 },1 }};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4.0;
						top = 0.2;
						center = 0.5;
						bottom = 0.8;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 2;
						numberEach = 2;
						step = 22.5;
						stepSize = "(0.80 - 0.20) / 6";
						align = "center";
						scale = 1;
						pos[] = {0.2,0.05};
						right[] = {0.26,0.05};
						down[] = {0.2,0.09};
					};
					class HorizonLine
					{
						clipTL[] = {0.2,0.145};
						clipBR[] = {0.8,0.855};
						class HorizonLineDraw
						{
							type = "line";
							width = 4.0;
							points[] = {{ "HorizonVector",{ "-6 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-5 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "-4 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-3 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "-2 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-1 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "1 * 0.0375",0.0 },1 },{ "HorizonVector",{ "2 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "3 * 0.0375",0.0 },1 },{ "HorizonVector",{ "4 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "5 * 0.0375",0.0 },1 },{ "HorizonVector",{ "6 * 0.0375",0.0 },1 }};
						};
					};
					class Gunner
					{
						type = "line";
						width = 4.0;
						points[] = {{ "GunnerAim",{ "0.5 - 0.015","0.9 - 0.008" },1 },{ "GunnerAim",{ "0.5 - 0.015","0.9 + 0.008" },1 },{ "GunnerAim",{ "0.5 + 0.015","0.9 + 0.008" },1 },{ "GunnerAim",{ "0.5 + 0.015","0.9 - 0.008" },1 },{ "GunnerAim",{ "0.5 - 0.015","0.9 - 0.008" },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"WeaponAim",{ 0.025,0 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.01,0 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0,0.0248559 },1 },{ "ForwardVector",1,"WeaponAim",{ 0,0.00994236 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.025,0 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.01,0 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0,-0.0248559 },1 },{ "ForwardVector",1,"WeaponAim",{ 0,-0.00994236 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"HUDCenter",{ 0,-0.248559 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0434,-0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0855,-0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.125,-0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1607,-0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1915,-0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2165,-0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.234925,-0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2462,-0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.25,0 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2462,0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.234925,0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2165,0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1915,0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1607,0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.125,0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0855,0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0434,0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ 0,0.248559 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0434,0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0855,0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.125,0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1607,0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1915,0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2165,0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.234925,0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2462,0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.25,0 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2462,-0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.234925,-0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2165,-0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1915,-0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1607,-0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.125,-0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0855,-0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0434,-0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ 0,-0.248559 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"HUDCenter",{ -0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.15,-0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ -0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.15,0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.15,-0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.15,0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ -0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.13,-0.149135 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ -0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.13,0.149135 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.13,-0.149135 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.13,0.149135 },1 }};
						};
					};
				};
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.0388,0.0388,0.0388,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.05;
				blinking = "false";
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.05;
				blinking = "false";
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.03,0.3,0.03,1};
				ambient[] = {0.003,0.03,0.003,1};
				brightness = 0.05;
				blinking = "false";
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.0388,0.0388,0.0388,1};
				ambient[] = {0.03,0.023,0.0056,1};
				brightness = 0.05;
				blinking = "true";
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.12,0.006,0.006,1.0};
				ambient[] = {0.1,0.01,0.01,1.0};
				brightness = 0.001;
				blinking = "true";
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.44999999;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.5;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "AH1Z_Gunner";
				gunnerCompartments = "Compartment1";
				weapons[]={"M197","HellfireLauncher","SidewinderLaucher_AH1Z","Laserdesignator_mounted"};
				magazines[]={"750Rnd_M197_AH1","8Rnd_Hellfire","2Rnd_Sidewinder_AH1Z","Laserbatteries"};
				laser = 1;
				allowTabLock= 1;
				memoryPointsGetInGunner= "pos_gunner";
				memoryPointsGetInGunnerDir= "pos_gunner_dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				primaryGunner= 1;
				memoryPointGun = "machinegun";
				minElev = -51;
				maxElev = 9;
				initElev = 6;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				maxhorizontalrotspeed = 1.57;
				maxverticalrotspeed = 1.57;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
				discreteDistanceInitIndex = 9;
				stabilizedInAxes = 3;
				class OpticsIn {
				class Wide {
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					initanglex = 0;
					initangley = 0;
					initfov = 0.466;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 0.466;
					minanglex = -30;
					minangley = -100;
					minfov = 0.466;
					opticsdisplayname = "W";
					thermalmode[] = {0, 1};
					visionmode[] = {"Normal", "NVG", "Ti"};
				};
				class Medium: Wide {
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					initfov = 0.093;
					maxfov = 0.093;
					minfov = 0.093;
					opticsdisplayname = "M";
				};
				class Narrow: Wide {
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					initfov = 0.020;
					maxfov = 0.020;
					minfov = 0.020;
					opticsdisplayname = "N";
				};
			};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
		};	};
		threat[]={1, 1, 0.6};
		class AnimationSources: AnimationSources
		{
			class 20mmBarrels
			{
				source = "revolving";
				weapon = "M197";
			};
			class mainRotor_folded
			{
				source = "user";
      				animPeriod = 0.001;
      				initPhase = 1;
			};
			class mainRotor_unfolded:mainRotor_folded
			{
                                 initPhase = 0;
			};
			class rotorShaft_unfolded:mainRotor_unfolded{};
		};
		class Library
		{
		  	libTextDesc = "AH1Z";
		};
		dammageHalf[]=
		{
			"gunfighter\ah1z\data\ah1z_monitor_glass_ca.paa", "gunfighter\ah1z\data\ah1z_monitor_glass_destr_co.paa"
		};
		dammageFull[]=
		{
			"gunfighter\ah1z\data\ah1z_monitor_glass_ca.paa", "gunfighter\ah1z\data\ah1z_monitor_glass_destr_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]={
				"gunfighter\ah1z\data\ah1z_body.rvmat",
				"gunfighter\ah1z\data\ah1z_body_damage.rvmat",
				"gunfighter\ah1z\data\ah1z_body_destruct.rvmat",

				"gunfighter\ah1z\data\ah1z_glass.rvmat",
				"gunfighter\ah1z\data\ah1z_glass_damage.rvmat",
				"gunfighter\ah1z\data\ah1z_glass_damage.rvmat",

				"gunfighter\ah1z\data\ah1z_glass_in.rvmat",
				"gunfighter\ah1z\data\ah1z_glass_in_damage.rvmat",
				"gunfighter\ah1z\data\ah1z_glass_in_damage.rvmat",

				"gunfighter\ah1z\data\ah1z_cockpit.rvmat",
				"gunfighter\ah1z\data\ah1z_cockpit.rvmat",
				"gunfighter\ah1z\data\ah1z_cockpit_destruct.rvmat",

				"gunfighter\ah1z\data\ah1z_engines.rvmat",
				"gunfighter\ah1z\data\ah1z_engines_damage.rvmat",
				"gunfighter\ah1z\data\ah1z_engines_destruct.rvmat",

				"gunfighter\ah1z\data\ah1z_monitors.rvmat",
				"gunfighter\ah1z\data\ah1z_monitors.rvmat",
				"gunfighter\ah1z\data\ah1z_monitors_destruct.rvmat"
			};
	};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "gunfighter\ah1z\AGM114Hellfire.p3d";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "gunfighter\ah1z\AIM9XSidewinder.p3d"; 
		simulation = "maverickweapon";
	};
};
};
	class meu_UH1Y: Helicopter
	{
		destrType="DestructWreck";
		scope = 2;
		side=1;
		audible = 5;
		maximumLoad = 2000;
		AGM_FastRoping = 1;
		AGM_FastRoping_Positions[] = {{1.4, -0.15, 0.10}, {-1.4, -0.15, 0.10}};
		slingLoadMemoryPoint = "slingLoad";		
		slingLoadMaxCargoMass = 2500;
		model = "gunfighter\UH1Y\UH1Y.p3d";
		picture = "gunfighter\UI\picture_UH1Y_CA.paa";
		icon="gunfighter\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		cost=500000;
		displayName = "UH1Y Venom";
		faction = "BLU_F";
		vehicleClass = "Air";
		availableForSupportTypes[] = {"CAS_Heli","Drop","Transport"};
		cargoCanEject = 1;
		driverCanEject = 1;
		getInRadius = 2.5;
		driverCanSee=31;
		gunnercansee = 31;
		cargocansee = 31;
		camouflage = 7;
		crewVulnerable = 1;
		simulation = "helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_EPB\Heli_Light_03\RTD_Heli_Light_03.xml";
			defaultCollective = 0.7;
			autoHoverCorrection[] = {4,3.3,0};
			maxTorque = 2700;
			stressDamagePerSec = 0.0033333332;
			retreatBladeStallWarningSpeed = 87.5;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 110000;
			maxTailRotorStress = 25000;
		};
		class Library
		{
		  	libTextDesc = "UH1Y";
		};
		fuelCapacity = 800;
		fuelConsumptionRate = 0.103;
		selectionHRotorStill = "mala vrtule staticka";
		selectionHRotorMove = "mala vrtule blur";
		selectionVRotorStill = "velka vrtule staticka";
		selectionVRotorMove = "velka vrtule Blur";

		maxSpeed = 280; 
		mainRotorSpeed = -0.5;
		backRotorSpeed = 3.0;
		driverRightHandAnimName = "stick";
		bodyFrictionCoef = 1;
		canBeShot = true;
		enableSweep = true;
		minGForce = 0.2;
		maxGForce = 2;
		washDownStrength = "1.0f";
		washDownDiameter = "40.0f";
		gForceShakeAttenuation = 0.5;
		cyclicasideforcecoef = 1.0;//banking
		cyclicforwardforcecoef = 1.0;//fowards backwards.
		frontRotorForceCoef = 3;//front rotor(strenth of lift)
		backRotorForceCoef = 4;//tailrotor(strength of horzontal movement=)
		liftForceCoef = 1.5;
		maxfordingdepth = 0.55;
		mainBladeRadius = 6.2;
		tailBladeRadius = 1.3;
		sensitivity = 3;
		sensitivityear = 3;
		accuracy=1000;
		maxMainRotorDive = 7;
		minMainRotorDive = -7;
		mainrotordive = 1;
		backrotordive = 2;
		extCameraPosition[] = {0.5,2,-20};
		flapsFrictionCoef = 0.5;
		leftDustEffect = "vbs2_fx_lowTrackDustEffects";
		rightDustEffect = "vbs2_fx_lowTrackDustEffects";

		//end PhysX stuff

		armor = 30;
		armorStructural = 1;
		damageResistance = 0.004;
		weapons[]={"FFARLauncher_14","CMFlareLauncher"};
		magazines[]={"14Rnd_FFAR","168Rnd_CMFlare_Chaff_Magazine"};
		
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";

		irScanRangeMin=0;
		irScanRangeMax=1000;
		nightVision=1;
		precision = 200;
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 8;
		LockDetectionSystem = "1 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		precisegetinout = 1;
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		cargoGetInAction[] = {"GetInHelicopterCargo"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		driverAction="UH1Y_Pilot";
		driverInAction="UH1Y_Pilot";


		cargoAction[]={"UH1Y_Cargo02","UH1Y_Cargo03","UH1Y_Cargo03","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01"};
		cargoIsCoDriver[]={false,false};

		gunnerUsesPilotView=0;

		transportSoldier=3;
		crew="B_Helipilot_F";
		transportAmmo=0;
		transportMaxMagazines=150;
		transportMaxWeapons=30;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 11;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 3;
			};
		};
		initCargoAngleY=+10; // cargo viewing limitations
		minCargoAngleY=-100;
		maxCargoAngleY=+100;
		minFireTime=30;
		threat[]={1, 0.05, 0.05};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		cargoProxyIndexes[] = {2,3,5};
		class cargoturret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret //Left Doorgun
			{
				isCopilot = 0;
				body="mainTurret";
				gun="mainGun";
				minElev=-60; maxElev=+30; initElev=-0;
				minTurn=-5; maxTurn=185; initTurn=0;
				soundServo[]={,db-40,1.0};
				animationSourceHatch="";
				stabilizedInAxes = 3;
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				gunnerCanEject = 1;
				weapons[]={"M134_minigun"};
				magazines[]={"5000Rnd_762x51_Belt"};
				gunnerName="CrewChief";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction="UH1Y_Gunner";
				gunnerInAction="UH1Y_Gunner";
				commanding=0;
				turretCanSee = "1 + 2 + 4 + 8 + 16";
				primaryGunner=2;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=1;
					minFov=0.25;
					maxFov=0.80000001;
				};
				gunnerCompartments = Compartment2;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body="Turret2";
				gun="Gun_2";
				proxyIndex=2;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes = 3;
				selectionFireAnim="zasleh_1";
				gunnerName="DoorGunner";
				commanding=-3;
				minTurn=-180; maxTurn=0; initTurn=0;
				weapons[]={"M134_minigun_2"};
				gunBeg="muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd="chamber_2"; //gunEnd=chamber of the gun
				memoryPointGun="machinegun_2";
				memoryPointGunnerOptics="gunnerview_2";
				turretCanSee = "1 + 2 + 4 + 8 + 16";
				primaryGunner=3;
			};
			class CoPilotObs: MainTurret
			{
				enableManualFire = 0;
				isCopilot = 1;
				gunnerCanEject = 1;
				stabilizedInAxes = 3;
				gunnerName="Co-Pilot";
				gunnerAction="UH1Y_Gunner02";
				gunnerInAction="UH1Y_Gunner02";
				body="ObsTurret";
				proxyIndex=3;
				gun="ObsGun";
				turretInfoType = "RscOptics_UAV_gunner";
				minElev = -80;
				maxElev = 25;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				animationSourceBody="ObsTurret";
				animationSourceGun="ObsGun";
				//outGunnerMayFire = 1; //Engine assumes helicopter gunner is turned out.
				//inGunnerMayFire = 1;
				gunBeg="gun_end"; //gunBeg=endpoint of the gun
				gunEnd="gun_begin"; //gunEnd=chamber of the gun
				memoryPointGun="gun_end";
				commanding=1;
				laser = 1;
				memoryPointGunnerOptics = "commanderview";
				gunnerCompartments = "Compartment2";
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};
				primaryGunner=1;
				startEngine = 0;
				soundServo[]={,db-40,1.0};
				gunnerForceOptics="false";
				gunnerOpticsShowCursor=0;
				class OpticsIn
				{	
					class wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						initFov = 0.019;
						minFov = 0.019;
						maxFov = 0.019;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					
						};
					};
					class OpticsOut
					{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
		class CargoTurret_01: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (Right)";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 1;	/// what cargo proxy is used according to index in the model
	maxElev = 15; /// what is the highest possible elevation of the turret
	minElev = -42; /// what is the lowest possible elevation of the turret
	maxTurn = 20; /// what is the left-most possible turn of the turret
	minTurn = -95; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
        gunnerInAction = "passenger_apc_narrow_generic02";///Your sitting animation inside cargo(can be a FFV animation)
	startEngine = 0;
        commanding = -1;
	outGunnerMayFire = 1;
        inGunnerMayFire = 0;
	soundAttenuationTurret = "HeliAttenuation";
	};
		class CargoTurret_04: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (Left)";	/// name of the position in the Action menu
	gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 4;	/// what cargo proxy is used according to index in the model
	maxElev = 15; /// what is the highest possible elevation of the turret
	minElev = -42; /// what is the lowest possible elevation of the turret
	maxTurn = 20; /// what is the left-most possible turn of the turret
	minTurn = -95; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
        gunnerInAction = "passenger_apc_narrow_generic02";///Your sitting animation inside cargo(can be a FFV animation)
	startEngine = 0;
        commanding = -1;
	outGunnerMayFire = 1;
        inGunnerMayFire = 0;
	soundAttenuationTurret = "HeliAttenuation";
	};
		class CargoTurret_06: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (Right2)";	/// name of the position in the Action menu
	gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 6;	/// what cargo proxy is used according to index in the model
	maxElev = 15; /// what is the highest possible elevation of the turret
	minElev = -42; /// what is the lowest possible elevation of the turret
	maxTurn = 20; /// what is the left-most possible turn of the turret
	minTurn = -95; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
        gunnerInAction = "passenger_apc_narrow_generic02";///Your sitting animation inside cargo(can be a FFV animation)
	startEngine = 0;
        commanding = -1;
	outGunnerMayFire = 1;
        inGunnerMayFire = 0;
	soundAttenuationTurret = "HeliAttenuation";
	};
		class CargoTurret_07: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (Left2)";	/// name of the position in the Action menu
	gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 7;	/// what cargo proxy is used according to index in the model
	maxElev = 15; /// what is the highest possible elevation of the turret
	minElev = -42; /// what is the lowest possible elevation of the turret
	maxTurn = 20; /// what is the left-most possible turn of the turret
	minTurn = -95; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
        gunnerInAction = "passenger_apc_narrow_generic02";///Your sitting animation inside cargo(can be a FFV animation)
	startEngine = 0;
        commanding = -1;
	outGunnerMayFire = 1;
        inGunnerMayFire = 0;
	soundAttenuationTurret = "HeliAttenuation";
	};
			};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=2;
				minimalHit=0.050000001;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=1.5;
				visual="podsvit pristroju";
			};
			class HitEngine: HitEngine
			{
				armor=2;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=3;
			};
			class HitEngine1: HitEngine
			{
				armor=1;
				minimalHit=0.1;
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine
			{
				armor=1;
				minimalHit=0.1;
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.44999999;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.5;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source="revolving";
				weapon="M134_minigun";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="M134_minigun_2";
			};
			class HUDAction {source="user"; animPeriod=2;initPhase = 1;};
			class HUDAction_1 {source="user"; animPeriod=0.1;initPhase = 1;};
		};
		class UserActions
		{
			class HUDoff
			{
				displayName="HUD On";
				displayNameDefault="HUD On";
				position="zamerny";
				radius=1;
				onlyForPlayer=true;
				condition="(player==driver this)and(this animationphase ""HUDAction"" !=1)";
				statement="this animate [""HUDAction"",1];this animate [""HUDAction_1"",1]";
			};
			class HUDon
			{
				displayName="HUD Off";
				displayNameDefault="HUD Off";
				position="zamerny";
				radius=1;
				onlyForPlayer=true;
				condition="(player==driver this)and(this animationphase ""HUDAction"" !=0)";
				statement="this animate [""HUDAction"",0];this animate [""HUDAction_1"",0]";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {1.0,1.0,1.0,1.0};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0.0,0.0};
				helmetDown[] = {0.0,-0.05,0.0};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.572};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.347,0.345};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class HorizonVector
					{
						type = "horizon";
						pos0[] = {0.5,0.572};
						pos10[] = {0.990727,1.0599};
						angle = 0;
					};
					class VerticalSpeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -15;
						max = 15;
						minPos[] = {0,-0.09};
						maxPos[] = {0,0.09};
					};
				};
				class Draw
				{
					alpha = 1.0;
					color[] = {0.0,1.0,0.3};
					condition = "on";
					class Static
					{
						type = "line";
						width = 4.0;
						points[] = {{ { 0.5,0.115 },1 },{ { 0.5,0.135 },1 },{  },{ { 0.81,0.5 },1 },{ { 0.83,0.5 },1 }};
					};
					class VelocityLine
					{
						type = "line";
						width = 4.0;
						points[] = {{ "PlaneW",1 },{ "VelocityVector",1 }};
					};
					class CollectiveGroup
					{
						condition = "simulRTD";
						class CollectiveText
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{ 0.2,0.2 },1};
							right[] = {{ 0.26,0.2 },1};
							down[] = {{ 0.2,0.25 },1};
						};
						class CollectiveNumber
						{
							type = "text";
							source = "rtdCollective";
							sourceScale = 100;
							align = "left";
							scale = 1;
							pos[] = {{ 0.2,0.2 },1};
							right[] = {{ 0.26,0.2 },1};
							down[] = {{ 0.2,0.25 },1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = {{ 0.2,"0.50 - 0.025" },1};
						right[] = {{ 0.26,"0.50 - 0.025" },1};
						down[] = {{ 0.2,"0.50 + 0.025" },1};
					};
					class AltNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{ 0.8,"0.50 - 0.025" },1};
						right[] = {{ 0.86,"0.50 - 0.025" },1};
						down[] = {{ 0.8,"0.50 + 0.025" },1};
					};
					class Weapons
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{ 0.0,0.9 },1};
						right[] = {{ 0.06,0.9 },1};
						down[] = {{ 0.0,0.95 },1};
					};
					class Ammo
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{ 0.5,0.65 },1};
						right[] = {{ 0.56,0.65 },1};
						down[] = {{ 0.5,0.7 },1};
					};
					class AltScale
					{
						type = "scale";
						horizontal = 0;
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						width = 4.0;
						top = "0.50 + 0.20";
						center = 0.5;
						bottom = "0.50 - 0.25";
						lineXleft = 0.835;
						lineYright = 0.845;
						lineXleftMajor = 0.835;
						lineYrightMajor = 0.855;
						majorLineEach = 5;
						numberEach = 5;
						step = 20;
						stepSize = "(0.25 + 0.20) / 15";
						align = "right";
						scale = 1;
						pos[] = {0.87,"0.50 + 0.20 - 0.025"};
						right[] = {0.93,"0.50 + 0.20 - 0.025"};
						down[] = {0.87,"0.50 + 0.20 + 0.025"};
					};
					class VerticalSpeedScale
					{
						type = "line";
						width = 4.0;
						points[] = {{ "VerticalSpeedBone",{ 0.86,0.84 },1 },{ "VerticalSpeedBone",{ 0.87,0.85 },1 },{ "VerticalSpeedBone",{ 0.86,0.86 },1 },{  },{ { 0.885,0.76 },1 },{ { 0.895,0.76 },1 },{  },{ { 0.885,0.79 },1 },{ { 0.895,0.79 },1 },{  },{ { 0.885,0.82 },1 },{ { 0.895,0.82 },1 },{  },{ { 0.885,0.85 },1 },{ { 0.905,0.85 },1 },{  },{ { 0.885,0.88 },1 },{ { 0.895,0.88 },1 },{  },{ { 0.885,0.91 },1 },{ { 0.895,0.91 },1 },{  },{ { 0.885,0.94 },1 },{ { 0.895,0.94 },1 }};
					};
					class VspeedNumberStaticP15
					{
						type = "text";
						source = "static";
						text = 15;
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{ 0.91,0.73 },1};
						right[] = {{ "0.91 + 0.06",0.73 },1};
						down[] = {{ 0.91,"0.73 + 0.05" },1};
					};
					class VspeedNumberStaticM15
					{
						type = "text";
						source = "static";
						text = -15;
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{ 0.91,0.91 },1};
						right[] = {{ "0.91 + 0.06",0.91 },1};
						down[] = {{ 0.91,"0.91 + 0.05" },1};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4.0;
						top = 0.3;
						center = 0.5;
						bottom = 0.7;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 3;
						numberEach = 3;
						step = 10;
						stepSize = "(0.70 - 0.30) / 10";
						align = "center";
						scale = 1.0;
						pos[] = {0.3,0.04};
						right[] = {0.36,0.04};
						down[] = {0.3,0.09};
					};
					class HorizontalLine
					{
						clipTL[] = {0.2,0.12};
						clipBR[] = {0.8,0.96};
						class HorizontalLineDraw
						{
							type = "line";
							width = 4.0;
							points[] = {{ "HorizonVector",{ "-6 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-5 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "-4 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-3 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "-2 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-1 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "1 * 0.0375",0.0 },1 },{ "HorizonVector",{ "2 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "3 * 0.0375",0.0 },1 },{ "HorizonVector",{ "4 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "5 * 0.0375",0.0 },1 },{ "HorizonVector",{ "6 * 0.0375",0.0 },1 }};
						};
					};
					class MGun
					{
						condition = "on";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"WeaponAim",{ 0.05,0 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.025,0 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0,0.0497118 },1 },{ "ForwardVector",1,"WeaponAim",{ 0,0.0248559 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.05,0 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.025,0 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0,-0.0497118 },1 },{ "ForwardVector",1,"WeaponAim",{ 0,-0.0248559 },1 }};
						};
					};
					class Rockets
					{
						condition = "missile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"WeaponAim",{ -0.25,-0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.25,-0.2 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.25,0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.25,0.2 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0.25,-0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.25,-0.2 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0.25,0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.25,0.2 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.25,-0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.2,-0.25 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.25,0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.2,0.25 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0.25,-0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.2,-0.25 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0.25,0.25 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.2,0.25 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0.035,0.0347983 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.018,0.0178963 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.035,0.0347983 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.018,0.0178963 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.035,-0.0347983 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.018,-0.0178963 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0.035,-0.0347983 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.018,-0.0178963 },1 }};
						};
					};
				};
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.0388,0.0388,0.0388,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.05;
				blinking = "false";
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {1000,0,0,1};
				ambient[] = {1,0,0,1};
				brightness = 0.05;
				blinking = "false";
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.03,0.3,0.03,1};
				ambient[] = {0.003,0.03,0.003,1};
				brightness = 0.05;
				blinking = "false";
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.0388,0.0388,0.0388,1};
				ambient[] = {0.03,0.023,0.0056,1};
				brightness = 0.05;
				blinking = "true";
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.12,0.006,0.006,1.0};
				ambient[] = {0.1,0.01,0.01,1.0};
				brightness = 0.001;
				blinking = "true";
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};

		// TODO: add destruction of glass
		dammageHalf[]={};	//ToDo: check for definings
		dammageFull[]={};	//ToDo: check for definings
		class Damage
		{
			tex[]={};
			mat[]={
				"gunfighter\uh1y\data\uh1y_sklo.rvmat",
				"gunfighter\uh1y\data\uh1y_sklo_damage.rvmat",
				"gunfighter\uh1y\data\uh1y_sklo_damage.rvmat",

				"gunfighter\uh1y\data\uh1y_sklo_in.rvmat",
				"gunfighter\uh1y\data\uh1y_sklo_in_damage.rvmat",
				"gunfighter\uh1y\data\uh1y_sklo_in_damage.rvmat",

				"gunfighter\uh1y\data\uh1y_ext.rvmat",
				"gunfighter\uh1y\data\uh1y_ext_damage.rvmat",
				"gunfighter\uh1y\data\uh1y_ext_destruct.rvmat",

				"gunfighter\uh1y\data\uh1y_int.rvmat",
				"gunfighter\uh1y\data\uh1y_int_damage.rvmat",
				"gunfighter\uh1y\data\uh1y_int_destruct.rvmat",

				"gunfighter\uh1y\data\launcher.rvmat",
				"gunfighter\uh1y\data\launcher.rvmat",
				"gunfighter\uh1y\data\launcher_destruct.rvmat",

				"gunfighter\uh1y\data\uh1y_cockpit.rvmat",
				"gunfighter\uh1y\data\uh1y_cockpit_damage.rvmat",
				"gunfighter\uh1y\data\uh1y_cockpit_destruct.rvmat"
			};
		};

		attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10.0,1};
		soundGetIn[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\open",1.0,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\close",1.0,1,50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_int",0.89810717,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_ext",2.5118864,1.0,600};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_int",0.89810717,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_ext",2.5118864,1.0,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",1.0,1.5};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1.0,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",1.0,1.0,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",1.0,1.0,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1.0,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1.0,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1.0,1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.0,1.0,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1.0,1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.0,1.0,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1.0,1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1.0,1.0,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1.0,1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1.0,1.0,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",1.9782794,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",1.4125376,1.0,1100};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",1.0,1,300};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				cone[] = {0.7,1.3,1.0,0};
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",1.7782794,1.0};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.2238721,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int",0.56234133,1.0,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1.0,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",1.9782794,1.0,800};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",1.4125376,1.0,1100};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class RotorNoiseExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",1.0,1,300};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
					cone[] = {0.7,1.3,1.0,0};
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",1.0,1.0};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",1.7782794,1.0};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.2238721,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1.0,1.0,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1.0,1.0,100};
					frequency = 1;
					volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int",0.56234133,1.0,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1.0,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
	};
};
};