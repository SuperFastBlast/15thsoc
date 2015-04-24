
#include "Crewanimations.hpp"
#include "weaponDefs.hpp"

class CfgPatches
{
	class Gunfighter
	{
		units[] ={"meu_AH1Z" , "meu_UH1Y"};
		weapons[] = {"master_arms_safe","FFARLauncher_14","M197","SidewinderLaucher_AH1Z","HellfireLauncher"};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F","A3_Anims_F","A3_Anims_F_Config_Sdr"};
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
		class Reflectors
		{
			class Right;
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
		accuracy=1;
		// crewVulnerable = 0; // does not have bulletproof glass canopy
		driveraction = "AH1Z_Pilot";
		memoryPointsGetInDriver= "pos_driver";
		memoryPointsGetInDriverDir= "pos_driver_dir";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		typicalCargo[]={"B_Helipilot_F", "B_Helipilot_F"};
		driverCompartments = "Compartment1";
		gunnerUsesPilotView=false;
		enableManualFire = 1;
		irScanGround=True;
		irScanRangeMin=2000;
		irScanRangeMax=8000;
		irScanToEyeFactor = 2;
		irTarget = true;

		//Adding PhysX stuff here
		selectionHRotorStill = "mainRotorStatic";
		selectionHRotorMove = "mainRotorBlurred";
		selectionVRotorStill = "tailRotorStatic";
		selectionVRotorMove = "tailRotorBlurred";
		selectionDamage = "trup";
		altFullForce = 5000;
		altNoForce = 10000;
		bodyFrictionCoef = 0.6;
		cyclicasideforcecoef = 0.7;//banking
		cyclicforwardforcecoef = 1.0;//fowards backwards.
		frontRotorForceCoef = 1;//front rotor(strenth of lift)
		backRotorForceCoef = 0.5;//tailrotor(strength of horzontal movement=)
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		driveOnComponent[] = {"Skids"};
		simulation = "helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "gunfighter\RTD_Heli_Light_03.xml";
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
			rtd_center = "rtd_center"; //Needs a memory point in the model. Have it centred, then move it up or down to make the wheels touch the ground properly. 
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
		maxSpeed = 296;
		fuelCapacity=1200;
		fuelConsumptionRate=0.138;

		vehicleClass="Air";
		enableSweep = true;
		precision = 200;
		availableForSupportTypes[]={"CAS_Heli"};
		camouflage = 50;
		maxfordingdepth = 1;
		sensitivity = 3;
		sensitivityear = 3;
		canBeShot = true;
		audible = 7;
		
		minGForce = 0.2;
		maxGForce = 2;
		washDownStrength = "1.0f";
		washDownDiameter = "40.0f";
		gForceShakeAttenuation = 0.5;
		neutralMainRotorDive = 0;
		mainBladeRadius = 6.1;
		tailBladeRadius = 1.2;
  		mainBladeCenter = "-main_rotor";
  		tailBladeCenter = "-tail_rotor";

