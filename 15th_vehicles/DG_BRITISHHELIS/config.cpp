#include "basicDefines.hpp"
#include "Crewanimations.hpp"
#define PosY0Center 0.03
#define PosYCenterHorizont 0.50
#define PosX0Center 0.52
#define SizeX10deg 1.5
#define SizeY10deg 1.2

class CfgPatches
{
	class DG_BRITISHHELIS
	{
		units[] = {"BAF_Merlin_HC3_DG1"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F","A3_Anims_F","A3_Anims_F_Config_Sdr"};
	};
};

class CfgVehicles
{
	class AllVehicles;
	class thingX;
	class Air: AllVehicles
	{
		class HitPoints;
		class NewTurret;
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
	class PlaneWreck;
	class HelicopterWreck;
	class BAF_Merlin_HC3_DG1:Helicopter
	{
		scope = 2;
		side = 1;
		faction = BLU_F;

        driveOnComponent[] = {"Wheels"};
		camouflage = 10;
		maxfordingdepth = 1;
		sensitivity = 3;
		sensitivityear = 3;
		canBeShot = true;
		audible = 7;		
		
        AGM_FastRoping = 1;         //  X    Z    Y
        AGM_FastRoping_Positions[] = {{0.6, -5, -0.5}, {-0.2, -5, -0.5}};		
		
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;	
		
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		maximumLoad = 10000;
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		slingLoadOperator = 1;	
        	liftForceCoef = 1.5;
		supplyRadius = 5; // needs the memory point "doplnovani"
		class pilotCamera				/// camera for pilot to observe sling loading
        {
            class OpticsIn				/// what is seen if player switches to optics
            {		
                class Wide
                {
                    opticsDisplayName 	= "W";	/// used in case the UI has place to display optics mode
                    initAngleX			= 0;	/// X-axis rotation and its limits
					minAngleX			= -0; 	/// X-axis rotation and its limits
					maxAngleX			= +0;	/// X-axis rotation and its limits
                    initAngleY			= 0; 	/// Y-axis rotation and its limits
					minAngleY			= -0;  	/// Y-axis rotation and its limits
					maxAngleY			= +0; 	/// Y-axis rotation and its limits
                    initFov				= 0.5;	/// Field of view size settings
					minFov				= 0.5;	/// Field of view size settings
					maxFov				= 0.5;	/// Field of view size settings
                    visionMode[] 		= {"Normal","NVG", "TI"};	/// what vision modes are available
                    thermalMode[] 		= {0,1};			/// not necessary as there is no TI mode defined, but just in case
                    gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F"; /// some optics model
				};
				showMiniMapInOptics				= true;	/// allows showing GPS mini map in optics
				showUAVViewpInOptics			= true;	/// allows showing UAV feed in this optics
				showSlingLoadManagerInOptics 	= true;		/// allows displaying of Sling Loading Assistant
            };
            minTurn                 = 0; 		//turn
            maxTurn                 = 0; 		//turn
            initTurn                = 0; 		//turn
            minElev                 = 80; 		//turn
            maxElev                 = 80; 		//turn
            initElev                = 80; 		//turn
            maxXRotSpeed            = 0.5; 		// movement speed
            maxYRotSpeed            = 0.5; 		// movement speed
            pilotOpticsShowCursor   = 1; 		//to show aimCursor (is useful to see plane direction)
            controllable            = false; 	// set false to have static camera, true to have moving like a turret
        };
        memoryPointDriverOptics = "slingCamera";	/// what memory point is the origin of the camera			
		
		displayname = AW101 Merlin HC3;	
		
		model = "\DG_BRITISHHELIS\MerlinHC3_BAF";
		
		picture = "\DG_BRITISHHELIS\Data\UI\picture_merlin_ca.paa";
		icon = "\DG_BRITISHHELIS\Data\UI\icon_merlin_ca.paa";
		mapSize = 20;

