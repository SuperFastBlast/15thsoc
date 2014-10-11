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
	class Boat_F;
	class Rubber_duck_base_F;
	class 15thCRRCboat: Rubber_duck_base_F
	{
		mapSize = 4.754;
		_generalMacro = "15thCRRCboat";
		displayName = "Zodiac CRRC";
		accuracy = 0.5;
		model = "\A3\boat_f\Boat_Transport_01\Boat_Transport_01_F.p3d";
		picture = "\A3\boat_F\Boat_Transport_01\data\UI\Boat_Transport_01_CA.paa";
		Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";
		cost = 50000;
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
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start",1.0,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start",1.0,1.0,150};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop",1.0,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop",1.0,1.0,150};
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
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_idle_1",0.70794576,1.0,150};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_low2",1.0,1.2,300};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_mid2",1.4125376,0.6,400};
				frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EngineMaxOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_high2",1.9952624,1.0,500};
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
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,1.0,300};
				frequency = "1";
				volume = "(speed factor[3, 9])";
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
		maxSpeed = 70;
		acceleration = 3;
		simulation = "shipX";
		overSpeedBrakeCoef = 0.8;
		brakeDistance = 50;
		enginePower = 50;
		engineShiftY = 0;
		fuelCapacity = 80;
		fuelConsumptionRate = 35;
		engineFuelEfficiency = 1.0;
		slowSpeedForwardCoef = 0.09;
		normalSpeedForwardCoef = 0.5;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.01;
		thrustDelay = 1;
		waterLinearDampingCoefY = 5;
		waterLinearDampingCoefX = 2.0;
		waterAngularDampingCoef = 1.2;
		rudderForceCoef = 0.1;
		rudderForceCoefAtMaxSpeed = 0.009;
		enableGPS = 1;
		transportSoldier = 4;
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
		armor = 15;
		fuelExplosionPower = 0;
		class Turrets{};
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
	class 15thCRRC: 15thCRRCboat
	{
		_generalMacro = "15thCRRC";
		scope = 2;
		crew = "B_Soldier_F";
		faction = "BLU_F";
		side = 1;
		typicalCargo[] = {"B_Soldier_F","B_Soldier_F"};
	};
};
 class LandVehicle;
class Car: LandVehicle {
class AGM_Actions {
class AGM_Unload {
displayName = "$STR_AGM_Medical_Unload";
distance = 4;
condition = "return = false; {if (_x getVariable 'AGM_Unconscious') exitWith {return = true;};} foreach (crew AGM_Interaction_Target); return and vehicle player == player and !(AGM_Interaction_Target isKindOf 'Man')";
statement = "[AGM_Interaction_Target] call AGM_Medical_fnc_unloadPatients;";
};
class AGM_Load {
displayName = "$STR_AGM_Medical_Load";
distance = 4;
condition = "!(AGM_Interaction_Target isKindOf 'Man') and vehicle player == player and ((player getVariable 'AGM_Dragging') isKindOf 'Man' or (player getVariable 'AGM_Carrying') isKindOf 'Man') and AGM_Interaction_Target emptyPositions 'cargo' > 0";
statement = "[AGM_Interaction_Target] call AGM_Medical_fnc_loadIntoVehicle;";
exceptions[] = {"AGM_Medical_canTreat"};
};
};
};
class 15thCRRC: LandVehicle {
class AGM_Actions {
class AGM_Unload {
displayName = "$STR_AGM_Medical_Unload";
distance = 4;
condition = "return = false; {if (_x getVariable 'AGM_Unconscious') exitWith {return = true;};} foreach (crew AGM_Interaction_Target); return and vehicle player == player and !(AGM_Interaction_Target isKindOf 'Man')";
statement = "[AGM_Interaction_Target] call AGM_Medical_fnc_unloadPatients;";
};
class AGM_Load {
displayName = "$STR_AGM_Medical_Load";
distance = 4;
condition = "!(AGM_Interaction_Target isKindOf 'Man') and vehicle player == player and ((player getVariable 'AGM_Dragging') isKindOf 'Man' or (player getVariable 'AGM_Carrying') isKindOf 'Man') and AGM_Interaction_Target emptyPositions 'cargo' > 0";
statement = "[AGM_Interaction_Target] call AGM_Medical_fnc_loadIntoVehicle;";
exceptions[] = {"AGM_Medical_canTreat"};
};
};
};