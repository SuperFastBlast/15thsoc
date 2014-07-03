
#include "Crewanimations.hpp"
#include "weaponDefs.hpp"

class CfgPatches
{
	class meu_UH1Y
	{
		units[] ={"meu_UH1Y"};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
	};
};



class CfgVehicles
{
	class AllVehicles;
	class thingX;
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
	class meu_UH1Y: Helicopter
	{
		destrType="DestructWreck";
		scope = 2;
		side=1;
		model = "gunfighter\UH1Y\UH1Y.p3d";
		picture = "gunfighter\UH1Y\UI\picture_UH1Y_CA.paa";
		icon="gunfighter\UH1Y\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "UH1Y Venom";
		faction = "BLU_F";

		class Library
		{
		  	libTextDesc = "UH1Y";
		};

		// fuelCapacity = 1443;
		maxSpeed = 293; //cruise speed - http://en.wikipedia.org/wiki/UH-1Y_Venom
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		driverRightHandAnimName = "stick";
		//Adding PhysX stuff here
		bodyFrictionCoef = 1;
		cyclicasideforcecoef = 1;//banking
		cyclicforwardforcecoef = 2.5;//fowards backwards.
		frontRotorForceCoef = 3;//front rotor(strenth of lift)
		backRotorForceCoef = 1;//tailrotor(strength of horzontal movement=)
		simulation = "Helicopter";
		liftForceCoef = 1.5;
		maxfordingdepth = 1;
		sensitivity = 3;
		sensitivityear = 3;
		limitedspeedcoef = 0.22;
		mainrotordive = 2;
		backrotordive = 2;
		extCameraPosition[] = {0,6,-18};
		
		//end PhysX stuff

		armor = 30;
		damageResistance = 0.00244;
		weapons[]={"FFARLauncher_14","CMFlareLauncher"};
		magazines[]={"14Rnd_FFAR","60Rnd_CMFlare_Chaff_Magazine"};
		
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";

		irScanRangeMin=0;
		irScanRangeMax=1000;
		nightVision=1;
		
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		LockDetectionSystem = "1 + 8 + 4";
		incomingMissileDetectionSystem = 16;

		memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};

		driverAction="UH1Y_Pilot";
		driverInAction="UH1Y_Pilot";

		cargoAction[]={"UH1Y_Cargo02","UH1Y_Cargo03","UH1Y_Cargo03","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01"};
		cargoIsCoDriver[]={false,false};
		driverCanSee=31;
		gunnerCanSee=31;

		gunnerUsesPilotView=1;
		gunnerOpticsModel="";

		transportSoldier=7;
		crew="B_Helipilot_F";
		transportAmmo=0;
		transportMaxMagazines=150;
		transportMaxWeapons=30;

		initCargoAngleY=+10; // cargo viewing limitations
		minCargoAngleY=-60;
		maxCargoAngleY=+120;

		minFireTime=30;
		threat[]={1, 0.05, 0.05};

		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};

	/*	class ViewPilot: ViewPilot
		{
			initFov=1.4; minFov=0.6; maxFov=1.0;
      		initAngleX=0; minAngleX=-65; maxAngleX=+85; //Rg 45/80;
			initAngleY=0; minAngleY=-150; maxAngleY=+150;
		};
*/
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
				stabilizedInAxes = "StabilizedInAxesNone";

				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				weapons[]={"M134_minigun"};
				magazines[]={"5000Rnd_762x51_Belt"};
				gunnerName="CrewChief";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction="UH1Y_Gunner";
				gunnerInAction="UH1Y_Gunner";
				commanding=0;
				primaryGunner=1;
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=1.0; minFov=0.25; maxFov=0.8;
				};
				gunnerCompartments = Compartment2;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body="Turret2";
				gun="Gun_2";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes = StabilizedInAxesNone;

				selectionFireAnim="zasleh_1";

				proxyIndex=2;
				gunnerName="DoorGunner";
				commanding=-3;

				minTurn=-180; maxTurn=0; initTurn=0;
				weapons[]={"M134_minigun_2"};

				gunBeg="muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd="chamber_2"; //gunEnd=chamber of the gun

				primaryGunner=0;
				memoryPointGun="machinegun_2";
				memoryPointGunnerOptics="gunnerview_2";
			};
			class CoPilotObs:MainTurret
			{
				isCopilot = 1;
				//proxyType = CPCommander;
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex=3;
				gunnerName="CoPilotObs"; //todo
				gunnerAction="UH1Y_Gunner02";
				gunnerInAction="UH1Y_Gunner02";
				body="ObsTurret";
				gun="ObsGun";
				animationSourceBody="ObsTurret";
				animationSourceGun="ObsGun";
				outGunnerMayFire = 1; //Engine assumes helicopter gunner is turned out.
				//inGunnerMayFire = 1;
				gunBeg="gun_end"; //gunBeg=endpoint of the gun
				gunEnd="gun_begin"; //gunEnd=chamber of the gun
				memoryPointGun="gun_end";
				commanding=1;
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};
				primaryGunner=0;
				minElev=-80; maxElev=+25; initElev=0;
				minTurn=-180; maxTurn=180; initTurn=0;
				gunnerOpticsModel="";
				memoryPointGunnerOptics = "commanderview";
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 0;
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0; minFov=0; maxFov=1.0;
				};
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
				gunnerCompartments = "Compartment2";

				startEngine = 0;
				soundServo[]={,db-40,1.0};

				memoryPointsGetInGunner= "pos codriver";
				memoryPointsGetInGunnerDir= "pos codriver dir";
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
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

			/*class mainRotor_folded
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 1;
			};
			class mainRotor_unfolded:mainRotor_folded
			{
				initPhase = 0;
			};*/
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
		soundGetIn[] = {"A3\Sounds_F\air\Heli_Transport_01\open_close",1.0,1};
		soundGetOut[] = {"A3\Sounds_F\air\Heli_Transport_01\open_close",1.0,1,50};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"A3\Sounds_F\air\Heli_Transport_01\crash",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_start",0.56234133,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_start",0.7943282,1.0,600};
		soundEngineOffInt[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_stop",0.56234133,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_stop",0.7943282,1.0,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
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
				sound[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_rotor_low",0.70794576,1.0,600};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_rotor_high",0.7943282,1.0,700};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\air\Heli_Transport_01\rotor_swist",1.0,1,400};
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
				sound[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_rotor_low",0.5011872,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_rotor_high",0.63095737,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
	};

		
	};

