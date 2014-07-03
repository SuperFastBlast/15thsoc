
#include "Crewanimations.hpp"
#include "weaponDefs.hpp"

class CfgPatches
{
	class HAFM_ArmA2_Helis
	{
		units[] ={"AH1Z"};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
	};
};



class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewPilot;
	};
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class AnimationSources;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
	};
	class PlaneWreck;
	class HelicopterWreck;

	class AH1Z: Helicopter
	{
		selectionHRotorStill = "mainRotorStatic";
		selectionHRotorMove = "mainRotorBlurred";
		selectionVRotorStill = "tailRotorStatic";
		selectionVRotorMove = "tailRotorBlurred";
		//Adding PhysX stuff here
		bodyFrictionCoef = 1;
		cyclicasideforcecoef = 2;//banking
		cyclicforwardforcecoef = 2.5;//fowards backwards.
		frontRotorForceCoef = 3;//front rotor(strenth of lift)
		backRotorForceCoef = 2;//tailrotor(strength of horzontal movement=)
		simulation = "HelicopterX";
		liftForceCoef = 1.1;
		maxfordingdepth = 1;
		sensitivity = 3;
		sensitivityear = 3;
		limitedspeedcoef = 0.22;
		mainrotordive = 2;
		backrotordive = 2;
		extCameraPosition[] = {0,6,-18};
		
		
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

		selectionFireAnim = "muzzleflash";
		
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		LockDetectionSystem = "1 + 8 + 4";
		incomingMissileDetectionSystem = 16;

		hiddenSelectionsTextures[] = {"gunfighter\ah1z\data\ah1z_body_co.paa","gunfighter\ah1z\data\ah1z_engines_co.paa"};
		
		//--
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
	

		maxSpeed = 270;
		typicalCargo[]={"B_Helipilot_F", "B_Helipilot_F"};
		driverCompartments = "Compartment1";

		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Heli_Attack_01\close",1.0,1};
		soundGetOut[] = {"A3\Sounds_F\air\Heli_Attack_01\open",1.0,1,50};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_int_start",0.56234133,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_ext_start",0.7943282,1.0,600};
		soundEngineOffInt[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_int_stop",0.56234133,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_ext_stop",0.7943282,1.0,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_ext_engine",2.2387211,1.0,900};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_ext_rotor",1.4125376,1.0,1200};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_ext_rotor_high",1.7782794,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class EngineIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_int_engine",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_int_rotor",1.1220185,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Attack_01\Heli_Attack_01_int_rotor_high",1.4125376,1.0};
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
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
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
		
		class HitPoints:HitPoints
		{
			//class HitGlass2 {armor=0.5;};
			//class HitGlass3 {armor=0.5;};
			//class HitGlass4 {armor=0.5;};
			//class HitGlass5 {armor=0.5;};
		};
		
		armor=60;
		damageResistance = 0.00593;
		cost=10000000;
		model="gunfighter\ah1z\ah1z.p3d";
		picture = "gunfighter\ui\ah1z_CA";
		mapSize = 15.5;
		Icon="gunfighter\ui\icomap_ah1z_CA";
		weapons[]={"FFARLauncher","CMFlareLauncher"};
		magazines[]={"38Rnd_FFAR","240Rnd_CMFlare_Chaff_Magazine"};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "AH1Z_Gunner";
				gunnerCompartments = "Compartment2"; // cannmot switch to pilot
				weapons[]={"M197","HellfireLauncher","SidewinderLaucher_AH1Z",};
				magazines[]={"750Rnd_M197_AH1","8Rnd_Hellfire","2Rnd_Sidewinder_AH1Z",};
				memoryPointsGetInGunner= "pos_gunner";
				memoryPointsGetInGunnerDir= "pos_gunner_dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				memoryPointGun = "machinegun";
				laserscanner = 1;
				minElev=-60; maxElev=+10; initElev=0;
				minTurn=-70; maxTurn=+70; initTurn=0;
				gunnerOpticsModel = "";
				turretInfoType = "RscOptics_Heli_Attack_02_gunner";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 2;
				enableManualFire = 1;
				class OpticsIn {
				class Wide {
					gunneropticsmodel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
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
					gunneropticsmodel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					initfov = 0.093;
					maxfov = 0.093;
					minfov = 0.093;
					opticsdisplayname = "M";
				};
				class Narrow: Wide {
					gunneropticsmodel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					initfov = 0.029;
					maxfov = 0.029;
					minfov = 0.029;
					opticsdisplayname = "N";
				};
			};
			
			};
		};

		threat[]={0.3, 1, 0.8};
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
		laserScanner = true;

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
		destrType="DestructWreck";

	};
	class AH1ZWreck: HelicopterWreck
	{
		scope = 1;
		class Armory {disabled = 1;}
		model = "gunfighter\ah1z\AH1ZWreck.p3d";
		typicalCargo[]={};
		irTarget = false;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 2;
		class Eventhandlers{};
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "gunfighter\ah1z\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "gunfighter\ah1z\AIM9XSidewinder"; 
		simulation = "maverickweapon";
	};
	};