		maxMainRotorDive = 0;
		minMainRotorDive = -0;
		liftForceCoef = 1.3;
		mainrotordive = 0;
		backrotordive = 0;
		mainRotorSpeed = -1;
		backRotorSpeed = 3;
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
		selectionFireAnim = "zasleh";
		getInRadius = 2.5;
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		showAllTargets = 2;
		LockDetectionSystem = "1 + 2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		armor=60;
		armorStructural = 1;
		damageResistance = 0.01039;
		epeImpulseDamageCoef = 20;
		cost=50000000;
		model="gunfighter\ah1z\ah1z.p3d";
		picture = "gunfighter\ui\ah1z_CA";
		mapSize = 15.5;
		Icon="gunfighter\ui\icomap_ah1z_CA";
		weapons[]={"master_arms_safe","FFARLauncher","CMFlareLauncher"};
		magazines[]={"38Rnd_FFAR","240Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelectionsTextures[] = {"gunfighter\ah1z\data\ah1z_body_co.paa","gunfighter\ah1z\data\ah1z_engines_co.paa"};
		insideSoundCoef = 0.09;
		attenuationEffectType = "HeliAttenuation";
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
		soundDammage[] = {"Gunfighter\sounds\alarm_loop1",0.3,1};
		soundGetIn[] = {"Gunfighter\Sounds\heli_door_01",0.31622776,1};
		soundGetOut[] = {"Gunfighter\Sounds\heli_door_02",0.31622776,1,50};
		soundEnviron[] = {"","db-30",1.0};
		soundEngineOnInt[] = {"Gunfighter\sounds\AHint\AHStartin.wss", 0.8316228, 1.000000};
		soundEngineOnExt[] = {"Gunfighter\sounds\AHext\AHStartout.wss", 1.77828, 1.000000, 700};
		soundEngineOffInt[] = {"Gunfighter\sounds\AHint\AHStopin.wss", 0.8316228, 1.0000000};
		soundEngineOffExt[] = {"Gunfighter\sounds\AHext\AHStopout.wss", 1.77828, 1.0000000, 700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",3.0,1.0,2};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",3.0,1.0,2};
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
		class Sounds {
			class Engineext {
				sound[] = {"Gunfighter\sounds\AHext\AHEngineout.wss", db10.000000, 1.000000, 800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowext {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorLow.wss", db14.500000, 1.000000, 1600};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class RotorHighext {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorHigh.wss", db14.000000, 1.000000, 1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class EngineInt {
				sound[] = {"Gunfighter\sounds\AHint\AHEngineIn.wss", db6.200000, 1.000000};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowInt {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorLow.wss", db6.600000, 1.000000};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighInt {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorHigh.wss", db6.200000, 1.000000};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
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
		class Sounds {
			class Engineext {
				sound[] = {"Gunfighter\sounds\AHext\AHEngineout.wss", db10.000000, 1.000000, 800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowext {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorLow.wss", db14.500000, 1.000000, 1600};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class RotorHighext {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorHigh.wss", db14.000000, 1.000000, 1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class EngineInt {
				sound[] = {"Gunfighter\sounds\AHint\AHEngineIn.wss", db6.200000, 1.000000};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowInt {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorLow.wss", db6.600000, 1.000000};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighInt {
				sound[] = {"Gunfighter\sounds\AHint\AHRotorHigh.wss", db6.200000, 1.000000};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
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
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				blinking = "false";
				intensity = 80;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class WhiteStill: RedStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 80;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class GreenStill: RedStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				blinking = "false";
				intensity = 80;
			};
			class WhiteBlinking: RedStill
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				intensity = 90;
			};
			class RedBlinking: RedStill
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
				intensity = 90;
			};
		};
		class Reflectors
		{
			class Middle
			{
				position = "gun_begin";
				direction = "gunnerview";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				intensity = 100000;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				flareMaxDistance = 300;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 5;
					quadratic = 2;
					hardLimitStart = 400;
					hardLimitEnd = 500;
				};
		   };
		};
		class HitPoints: HitPoints
		{
			class HitEngine: HitEngine
			{
				armor = 999;
				name = "motor";
				convexComponent = "motor";
			};
			class HitHRotor: HitHRotor
			{
				armor = 2.9;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
				name = "velka vrtule";
			};
			class HitVRotor: HitVRotor
			{
				armor = 1.5;
				radius = 0.06;
				minimalHit = 0.05;
				explosionShielding = 6;
				name = "mala vrtule";
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				radius = 0.25;
				minimalHit = 0.05;
			};
			class HitAvionics: HitAvionics
			{
				armor = 2;
				radius = 0.4;
				minimalHit = 0.05;
				name = "elektronika";
				visual = "elektronika";
			};
			class HitGlass1: HitGlass2
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass2: HitGlass2
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass3: HitGlass3
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass4: HitGlass4
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass5: HitGlass5
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
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
				weapons[]={"master_arms_safe","M197","HellfireLauncher","SidewinderLaucher_AH1Z","Laserdesignator_mounted"};
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
				gunnerCanEject=1;
				stabilizedInAxes = 3;
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				maxhorizontalrotspeed = 3;
				maxverticalrotspeed = 3;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
				discreteDistanceInitIndex = 9;
				class OpticsIn {
				class Wide {
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					directionStabilized=0;
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
					directionStabilized=0;
					initfov = 0.093;
					maxfov = 0.093;
					minfov = 0.093;
					opticsdisplayname = "M";
				};
				class Narrow: Wide {
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					directionStabilized=0;
					initfov = 0.020;
					maxfov = 0.020;
					minfov = 0.020;
					opticsdisplayname = "N";
				};
					class Far: Wide
					{
						opticsDisplayName = "F";
						directionStabilized=0;
						initFov = 0.010;
						minFov = 0.010;
						maxFov = 0.010;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					
						};
			};
				class OpticsOut
				{
					class Monocular
					{
      					initAngleX = 10;
      					minAngleX = -75;
      					maxAngleX = 85;
      					initAngleY = 0;
      					minAngleY = -170;
      					maxAngleY = 170;
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
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
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
};
	class meu_UH1Y: Helicopter
	{
		destrType="DestructWreck";
		scope = 2;
		side=1;
		audible = 7;
		maximumLoad = 2500;
		AGM_FastRoping = 1;
		AGM_FastRoping_Positions[] = {{1.4, -0.15, 0.10}, {-1.4, -0.15, 0.10}};
		slingLoadMemoryPoint = "slingLoad";		
		slingLoadMaxCargoMass = 2500;
		model = "gunfighter\UH1Y\UH1Y.p3d";
		picture = "gunfighter\UI\picture_UH1Y_CA.paa";
		icon="gunfighter\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		cost=5000000;
		displayName = "UH1Y Venom";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		faction = "BLU_F";
		vehicleClass = "Air";
		availableForSupportTypes[] = {"CAS_Heli","Drop","Transport"};
		cargoCanEject = 1;
		driverCanEject = 1;
		getInRadius = 2.5;
		camouflage = 50;
		crewVulnerable = 1;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		driveOnComponent[] = {"Skids"};
		simulation = "helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "gunfighter\RTD_Heli_Light_02.xml";
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
			rtd_center = "rtd_center";
		};
		class Library
		{
		  	libTextDesc = "UH1Y";
		};
		fuelCapacity = 1200;
		fuelConsumptionRate = 0.138;
		selectionHRotorStill = "mala vrtule staticka";
		selectionHRotorMove = "mala vrtule blur";
		selectionVRotorStill = "velka vrtule staticka";
		selectionVRotorMove = "velka vrtule Blur";
		selectionDamage = "trup";

		maxSpeed = 280; 
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		driverRightHandAnimName = "stick";
		bodyFrictionCoef = 0.6;
		canBeShot = true;
		enableSweep = true;
		minGForce = 0.2;
		maxGForce = 2;
		washDownStrength = "1.0f";
		washDownDiameter = "40.0f";
		gForceShakeAttenuation = 0.5;
		cyclicasideforcecoef = 0.7;//banking
		cyclicforwardforcecoef = 1.0;//fowards backwards.
		frontRotorForceCoef = 1;//front rotor(strenth of lift)
		backRotorForceCoef = 0.5;//tailrotor(strength of horzontal movement=)
		liftForceCoef = 1.3;
		maxfordingdepth = 0.55;
		mainBladeRadius = 6.1;
		tailBladeRadius = 1.2;
  		mainBladeCenter = "velka vrtule";
  		tailBladeCenter = "mala vrtule";
		sensitivity = 3;
		sensitivityear = 3;
		accuracy=1;
		maxMainRotorDive = 0;
		minMainRotorDive = -0;
		mainrotordive = 0;
		backrotordive = 0;
		extCameraPosition[] = {0.5,2,-20};
		flapsFrictionCoef = 0.5;
		altFullForce = 5000;
		altNoForce = 10000;
		leftDustEffect = "vbs2_fx_lowTrackDustEffects";
		rightDustEffect = "vbs2_fx_lowTrackDustEffects";

		//end PhysX stuff

		commanderCanSee = "31";
		gunnerCanSee = "31";
		driverCanSee = "31";
		cargocansee = "31";
		turretcansee = "31";
		armor = 30;
		armorStructural = 1;
		damageResistance = 0.01039;
		epeImpulseDamageCoef = 20;
		weapons[]={"master_arms_safe","FFARLauncher_14","CMFlareLauncher"};
		magazines[]={"14Rnd_FFAR","240Rnd_CMFlare_Chaff_Magazine"};
		
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		memoryPointGun[] = {"machinegun","machinegun_2"};
		gunBeg[] = {"muzzle_1","muzzle_2"};
		gunEnd[] = {"chamber_1","chamber_2"};
		irScanGround=True;
		irScanRangeMin=2000;
		irScanRangeMax=8000;
		irScanToEyeFactor = 2;
		irTarget = true;
		nightVision=1;
		precision = 200;
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		LockDetectionSystem = "1 + 2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		precisegetinout = 1;
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		cargoGetInAction[] = {"GetInHelicopterCargo"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		driverAction="UH1Y_Pilot";
		driverInAction="UH1Y_Pilot";

		cargoAction[]={"UH1Y_Cargo02","UH1Y_Cargo03","UH1Y_Cargo03","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01"};
		cargoIsCoDriver[] = {0,0,0,0,0,0,0,0,0};

		gunnerUsesPilotView=false;
		gunnerOpticsModel = "";
		enableManualFire = 1;

		transportSoldier=1;
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
				count = 5;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
		initCargoAngleY= 10; // cargo viewing limitations
		minCargoAngleY= -60;
		maxCargoAngleY= 120;
		minFireTime=30;
		threat[]={1, 0.05, 0.05};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		cargoProxyIndexes[] = {5};
		class cargoturret;
		class Turrets: Turrets
		{
			class CoPilotObs: Mainturret
			{
				isCopilot = 1;
				gunnerCanEject = 1;
				CanEject = 1;
				gunnerName="Co-Pilot";
				gunnerAction="UH1Y_Gunner02";
				gunnerInAction="UH1Y_Gunner02";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				selectionFireAnim = "";
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				viewGunnerShadow = 1;
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
				turretCanSee = "31";
				animationSourceBody="ObsTurret";
				animationSourceGun="ObsGun";
				outGunnerMayFire = 1; //Engine assumes helicopter gunner is turned out.
				gunBeg="gun_end"; //gunBeg=endpoint of the gun
				gunEnd="gun_begin"; //gunEnd=chamber of the gun
				memoryPointGun="gun_end";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				commanding= -3;
				laser = 1;
				memoryPointGunnerOptics = "commanderview";
				gunnerCompartments = "Compartment2";
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};
				primaryGunner=0;
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
						visionMode[] = {"Normal","NVG","Ti"};
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
					class Far: Wide
					{
						opticsDisplayName = "F";
						initFov = 0.010;
						minFov = 0.010;
						maxFov = 0.010;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					
						};
					};
					class OpticsOut
					{
					class Monocular
					{
      					initAngleX = 10;
      					minAngleX = -75;
      					maxAngleX = 85;
      					initAngleY = 0;
      					minAngleY = -170;
      					maxAngleY = 170;
      					initFov = 1.1;
      					minFov = 0.133;
      					maxFov = 1.1;
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class MainTurret: MainTurret //Left Doorgun
			{
				CanEject = 1;
				isCopilot = 0;
				body="mainTurret";
				gun="mainGun";
				minElev=-60; maxElev=+30; initElev=-0;
				minTurn=-5; maxTurn=185; initTurn=0;
				soundServo[]={,db-40,1.0};
				selectionFireAnim="zasleh";
				animationSourceHatch="";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				gunnerCanEject = 1;
				weapons[]={"master_arms_safe","M134_minigun"};
				magazines[]={"5000Rnd_762x51_Belt"};
				gunnerName="Crew-Chief";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction="UH1Y_Gunner";
				gunnerInAction="UH1Y_Gunner";
				commanding= -2;
				turretCanSee = "31";
				primaryGunner=1;
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
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 0.75;
					visionMode[] = {};
				};
				class OpticsIn
				{
					class ViewOptics: ViewGunner
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
				};
				gunnerCompartments = Compartment2;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body="Turret2";
				gun="Gun_2";
				proxyIndex=2;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				selectionFireAnim="zasleh_1";
				gunnerName="DoorGunner";
				commanding=-3;
				minTurn=-180; maxTurn=0; initTurn=0;
				weapons[]={"master_arms_safe","M134_minigun_2"};
				gunBeg="muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd="chamber_2"; //gunEnd=chamber of the gun
				memoryPointGun="machinegun_2";
				memoryPointGunnerOptics="gunnerview_2";
				turretCanSee = "31";
				primaryGunner=0;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
			};
		class CargoTurret_01: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (BenchRight)";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 1;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = -60; /// what is the left-most possible turn of the turret
	minTurn = -120; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	};
		class CargoTurret_07: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (BenchLeft)";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 2;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = 120; /// what is the left-most possible turn of the turret
	minTurn = 60; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	};
		class CargoTurret_02: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (RL)";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 7;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = 38; /// what is the left-most possible turn of the turret
	minTurn = -40; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	};
		class CargoTurret_03: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (RR)";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 6;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = 45; /// what is the left-most possible turn of the turret
	minTurn = -30; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	};
		class CargoTurret_04: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (Left)";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 4;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = -20; /// what is the left-most possible turn of the turret
	minTurn = -88; /// what is the right-most possible turn of the turret
	isPersonTurret = 1; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	};
		class CargoTurret_06: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "passenger_inside_2"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunnerDir = "pos cargo dir"; /// direction of get in action
	gunnerName = "Passenger (Right)";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 3;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = 88; /// what is the left-most possible turn of the turret
	minTurn = 20; /// what is the right-most possible turn of the turret
	ejectDeadGunner = 0; /// seatbelts included
	};
};
				class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitEngine1: HitEngine
			{
				name = "engine_1_hit";
				convexComponent = "engine_1_hit";
			};
			class HitEngine2: HitEngine
			{
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitEngine3: HitEngine
			{
				name = "engine_3_hit";
				convexComponent = "engine_3_hit";
			};
			class HitAvionics
			{
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0;
			};
			class HitVRotor
			{
				armor = 0.3;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.3;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
			class HitMissiles
			{
				armor = 0.1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
			class HitRGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni P";
				visual = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni L";
				visual = "sklo predni L";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass5: HitGlass5
			{
				armor = 1.3;
				radius = 0.46;
				explosionShielding = 6;
			};
			class HitWinch
			{
				armor = 0.1;
				material = 51;
				name = "slingLoad";
				visual = "";
				passThrough = 0;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class Explo
					{
						simulation = "particles";
						type = "WinchDestructionExplo";
						position = "slingLoad";
						intensity = 1;
						interval = 1;
						lifeTime = 0.06;
					};
					class Sparks
					{
						simulation = "particles";
						type = "WinchDestructionSparks";
						position = "slingLoad";
						intensity = 1;
						interval = 1;
						lifeTime = 0.1;
					};
				};
			};
			class HitTransmission
			{
				armor = 0.8;
				material = -1;
				name = "transmission";
				passThrough = 0.8;
			};
			class HitLight
			{
				armor = 0.1;
				material = -1;
				name = "light";
				passThrough = 0;
			};
			class HitHydraulics
			{
				armor = 0.8;
				material = -1;
				name = "hydraulics";
				passThrough = 0.8;
			};
			class HitGear
			{
				armor = 0.9;
				material = -1;
				name = "gear";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.4;
				material = -1;
				name = "fuel tanks";
				passThrough = 0.5;
			};
			class HitHStabilizerL1
			{
				armor = 0.8;
				material = -1;
				name = "HStabilizerL1";
				passThrough = 1;
			};
			class HitHStabilizerR1
			{
				armor = 0.8;
				material = -1;
				name = "HStabilizerR1";
				passThrough = 1;
			};
			class HitVStabilizer1
			{
				armor = 0.8;
				material = -1;
				name = "VStabilizer1";
				passThrough = 1;
			};
			class HitTail
			{
				armor = 0.8;
				material = -1;
				name = "tail boom";
				passThrough = 1;
			};
			class HitPitotTube
			{
				armor = 0.5;
				material = -1;
				name = "pitot tube";
				passThrough = 0.2;
			};
			class HitStaticPort
			{
				armor = 0.1;
				material = -1;
				name = "static port";
				passThrough = 1;
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
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				blinking = "false";
				intensity = 80;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class WhiteStill: RedStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 80;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class GreenStill: RedStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				blinking = "false";
				intensity = 80;
			};
			class WhiteBlinking: RedStill
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				intensity = 90;
			};
			class RedBlinking: RedStill
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
				intensity = 90;
			};
		};
		class Reflectors
		{
			class Middle
			{
				position = "gun_begin";
				direction = "gun_end";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				intensity = 100000;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				flareMaxDistance = 300;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 5;
					quadratic = 2;
					hardLimitStart = 400;
					hardLimitEnd = 500;
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
		insideSoundCoef = 0.09;
		attenuationEffectType = "HeliAttenuation";
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
		soundDammage[] = {"Gunfighter\sounds\alarm_loop1",0.31622776,1};
		soundGetIn[] = {"Gunfighter\Sounds\heli_door_01",0.31622776,1};
		soundGetOut[] = {"Gunfighter\Sounds\heli_door_02",0.31622776,1,40};
		soundEnviron[] = {"","db-30",1.0};
		soundEngineOnInt[] = {"Gunfighter\sounds\UHint\int-start-final",0.8466836,1.0};
		soundEngineOnExt[] = {"Gunfighter\sounds\UHext\ext-motor-start",1.7466836,1.0,700};
		soundEngineOffInt[] = {"Gunfighter\sounds\UHint\int-stop-final",0.8466836,1.0};
		soundEngineOffExt[] = {"Gunfighter\sounds\UHext\ext-motor-stop",1.7466836,1.0,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",3.0,1.0,2};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",3.0,1.0,2};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1.0,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
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
				sound[] = {"Gunfighter\sounds\UHext\uh1y",2.5118864,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"Gunfighter\sounds\UHint\int-rotor-single5b",1.4118864,1.0,1400};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorNoiseExt
			{
				sound[] = {"Gunfighter\sounds\UHint\int-rotor-single5a",2.5118864,1.0,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineInt
			{
				sound[] = {"Gunfighter\sounds\UHext\uh1y",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"Gunfighter\sounds\UHint\int-rotor-single5b",1.0,1.0};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
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
				sound[] = {"Gunfighter\sounds\UHext\uh1y",2.5118864,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"Gunfighter\sounds\UHint\int-rotor-single5b",1.4118864,1.0,1400};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorNoiseExt
			{
				sound[] = {"Gunfighter\sounds\UHint\int-rotor-single5a",2.5118864,1.0,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineInt
			{
				sound[] = {"Gunfighter\sounds\UHext\uh1y",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"Gunfighter\sounds\UHint\int-rotor-single5b",1.0,1.0};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
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
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;

	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\gunfighter\ah1z\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "\gunfighter\ah1z\AIM9XSidewinder"; 
		simulation = "maverickweapon";
	};
};