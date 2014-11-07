class F35B: Plane 
	{
		
		scope = 2;		
		vehicleClass = "Air";
		side = TWest;
		faction = BLU_F;
		displayName = "F-35B Lightning II";
		author = "";

		crew = "B_Pilot_F";
		typicalCargo[] = {"B_Pilot_F"};
		viewDriverShadow = true;
		castDriverShadow = true;
		driverAction = "JS_JC_F35_pilot";
		driverCanEject = 1;

		model = "\f35b_15th\JS_JC_F35.p3d";
		animated = 1;
		simulation = "airplane";
		_generalMacro = "Plane";

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\f35b_15th\data\f35_1_co.paa"};
		enableGPS = 1;
		radarType = 4;
		LockDetectionSystem = 8;				/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionsystem = 16;	/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		irTarget = true;

		destrType = "DestructWreck";
		damageEffect = "AirDestructionEffects";
		
		extCameraPosition[] = {0.0, 3.0, -20.0};

		availableForSupportTypes[] = {"CAS_Bombing"};

		driveOnComponent[] = {"wheel_1_1", "wheel_2_1", "wheel_2_2"};
		gearRetracting = true;

		picture = "\f35b_15th\ui\Picture_F35B_CA.paa";
		icon = "\f35b_15th\ui\icon_F35B_CA.paa";
		mapSize = 15.5;

		cost = 20000000;
		armor = 40;
		damageResistance = 0.01096;

		laserScanner = true;
		irScanRangeMin = 3500;
		accuracy = 1.5;	// accuracy needed to recognize type of this target
		

		weapons[] = {"js_w_f35_master_arms_safe",
		"Cannon_30mm_Plane_CAS_02_F",
		"js_w_fa18_aim120cLaucher",
		"js_w_fa18_GBU32BombLauncher",
		"js_w_fa18_MaverickLauncher",
		"js_w_fa18_aim9xLaucher",
		"CMFlareLauncher"};
		magazines[] = {"500Rnd_Cannon_30mm_Plane_CAS_02_F",
		"js_m_fa18_aim120c_x1",
		"js_m_fa18_aim120c_x1",
		"js_m_fa18_GBU32_JDAM_x1",
		"js_m_fa18_GBU32_JDAM_x1",
		"js_m_fa18_bombrack_x1",
		"js_m_fa18_bombrack_x1",
		"js_m_fa18_bombrack_x1",
		"js_m_fa18_bombrack_x1",
		"js_m_fa18_aim9x_x1",
		"js_m_fa18_aim9x_x1",
		"js_m_fa18_Maverick_x1",
		"js_m_fa18_Maverick_x1",
		"js_m_fa18_Maverick_x1",
		"js_m_fa18_Maverick_x1",
		"js_m_fa18_Maverick_x1",
		"js_m_fa18_Maverick_x1",
		"js_m_fa18_Maverick_x1",
		"js_m_fa18_Maverick_x1",
		"240Rnd_CMFlare_Chaff_Magazine"};


		fov = 0.5;
		landingAoa = "rad 7";
		gunAimDown = 0.07;
		type = VAir;
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {1, 1, 0.7};

		supplyRadius = 6;
		maxSpeed = 1400;	// max speed on level road, km/h
		landingSpeed = 220;
		vtol = 1;

		envelope[] = {0.0, 0.4, 1.9, 4, 6.8, 8.3, 8.5, 8, 7.2, 5.8, 4, 1.8, 0.5, 0};
		aileronSensitivity = 0.5;	// relative aileron sensitivity
		elevatorSensitivity = 0.8;	// relative elevator sensitivity

		#include "Cfg_InGame_Sounds.hpp"
		#include "CfgHUD.hpp"
		#include "Cfg_AnimationSources.hpp"

		gunBeg = "nosegun_dir";	// endpoint of the gun
		gunEnd = "nosegun";	// chamber of the gun
		memoryPointGun = "nosegun";
		memoryPointLRocket = "l_rocket_point";
		memoryPointRRocket = "r_rocket_point";
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		
		class turrets {};

		class Exhausts 
		{
			class Exhaust_main 
			{
				position = "Exhausts_start_main";
				direction = "Exhausts_end_main";
				effect = "ExhaustsEffectPlane";
			};
			
		};


		class WingVortices 
		{
			class WingTipLeft 
			{
				effectName = "WingVortices";
				position = "cerveny pozicni";
			};
			
			class WingTipRight 
			{
				effectName = "WingVortices";
				position = "zeleny pozicni";
			};
			
			class BodyLeft_inner 
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};
			
			class BodyRight_inner 
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
			class BodyLeft_outer 
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_E";
			};
			
			class BodyRight_outer 
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_E";
			};
		};

		class Reflectors 
		{
			class Main 
			{
				color[] = {7000, 7500, 10000, 1};
				ambient[] = {100, 100, 100, 0};
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
				FlareSize = 4;
				
				class Attenuation 
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
			
			
		};
				
		class MarkerLights 
		{

			class Cockpit_light_1 
 			{

				name = "cockpit_light_pos";
				ambient[] = {.01,.01,.01,1};
 				color[] = {0.03,1,0.11,1};
				brightness = 0.035;
				blinking = false;

 				class Attenuation
 				{
 					start = 1;
 					constant = 0;
 					linear = 0;
 					quadratic = 4;
 				};
 			};

			class Red_Still_R 
			{
				name = "cerveny pozicni";
				color[] = {1000, 0, 0, 1};
				ambient[] = {1, 0, 0, 1};
				brightness = 0.05;
				blinking = false;
			};
			
			class Green_Still_L 
			{
				name = "zeleny pozicni";
				color[] = {0.03, 0.3, 0.03, 1};
				ambient[] = {0.003, 0.03, 0.003, 1};
				brightness = 0.05;
				blinking = false;
			};

			class White_Still_C 
			{
				name = "marker_light_white_C";
				color[] = {0.0388, 0.0388, 0.0388, 1};
				ambient[] = {0.03, 0.023, 0.0056, 1};
				brightness = 0.05;
				blinking = false;
			};

			
		};
		

		class UserActions 
		{

			
			
			class afterburner 
			{

				displayName = "Afterburner On";
				shortcut = "SeagullFastForward";
				condition = "this animationPhase ""ab_switch"" == 0 and player in this and this animationPhase ""eng_fail"" < 1";
				statement = "this animate [""burner_fire_1_left"",0]; this animate [""burner_fire_1_right"",0]; this animate [""ab_switch"",1]; this execvm ""\f35b_15th\scripts\FX\F35_FX_Afterburner.sqf""";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
		                hideOnUse = 1;
			};
			
			class afterburneroff
			{
				displayName = "Afterburner Off";
				shortcut = "SeagullFastForward";
				condition = "this animationPhase ""ab_switch"" == 1 and player in this";
				statement = "this animate [""burner_fire_1_left"",1]; this animate [""burner_fire_1_right"",1]; this animate [""ab_switch"",0]";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
		                hideOnUse = 1;

			};
				class cap_loadout {
				displayName = "CAP Loadout";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""JDG_carrier_Spawner""]) < 500) and (damage (nearestObject [this, ""JDG_carrier_Spawner""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Box_meu_ace""]) < 999) and (damage (nearestObject [this, ""Box_meu_ace""]) < 1) and player == driver this  and speed this < 10)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_cap_loadout.sqf""";
			};
				class cap_loadout_LHD {
				displayName = "CAP Loadout LHD";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 500;
				condition = "((this distance (nearestObject [this, ""Land_Rope_01_F""]) < 9000) and (damage (nearestObject [this, ""Land_Rope_01_F""]) < 1) and player == driver this  and speed this < 10)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_cap_loadout.sqf""";
			};
			class cas_loadout {
				displayName = "CAS Loadout";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""JDG_carrier_Spawner""]) < 500) and (damage (nearestObject [this, ""JDG_carrier_Spawner""]) < 1) and player == driver this  and speed this < 1)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_cas_loadout.sqf""";
			};
			class cas_loadout_LHD {
				displayName = "CAS Loadout LHD";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 500;
				condition = "((this distance (nearestObject [this, ""Land_Rope_01_F""]) < 9000) and (damage (nearestObject [this, ""Land_Rope_01_F""]) < 1) and player == driver this  and speed this < 10)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_cas_loadout.sqf""";
			};
			class gbu_loadout {
				displayName = "GBU Loadout";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""JDG_carrier_Spawner""]) < 500) and (damage (nearestObject [this, ""JDG_carrier_Spawner""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Box_meu_ace""]) < 3000) and (damage (nearestObject [this, ""Box_meu_ace""]) < 1) and player == driver this  and speed this < 10)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_gbu_loadout.sqf""";
			};
			class gbu_loadout_LHD {
				displayName = "GBU Loadout LHD";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 500;
				condition = "((this distance (nearestObject [this, ""Land_Rope_01_F""]) < 9000) and (damage (nearestObject [this, ""Land_Rope_01_F""]) < 1) and player == driver this  and speed this < 10)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_gbu_loadout.sqf""";
			};
			class refuel_option {
				displayName = "Refuel";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""JDG_carrier_Spawner""]) < 500) and (damage (nearestObject [this, ""JDG_carrier_Spawner""]) < 1) and player == driver this  and speed this < 1) or ((this distance (nearestObject [this, ""Box_meu_ace""]) < 1000) and (damage (nearestObject [this, ""Box_meu_ace""]) < 1) and player == driver this  and speed this < 10)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_refuel.sqf""";
			};
			class refuel_option_LHD {
				displayName = "Refuel LHD";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 500;
				condition = "((this distance (nearestObject [this, ""Land_Rope_01_F""]) < 9000) and (damage (nearestObject [this, ""Land_Rope_01_F""]) < 1) and player == driver this  and speed this < 10)";
				statement = "[this] execVM""f35b_15th\scripts\Loadouts\f35_refuel.sqf""";
			};
				class GPS_targeting_system {
				displayName = "GPS Targeting System";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				condition = "player in this and ((""js_m_fa18_GBU38_JDAM_x1"" in magazines this) or (""js_m_fa18_GBU32_JDAM_x1"" in magazines this) or (""js_m_fa18_GBU31_JDAM_x1"" in magazines this))";
				statement = "[] execVM ""\f35b_15th\scripts\TARGETING_SYSTEM\functions\FA18_GPS_TARGETING_INIT.sqf""";
			};




			
		};

		class Damage 
		{
			tex[] = {};
			mat[] = {"f35b_15th\data\f35.rvmat", "f35b_15th\data\f35_damage.rvmat", "f35b_15th\data\f35_destruct.rvmat"};
		};
		
		class Library 
		{
			libTextDesc = "The Lockheed Martin F-35 Lightning II is a family of single-seat, single-engine, fifth-generation multirole fighters under development to perform ground attack, reconnaissance, and air defense missions with stealth capability.[8][9] The F-35 has three main models; the F-35A is a conventional takeoff and landing variant, the F-35B is a short take-off and vertical-landing variant, and the F-35C is a carrier-based variant.";
		};

		class Eventhandlers: Eventhandlers
		{

			init = "_this execVM ""\f35b_15th\scripts\init_f35B.sqf""";
		};
	};

	class F35Wreck : PlaneWreck 
	{
		model = "\f35b_15th\JS_JC_F35Wreck.p3d";
		typicalCargo[] = {};
		irTarget = false;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};