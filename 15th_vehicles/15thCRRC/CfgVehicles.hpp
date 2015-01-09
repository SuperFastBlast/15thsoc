class CfgVehicles
{
	class Weapon_Bag_Base;
	class B_UAV_01_backpack_F: Weapon_Bag_Base
	{	
		class EventHandlers;
		class assembleinfo;
	};
	class B_CRRC_backpack: B_UAV_01_backpack_F
	{
		_generalmacro = "B_CRRC_backpack";
		displayname = "Zodiac CRRC Bag";
		faction = "BLU_F";
		hiddenselectionstextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		mapsize = 0.6;
		mass = 300;
		maximumload = 0;
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		picture = "\A3\Drones_F\Weapons_F_Gamma\ammoboxes\bags\data\ui\icon_B_C_UAV_rgr_ca";
		scope = 2;
		side = 1;
		class assembleInfo: assembleinfo
		{
			assembleto = "15thCRRCboat";
			base = "";
			displayname = "Zodiac CRRC";
		};
	};
	class B_Boat_Transport_01_F;
	class 15thCRRCboat: B_Boat_Transport_01_F
	{
		mapSize = 4.754;
		_generalMacro = "15thCRRCboat";
		scope = 2;
		displayName = "Zodiac CRRC";
		crew = "B_Soldier_F";
		faction = "BLU_F";
		side = 1;
		commandercansee = 31;
		drivercansee = 31;
		typicalCargo[] = {"B_Soldier_F","B_Soldier_F"};
		accuracy = 0.5;
		unitInfoType = "RscUnitInfoShip";
		radarType = 8;
		model = "\A3\boat_f\Boat_Transport_01\Boat_Transport_01_F.p3d";
		picture = "\A3\boat_F\Boat_Transport_01\data\UI\Boat_Transport_01_CA.paa";
		Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";
		cost = 50000;
		threat[] = {0.6,0.2,0.3};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class HitPoints
		{
			class HitBody
			{
				armor = 0.7;
				material = 50;
				name = "hull";
				visual = "zbytek";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.12;
				material = -1;
				name = "Engine";
				visual = "";
				passThrough = 1;
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 0.9;
        	soundEngineOnInt[]={"15thCRRC\sound\ext-boat-start-01",1.0,1.0};
        	soundEngineOnExt[]={"15thCRRC\sound\ext-boat-start-01",1.0,1.0,150};
      		soundEngineOffInt[]={"15thCRRC\sound\ext-boat-stop-01",1.0,1.0};
        	soundEngineOffExt[]={"15thCRRC\sound\ext-boat-stop-01",1.0,1.0,150};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.7782794,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.7782794,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.7782794,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.7782794,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.7782794,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.7782794,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.7782794,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.7782794,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.7782794,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.7782794,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.7782794,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.7782794,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.7782794,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.7782794,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
        class Sounds
        {
            		class IdleOut
            		{
                		sound[]={"15thCRRC\sound\ext-boat-engine-idle-01",0.70794576,1.0,150};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
            		};
            		class Engine
            		{
                		sound[]={"15thCRRC\sound\ext-boat-engine-low-01",1.0,1.2,300};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			
            		};
			class EngineMidOut
			{
                		sound[]={"15thCRRC\sound\ext-boat-engine-low-01",1.4,1.0,400};
				frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
            		class EngineHighOut
            		{
                		sound[]={"15thCRRC\sound\ext-boat-engine-high-01",1.6,1.0,500};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume = "engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",1.0,1.0,100};
				frequency = "1";
				volume = "(speed factor[4, 1])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",1.0,1.0,150};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
		};
		driverLeftHandAnimName = "DrivingWheel";
		driverAction = "Zodiac_Driver";
		cargoAction[] = {"Zodiac_Cargo01","Zodiac_Cargo02","Zodiac_Cargo03","Zodiac_Cargo04"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		transportMaxBackpacks = 6;
		maxSpeed = 50;
		acceleration = 1;
		idleRpm = 40;
		redRpm = 1200;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.333,"N",0,"D1",2.0,"D2",1.85,"D3",1.75};
			TransmissionRatios[] = {"High",1.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "shipX";
		enginePower = 110;
		engineShiftY = 0.05;
		brakeIdleSpeed = 1.78;
		brakeDistance = 30;
		slowSpeedForwardCoef = 0.18;
		normalSpeedForwardCoef = 0.6;
		waterLeakiness = 35.0;
		waterResistanceCoef = 0.010;
		thrustDelay = 1;
		waterLinearDampingCoefY = 4.8;
		waterLinearDampingCoefX = 2.0;
		waterAngularDampingCoef = 1.2;
		turnCoef 	= 0.6;
		rudderForceCoef = 0.2;
		rudderForceCoefAtMaxSpeed = 0.009;
		enableGPS = 1;
		transportSoldier = 0;
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_boat_1";
				gunnerCompartments = "Compartment2";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 1;
				maxElev = 60;
				minElev = -15;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-90,90};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_boat_2";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				proxyIndex = 2;
				maxTurn = 90;
				minTurn = -90;
				minElev = -15;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-90,90};
					CargoTurret_04[] = {-90,90};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_boat_3";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_F";
				memoryPointsGetInGunner = "pos cargo RF";
				memoryPointsGetInGunnerDir = "pos cargo RF dir";
				proxyIndex = 3;
				minElev = -15;
				maxTurn = 90;
				minTurn = -90;
				class dynamicViewLimits{};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction = "passenger_boat_4";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_M";
				memoryPointsGetInGunner = "pos cargo LF";
				memoryPointsGetInGunnerDir = "pos cargo LF dir";
				proxyIndex = 4;
				maxTurn = 90;
				minTurn = -90;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-90,90};
				};
			};
		};
		supplyRadius = 3;
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
		};
		armor = 20;
		fuelExplosionPower = 0;
		class Library
		{
			libTextDesc = "";
		};
		extCameraPosition[] = {0,2.0,-7.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\boat_f\Boat_Transport_01\data\Boat_Transport_01.rvmat","A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat","A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\15thcrrc\scripts\rotate.sqf""";
		};
		class assembleInfo
		{
			assembleto = "";
			base = "";
			displayname = "";
			dissasembleto[] = {"B_CRRC_backpack"};
			primary = 1;
		};
	};
};