		memoryPointsGetInDriver = "pos codriver";		
		memoryPointsGetInDriverDir = "pos codriver dir";
		
		// Crew definition
		crewVulnerable = true;
		crew = "B_Helipilot_F";
		typicalCargo[]={B_Helipilot_F,B_Helipilot_F};		
		driverAction = "Merlin_Pilot_BAF";
		cargoIsCoDriver[]={true,false};
		GetInAction = GetInHigh;
		GetOutAction = GetOutHigh; 
		cargoAction[]={	Merlin_Cargo_BAF, Merlin_Cargo01_BAF, Merlin_Cargo_BAF, Merlin_Cargo01_BAF, Merlin_Cargo01_BAF, 
						Merlin_Cargo_BAF, Merlin_Cargo01_BAF, Merlin_Cargo_BAF, Merlin_Cargo01_BAF, Merlin_Cargo01_BAF, 
						Merlin_Cargo_BAF, Merlin_Cargo01_BAF, Merlin_Cargo01_BAF, Merlin_Cargo_BAF, Merlin_Cargo01_BAF, 
						Merlin_Cargo_BAF, Merlin_Cargo01_BAF};
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		driverCanEject=1;
		cargoCanEject = 1;
		gunnerUsesPilotView=false;

		transportSoldier = 14;
		transportMaxBackpacks = 28;
		
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 20;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 2;
			};
		};			

		radarType = 4;
		enableManualFire = false;

		class Reflectors
		{
		   class Light
		   {
				   position = "FLIR_begin";
				   direction = "FLIR_end";
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
		
		class MarkerLights
		{
			class RedStill
			{
				name="light_nav_left";
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
			class GreenStill: Redstill
			{
				name = "light_nav_right";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				blinking = "false";
				intensity = 80;
			};
			class WhiteStill: Redstill
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
			class WhiteBlinking: Redstill
			{
				name = "light_nav_top";
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
		
		class AnimationSources: AnimationSources
		{
			class Doors
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Doors1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};

			class HidePIPMFDCO
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};	

			class HidePIPMFDPI
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};			
		};
		
		class RenderTargets /// class for all Picture-in-Picture
		{
			class camera
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition		= "FLIR_begin"; 	/// memory point of PiP origin
					pointDirection		= "FLIR_end"; 	/// memory point of PiP direction
					renderQuality 		= 4;			/// what quality should the PiP be
					renderVisionMode 	= 2;			/// zero means standard vision
					fov 				= 0.466;			/// what is the angle of the PiP field of view
				}; 	
			};
		};			
		
		class MFD {};
		
		class UserActions
		{
			class OpenRdoor
			{
				displayName= "<t color='#FF0000'>Open Right Door</t>"; //Red
				position="axis_door_side_pop";
				radius=3.6;
				onlyForplayer=false;
				condition="this animationPhase ""dvere_p"" > 0.5 AND Alive(this)";
				statement="this animate [""dvere_p"",0];this animate [""dvere_p_pop"",0];";
			};
			class CloseRdoor
			{
				displayName= "<t color='#FF0000'>Close Right Door</t>"; //Red
				position="axis_door_side_pop";
				radius=3.6;
				onlyForplayer=false;
				condition="this animationPhase ""dvere_p"" < 0.5 AND Alive(this)";
				statement="this animate [""dvere_p"",1];this animate [""dvere_p_pop"",1];";
			};
			class OpenLdoor
			{
				displayName= "<t color='#FF0000'>Open Crew Door</t>"; //Red
				position="axis_door_crew_pop";
				radius=3.6;
				onlyForplayer=false;
				condition="this animationPhase ""dvere_l"" > 0.5 AND Alive(this)";
				statement="this animate [""dvere_l"",0];this animate [""dvere_l_pop"",0];";
			};
			class CloseLdoor
			{
				displayName= "<t color='#FF0000'>Close Crew Door</t>"; //Red
				position="axis_door_crew_pop";
				radius=3.6;
				onlyForplayer=false;
				condition="this animationPhase ""dvere_l"" < 0.5 AND Alive(this)";
				statement="this animate [""dvere_l"",1];this animate [""dvere_l_pop"",1];";
			};
			 class CloseRear // disabled
			{
				displayName= "<t color='#FF0000'>Close Ramp</t>"; //Red
				displayNameDefault = ""; 
				position="axis_ramp";
				radius=3.6;
				onlyForplayer=false;
				condition="this animationPhase ""rampa"" > 0.5 AND Alive(this)";
				statement="this animate [""rampa"",0];";
				priority=9;
			};
			class OpenRear
			{
				displayName= "<t color='#FF0000'>Open Ramp</t>"; //Red
				displayNameDefault = "";
				position="axis_ramp";
				radius=3.6;
				onlyForplayer=false;
				condition="this animationPhase ""rampa"" < 0.5 AND Alive(this)";
				statement="this animate [""rampa"",1];";
				priority=9;
			}; 
			class COmfdpip1ON
			{
				displayName= "<t color='#ffff00'>Turn On FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip"",1];";
				priority=9;
			}; 	

