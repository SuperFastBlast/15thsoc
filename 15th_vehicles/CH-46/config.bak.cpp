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

//add start
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ChopperHeavy_R_static_H = "ChopperHeavy_R_static_H";
		ChopperHeavy_L_Static_H = "ChopperHeavy_L_Static_H";
		ChopperHeavy_LP_Static_H = "ChopperHeavy_LP_Static_H";
		ChopperHeavy_R_GetOut_H = "ChopperHeavy_R_GetOut_H";
		ChopperHeavy_R_GetIn_H = "ChopperHeavy_R_GetIn_H";
		ChopperHeavy_L_GetOut_H = "ChopperHeavy_L_GetOut_H";
		ChopperHeavy_L_GetIn_H = "ChopperHeavy_L_GetIn_H";
		chopperheavy_Lux_getout_H = "chopperheavy_Lux_getout_H";
		ChopperHeavy_Lux_GetIn_H = "ChopperHeavy_Lux_GetIn_H";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class KIA_ChopperHeavy_R_01_H: DefaultDie
		{
			actions = "DeadActions";
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death1.rtm";
			speed = 0.769231;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class KIA_chopperHeavy_R_02_H: KIA_ChopperHeavy_R_01_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death2.rtm";
			speed = 0.625;
		};
		class KIA_chopperHeavy_R_03_H: KIA_ChopperHeavy_R_01_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death3.rtm";
			speed = 0.652174;
		};
		class KIA_chopperHeavy_L_01_H: KIA_ChopperHeavy_R_01_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\L\death1.rtm";
			speed = 0.769231;
		};
		class KIA_chopperHeavy_L_02_H: KIA_ChopperHeavy_R_01_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\L\death2.rtm";
			speed = 0.625;
		};
		class KIA_chopperHeavy_LP_01_H: KIA_ChopperHeavy_R_01_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\death1.rtm";
			speed = 0.441176;
		};
		class KIA_chopperHeavy_LP_02_H: KIA_ChopperHeavy_R_01_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\death2.rtm";
			speed = 0.652174;
		};
		class KIA_chopperHeavy_LP_03_H: KIA_ChopperHeavy_R_01_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\death3.rtm";
			speed = 0.769231;
		};
		class Crew;
		class ChopperHeavy_R_Static_H: Crew
		{
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\static.rtm";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_ChopperHeavy_R_01_H",1,"KIA_chopperHeavy_R_02_H",1,"KIA_chopperHeavy_R_03_H",1};
		};
		class ChopperHeavy_L_Static_H: Crew
		{
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\L\static.rtm";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_ChopperHeavy_L_01_H",1,"KIA_chopperHeavy_L_02_H",1};
		};
		class ChopperHeavy_LP_Static_H: Crew
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\static.rtm";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_ChopperHeavy_LP_01_H",1,"KIA_chopperHeavy_LP_02_H",1,"KIA_chopperHeavy_LP_03_H",1};
		};
		class AmovPercMstpSnonWnonDnon;
		class ChopperHeavy_R_GetIn_H: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[] = {};
			actions = "CivilStandActions";
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\R_GetIn.rtm";
			speed = 0.5;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			canPullTrigger = 0;
			connectTo[] = {};
			interpolateTo[] = {};
			collisionShape = "A3\anims_f\data\geom\sdr\geom_empty.p3d";
			head = "headNo";
			headBobMode = 1;
			headBobStrength = -1.0;
		};
		class ChopperHeavy_R_GetOut_H: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[] = {};
			actions = "CivilStandActions";
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\R_GetOut.rtm";
			speed = 0.5;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			canPullTrigger = 0;
			connectTo[] = {};
			interpolateTo[] = {};
			collisionShape = "A3\anims_f\data\geom\sdr\geom_empty.p3d";
			head = "headNo";
			headBobMode = 1;
			headBobStrength = -1.0;
		};
		class ChopperHeavy_L_GetIn_H: ChopperHeavy_R_GetIn_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\L_GetIn.rtm";
		};
		class ChopperHeavy_L_GetOut_H: ChopperHeavy_R_GetOut_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\L_GetOut.rtm";
		};
		class ChopperHeavy_Lux_GetIn_H: ChopperHeavy_R_GetIn_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\Lux_GetIn.rtm";
		};
		class ChopperHeavy_Lux_GetOut_H: ChopperHeavy_R_GetOut_H
		{
			file = "\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\Lux_GetOut.rtm";
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ChopperHeavy_R_static_H = "crew";
		ChopperHeavy_L_Static_H = "crew";
		ChopperHeavy_LP_Static_H = "crew";
		ChopperHeavy_C_Straight_static_H = "crew";
		ChopperHeavy_R_GetOut_H = "crew";
		ChopperHeavy_R_GetIn_H = "crew";
		ChopperHeavy_L_GetOut_H = "crew";
		ChopperHeavy_L_GetIn_H = "crew";
		chopperheavy_Lux_getout_H = "crew";
		ChopperHeavy_Lux_GetIn_H = "crew";
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
		};
	};
	class Helicopter_Base_F: Helicopter
	{
	
	};
	class Helicopter_Base_H: Helicopter_Base_F
{
	class ViewOptics;
		class HitPoints;
		class Sounds;
		class AnimationSources;
		class turrets;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
	class RotorLibHelicopterProperties;
	};
	class meu_CH46_SeaKnight: Heli_Transport_01_base_F
	{
		_generalmacro = "CH46_SeaKnight";
		displayName = "CH-46 SeaKnight";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "Air";
		accuracy = 0.5;
		model = "\CH-46\meu_CH46";
		scope = 2;
		_mainbladecenter = "Rotor_selection";
		simulation = "helicopterX";
		maxSpeed = 267;
		fuelCapacity = 2500;
		maxfordingdepth = 0.5;
		sensitivity = 2.5;
		wheelCircumference = 1;
		selectionHrotormove = "velka vrtule blur";
		selectionHrotorstill = "velka vrtule staticka";
		selectionVrotormove = "mala vrtule blur";
		selectionVrotorstill = "mala vrtule staticka";
		//picture = "\caf_chinook\data\Picture_ch47f_CA.paa";
		//icon = "\caf_chinook\data\Icon_ch47f_CA.paa";
		mapSize = 5;
		crew = "C_man_pilot_F";
		typicalCargo[] = {"C_man_pilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		driveOnComponent[] = {"Wheel_1_1","Wheel_2_2","Wheel_2_1"};
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		castDriverShadow = 0;
		viewCargoShadow = 0;
		transportSoldier = 24;
		//rotor stuff/physX
		memoryPointSupply = "Rotor_selection";
		mainRotorSpeed = 1;
		backRotorSpeed = 0.5;
		waterleakiness = 100;
		waterresistance = 1;
		watereffect = "HeliWater";
		maxelev = 3000;
		maxhorizontalrotspeed = 5;
		maxverticalrotspeed = 5;
		envelope[] = {0,0.2,0.9,2.1,2.5,3.3,3.5,3.6,3.7,3.8,3.8,3,0.9,0.7,0.5};
		armor = 150;
		backBladeRadius = 6;
		mainBladeRadius = 6;
		maxMainRotorDive = 0;
		minMainRotorDive = 0;
		minBackRotorDive = 0;
		maxBackRotorDive = 0;
		neutralMainRotorDive = 0;
		neutralBackRotorDive = 0;
		bodyFrictionCoef = 1;
		cyclicasideforcecoef = 0.2;
		cyclicaforwardforcecoef = 0.5;
		liftForceCoef = 1;
		extCameraPosition[] = {0,6,-23};
		washDownStrength = "6f";
		washDownDiameter = "40.0f";
		altFullForce = 3000;
		damageResistance = 0.1;
		destrType = "DestructWreck";
		memoryPointsGetInCargo[] = {"pos cargo1","pos cargo2","pos cargo3","pos cargo4","pos cargo5","pos cargo6","pos cargo7","pos cargo8"};
		memoryPointsGetInCargoDir[] = {"pos cargo1 dir","pos cargo2 dir","pos cargo3 dir","pos cargo4 dir","pos cargo5 dir","pos cargo6 dir","pos cargo7 dir","pos cargo8 dir"};
		getInRadius = 30;
		getinaction = "GetInLow";
		getoutaction = "GetOutLow";
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		//flares
		memorypointcm[] = {"flareL", "flareR"};
		memorypointcmdir[] = {"flareR_dir", "flareL_dir"};
		transportMaxBackpacks = 10;
		maximumLoad = 4000;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = 2;
		IncommingMisslieDetectionSystem = 16;
		radarType = 4;
		enableManualFire = 0;
		threat[] = {0.6,0.1,0};
		//reflectors
		class Reflectors
		{
			class Right
			{
				ambient[] = {70,75,100};
				color[] = {7000,7500,10000};
				conefadecoef = 10;
				daylight = 0;
				direction = "Light_R_end";
				flaresize = 4;
				hitpoint = "Light_R";
				innerangle = 5;
				intensity = 50;
				outerangle = 75;
				position = "Light_R";
				selection = "Light_R";
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
		};

		//wheels
		class Wheels
		{
			class FrontWheel
			{
				boneName = "wheels";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
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
				dampingRateInAir = 0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
			};
			class BackWheelR
			{
				boneName = "wheels";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
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
				dampingRateInAir = 0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
			};
			class BackWheelL: BackWheelR
			{
				boneName = "wheels";
				center = "wheel_2_2_axis";
				boundary = "wheel_2__bound";
			};
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
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
		class HitPoints: HitPoints {
			class HitHull {
				armor = .15;
				explosionshielding = 1;
				material = 51;
				name = "NEtrup";
				passthrough = .30;
				visual = "trup";
			};
			class HitEngine {
				armor = 0.25;
				explosionshielding = 1;
				material = 51;
				name = "motor";
				passthrough = 1;
				visual = "motor";
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
				armor = 0.3;
				explosionshielding = 1;
				material = 51;
				name = "backRotor";
				passthrough = 0.3;
				visual = "tailrotorstatic";
			};
			class HitHRotor {
				armor = 0.2;
				explosionshielding = 1;
				material = 51;
				name = "frontRotor";
				passthrough = 0.1;
				visual = "mainrotorstatic";
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
				material = 51;
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
				visual = "zbytek";
			};
		};		
			
		

		
			class AnimationSources
		{
			class ramp{source="user"; animPeriod=2;initPhase=0;};
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
		class HitHRotor {
			hitpoint = "frontRotor";
			raw = 1;
			source = "hit";
		};
		class HitVRotor {
			hitpoint = "backRotor";
			raw = 1;
			source = "hit";
		};
		class HitEngine {
			hitpoint = "motor";
			raw = 1;
			source = "hit";
		};
		class HitEngine2 {
			hitpoint = "motor";
			raw = 1;
			source = "hit";
		};
		class HitBatteries {
			hitpoint = "HitBatteries";
			raw = 1;
			source = "hit";
		};
		class HitFuel {
			hitpoint = "HitFuel";
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
				condition=true;
				statement="this animate [""ramp"",1];";
			};
			class RampClose
			{
				displayName="Close rear ramp";
				displayNameDefault="Close rear ramp";
				position=cargo_door_handle;
				radius=6;
				onlyForPlayer=true;
				condition=true;
				statement="this animate [""ramp"",0];";
			};
		};
		
		
		
		
		
  }; 
};  