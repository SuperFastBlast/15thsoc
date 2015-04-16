////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Wed Apr 15 18:10:09 2015 : Source 'file' date Wed Apr 15 18:10:09 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class arp_objects2 : config.bin{
class CfgPatches
{
	class ARP_Objects2
	{
		units[] = {"ARP_Objects2","ARP_Objects_IED","ARP_Objects_Folder","ARP_Objects_Map","ARP_Objects_galaxy","ARP_Objects_computer","ARP_Objects_keymouse","ARP_Objects_117radio","ARP_Objects_Map2","ARP_Objects_passport","ARP_Objects_flag_blue","ARP_Objects_flag_red","ARP_Objects_flag_white","ARP_Objects_flag_green","ARP_Objects_clipboard","ARP_Objects_cot","ARP_Objects_harddrive","ARP_Objects_notepad","ARP_Objects_satbag","ARP_Objects_satcom","ARP_Objects_telephone","ARP_Objects_cam1","ARP_Objects_cam2","ARP_Objects_cam2destr","ARP_Objects_cam2stat","ARP_Objects_snakecam","ARP_Objects_Laptop","ARP_Objects_largescreen","ARP_Objects_monitor","ARP_Objects_toughbook","ARP_Objects_cam_target","ARP_Objects_rack","ARP_Objects_boxammo","ARP_Objects_boxmre","ARP_Objects_boxchem","ARP_Objects_boxpcangreen","ARP_Objects_boxpcantan","ARP_Objects_boxpcanblack","ARP_Objects_mags","ARP_Objects_mag","ARP_Objects_tomahawk","ARP_Objects_oe254","ARP_Objects_oe254bag","ARP_Objects_flagus","ARP_Objects_flagafg","ARP_Objects_flagaus","ARP_Objects_flagbi","ARP_Objects_flagbrit","ARP_Objects_flagdan","ARP_Objects_flagfin","ARP_Objects_flagfra","ARP_Objects_flagger","ARP_Objects_flagjap","ARP_Objects_flagrok","ARP_Objects_flag751","ARP_Objects_flagiran","ARP_Objects_flagjihad1","ARP_Objects_flagjihad2","ARP_Objects_flagnkor","ARP_Objects_flagpir","ARP_Objects_flagrus","ARP_Objects_flagsyrop","ARP_Objects_money","ARP_Objects_moneya","ARP_Objects_uavconblack","ARP_Objects_uavcontan","ARP_Objects_uavcongreen","ARP_Objects_poster1","ARP_Objects_poster2","ARP_Objects_water","ARP_Objects_pallet","ARP_Objects_cardboardcrate","ARP_Objects_cardboardcratemre","ARP_Objects_cardboardcratewater","ARP_Objects_cardboardcrateclosed","ARP_Objects_sleepingbag","ARP_Objects_blackbox","ARP_Objects_waterbottle","ARP_Objects_mrea","ARP_Objects_cocaine","ARP_Objects_weed","ARP_Objects_armacard","ARP_Objects_radio","ARP_Objects_8ball","ARP_Objects_heroin","ARP_Objects_key","ARP_Objects_card_red","ARP_Objects_card_blue","ARP_Objects_card_black","ARP_Objects_card_green","ARP_Objects_card_yellow","ARP_Objects_hooch_b","ARP_Objects_hooch_c","ARP_Objects_hooch","ARP_Objects_hooch_d","ARP_Objects_hooch_e","ARP_Objects_hooch_f","ARP_Objects_hooch_g","ARP_Objects_hooch_h","ARP_Objects_hooch_i","ARP_Objects_ponchoroll_a","ARP_Objects_ponchoroll_b","ARP_Objects_ponchoroll_c","ARP_Objects_ponchoroll_d","ARP_Objects_ponchoroll_e","ARP_Objects_ponchoroll_f","ARP_Objects_ponchoroll_g","ARP_Objects_ponchoroll_h","ARP_Objects_ponchoroll_i","ARP_Objects_sign_res","ARP_Objects_cardreader","ARP_Objects_binderopen","ARP_Objects_binderclosed","ARP_Objects_binderstand","ARP_Objects_binders","ARP_Objects_servermain2","ARP_Objects_servertower","ARP_Objects_keypad","ARP_Objects_map3","ARP_Objects_printer","ARP_Objects_newspaperopen","ARP_Objects_newspaperclosed","ARP_Objects_newspaperstack","ARP_Objects_cardboardcratenews","ARP_Objects_slipsign","ARP_Objects_paper","ARP_Objects_o2tank","ARP_Objects_ett"};
		weapons[] = {};
		requiredVersion = 1.0;
		magazines[] = {"ARP_Objects_Laptop_M","ARP_Objects_Toughbook_M","ARP_Objects_snakecam_M","ARP_Objects_boxmre_m","ARP_Objects_water_m","ARP_Objects_blackbox_m","ARP_Objects_money_m","ARP_Objects_moneya_m","ARP_Objects_waterbottle_m","ARP_Objects_smartphone_m","ARP_Objects_folder_m","ARP_Objects_clipboard_m","ARP_Objects_passport_m","ARP_Objects_satbag_m","ARP_Objects_mre_m","ARP_Objects_cocaine_m","ARP_Objects_weed_m","ARP_Objects_armacard_m","ARP_Objects_8ball_m","ARP_Objects_heroin_m","ARP_Objects_key_m","ARP_Objects_card_red_m","ARP_Objects_card_green_m","ARP_Objects_card_yellow_m","ARP_Objects_card_black_m","ARP_Objects_card_blue_m","ARP_Objects_poncho_a_m","ARP_Objects_poncho_b_m","ARP_Objects_poncho_c_m","ARP_Objects_poncho_d_m","ARP_Objects_poncho_e_m","ARP_Objects_poncho_f_m","ARP_Objects_poncho_g_m","ARP_Objects_poncho_h_m","ARP_Objects_poncho_i_m","ARP_Objects_ett_m","ARP_Objects_o2tank_m","ARP_Objects_paper_m","ARP_Objects_newspaperstack_m","ARP_Objects_newspaperclosed_m"};
		ammo[] = {};
	};
	class Disable_XEH_Logging
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class Cfgvehicleclasses
{
	class ARP_objects
	{
		displayname = "Objects (ARP)";
	};
};
class CfgVehicles
{
	class All{};
	class Static: All{};
	class Building: Static{};
	class NonStrategic: Building{};
	class TargetTraining: NonStrategic{};
	class TargetGrenade: TargetTraining{};
	class ARP_Objects_IED: Static
	{
		model = "\arp_objects2\models\ied1.p3d";
		armor = 200;
		scope = 2;
		displayName = "IED";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_Folder: Static
	{
		model = "\arp_objects2\models\folder.p3d";
		armor = 200;
		scope = 2;
		displayName = "Folder";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_Map: Static
	{
		model = "\arp_objects2\models\map.p3d";
		armor = 200;
		scope = 2;
		displayName = "Map - Stratis";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_galaxy: Static
	{
		model = "\arp_objects2\models\galaxy.p3d";
		armor = 200;
		scope = 2;
		displayName = "Smartphone";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_computer: Static
	{
		model = "\arp_objects2\models\computer.p3d";
		armor = 200;
		scope = 2;
		displayName = "Computer";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_keymouse: Static
	{
		model = "\arp_objects2\models\keymouse.p3d";
		armor = 200;
		scope = 2;
		displayName = "Keyboard/Mouse";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_117radio: Static
	{
		model = "\arp_objects2\models\117radio.p3d";
		armor = 200;
		scope = 2;
		displayName = "117 Radio";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_Map2: Static
	{
		model = "\arp_objects2\models\map2.p3d";
		armor = 200;
		scope = 2;
		displayName = "Wall Map - Stratis";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_passport: Static
	{
		model = "\arp_objects2\models\passport.p3d";
		armor = 200;
		scope = 2;
		displayName = "US Passport";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_flag_blue: Static
	{
		model = "\arp_objects2\models\flagsam.p3d";
		armor = 200;
		scope = 2;
		displayName = "Flag Blue";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flag_blue.paa']";
		};
	};
	class ARP_Objects_flag_red: ARP_Objects_flag_blue
	{
		displayName = "Flag Red";
		vehicleclass = "ARP_objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flag_red.paa']";
		};
	};
	class ARP_Objects_flag_white: ARP_Objects_flag_blue
	{
		displayName = "Flag White";
		vehicleclass = "ARP_objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flag_white.paa']";
		};
	};
	class ARP_Objects_flag_green: ARP_Objects_flag_blue
	{
		displayName = "Flag Green";
		vehicleclass = "ARP_objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flag_green.paa']";
		};
	};
	class ARP_Objects_clipboard: Static
	{
		model = "\arp_objects2\models\clipboard.p3d";
		armor = 200;
		scope = 2;
		displayName = "Clipboard";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_cot: Static
	{
		model = "\arp_objects2\models\cot.p3d";
		armor = 200;
		scope = 2;
		displayName = "Military Cot";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_harddrive: Static
	{
		model = "\arp_objects2\models\harddrive.p3d";
		armor = 200;
		scope = 2;
		displayName = "Harddrive";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_notepad: Static
	{
		model = "\arp_objects2\models\notepad.p3d";
		armor = 200;
		scope = 2;
		displayName = "Notepad";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_satbag: Static
	{
		model = "\arp_objects2\models\satbag.p3d";
		armor = 200;
		scope = 2;
		displayName = "Satcom Antenna Bag";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_satcom: Static
	{
		model = "\arp_objects2\models\satcom.p3d";
		armor = 200;
		scope = 2;
		displayName = "Satcom Antenna";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_telephone: Static
	{
		model = "\arp_objects2\models\telephone.p3d";
		armor = 200;
		scope = 2;
		displayName = "Telephone";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_cam1: Static
	{
		model = "\arp_objects2\models\cams\cam1\cam1.p3d";
		armor = 60;
		scope = 2;
		displayName = "Surveillance Camera 1";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		class AnimationSources
		{
			class Cam1_rot
			{
				animPeriod = 60;
			};
		};
	};
	class ARP_Objects_cam2: static
	{
		model = "\arp_objects2\models\cams\cam2\arp_cam2.p3d";
		armor = 2;
		scope = 2;
		displayName = "Surveillance Camera 2";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		class HitPoints
		{
			class HitCam
			{
				armor = 8e-005;
				material = -1;
				name = "cam";
				visual = "cam";
				passThrough = 0;
			};
		};
		class AnimationSources
		{
			class Cam2_rot
			{
				animPeriod = 10;
			};
			class cam_source
			{
				source = "Hit";
				hitpoint = "HitCam";
				raw = 1;
			};
		};
	};
	class ARP_Objects_cam2destr: Static
	{
		model = "\arp_objects2\models\cam2destr.p3d";
		armor = 200;
		scope = 2;
		displayName = "Surveillance Camera 2 (Destroyed)";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cam2stat: Static
	{
		model = "\arp_objects2\models\cam2stat.p3d";
		armor = 200;
		scope = 2;
		displayName = "Surveillance Camera 2 (Static)";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_snakecam: Static
	{
		model = "\arp_objects2\models\cams\snakecam\snakecam.p3d";
		armor = 200;
		scope = 2;
		displayName = "Snake Cam";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"screen"};
		class AnimationSources
		{
			class SnakeCam_rot
			{
				animPeriod = 3;
			};
		};
	};
	class ARP_Objects_Laptop: Static
	{
		model = "\arp_objects2\models\screens\laptop.p3d";
		armor = 200;
		scope = 2;
		displayName = "Laptop";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"screen_full","screen_1","screen_2","screen_3","screen_4"};
	};
	class ARP_Objects_largescreen: Static
	{
		model = "\arp_objects2\models\screens\largescreen.p3d";
		armor = 200;
		scope = 2;
		displayName = "TOC Screen";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"screen_full","screen_1","screen_2","screen_3","screen_4"};
	};
	class ARP_Objects_monitor: Static
	{
		model = "\arp_objects2\models\screens\monitor.p3d";
		armor = 200;
		scope = 2;
		displayName = "Monitor";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"screen_full","screen_1","screen_2","screen_3","screen_4"};
	};
	class ARP_Objects_toughbook: Static
	{
		model = "\arp_objects2\models\screens\toughbook.p3d";
		armor = 200;
		scope = 2;
		displayName = "Toughbook";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"screen_full","screen_1","screen_2","screen_3","screen_4"};
	};
	class ARP_Objects_cam_target: Static
	{
		model = "\arp_objects2\models\cam_target.p3d";
		armor = 200;
		scope = 2;
		displayName = "cam_target";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ReammoBox;
	class ARP_Objects_rack: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\rack.p3d";
		displayName = "Weapon rack";
		vehicleclass = "ARP_objects";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructBuilding";
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_boxammo: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\boxammo.p3d";
		displayName = "Box - Ammo";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleclass = "ARP_objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_boxmre: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\boxmre.p3d";
		displayName = "Box - MRE";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleclass = "ARP_objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_boxchem: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\boxchem.p3d";
		displayName = "Box - Chemlights";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_boxpcangreen: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\boxpcangreen.p3d";
		displayName = "Pelican Box Green";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_boxpcantan: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\boxpcantan.p3d";
		displayName = "Pelican Box Tan";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_boxpcanblack: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\boxpcanblack.p3d";
		displayName = "Pelican Box Black";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_mags: Static
	{
		model = "\arp_objects2\models\mags.p3d";
		armor = 200;
		scope = 2;
		displayName = "Empty Magazines";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_mag: Static
	{
		model = "\arp_objects2\models\mag.p3d";
		armor = 200;
		scope = 2;
		displayName = "Empty Magazine";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	class ARP_Objects_tomahawk: Static
	{
		model = "\arp_objects2\models\tomahawk.p3d";
		armor = 60;
		scope = 2;
		displayName = "Tomahawk Cruise Missile";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_oe254: Static
	{
		model = "\arp_objects2\models\oe254.p3d";
		armor = 60;
		scope = 2;
		displayName = "OE-254 Antenna";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_oe254bag: Static
	{
		model = "\arp_objects2\models\oe254bag.p3d";
		armor = 200;
		scope = 2;
		displayName = "OE-254 Antenna Bag";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_flagus: Static
	{
		model = "\arp_objects2\models\flagwall.p3d";
		armor = 200;
		scope = 2;
		displayName = "Wall Flag - United States";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagus.paa']";
		};
	};
	class ARP_Objects_flagafg: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Afghanistan";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagafg.paa']";
		};
	};
	class ARP_Objects_flagaus: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Australia";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagaus.paa']";
		};
	};
	class ARP_Objects_flagbi: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Bohemia Interactive";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagbi.paa']";
		};
	};
	class ARP_Objects_flagbrit: ARP_Objects_flagus
	{
		displayName = "Wall Flag - United Kingdom";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagbrit.paa']";
		};
	};
	class ARP_Objects_flagdan: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Denmark";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagdan.paa']";
		};
	};
	class ARP_Objects_flagfin: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Finland";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagfin.paa']";
		};
	};
	class ARP_Objects_flagfra: ARP_Objects_flagus
	{
		displayName = "Wall Flag - France";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagfra.paa']";
		};
	};
	class ARP_Objects_flagger: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Germany";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagger.paa']";
		};
	};
	class ARP_Objects_flagjap: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Japan";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagjap.paa']";
		};
	};
	class ARP_Objects_flagrok: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Republic of Korea";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagrok.paa']";
		};
	};
	class ARP_Objects_flag751: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Reaper 751";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flag751.paa']";
		};
	};
	class ARP_Objects_flagiran: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Iran";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagira.paa']";
		};
	};
	class ARP_Objects_flagjihad1: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Jihad 1";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagjihad.paa']";
		};
	};
	class ARP_Objects_flagjihad2: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Jihad 2";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagjihad2.paa']";
		};
	};
	class ARP_Objects_flagnkor: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Peoples Republic of Korea";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagnkor.paa']";
		};
	};
	class ARP_Objects_flagpir: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Pirate";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagpir.paa']";
		};
	};
	class ARP_Objects_flagrus: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Russia";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagrus.paa']";
		};
	};
	class ARP_Objects_flagsyrop: ARP_Objects_flagus
	{
		displayName = "Wall Flag - Syrian Opposition";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\flagsyrop.paa']";
		};
	};
	class ARP_Objects_money: Static
	{
		model = "\arp_objects2\models\money.p3d";
		armor = 200;
		scope = 2;
		displayName = "Money Pile";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_moneya: Static
	{
		model = "\arp_objects2\models\moneya.p3d";
		armor = 200;
		scope = 2;
		displayName = "Money Stack";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_uavconblack: Static
	{
		model = "\arp_objects2\models\screens\uavcon\uavcon.p3d";
		armor = 200;
		scope = 2;
		displayName = "UAV box - black";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"screen_full","screen_1","screen_2","screen_3","screen_4","box"};
	};
	class ARP_Objects_uavcontan: ARP_Objects_uavconblack
	{
		displayName = "UAV box - tan";
		vehicleClass = "ARP_Objects";
	};
	class ARP_Objects_uavcongreen: ARP_Objects_uavconblack
	{
		displayName = "UAV box - green";
		vehicleClass = "ARP_Objects";
	};
	class ARP_Objects_poster1: Static
	{
		model = "\arp_objects2\models\poster.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poster 1";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\poster1.paa']";
		};
	};
	class ARP_Objects_poster2: ARP_Objects_poster1
	{
		displayName = "Poster 2";
		vehicleClass = "ARP_Objects";
		hiddenSelections[] = {"main"};
		class EventHandlers
		{
			init = "(_this select 0) setobjecttexture [0,'ARP_objects2\data\poster2.paa']";
		};
	};
	class ARP_Objects_water: Static
	{
		model = "\arp_objects2\models\waterpack.p3d";
		armor = 200;
		scope = 2;
		displayName = "Water - 6 Pack";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_pallet: Static
	{
		model = "\arp_objects2\models\pallet.p3d";
		armor = 200;
		scope = 2;
		displayName = "Pallet";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cardboardcrate: Static
	{
		model = "\arp_objects2\models\cardboardcrate.p3d";
		armor = 200;
		scope = 2;
		displayName = "Cardboard Crate - Empty";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cardboardcratemre: Static
	{
		model = "\arp_objects2\models\cardboardcratemre.p3d";
		armor = 200;
		scope = 2;
		displayName = "Cardboard Crate - MRE";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cardboardcratewater: Static
	{
		model = "\arp_objects2\models\cardboardcratewater.p3d";
		armor = 200;
		scope = 2;
		displayName = "Cardboard Crate - Water";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cardboardcrateclosed: Static
	{
		model = "\arp_objects2\models\cardboardcrateclosed.p3d";
		armor = 200;
		scope = 2;
		displayName = "Cardboard Crate - Closed";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_sleepingbag: Static
	{
		model = "\arp_objects2\models\sleepingbag.p3d";
		armor = 200;
		scope = 2;
		displayName = "Sleepingbag";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_blackbox: Static
	{
		model = "\arp_objects2\models\blackbox.p3d";
		armor = 200;
		scope = 2;
		displayName = "Blackbox";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_waterbottle: Static
	{
		model = "\arp_objects2\models\waterbottle.p3d";
		armor = 200;
		scope = 2;
		displayName = "Water Bottle";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_mrea: Static
	{
		model = "\arp_objects2\models\mrea.p3d";
		armor = 200;
		scope = 2;
		displayName = "MRE";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cocaine: Static
	{
		model = "\arp_objects2\models\cocaine.p3d";
		armor = 200;
		scope = 2;
		displayName = "Kilo Cocaine";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_weed: Static
	{
		model = "\arp_objects2\models\weed.p3d";
		armor = 200;
		scope = 2;
		displayName = "Bag of Weed";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_armacard: Static
	{
		model = "\arp_objects2\models\armacard.p3d";
		armor = 200;
		scope = 2;
		displayName = "Credit Card";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_radio: Static
	{
		model = "\arp_objects2\models\radio.p3d";
		armor = 200;
		scope = 2;
		displayName = "Radio";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_8ball: Static
	{
		model = "\arp_objects2\models\8ball.p3d";
		armor = 200;
		scope = 2;
		displayName = "Cocaine 8 Ball";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_heroin: Static
	{
		model = "\arp_objects2\models\heroin.p3d";
		armor = 200;
		scope = 2;
		displayName = "Heroin";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_key: Static
	{
		model = "\arp_objects2\models\key.p3d";
		armor = 200;
		scope = 2;
		displayName = "Key";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_card_red: Static
	{
		model = "\arp_objects2\models\card_red.p3d";
		armor = 200;
		scope = 2;
		displayName = "Key Card Red";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_card_blue: Static
	{
		model = "\arp_objects2\models\card_blue.p3d";
		armor = 200;
		scope = 2;
		displayName = "Key Card Blue";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_card_black: Static
	{
		model = "\arp_objects2\models\card_black.p3d";
		armor = 200;
		scope = 2;
		displayName = "Key Card Black";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_card_green: Static
	{
		model = "\arp_objects2\models\card_green.p3d";
		armor = 200;
		scope = 2;
		displayName = "Key Card Green";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_card_yellow: Static
	{
		model = "\arp_objects2\models\card_yellow.p3d";
		armor = 200;
		scope = 2;
		displayName = "Key Card yellow";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_hooch_b: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_b.p3d";
		displayName = "Hooch (ACU)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch_c: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_c.p3d";
		displayName = "Hooch (MULTI)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch.p3d";
		displayName = "Hooch (BDU)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch_d: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_d.p3d";
		displayName = "Hooch (DCU)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch_e: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_e.p3d";
		displayName = "Hooch (Snow)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch_f: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_f.p3d";
		displayName = "Hooch (Green)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch_g: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_g.p3d";
		displayName = "Hooch (Flecktarn)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch_h: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_h.p3d";
		displayName = "Hooch (DPCU)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_hooch_i: ReammoBox
	{
		animated = 0;
		scope = 2;
		icon = "\arp_objects2\data\icon.paa";
		model = "\arp_objects2\models\hooch_i.p3d";
		displayName = "Hooch (Blue)";
		nameSound = "ammocrate";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "ARP_Objects";
		destrType = "DestructBuilding";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class ARP_Objects_ponchoroll_a: Static
	{
		model = "\arp_objects2\models\ponchoroll_a.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho Multi";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_b: Static
	{
		model = "\arp_objects2\models\ponchoroll_b.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho Flecktarn";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_c: Static
	{
		model = "\arp_objects2\models\ponchoroll_c.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho ACU";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_d: Static
	{
		model = "\arp_objects2\models\ponchoroll_d.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho DCU";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_e: Static
	{
		model = "\arp_objects2\models\ponchoroll_e.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho Green";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_f: Static
	{
		model = "\arp_objects2\models\ponchoroll_f.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho White";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_g: Static
	{
		model = "\arp_objects2\models\ponchoroll_g.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho BDU";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_h: Static
	{
		model = "\arp_objects2\models\ponchoroll_h.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho DPCU";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ponchoroll_i: Static
	{
		model = "\arp_objects2\models\ponchoroll_i.p3d";
		armor = 200;
		scope = 2;
		displayName = "Poncho Blue";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_sign_res: Static
	{
		model = "\arp_objects2\models\signres.p3d";
		armor = 200;
		scope = 2;
		displayName = "Sign - Restricted";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cardreader: Static
	{
		model = "\arp_objects2\models\cardreader.p3d";
		armor = 200;
		scope = 2;
		displayName = "E-Card Reader";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
	};
	ladders[] = {};
	class ARP_Objects_binderopen: Static
	{
		model = "\arp_objects2\models\binderopen.p3d";
		armor = 200;
		scope = 2;
		displayName = "Binder - Open";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_binderclosed: Static
	{
		model = "\arp_objects2\models\binderclosed.p3d";
		armor = 200;
		scope = 2;
		displayName = "Binder - Closed";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_binderstand: Static
	{
		model = "\arp_objects2\models\binderstand.p3d";
		armor = 200;
		scope = 2;
		displayName = "Binder - Standing";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_binders: Static
	{
		model = "\arp_objects2\models\binders.p3d";
		armor = 200;
		scope = 2;
		displayName = "Binders";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_servermain2: Static
	{
		model = "\arp_objects2\models\screens\servermain.p3d";
		armor = 200;
		scope = 2;
		displayName = "Server - Control";
		vehicleclass = "ARP_objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
		hiddenSelections[] = {"screen_full","screen_1","screen_2","screen_3","screen_4"};
	};
	class ARP_Objects_servertower: Static
	{
		model = "\arp_objects2\models\servertower.p3d";
		armor = 200;
		scope = 2;
		displayName = "Server - Tower";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_keypad: Static
	{
		model = "\arp_objects2\models\keypad.p3d";
		armor = 200;
		scope = 2;
		displayName = "Keypad Lock";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_map3: Static
	{
		model = "\arp_objects2\models\map3.p3d";
		armor = 200;
		scope = 2;
		displayName = "Wall Map - Altis";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_printer: Static
	{
		model = "\arp_objects2\models\printer.p3d";
		armor = 200;
		scope = 2;
		displayName = "Printer";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_newspaperopen: Static
	{
		model = "\arp_objects2\models\newspaperopen.p3d";
		armor = 200;
		scope = 2;
		displayName = "Newspaper - Open";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_newspaperclosed: Static
	{
		model = "\arp_objects2\models\newspaperclosed.p3d";
		armor = 200;
		scope = 2;
		displayName = "Newspaper - Closed";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_newspaperstack: Static
	{
		model = "\arp_objects2\models\newspaperstack.p3d";
		armor = 200;
		scope = 2;
		displayName = "Newspaper - Stack";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_cardboardcratenews: Static
	{
		model = "\arp_objects2\models\cardboardcratenews.p3d";
		armor = 200;
		scope = 2;
		displayName = "Cardboard Crate - News";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_slipsign: Static
	{
		model = "\arp_objects2\models\slipsign.p3d";
		armor = 200;
		scope = 2;
		displayName = "Sign - Wet Floor";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_paper: Static
	{
		model = "\arp_objects2\models\paper.p3d";
		armor = 200;
		scope = 2;
		displayName = "Paper - 500 Sheets";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_o2tank: Static
	{
		model = "\arp_objects2\models\o2tank.p3d";
		armor = 200;
		scope = 2;
		displayName = "Oxygen Tank";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
	class ARP_Objects_ett: Static
	{
		model = "\arp_objects2\models\ett.p3d";
		armor = 200;
		scope = 2;
		displayName = "Endotracheal Tube";
		vehicleClass = "ARP_Objects";
		icon = "\arp_objects2\data\icon.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		ladders[] = {};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class ARP_Objects_Laptop_M: CA_Magazine
	{
		scope = 2;
		displayName = "Laptop";
		model = "\arp_objects2\models\screens\laptop.p3d";
		count = 1;
		type = 256;
		mass = 120;
		initSpeed = 350;
		picture = "\arp_objects2\images\laptop.paa";
		descriptionShort = "";
	};
	class ARP_Objects_Toughbook_M: CA_Magazine
	{
		scope = 2;
		displayName = "Toughbook";
		model = "\arp_objects2\models\screens\toughbook.p3d";
		count = 1;
		type = 256;
		mass = 110;
		initSpeed = 350;
		picture = "\arp_objects2\images\toughbook.paa";
		descriptionShort = "";
	};
	class ARP_Objects_snakecam_M: CA_Magazine
	{
		scope = 2;
		displayName = "Snake Cam";
		model = "\arp_objects2\models\cams\snakecam\snakecam.p3d";
		count = 1;
		type = 256;
		mass = 4;
		initSpeed = 350;
		picture = "\arp_objects2\images\snakecam.paa";
		descriptionShort = "";
	};
	class ARP_Objects_boxmre_m: CA_Magazine
	{
		scope = 2;
		displayName = "MRE Box";
		model = "\arp_objects2\models\boxmre.p3d";
		count = 1;
		type = 256;
		mass = 120;
		initSpeed = 350;
		picture = "\arp_objects2\images\mre.paa";
		descriptionShort = "";
	};
	class ARP_Objects_water_m: CA_Magazine
	{
		scope = 2;
		displayName = "6 Pack of Water";
		model = "\arp_objects2\models\waterpack.p3d";
		count = 1;
		type = 256;
		mass = 90;
		initSpeed = 350;
		picture = "\arp_objects2\images\water.paa";
		descriptionShort = "";
	};
	class ARP_Objects_blackbox_m: CA_Magazine
	{
		scope = 2;
		displayName = "Blackbox";
		model = "\arp_objects2\models\blackbox.p3d";
		count = 1;
		type = 256;
		mass = 200;
		initSpeed = 350;
		picture = "\arp_objects2\images\blackbox.paa";
		descriptionShort = "";
	};
	class ARP_Objects_money_m: CA_Magazine
	{
		scope = 2;
		displayName = "Money Stacks";
		model = "\arp_objects2\models\money.p3d";
		count = 1;
		type = 256;
		mass = 10;
		initSpeed = 350;
		picture = "\arp_objects2\images\money.paa";
		descriptionShort = "";
	};
	class ARP_Objects_moneya_m: CA_Magazine
	{
		scope = 2;
		displayName = "Money Bundle";
		model = "\arp_objects2\models\moneya.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\moneya.paa";
		descriptionShort = "";
	};
	class ARP_Objects_waterbottle_m: CA_Magazine
	{
		scope = 2;
		displayName = "Water Bottle";
		model = "\arp_objects2\models\waterbottle.p3d";
		count = 1;
		type = 256;
		mass = 15;
		initSpeed = 350;
		picture = "\arp_objects2\images\waterbottle.paa";
		descriptionShort = "";
	};
	class ARP_Objects_smartphone_m: CA_Magazine
	{
		scope = 2;
		displayName = "Smartphone";
		model = "\arp_objects2\models\galaxy.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\smartphone.paa";
		descriptionShort = "";
	};
	class ARP_Objects_folder_m: CA_Magazine
	{
		scope = 2;
		displayName = "Documents";
		model = "\arp_objects2\models\folder.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\folder.paa";
		descriptionShort = "";
	};
	class ARP_Objects_clipboard_m: CA_Magazine
	{
		scope = 2;
		displayName = "Clipboard";
		model = "\arp_objects2\models\clipboard.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\clipboard.paa";
		descriptionShort = "";
	};
	class ARP_Objects_passport_m: CA_Magazine
	{
		scope = 2;
		displayName = "US Passport";
		model = "\arp_objects2\models\passport.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\passport.paa";
		descriptionShort = "";
	};
	class ARP_Objects_satbag_m: CA_Magazine
	{
		scope = 2;
		displayName = "SatCom Bag";
		model = "\arp_objects2\models\satbag.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\satbag.paa";
		descriptionShort = "";
	};
	class ARP_Objects_mre_m: CA_Magazine
	{
		scope = 2;
		displayName = "MRE";
		model = "\arp_objects2\models\mrea.p3d";
		count = 1;
		type = 256;
		mass = 10;
		initSpeed = 350;
		picture = "\arp_objects2\images\mrea.paa";
		descriptionShort = "";
	};
	class ARP_Objects_cocaine_m: CA_Magazine
	{
		scope = 2;
		displayName = "Kilo Cocaine";
		model = "\arp_objects2\models\cocaine.p3d";
		count = 1;
		type = 256;
		mass = 40;
		initSpeed = 350;
		picture = "\arp_objects2\images\cocaine.paa";
		descriptionShort = "";
	};
	class ARP_Objects_weed_m: CA_Magazine
	{
		scope = 2;
		displayName = "Bag of Weed";
		model = "\arp_objects2\models\weed.p3d";
		count = 1;
		type = 256;
		mass = 5;
		initSpeed = 350;
		picture = "\arp_objects2\images\weed.paa";
		descriptionShort = "";
	};
	class ARP_Objects_armacard_m: CA_Magazine
	{
		scope = 2;
		displayName = "Credit Card";
		model = "\arp_objects2\models\armacard.p3d";
		count = 1;
		type = 256;
		mass = 1;
		initSpeed = 350;
		picture = "\arp_objects2\images\armacard.paa";
		descriptionShort = "";
	};
	class ARP_Objects_8ball_m: CA_Magazine
	{
		scope = 2;
		displayName = "Cocaine 8 Ball";
		model = "\arp_objects2\models\8ball.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\8ball.paa";
		descriptionShort = "";
	};
	class ARP_Objects_heroin_m: CA_Magazine
	{
		scope = 2;
		displayName = "Heroin";
		model = "\arp_objects2\models\heroin.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\heroin.paa";
		descriptionShort = "";
	};
	class ARP_Objects_key_m: CA_Magazine
	{
		scope = 2;
		displayName = "Key";
		model = "\arp_objects2\models\key.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\key.paa";
		descriptionShort = "";
	};
	class ARP_Objects_card_red_m: CA_Magazine
	{
		scope = 2;
		displayName = "Key Card Red";
		model = "\arp_objects2\models\card_red.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\card_red.paa";
		descriptionShort = "";
	};
	class ARP_Objects_card_green_m: CA_Magazine
	{
		scope = 2;
		displayName = "Key Card Green";
		model = "\arp_objects2\models\card_green.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\card_green.paa";
		descriptionShort = "";
	};
	class ARP_Objects_card_yellow_m: CA_Magazine
	{
		scope = 2;
		displayName = "Key Card Yellow";
		model = "\arp_objects2\models\card_yellow.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\card_yellow.paa";
		descriptionShort = "";
	};
	class ARP_Objects_card_black_m: CA_Magazine
	{
		scope = 2;
		displayName = "Key Card Black";
		model = "\arp_objects2\models\card_black.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\card_black.paa";
		descriptionShort = "";
	};
	class ARP_Objects_card_blue_m: CA_Magazine
	{
		scope = 2;
		displayName = "Key Card Blue";
		model = "\arp_objects2\models\card_blue.p3d";
		count = 1;
		type = 256;
		mass = 2;
		initSpeed = 350;
		picture = "\arp_objects2\images\card_blue.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_a_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho Multi";
		model = "\arp_objects2\models\ponchoroll_a.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_a.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_b_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho Flecktarn";
		model = "\arp_objects2\models\ponchoroll_b.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_b.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_c_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho ACU";
		model = "\arp_objects2\models\ponchoroll_c.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_c.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_d_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho DCU";
		model = "\arp_objects2\models\ponchoroll_d.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_d.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_e_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho Green";
		model = "\arp_objects2\models\ponchoroll_e.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_e.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_f_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho White";
		model = "\arp_objects2\models\ponchoroll_f.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_f.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_g_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho BDU";
		model = "\arp_objects2\models\ponchoroll_g.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_g.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_h_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho DPCU";
		model = "\arp_objects2\models\ponchoroll_h.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_h.paa";
		descriptionShort = "";
	};
	class ARP_Objects_poncho_i_m: CA_Magazine
	{
		scope = 2;
		displayName = "Poncho Blue";
		model = "\arp_objects2\models\ponchoroll_i.p3d";
		count = 1;
		type = 256;
		mass = 30;
		initSpeed = 350;
		picture = "\arp_objects2\images\ponchoroll_i.paa";
		descriptionShort = "";
	};
	class ARP_Objects_ett_m: CA_Magazine
	{
		scope = 2;
		displayName = "Endotracheal Tube";
		model = "\arp_objects2\models\ett.p3d";
		count = 1;
		type = 256;
		mass = 5;
		initSpeed = 350;
		picture = "\arp_objects2\images\ett.paa";
		descriptionShort = "";
	};
	class ARP_Objects_o2tank_m: CA_Magazine
	{
		scope = 2;
		displayName = "Oxygen Tank";
		model = "\arp_objects2\models\o2tank.p3d";
		count = 1;
		type = 256;
		mass = 100;
		initSpeed = 350;
		picture = "\arp_objects2\images\o2tank.paa";
		descriptionShort = "";
	};
	class ARP_Objects_paper_m: CA_Magazine
	{
		scope = 2;
		displayName = "Paper - 500 Sheets";
		model = "\arp_objects2\models\paper.p3d";
		count = 1;
		type = 256;
		mass = 60;
		initSpeed = 350;
		picture = "\arp_objects2\images\paperstack.paa";
		descriptionShort = "";
	};
	class ARP_Objects_newspaperstack_m: CA_Magazine
	{
		scope = 2;
		displayName = "Newspaper - Stack";
		model = "\arp_objects2\models\newspaperstack.p3d";
		count = 1;
		type = 256;
		mass = 80;
		initSpeed = 350;
		picture = "\arp_objects2\images\newsstack.paa";
		descriptionShort = "";
	};
	class ARP_Objects_newspaperclosed_m: CA_Magazine
	{
		scope = 2;
		displayName = "Newspaper";
		model = "\arp_objects2\models\newspaperclosed.p3d";
		count = 1;
		type = 256;
		mass = 10;
		initSpeed = 350;
		picture = "\arp_objects2\images\newspaper.paa";
		descriptionShort = "";
	};
};
//};