			class COmfdpip1OFF
			{
				displayName= "<t color='#ffff00'>Turn Off FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip"",0];";
				priority=9;
			}; 

			class Pimfdpip1ON
			{
				displayName= "<t color='#ffff00'>Turn On FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",1];";
				priority=9;
			}; 	

			class Pimfdpip1OFF
			{
				displayName= "<t color='#ffff00'>Turn Off FLIR MFD</t>"; //Yellow
				displayNameDefault = "";
				position="";
				radius=3.6;
				onlyForplayer=true;
				condition="this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",0];";
				priority=9;
			}; 			
			
		};
		
		maxSpeed = 309; // according to our library
		accuracy=1;
		cost=10000000;
		fuelCapacity=1500;
		fuelConsumptionRate=0.138;
		armor=60;
		damageResistance = 0.01039;
		epeImpulseDamageCoef = 20;
		vehicleClass = "Air";
		laserScanner = true;
		MainRotorSpeed = 1.0;
		backRotorSpeed =  1.0;
		gearRetracting=true;
		gearUpTime=1;
		gearDownTime=1;	
		minGForce = 0.2;
		maxGForce = 2;
		washDownStrength = "1.0f";
		washDownDiameter = "40.0f";
		gForceShakeAttenuation = 0.5;
		cyclicasideforcecoef = 0.7;//banking
		cyclicforwardforcecoef = 1.0;//fowards backwards.
		frontRotorForceCoef = 1;//front rotor(strenth of lift)
		backRotorForceCoef = 0.5;//tailrotor(strength of horzontal movement=)
		altFullForce = 5000;
		altNoForce = 10000;	
				
		// Guns and equipment
		weapons[] = {CMFlareLauncher};
		magazines[] = {120Rnd_CMFlare_Chaff_Magazine,120Rnd_CMFlare_Chaff_Magazine,120Rnd_CMFlare_Chaff_Magazine};
		LockDetectionSystem = 0x00111000;
		IncommingMisslieDetectionSystem = CM_Missile;
		irScanGround=True;
		irScanRangeMin=2000;
		irScanRangeMax=8000;
		irScanToEyeFactor = 2;
		nightVision=1;
		numberPhysicalWheels = 3;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		Simulation = "Helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "DG_BRITISHHELIS\RTD_Heli_Transport_02.xml";
			autoHoverCorrection[] = {4.7,3.8,0};
			defaultCollective = 0.665;
			retreatBladeStallWarningSpeed = 92.583;
			maxTorque = 4014;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 20000;
			maxHorizontalStabilizerRightStress = 20000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 250000;
			maxTailRotorStress = 45000;
			rtd_center = "rtd_center"; //Needs a memory point in the model. Have it centred, then move it up or down to make the wheels touch the ground properly. 
		};	
		
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret //Gunner
			{
				        body="FLIR_turret";
				        gun="FLIR_gun";
				        animationSourceBody="FLIR_turret";
				        animationSourceGun="FLIR_gun";
                        memoryPointGunnerOptics= "FLIR_end";								
				        gunBeg="FLIR_end"; //gunBeg=endpoint of the gun
				        gunEnd="FLIR_begin"; //gunEnd=chamber of the gun	
				        memoryPointGun = "FLIR_end";
						stabilizedInAxes = 3;
						gunnername = "Co-Pilot";
						isCopilot = 1;
						
						minElev=-40; maxElev=+20; initElev=0;
						minTurn=-120; maxTurn=120; initTurn=0;
						
		                memoryPointsGetInGunner = "pos codriver";		
		                memoryPointsGetInGunnerDir = "pos codriver dir";					

						turretInfoType = "RscOptics_UAV_gunner";
						weapons[] = {"Laserdesignator_mounted"};
						
						magazines[] = {Laserbatteries};
						proxyType = CPGunner;
						
						inGunnerMayFire = true;
						gunnerAction = Merlin_Pilot_BAF;
						gunnerGetInAction = GetInHigh;
						gunnerGetOutAction = GetOutHigh;
						gunnerOpticsEffect[] = {};
						gunnerOpticsModel = "";

class OpticsIn 
{
	class WideNGS
	{
		opticsDisplayName = "W";
		directionStabilized=0;
		initAngleX = 0;
		minAngleX = -35;
		maxAngleX = 10;
		initAngleY = 0;
		minAngleY = -100;
		maxAngleY = 100;
		initFov = 0.466;
		minFov = 0.466;
		maxFov = 0.466;
		visionMode[] = {"Normal","NVG", "Ti"};
		thermalMode[] = {0, 1};
		gunnerOpticsColor[]= {0.15000001,1,0.15000001,1};
		gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
		opticsPPEffects[]=
		{
			"OpticsCHAbera2",
			"OpticsBlur2"
		};
	};
	class Wide 
	{
		opticsDisplayName = "W";
		directionStabilized=0;
		initAngleX = 0;
		minAngleX = -35;
		maxAngleX = 10;
		initAngleY = 0;
		minAngleY = -100;
		maxAngleY = 100;
		initFov = 0.466;
		minFov = 0.466;
		maxFov = 0.466;
		visionMode[] = {"Normal","NVG", "Ti"};
		thermalMode[] = {0, 1};
		gunnerOpticsColor[]= {0.15000001,1,0.15000001,1};
		gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
		opticsPPEffects[]=
		{
			"OpticsCHAbera2",
			"OpticsBlur2"
		};
		gunnerOpticsEffect[]=
		{
			"TankCommanderOptics1"
		};
	};
	class WideL: Wide 
	{
		opticsDisplayName = "WL";
		initFov = 0.2;
		minFov = 0.2;
		maxFov = 0.2;
		gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
		gunnerOpticsColor[]= {0,0,0,1};
		directionStabilized=0;	// Camera Stabilizing Boolean
		opticsPPEffects[]=
		{
			"OpticsCHAbera2",
			"OpticsBlur2"
		};
	};
	class Medium : Wide 
	{
		opticsDisplayName = "M";
		initFov = 0.1;
		minFov = 0.1;
		maxFov = 0.1;
		directionStabilized=0;	// Camera Stabilizing Boolean
		gunnerOpticsColor[]= {0,0,0,1};
		gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
	};
	class Narrow : Wide 
	{
		opticsDisplayName = "N";
		gunnerOpticsColor[]= {0,0,0,1};
		gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
		directionStabilized=0;	// Camera Stabilizing Boolean
		initFov = 0.02;
		minFov = 0.02;
		maxFov = 0.02;
	};
	class Narrower : Wide 
	{
		opticsDisplayName = "N";
		gunnerOpticsColor[]= {0,0,0,1};
		gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
		directionStabilized=0;	// Camera Stabilizing Boolean
		initFov = 0.01;
		minFov = 0.01;
		maxFov = 0.01;
	};
};
		
						class OpticsOut
						{
							class Monocular // 1x-3.5x
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
								gunnerOpticsModel = "";
								gunnerOpticsEffect[] = {};
							};
						};

						startEngine=false;
						gunnerHasFlares = false;
			};
			
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos cargo right";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos cargo dir right";	/// direction of get in action
				gunnerName 					= "Passenger (Right Seat)";	/// name of the position in the Action menu
				proxyIndex 					= 16;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -40;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 100;					/// what is the left-most possible turn of the turret
				minTurn 					= -10;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos cargo left";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos cargo dir left";	/// direction of get in action
				gunnerName 					= "Passenger (Left Seat)";	/// name of the position in the Action menu
				proxyIndex 					= 15;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -40;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 10;					/// what is the left-most possible turn of the turret
				minTurn 					= -100;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};						
		};		
		
		selectionFireAnim = "zasleh";

		threat[]={0.3, 0.3, 0.3};
		destrType=DestructWreck;

		class HitPoints:HitPoints
		{
			class HitHull {armor=1;material=51;name="NEtrup";visual="trup";passThrough=0.5;}; // disabled points from model
			class HitEngine {armor=0.5;material=51;name="motor";visual="motor";passThrough=0.5;};
			class HitAvionics {armor=0.15;material=51;name="elektronika";visual="elektronika";passThrough=0.2;};
			class HitVRotor {armor=0.3;material=51;name="mala vrtule";visual="mala vrtule staticka";passThrough=0.1;};
			class HitHRotor {armor=0.2;material=51;name="velka vrtule";visual="velka vrtule staticka";passThrough=0.1;};
			class HitGlass1:HitGlass1 {armor=0.5;};
			class HitGlass2:HitGlass2 {armor=0.5;};
			class HitGlass3:HitGlass3 {armor=0.5;};
			class HitGlass4:HitGlass4 {armor=0.5;};
			class HitGlass5:HitGlass5 {armor=0.5;};
			class HitGlass6 {armor=0.5;material=-1;name="glass6";visual="glass6";passThrough=0;};
			class HitGlass7 {armor=0.5;material=-1;name="glass7";visual="glass7";passThrough=0;};
			class HitGlass8 {armor=0.5;material=-1;name="glass8";visual="glass8";passThrough=0;};
			class HitGlass9 {armor=0.5;material=-1;name="glass9";visual="glass9";passThrough=0;};
			class HitGlass10{armor=0.5;material=-1;name="glass10";visual="glass10";passThrough=0;};
			class HitGlass11{armor=0.5;material=-1;name="glass11";visual="glass11";passThrough=0;};
			class HitGlass12{armor=0.5;material=-1;name="glass12";visual="glass12";passThrough=0;};
			class HitGlass13{armor=0.5;material=-1;name="glass13";visual="glass13";passThrough=0;};
			class HitGlass14{armor=0.5;material=-1;name="glass14";visual="glass14";passThrough=0;};
			class HitGlass15{armor=0.5;material=-1;name="glass15";visual="glass15";passThrough=0;};
			class HitGlass16{armor=0.5;material=-1;name="glass16";visual="glass16";passThrough=0;};
			class HitGlass17{armor=0.5;material=-1;name="glass17";visual="glass17";passThrough=0;};
			class HitGlass18{armor=0.5;material=-1;name="glass18";visual="glass18";passThrough=0;};
			class HitGlass19{armor=0.5;material=-1;name="glass19";visual="glass19";passThrough=0;};
			class HitGlass20{armor=0.5;material=-1;name="glass20";visual="glass20";passThrough=0;};			
		};
		
		// materials
		class Damage
		{
			tex[]={};
			mat[]={
			"DG_BRITISHHELIS\data\merlin_int_01.rvmat",
			"DG_BRITISHHELIS\data\merlin_int_01_damage.rvmat",
			"DG_BRITISHHELIS\data\merlin_int_01_destruct.rvmat",
			
			"DG_BRITISHHELIS\data\merlin_int_02.rvmat",
			"DG_BRITISHHELIS\data\merlin_int_02_damage.rvmat",
			"DG_BRITISHHELIS\data\merlin_int_02_destruct.rvmat",			
			
			"DG_BRITISHHELIS\data\Merlin_glass.rvmat",
			"DG_BRITISHHELIS\data\Merlin_glass_damage.rvmat",
			"DG_BRITISHHELIS\data\Merlin_glass_damage.rvmat",

			"DG_BRITISHHELIS\data\MerlinHc3_2_BAF.rvmat",
			"DG_BRITISHHELIS\data\MerlinHc3_2_BAF_damage.rvmat",
			"DG_BRITISHHELIS\data\MerlinHc3_2_BAF_destruct.rvmat",	
			
			"DG_BRITISHHELIS\data\MerlinHc3_1_BAF.rvmat",
			"DG_BRITISHHELIS\data\MerlinHc3_1_BAF_damage.rvmat",
			"DG_BRITISHHELIS\data\MerlinHc3_1_BAF_destruct.rvmat"			
			};
		};
		
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\open",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_start_v2",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_start_v2",
			2.2387211,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_stop_v2",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_stop_v2",
			2.2387211,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		occludeSoundsWhenIn=0.56234133;
		obstructSoundsWhenIn=0.31622776;
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			300
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\dummysound",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_engine",
					1.2589254,
					1,
					900
				};
				frequency="rotorSpeed";
				volume="camPos*(rotorSpeed-0.72)*4";
			};
			class RotorExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_rotor",
					1.7782794,
					1,
					2000
				};
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\rotor_swist",
					0.70794576,
					1,
					800
				};
				frequency=1;
				volume="camPos * (rotorThrust factor [0.7, 0.9])";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_engine",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed-0.75)*4";
			};
			class RotorInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_rotor",
					1.2589254,
					1
				};
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
			sound[]={"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]={"A3\Sounds_F\vehicles\air\noises\wind_closed",0.70794576,1,50};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]={"A3\Sounds_F\vehicles\noises\vehicle_stress2d",0.70794576,1,50};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]={"A3\Sounds_F\vehicles\noises\vehicle_stress3",0.70794576,1,50};
				frequency=1;
				volume="(1-camPos)*(speed factor[40,60])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_engine",1.2589254,1,900};
					frequency="rotorSpeed";
					volume="camPos*(rotorSpeed-0.72)*4";
				};
				class RotorExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_rotor",1.7782794,1,2000};
					frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorNoiseExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\Heli_Transport_02\rotor_swist",0.70794576,1,800};
					frequency=1;
					volume="camPos * (rotorThrust factor [0.7, 0.9])";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_engine",1,1};
					frequency="rotorSpeed";
					volume="(1-camPos)*(rotorSpeed-0.75)*4";
				};
				class RotorInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_rotor",1.2589254,1};
					frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.2238721,1,20};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1,20};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]={"A3\Sounds_F\dummysound",1,1,100};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]={"A3\Sounds_F\dummysound",1,1,100};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]={"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]={"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]={"A3\Sounds_F\vehicles\air\noises\wind_closed",0.70794576,1,50};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[]={"A3\Sounds_F\vehicles\noises\vehicle_stress2d",0.70794576,1,50};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{"A3\Sounds_F\vehicles\noises\vehicle_stress3",0.70794576,1,50};
					frequency=1;
					volume="(1-camPos)*(speed factor[40,60])";
				};
			};
		};		
	};
};	
