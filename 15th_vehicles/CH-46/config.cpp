#include "Mounted_weapons.hpp"
enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};
class CfgPatches
{
	class meu_CH46
	{
		units[] = {"meu_CH46"};
		weapons[] = {};
		requiredVersion = 0.7;
		requiredAddons[] = {};
	};
};


class CfgVehicles
{   class Air;
	class Helicopter: Air
	{
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitEngine2;

		};
		class Turrets;
	};
	class Helicopter_Base_F:Helicopter 
	{
		class Turrets : Turrets
		{
			class MainTurret;
			class NewTurret;
		};
		
	};
	
	class Helicopter_Base_H: Helicopter_Base_F
{
		class ViewOptics;
		class HitPoints;
		class Sounds;
		class AnimationSources;
		class Eventhandlers;
		class Turrets : Turrets
		{
			class MainTurret;
			class CopilotTurret;
		};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
	class RotorLibHelicopterProperties;
		class Turrets : Turrets
		{
			class MainTurret:MainTurret
			{
			};
			class CopilotTurret:CopilotTurret
			{
			};
		};
	};
	

	class B_Heli_Transport_01_F:Heli_Transport_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret:MainTurret
			{
			};
			class CopilotTurret:CopilotTurret
			{
			};
		};
	};
	class B_Heli_Transport_01_camo_F:B_Heli_Transport_01_F
	{
		class Turrets : Turrets
		{
			class MainTurret:MainTurret
			{
			};
			class CopilotTurret:CopilotTurret
			{
			};
		};	
	};
	class HelicopterWreck;
	class meu_CH46_SeaKnight: B_Heli_Transport_01_camo_F
	{
		_generalmacro = "CH46_SeaKnight";
		displayName = "CH-46 SeaKnight";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "Air";
		accuracy = 0.5;
		model = "\CH-46\meu_CH46";
		scope = 2;
		_mainbladecenter = "velka vrtule blur";
		simulation = "helicopterX";
		maxSpeed = 267;
		fuelCapacity = 2500;
		maxfordingdepth = 0.5;
		sensitivity = 0.1;
		sensitivityear = 0.003;
		limitedspeedcoef = 0.22;
		wheelCircumference = 3;
		selectionHrotormove = "velka vrtule blur";
		selectionHrotorstill = "velka vrtule staticka";
		selectionVrotormove = "mala vrtule blur";
		selectionVrotorstill = "mala vrtule staticka";
		//picture = "\caf_chinook\data\Picture_ch47f_CA.paa";
		//icon = "\caf_chinook\data\Icon_ch47f_CA.paa";
		mapSize = 10;
		crew = "C_man_pilot_F";
		typicalcargo[] = {"Soldier"};
		driverAction = "pilot_Heli_Transport_01";
		driveOnComponent[] = {"Wheel_1_1","Wheel_2_2","Wheel_2_1"};
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		memorypointsgetingunner = "pos codriver";
		memorypointsgetingunnerdir = "pos codriver dir";
		cargocompartments[] = {"Compartment1"};
		cargoaction[] = {"passenger_mantisrear"};
		cargocaneject = 1;
		cargodoors[] = {"Ramp"};
		cargogetinaction[] = {"GetInLow"};
		cargogetoutaction[] = {"GetOutLow"};
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		castDriverShadow = false;
		viewCargoShadow = false;
		getinoutonproxy = true;
		transportSoldier = 21;

	
		class Turrets:Turrets
		{
			class CopilotTurret:CopilotTurret
			{
				memorypointsgetingunner = "pos codriver";
				memorypointsgetingunnerdir = "pos codriver dir";
			};
			
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body="mainGun";
				gun="mainTurret";
				animationSourceBody="MainGun";
				animationSourceGun="Turret";
				minElev=-60; maxElev=+30; 
				minTurn=-173; maxTurn=-3;
				soundServo[]={,db-40,1.0};
				stabilizedInAxes = "StabilizedInAxesNone";
				weapons[]={"M240_veh"};
				magazines[]={"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunBeg = "muzzle"; //gunBeg = endpoint of the gun
				gunEnd = "chamber"; //gunEnd = chamber of the gun
				gunnerName="DoorGunner";
				memorypointsgetingunner = "pos codriver";
				memorypointsgetingunnerdir = "pos codriver dir";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				commanding=-3;
				primaryGunner=0;
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				gunnerCompartments = "Compartment1";
					
			};
			class LeftDoorGun: MainTurret
			{
				isCopilot = 0;
				body="Gun_2";
				gun="Turret_2";
				animationSourceBody="Gun_2";
				animationSourceGun="Turret_2";
				weapons[]={"M240_veh_2"};
				magazines[]={"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunBeg = "muzzle_2"; //gunBeg = endpoint of the gun
				gunEnd = "chamber_2"; //gunEnd = chamber of the gun
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memorypointsgetingunner = "pos codriver";
				memorypointsgetingunnerdir = "pos codriver dir";
				proxyIndex=2;
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=0;
				memoryPointGunnerOptics="gunnerview_2";
				selectionFireAnim="zasleh_1";
				gunnerName="CrewChief";
				commanding=-2;
				minElev=-50; maxElev=+30; 
				minTurn=3; maxTurn=173; 
				primaryGunner=1;
			};
		};
	
		
		//rotor stuff/physX
		memoryPointSupply = "Rotor_selection";
		mainRotorSpeed = 1;
		backrotorspeed = 1;
		waterleakiness = 100;
		waterresistance = 100;
		watereffect = "HeliWater";
		maxelev = 3000;
		frontRotorForceCoef = 1;//front rotor
		backRotorForceCoef = 1;//tailrotor
		maxhorizontalrotspeed = -0.5;
		maxverticalrotspeed = 0.1;
		envelope[] = {3.8,0.2,0.9,2.1,2.5,3.3,3.5,3.6,3.7,3.8,3.8,3,0.9,0.7,0.5};
		armor = 50;
		rudderInfluence = 0.01;
		backBladeRadius = 6;
		mainBladeRadius = 6;
		bodyFrictionCoef = 1.5;
		cyclicasideforcecoef = 0.29;//banking
		cyclicaforwardforcecoef = 0.5;//fowards backwards.
		liftForceCoef = 1;
		minSmokeDamage = 0.4;
		maxSmokeDamage = 0.99;
		precisegetinout = 1;
		//extCameraPosition[] = {0,6,-23};
		washDownStrength = "10f";
		washDownDiameter = "60f";
		altFullForce = 3000;
		damageResistance = 0.1;
		destrType = "DestructWreck";
		memoryPointsGetInCargo[] = {"pos cargo1"};
		memoryPointsGetInCargoDir[] = {"pos cargo1 dir","pos cargo2 dir","pos cargo3 dir","pos cargo4 dir","pos cargo5 dir","pos cargo6 dir"};
		getInRadius = 5;
		getinaction = "GetInLow";
		getoutaction = "GetOutLow";
		driverLeftHandAnimName = "stick_pilot";
		driverRightHandAnimName = "lever_pilot";
		//flares
		memorypointcm[] = {"flareL", "flareR"};
		memorypointcmdir[] = {"flareR_dir", "flareL_dir"};
		transportMaxBackpacks = 10;
		maximumLoad = 4000;
		insidesoundcoef = 0.5;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = 2;
		IncommingMisslieDetectionSystem = 16;
		radarType = 4;
		enableManualFire = 0;
		threat[] = {0.6,0.1,0};
		//reflectors
		/*
		class Reflectors
		{
			//spot light
			class Spot
			{
				ambient[] = {70,75,100};
				color[] = {7000,7500,10000};
				conefadecoef = 10;
				daylight = 0;
				direction = "spot_dir";
				flaresize = 4;
				hitpoint = "spotLightHit";
				innerangle = 5;
				intensity = 50;
				outerangle = 75;
				position = "spotLight";
				selection = "spotLight";
				size = 1;
				useflare = 1;
				class Attenuation
				{
					constant = 0;
					hardlimitend = 250;
					hardlimitstart = 200;
					linear = 1;
					quadratic = 0;
					start = 0;
				};
			};
			class Left {
				ambient[] = {70, 75, 100};
				color[] = {7000, 7500, 10000};
				conefadecoef = 10;
				daylight = 0;
				direction = "reflector_L_dir";
				flaremaxdistance = 250;
				flaresize = 10;
				hitpoint = "light_L";
				innerangle = 15;
				intensity = 50;
				outerangle = 65;
				position = "reflector_L";
				selection = "reflector_L";
				size = 1;
				useflare = 1;
				class Attenuation {
					constant = 0;
					hardlimitend = 200;
					hardlimitstart = 100;
					linear = 1;
					quadratic = 1;
					start = 0;
				};
			};
			class Right: Left {
				ambient[] = {70, 75, 100};
				color[] = {7000, 7500, 10000};
				conefadecoef = 10;
				daylight = 0;
				direction = "reflector_R_dir";
				flaremaxdistance = 250;
				flaresize = 10;
				hitpoint = "light_r";
				innerangle = 15;
				intensity = 50;
				outerangle = 65;
				position = "reflector_R";
				selection = "reflector_R";
				size = 1;
				useflare = 1;
				class Attenuation {
					constant = 0;
					hardlimitend = 200;
					hardlimitstart = 100;
					linear = 1;
					quadratic = 1;
					start = 0;
				};
			};			
		};
		*/
		
		//wheels
		/*class Wheels
		{
			class FrontWheel
			{
				boneName = "wheel_1_1";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				damping = 75.0;
				steering = false;
				side = "left";
				weight = 150;
				mass = 20;
				MOI = 10;
				latStiffX = 25;
				latStiffY = 180;
				maxBrakeTorque = 10000;
				sprungMass = 2066;
				dampersBumpCoef = 0.3;
				springStrength = 800;
				springDamperRate = 800;
				dampingRate = 1.0;
				dampingRateInAir = 0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.3;
				maxCompression = 0.18;
				suspTravelDirection[] = {0, -1, 0};
			};
			class BackWheelR
			{
				boneName = "wheel_2_1";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				damping = 75.0;
				steering = False;
				side = "right";
				weight = 150;
				mass = 20;
				MOI = 10;
				latStiffX = 25;
				latStiffY = 180;
				maxBrakeTorque = 10000;
				sprungMass = 2066;
				dampersBumpCoef = 0.3;
				springStrength = 800;
				springDamperRate = 800;
				dampingRate = 1.0;
				dampingRateInAir = 0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
				suspTravelDirection[] = {0, -1, 0};
			};
			class BackWheelL: BackWheelR
			{
				side = "left";
				boneName = "wheel_2_2";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
			};
		};*/
		class RotorLibHelicopterProperties
		{
			RTDconfig = "\CH-46\maps\Heavy-GenHeli600-DesktopSim.xml";
			hasAPU = 1;
			APUOn = 5;
			APUOff = 5;
			starterTime = 6;
			throttleOffToIdle = 15;
			throttleIdleToOff = 18;
			throttleIdleToFull = 12;
			throttleFullToIdle = 20;
			autoHoverCorrection[] = {5,4,0};
			retreatBladeStallWarningSpeed = 92.583;
			maxhorizontalstabilizerleftstress = 8000;
			maxhorizontalstabilizerrightstress = 8000;
			maxmainrotorstress = 100000;
			maxtailrotorstress = 8000;
			maxtorque = 800;
			maxverticalstabilizerstress = 8000;
			rtd_center = "rtd_center";
			stressdamagepersec = 0.01;	
		};
		
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Heli_Light_02\open",1.0,1};
		soundGetOut[] = {"A3\Sounds_F\air\Heli_Light_02\close",1.0,1,50};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"A3\Sounds_F\air\Heli_Light_02\crash",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2",0.56234133,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2",0.7943282,1.0,600};
		soundEngineOffInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2",0.56234133,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2",0.7943282,1.0,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.1,1.5};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		class Sounds
		{
			class Engine
			{
				sound[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_engine",1.4125376,1.0,900};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_rotor_normal",1.4125376,1.0,1200};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_rotor_high",1.5848932,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\rotor_swist",0.70794576,1,800};
				frequency = 1;
				volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[] = {0.7,1.3,1.0,0};
			};
			class EngineIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_engine",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_rotor_normal",1.2589254,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_rotor_high",1.2589254,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};
		
		//class HitPoints;
		class HitPoints {
			class HitHull {
				armor = .3;
				explosionshielding = 1;
				material = 51;
				name = "HitHull";
				passthrough = .30;
				visual = "Compartment1";
			};
			class HitEngine {
				armor = 0.25;
				explosionshielding = 1;
				material = 51;
				name = "Fengi";
				passthrough = 1;
				visual = "Compartment1";
			};
			class HitEngine2:HitEngine {
				armor = 0.25;
				name = "Bengi";
				source = "hit";
				explosionshielding = 1;
				passthrough = 1;
				visual = "compartment1";
			};
			class HitAvionics {
				armor = 0.15;
				explosionshielding = 1;
				material = 51;
				name = "elektronika";
				passthrough = 1;
				visual = "elektronika";
			};

			class HitVRotor {
				armor = 0.2;
				explosionshielding = 0;
				material = -1;
				radius = 1;// add/test this for the Rotor issue
				name = "mala vrtule blur";
				passthrough = 0;
				visual = "mala vrtule blur";
			};
			class HitHRotor {
				armor = 0.3;
				radius = 1;
				explosionshielding = 0;
				material = -1;
				name = "velka vrtule blur";
				passthrough = 0;
				visual = "velka vrtule blur";
			};

			class HitRGlass {
				armor = 0.1;
				convexcomponent = "glassL";
				explosionshielding = 1;
				material = 51;
				name = "glassL";
				passthrough = 0;
				visual = "glassL";
			};
			class HitLGlass {
				armor = 0.1;
				convexcomponent = "glassL";
				explosionshielding = 1;
				material = 1;
				name = "glassL";
				passthrough = 0;
				visual = "glassL";
			};
			class HitGlass1 {
				armor = 2;
				material = -1;
				name = "glass1";
				passthrough = 0;
				visual = "glass1";
			};
			class HitGlass2 {
				armor = 2;
				material = -1;
				name = "glass2";
				passthrough = 0;
				visual = "glass2";
			};
			class HitGlass3 {
				armor = 2;
				material = -1;
				name = "glass3";
				passthrough = 0;
				visual = "glass3";
			};
			class HitGlass4 {
				armor = 2;
				material = -1;
				name = "glass4";
				passthrough = 0;
				visual = "glass4";
			};
			class HitGlass5 {
				armor = 2;
				material = -1;
				name = "glass5";
				passthrough = 0;
				visual = "glass5";
			};
			class HitGlass6 {
				armor = 2;
				material = -1;
				name = "glass6";
				passthrough = 0;
				visual = "glass6";
			};
			class HitFuel: HitHull {
				armor = 1;
				explosionshielding = 1;
				material = 51;
				name = "fuel";
				passthrough = 1;
				visual = "fuel";
			};
		};	
			
		
		class Eventhandlers
		{
			init = "_this execVM ""\CH-46\scripts\fastrope.sqf""";
		};		
		
			class AnimationSources
		{

			class ramp
			{source="user"; animPeriod=2;initPhase=0;};
			class AddCargoHook {
			animperiod = "1e-007";
			initphase = 0;
			iscomponent = 1;
			source = "user";
		};
		class AddCargoHook_COver {
			animperiod = "1e-007";
			initphase = 1;
			iscomponent = 1;
			source = "user";
		};
		//Rotors
			class HitHRotor {
			hitpoint = "HitHRotor";
			raw = 1;
			source = "hit";
		};
		class HitVRotor {
			hitpoint = "HitVRotor";
			raw = 1;
			source = "hit";
		};
	};
		
		              class UserActions
                {
                        class RampOpen
                        {
                                displayName="Open rear ramp";
                                displayNameDefault="Open rear ramp";
                                position=cargo_door_handle;
                                radius=6;
                                onlyForPlayer=true;
                                condition="this animationPhase ""ramp"" < 0.5 && alive(this) && driver this == player";
                                statement="this animate [""ramp"",1];";
                        };
                        class RampClose
                        {
                                displayName="Close rear ramp";
                                displayNameDefault="Close rear ramp";
                                position=cargo_door_handle;
                                radius=6;
                                onlyForPlayer=true;
                                condition="this animationPhase ""ramp"" > 0.5 && alive(this) && driver this == player";
                                statement="this animate [""ramp"",0];";
                        };
                };
		
		
		
		
  }; 
};  