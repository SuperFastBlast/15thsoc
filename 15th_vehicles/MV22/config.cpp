class DefaultEventhandlers;
class CfgPatches
{
	class MV22
	{
		units[] = {"MV22"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_AIR_F"};
	};
};
// basic definitions of the animations
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Merlin_Cargo_BAF="Merlin_Cargo_BAF";
		MV22_Pilot = "MV22_Pilot";
		MV22_CoPilot = "MV22_CoPilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Merlin_Cargo_BAF: Crew
		{
			file="\MV22\Data\Anim\Merlin_Cargo";
			connectTo[]={"Merlin_KIA_Cargo_BAF",1};
			speed=1e+010;
		};
		class Merlin_KIA_Cargo_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death2.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]={"DeadState",0.1};
		};
		class KIA_MV22_Pilot: DefaultDie
		{
			actions = DeadActions;
			file="\mv22\data\anim\KIA_MV22_Pilot";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class MV22_Pilot: Crew
		{
			file="\mv22\data\anim\MV22_Pilot";
			interpolateTo[]={KIA_MV22_Pilot,1};
		};

		class MV22_CoPilot: Crew
		{
			file="\mv22\data\anim\MV22_CoPilot";
			interpolateTo[]={KIA_MV22_Pilot,1};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class Turrets;
	};
	class Plane_Base_F: Plane
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	class ViewPilot;
	class AnimationSources;
	class NewTurret;
	};
	class MV22: Plane_Base_F
	{
		destrType=DestructWreck;
		scope = 2;
		simulation = "airplaneX";
		side = 1;
		faction="blu_f";
		AGM_FastRoping = 1;          //X    Z     Y
        	AGM_FastRoping_Positions[] = {{0, -6.5, -0.6}};    //RAMP {0, 2.476, 6.576} X= 0.605 Y= 2.406 Z= 7.474
		displayName="MEU MV-22 Osprey";
		class Eventhandlers: DefaultEventhandlers
		{
			init = "if (!isNil {meu_fnc_bitchinBetty}) then {_this spawn meu_fnc_bitchinBetty;};";
		};
		vehicleClass = "Air";
		model = "mv22\mv22.p3d";
		picture="mv22\picture_MV22_CA.paa";
		icon="mv22\icon_MV22_CA.paa";
		mapSize = 28;
		crew = "B_Helipilot_F";
		crewVulnerable = true;
		getInRadius = 9;
		enableManualFire = 0;
		accuracy=0.50;
		camouflage=100; // how difficult to spot - bigger - better spotable
		audible=20;
		precision = 200;
		canBeShot = true;
		threat[]={0, 0, 0};
		dustEffect = "HeliDust";
		waterEffect = "HeliWater";
		driverRightHandAnimName = "pilot_stick";

		canFloat=0;
		waterAngularDampingCoef=10;
		waterPPInVehicle=0;
		waterResistanceCoef=0.5;
		maxFordingDepth=0.55000001;
		driveOnComponent[] = {"wheel_1_1","wheel_2_2","wheel_2_1"};
		mainRotorSpeed=1.0;
		backRotorSpeed=1.0;
		mainBladeRadius=7.5;
		bodyFrictionCoef=0.89999998;
		fuelCapacity=2000;
		fuelConsumptionRate=0.138;
		extCameraPosition[]={0,3,-23};
		gearRetracting=1;
		gearUpTime=4;
		gearDownTime=4;
		LockDetectionSystem=9;
		incomingMissileDetectionSystem=18;
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		//vtol adjustments
		rudderInfluence=0.30;
		irScanRangeMin=500;
		irScanRangeMax=5000;
		irScanToEyeFactor=2;
		aileronSensitivity=0.2;
		elevatorSensitivity=0.27;
		//end VtolAdjust
		landingSpeed=130;
		acceleration=328;
		flapsFrictionCoef = 0.32;
		rudderSensitivity=12.5;
		envelope[] = {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		cargoIsCoDriver[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};

		driverCompartments="Compartment1";
		cargoGetInAction[] = {"GetInHelicopterCargo"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		cargoCompartments[]={"Compartment2"};
		ejectSpeed[]={0,-2,0};
		cabinOpening = false;
		radarType = 4;
		driverCanSee=31;
		gunnercansee = 31;
		cargocansee = 1 + 2 + 4 + 8 + 16;
		driverAction = MV22_Pilot;
		driverInAction = MV22_Pilot;
		memoryPointsGetInDriver="pos codriver";
		memoryPointsGetInDriverDir="pos codriver dir";
		GetInAction = GetInHigh;
		GetOutAction = GetOutHigh; 
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		driverCanEject=1;
		cargoCanEject = 1;
		gunnerUsesPilotView=false;
		cargoAction[] = {Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF,Merlin_Cargo_BAF};

		maxSpeed = 556; //Or 444 when cruising and 185 in helicopter mode.
		transportSoldier = 24;
		transportAmmo=0;
		transportMaxMagazines=150;
		transportMaxWeapons=30;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 26;
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

		vtol = 4;

		supplyRadius = 8;

		armor = 40;
		damageResistance = 0.00172;

		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_CMFlare_Chaff_Magazine"
		};

		insideSoundCoef = 0.05;
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[]={"MV22\sound\close",db-10,1,10};
		soundGetOut[]={"MV22\sound\open",db-10,1,20};
		soundDammage[]={"MV22\sound\alarm_loop1", 1, 1};
		soundEngineOnInt[] = {"MV22\sound\int_start", 1, 1.0};
		soundEngineOnExt[] = {"MV22\sound\ext_start", 1, 1.0, 500};
		soundEngineOffInt[] =  {"MV22\sound\int_stop", 1, 1.0};
		soundEngineOffExt[] =  {"MV22\sound\ext_stop", 1, 1.0, 500};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up",0.7943282,1.0,150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down",0.7943282,1.0,150};
		soundFlapsUp[] = {"MV22\sound\ext-jetair-flaps",0.63095737,1.0,100};
		soundFlapsDown[] = {"MV22\sound\ext-jetair-flaps",0.63095737,1.0,100};
		soundLocked[] = {"MV22\sound\missile.ogg",30.0,1};

		class Sounds
		/* EXTERNAL SOUNDS MV22 */
		{
			class EngineLowOut
			{
				sound[] =  {"MV22\sound\ext_engine_low", 2.5118899, 1, 1200};
				frequency = "1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] =  {"MV22\sound\ext_engine_hi", 2.5118899, 1.2, 1400};
				frequency = "1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] =  {"MV22\sound\ext_forsage",1.7782794,0.99000001, 1700};
				frequency = "1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[] =  {"MV22\sound\ext-wind1", 0.56234097,1, 100};
				frequency ="(0.1+(1.2*(speed factor[1, 100])))";
				volume = "camPos*(speed factor[1, 100])";
			};

			/*	INTERNAL SOUNDS MV22 */

			class EngineLowIn
			{
				sound[] =  {"MV22\sound\int_engine_low", 1, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] =  {"MV22\sound\int_engine_hi", 1, 1.2};
				frequency = "1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] =  {"MV22\sound\int_forsage", 1, 1};
				frequency = "1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] =  {"MV22\sound\int-wind1", 0.50118721, 1};
				frequency ="(0.1+(1.2*(speed factor[1, 100])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov=1; minFov=0.3; maxFov=1.2;
			initAngleX=0; minAngleX=-65; maxAngleX=+85; //Rg 45/85;
			initAngleY=0; minAngleY=-150; maxAngleY=+150;
		};
		class cargoturret;
		class Turrets: Turrets
		{
			class CoPilotObs: NewTurret
			{
				isCopilot = 1;
				gunnerCanEject = 1;
				CanEject = 1;
				startEngine=0;
				gunnerHasFlares=1;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";								
				        gunBeg="gun_end"; //gunBeg=endpoint of the gun
				        gunEnd="gun_begin"; //gunEnd=chamber of the gun	
					memoryPointGunnerOptics="commanderview";
					memoryPointGun = "gun_end";
				selectionFireAnim = "";
				turretCanSee = "31";
				proxyIndex=1;
				proxyType = CPGunner;
				stabilizedInAxes=3;
				laser=1;
				gunnerName="Co-Pilot";
				minElev = -80;
				maxElev = 25;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				precisegetinout = 1;
				turretInfoType="RscOptics_UAV_gunner";
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};
				gunnerAction="MV22_CoPilot";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerRightHandAnimName="stick_pilot";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				gunnerCompartments = "Compartment1";
				primaryGunner=1;
				outGunnerMayFire =true;
				inGunnerMayFire =true;
				gunnerForceOptics=false;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal","NVG","Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
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
		class CargoTurret_01: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "mortar"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunner = "pos cargo1"; /// specific memory points to allow choice of position
	memoryPointsGetInGunnerDir = "pos cargodir1";	/// direction of get in action
	gunnerName = "WalkWay 1";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 25;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = -60; /// what is the left-most possible turn of the turret
	minTurn = -120; /// what is the right-most possible turn of the turret
	isPersonTurret = 0; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	getinradius =0;
	};
		class CargoTurret_02: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "mortar"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunner = "pos cargo2"; /// specific memory points to allow choice of position
	memoryPointsGetInGunnerDir = "pos cargodir2";	/// direction of get in action
	gunnerName = "WalkWay 2";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 26;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = -60; /// what is the left-most possible turn of the turret
	minTurn = -120; /// what is the right-most possible turn of the turret
	isPersonTurret = 0; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	getinradius =0;
	};
		class CargoTurret_03: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "mortar"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunner = "pos cargo3"; /// specific memory points to allow choice of position
	memoryPointsGetInGunnerDir = "pos cargodir3";	/// direction of get in action
	gunnerName = "WalkWay 3";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 27;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = -60; /// what is the left-most possible turn of the turret
	minTurn = -120; /// what is the right-most possible turn of the turret
	isPersonTurret = 0; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	getinradius =0;
	};
		class CargoTurret_04: CargoTurret /// position for Firing from Vehicles
		{
	gunnerAction = "mortar"; /// generic animation for sitting inside with rifle ready
        gunnerCompartments = "Compartment2"; /// gunner is not able to switch seat
	memoryPointsGetInGunner = "pos cargo4"; /// specific memory points to allow choice of position
	memoryPointsGetInGunnerDir = "pos cargodir4";	/// direction of get in action
	gunnerName = "WalkWay 4";	/// name of the position in the Action menu
	memoryPointGunnerOptics = "Eye";
	gunnerCanEject = 1;
	proxyIndex = 28;	/// what cargo proxy is used according to index in the model
	maxElev = 10; /// what is the highest possible elevation of the turret
	minElev = -65; /// what is the lowest possible elevation of the turret
	maxTurn = -60; /// what is the left-most possible turn of the turret
	minTurn = -120; /// what is the right-most possible turn of the turret
	isPersonTurret = 0; /// enables firing from vehicle functionality
	ejectDeadGunner = 0; /// seatbelts included
	getinradius =0;
	};
		};
		selectionRotorStill = "engine_static";
		selectionRotorMove = "engine_blur";


			class Damage
		{
			tex[]={};
			mat[]={ /*
				"mv22\data\mv22_sklo.rvmat",
				"mv22\data\mv22_sklo_damage.rvmat",
				"mv22\data\mv22_sklo_damage.rvmat",

				"mv22\data\mv22_sklo_in.rvmat",
				"mv22\data\mv22_sklo_in_damage.rvmat",
				"mv22\data\mv22_sklo_in_damage.rvmat",

				"mv22\data\mv22_01.rvmat",
				"mv22\data\mv22_01_damage.rvmat",
				"mv22\data\mv22_01_destruct.rvmat",

				"mv22\data\mv22_02.rvmat",
				"mv22\data\mv22_02_damage.rvmat",
				"mv22\data\mv22_02_destruct.rvmat"*/
			};
		};

		// TODO damage glass texture
		dammageHalf[]={};
		dammageFull[]={};

		class AnimationSources: AnimationSources
		{
			class Door_1_1 {source = "user"; animPeriod = 0;};
			class Ramp {source = "user"; animPeriod = 6;};
			class pack_engine_1 {source = "user"; animPeriod = 0/*15*/;};
			#define ENGINE_PROP_TURN(x,y) class engine_prop_##x##_##y##_turn:pack_engine_1{}
			ENGINE_PROP_TURN(1,1);
			ENGINE_PROP_TURN(1,2);
			ENGINE_PROP_TURN(1,3);
			ENGINE_PROP_TURN(2,1);
			ENGINE_PROP_TURN(2,2);
			ENGINE_PROP_TURN(2,3);
			#define ENGINE_PROP_CLOSE(x,y) class engine_prop_##x##_##y##_close: pack_engine_1{}
			ENGINE_PROP_CLOSE(1,1);
			ENGINE_PROP_CLOSE(1,3);
			ENGINE_PROP_CLOSE(2,1);
			ENGINE_PROP_CLOSE(2,2);
			class pack_engine_2: pack_engine_1{};
			class turn_wing: pack_engine_1{};
			class Redlight1
			{
				source		 = "user"; /// what is the animation source based on, this time it is user input
				animPeriod	 = 1; /// how long does it take to switch from 0 to 1 (or vice versa) if used by script
				initPhase	 = 0; /// what is the value of animation source to start with
			};
			class Greenlight1
			{
				source		 = "user";
				animPeriod	 = 1;
				initPhase	 = 0;
			};
			class Greentip1
			{
				source		 = "user";
				animPeriod	 = 1;
				initPhase	 = 0;
			};
		};
		class UserActions
		{
			class rampup
			{
				displayName="<t color='#FFD700'>Open Ramp";
				position="zamerny";
				radius=5;
				condition="(this animationPhase ""ramp_top"" == 0) && (player in [driver this,gunner this]) && (alive this)";
				statement="[this,1] execvm ""\mv22\scripts\ramp.sqf""";
				onlyforplayer=1;
				priority=-9;
			};

			class rampdown
			{
				displayName="<t color='#FFD700'>Close Ramp";
				position="zamerny";
				radius=5;
				condition="(this animationPhase ""ramp_bottom"" == 1) && (player in [driver this,gunner this]) && (alive this)";
				statement="[this,0] execvm ""\mv22\scripts\ramp.sqf""";
				animPeriod = 0;
				onlyforplayer=1;
				priority=-9;
			};
			class Redlighton
			{
				displayName="<t color='#FF0000'>Redlight On";
				position="redlight";
				radius=5;
				condition= "this animationPhase ""Redlightstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)"; /// at what condition is the action displayed
				statement= "this animate [""Redlightstart"",1];"; /// and what happens when the action is used
				onlyforplayer=1;
				animPeriod= 0;
				priority=-8;
			};
			class Redlightoff
			{
				displayName="<t color='#FF0000'>Redlight Off";
				position="redlight";
				radius=5;
				condition= "this animationPhase ""Redlightstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)"; /// at what condition is the action displayed
				statement= "this animate [""Redlightstart"",0];"; /// and what happens when the action is used
				onlyforplayer=1;
				priority=-8;
			};
			class Greenlighton
			{
				displayName="<t color='#008000'>Greenlight On";
				position="redlight";
				radius=5;
				condition= "this animationPhase ""Greenlightstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)"; /// at what condition is the action displayed
				statement= "this animate [""Greenlightstart"",1];"; /// and what happens when the action is used
				animPeriod = 0;
				onlyforplayer=1;
				priority=-7;
			};
			class Greenlightoff
			{
				displayName="<t color='#008000'>Greenlight Off";
				position="redlight";
				radius=5;
				condition= "this animationPhase ""Greenlightstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)"; /// at what condition is the action displayed
				statement= "this animate [""Greenlightstart"",0];"; /// and what happens when the action is used
				animPeriod = 0;
				onlyforplayer=1;
				priority=-7;
			};
			class Formationon
			{
				displayName="<t color='#00FF7F'>Formation Lights On";
				position="redlight";
				radius=5;
				condition= "this animationPhase ""Greentipstart"" < 0.5 && (player in [driver this,gunner this]) && (alive this)"; /// at what condition is the action displayed
				statement= "this animate [""Greentipstart"",1];"; /// and what happens when the action is used
				animPeriod = 0;
				onlyforplayer=1;
				priority=-7;
			};
			class Formationoff
			{
				displayName="<t color='#00FF7F'>Formation Lights Off";
				position="redlight";
				radius=5;
				condition= "this animationPhase ""Greentipstart"" > 0.5 && (player in [driver this,gunner this]) && (alive this)"; /// at what condition is the action displayed
				statement= "this animate [""Greentipstart"",0];"; /// and what happens when the action is used
				animPeriod = 0;
				onlyforplayer=1;
				priority=-7;
			};
		};
		class Exhausts
		{
			class Exhaust02
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustEffectHeli";
			};
			class Exhaust01
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";// name of the effect
				position = "body_vapour_L_E"; // name of the memory point in model
			};

			class WingTipRight
			{
				effectName = "WingVortices"; // name of the effect
				position = "body_vapour_R_E";// name of the memory point in model
			};
			class BodyLeft
			{
				effectName = "BodyVortices";// name of the effect
				position = "body_vapour_L_S"; // name of the memory point in model
			};

			class BodyRight
			{
				effectName = "BodyVortices"; // name of the effect
				position = "body_vapour_R_S";// name of the memory point in model
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
			class Left
			{
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
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
			class Middle
			{
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				   position = "gun_begin";
				   direction = "gun_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
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
			class Right
			{
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
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

		class Library
		{
		  libTextDesc = $STR_LIB_MV22;
		};
		class MFD
		{
			borderLeft = 0.09;
			borderRight = 0.02;
			borderTop = 0.02;
			borderBottom = 0.1;
			class MFD1
			{
				topLeft = "HUD LH1";
				topRight = "HUD PH1";
				bottomLeft = "HUD LD1";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.27};
					pos10[] = {"0.5+0.9","0.27+0.7"};
				};
				class Bones{};
				class Draw
				{
					alpha = 0.9;
					color[] = {0,1,0};
					clipTL[] = {0,0};
					clipBR[] = {1,1};
					condition = "on";
					class Altitude
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {{ 0.28,0.042 },1};
						right[] = {{ 0.32,0.042 },1};
						down[] = {{ 0.28,0.082 },1};
					};
					class Altitude2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{ 0.45,0.042 },1};
						right[] = {{ 0.49,0.042 },1};
						down[] = {{ 0.45,0.082 },1};
					};
					class RPM
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "rpm";
						sourceScale = 100;
						pos[] = {{ 0.63,0.18 },1};
						right[] = {{ 0.67,0.18 },1};
						down[] = {{ 0.63,0.22 },1};
					};
					class RPM2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "rpm";
						sourceScale = 100;
						pos[] = {{ 0.802,0.18 },1};
						right[] = {{ 0.842,0.18 },1};
						down[] = {{ 0.802,0.22 },1};
					};
					class Fuel
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "fuel";
						sourceScale = 100;
						pos[] = {{ 0.63,0.425 },1};
						right[] = {{ 0.67,0.425 },1};
						down[] = {{ 0.63,0.465 },1};
					};
					class Fuel2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "fuel";
						sourceScale = 100;
						pos[] = {{ 0.802,0.425 },1};
						right[] = {{ 0.842,0.425 },1};
						down[] = {{ 0.802,0.465 },1};
					};
					class Speed
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "speed";
						sourceScale = 2.23694;
						pos[] = {{ 0.28,0.225 },1};
						right[] = {{ 0.32,0.225 },1};
						down[] = {{ 0.28,0.265 },1};
					};
				};
			};
		};
	};
};