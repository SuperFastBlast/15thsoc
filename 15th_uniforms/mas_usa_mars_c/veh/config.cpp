{
	class mas_usa_mars_veh
	{
		units[] = {"B_mas_mar_Para_TL_F_rec_an","B_mas_mar_Para_F_rec_an","B_mas_mar_Para2_F_rec_an","B_mas_mar_Para_AR_F_rec_an","B_mas_mar_Para_exp_F_rec_an","B_mas_mar_Para_LAT_F_rec_an","B_mas_mar_Para_LAA_F_rec_an","B_mas_mar_Para_medic_F_rec_an","B_mas_mar_Para_M_F_rec_an","B_mas_mar_Para_Mh_F_rec_an","B_mas_mar_Heli_Light_01_F","B_mas_mar_Heli_Light_01_armed_F","B_mas_mar_Heli_Transport_01_F","B_mas_mar_Heli_Med_01_F","B_mas_mar_Mortar_01_F","B_mas_mar_static_AT_F","B_mas_mar_static_AA_F","B_mas_mar_GMG_01_F","B_mas_mar_GMG_01_high_F","B_mas_mar_HMG_01_F","B_mas_mar_HMG_01_high_F","B_mas_mar_Mortar_01_F_d","B_mas_mar_static_AT_F_d","B_mas_mar_static_AA_F_d","B_mas_mar_GMG_01_F_d","B_mas_mar_GMG_01_high_F_d","B_mas_mar_HMG_01_F_d","B_mas_mar_HMG_01_high_F_d","B_mas_mar_Boat_Transport_01_F","B_mas_mar_Boat_Armed_01_F","B_mas_mar_SDV_01_F","B_mas_mar_Offroad_01_F","B_mas_mar_Offroad_01_armed_F","B_mas_mar_MRAP_01_F","B_mas_mar_MRAP_01_gmg_F","B_mas_mar_MRAP_01_hmg_F","B_mas_mar_Quadbike_01_F","B_mas_mar_APC_Wheeled_01_cannon_F","B_mas_mar_Truck_01_covered_F","B_mas_mar_Truck_01_transport_F","B_mas_mar_Truck_01_reammo_F","B_mas_mar_Truck_01_refuel_F","B_mas_mar_Truck_01_repair_F","Box_mas_mar_NATO_Wps_F","Box_mas_mar_NATO_equip_F","B_mas_mar_FieldPack_blk_DiverExp","B_mas_mar_FieldPack_blk_DiverMedic","B_mas_mar_FieldPack_blk_DiverTL"};
		weapons[] = {};
		requiredVersion = 0.7;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","mas_weapons","mas_weapons_m4","mas_weapons_pack","mas_usa_mars","A3_Air_F","A3_Boat_F","A3_Soft_F","A3_Armor_F","A3_Static_F"};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicles
{
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class B_Heli_Transport_01_F;
	class B_Mortar_01_F;
	class B_Boat_Transport_01_F;
	class B_Boat_Armed_01_minigun_F;
	class B_SDV_01_F;
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class B_Quadbike_01_F;
	class B_APC_Wheeled_01_cannon_F;
	class B_mas_mar_Soldier_TL_F_recn;
	class B_mas_mar_Soldier_F_recn;
	class B_mas_mar_Soldier2_F_recn;
	class B_mas_mar_Soldier_AR_F_recn;
	class B_mas_mar_soldier_exp_F_recn;
	class B_mas_mar_soldier_LAT_F_recn;
	class B_mas_mar_soldier_LAA_F_recn;
	class B_mas_mar_medic_F_recn;
	class B_mas_mar_soldier_M_F_recn;
	class B_mas_mar_soldier_Mh_F_recn;
	class B_Truck_01_transport_F;
	class B_Truck_01_covered_F;
	class B_static_AT_F;
	class B_static_AA_F;
	class B_GMG_01_F;
	class B_GMG_01_high_F;
	class B_HMG_01_F;
	class B_HMG_01_high_F;
	class B_G_Offroad_01_F;
	class B_G_Offroad_01_armed_F;
	class B_mas_mar_G_Offbase_01_F: B_G_Offroad_01_F
	{
		class AnimationSources;
		class EventHandlers;
		scope = 0;
	};
	class B_mas_mar_G_Offbase_01_armed_F: B_G_Offroad_01_armed_F
	{
		class AnimationSources;
		class EventHandlers;
		scope = 0;
	};
	class B_mas_mar_Para_TL_F_rec_an: B_mas_mar_Soldier_TL_F_recn
	{
		_generalMacro = "B_mas_mar_Para_TL_F_rec_an";
		displayName = "Team Leader";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_F_rec_an: B_mas_mar_Soldier_F_recn
	{
		_generalMacro = "B_mas_mar_Para_F_rec_an";
		displayName = "JTAC Operator";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para2_F_rec_an: B_mas_mar_Soldier2_F_recn
	{
		_generalMacro = "B_mas_mar_Para2_F_rec_an";
		displayName = "Rifleman";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_AR_F_rec_an: B_mas_mar_Soldier_AR_F_recn
	{
		_generalMacro = "B_mas_mar_Para_AR_F_rec_an";
		displayName = "Autorifleman";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_exp_F_rec_an: B_mas_mar_soldier_exp_F_recn
	{
		_generalMacro = "B_mas_mar_Para_exp_F_rec_an";
		displayName = "Explosive Specialist";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_LAT_F_rec_an: B_mas_mar_soldier_LAT_F_recn
	{
		_generalMacro = "B_mas_mar_Para_LAT_F_rec_an";
		displayName = "Specialist AT";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_LAA_F_rec_an: B_mas_mar_soldier_LAA_F_recn
	{
		_generalMacro = "B_mas_mar_Para_LAA_F_rec_an";
		displayName = "Specialist AA";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_medic_F_rec_an: B_mas_mar_medic_F_recn
	{
		_generalMacro = "B_mas_mar_Para_medic_F_rec_an";
		displayName = "Combat Medic";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_M_F_rec_an: B_mas_mar_soldier_M_F_recn
	{
		_generalMacro = "B_mas_mar_Para_M_F_rec_an";
		displayName = "Marksman";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Para_Mh_F_rec_an: B_mas_mar_soldier_Mh_F_recn
	{
		_generalMacro = "B_mas_mar_Para_Mh_F_rec_an";
		displayName = "Sniper";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_c";
		backpack = "B_Parachute";
	};
	class B_mas_mar_Heli_Light_01_F: B_Heli_Light_01_F
	{
		_generalMacro = "B_mas_mar_Heli_Light_01_F";
		side = 1;
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_a";
		crew = "B_mas_mar_Helipilot_F";
		displayName = "MH-9 USMC";
		typicalCargo[] = {"B_mas_mar_Helipilot_F"};
		hiddenSelectionsTextures[] = {"mas_usa_mars\veh\Heli_Light_01_ext_Blufor_CO.paa"};
		incomingMissileDetectionSystem = 16;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};
		maximumLoad = 10000;
		transportMaxWeapons = 8;
		transportMaxMagazines = 200;
		transportMaxBackpacks = 10;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 6;
			};
		};
	};
	class B_mas_mar_Heli_Light_01_armed_F: B_Heli_Light_01_armed_F
	{
		_generalMacro = "B_mas_mar_Heli_Light_01_armed_F";
		side = 1;
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_a";
		crew = "B_mas_mar_Helipilot_F";
		displayName = "AH-9 USMC";
		typicalCargo[] = {"B_mas_mar_Helipilot_F"};
		hiddenSelectionsTextures[] = {"mas_usa_mars\veh\Heli_Light_01_ext_Blufor_CO.paa"};
		incomingMissileDetectionSystem = 16;
		weapons[] = {"M134_minigun","missiles_DAR","CMFlareLauncher"};
		magazines[] = {"5000Rnd_762x51_Belt","24Rnd_missiles","300Rnd_CMFlare_Chaff_Magazine"};
		maximumLoad = 10000;
		transportMaxWeapons = 8;
		transportMaxMagazines = 200;
		transportMaxBackpacks = 10;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
	};
	class B_mas_mar_Heli_Transport_01_F: B_Heli_Transport_01_F
	{
		_generalMacro = "B_mas_mar_Heli_Transport_01_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_a";
		crew = "B_mas_mar_Helipilot_F";
		displayName = "HH-80 USMC";
		typicalCargo[] = {"B_mas_mar_Helipilot_F"};
		hiddenSelectionsTextures[] = {"mas_usa_mars\veh\heli_transport_01_ext01_co.paa","mas_usa_mars\veh\heli_transport_01_ext02_co.paa"};
		incomingMissileDetectionSystem = 16;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 16;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 6;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_Heli_Med_01_F: B_mas_mar_Heli_Transport_01_F
	{
		_generalMacro = "B_mas_mar_Heli_Med_01_F";
		displayName = "HH-80 USMC Medevac";
		vehicleClass = "mas_usa_mars_veh_s";
		crew = "B_mas_mar_Helipilot_F";
		typicalCargo[] = {"B_mas_mar_Helipilot_F"};
		attendant = "true";
		hiddenSelectionsTextures[] = {"mas_usa_mars\veh\heli_transport_01_ext01_cm.paa","mas_usa_mars\veh\heli_transport_01_ext02_co.paa"};
	};
	class B_mas_mar_Mortar_01_F: B_Mortar_01_F
	{
		_generalMacro = "B_mas_mar_Mortar_01_F";
		faction = "mas_usa_mars";
		displayName = "Wood USMC Mortar";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_v";
	};
	class B_mas_mar_static_AT_F: B_static_AT_F
	{
		_generalMacro = "B_mas_mar_static_AT_F";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Wood USMC AT launcher";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_v";
	};
	class B_mas_mar_static_AA_F: B_static_AA_F
	{
		_generalMacro = "B_mas_mar_static_AA_F";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Wood USMC AA launcher";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_v";
	};
	class B_mas_mar_GMG_01_F: B_GMG_01_F
	{
		_generalMacro = "B_mas_mar_GMG_01_F";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Wood USMC GMG";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_v";
	};
	class B_mas_mar_GMG_01_high_F: B_GMG_01_high_F
	{
		_generalMacro = "B_mas_mar_GMG_01_F";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Wood USMC GMG High";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_v";
	};
	class B_mas_mar_HMG_01_F: B_HMG_01_F
	{
		_generalMacro = "B_mas_mar_HMG_01_F";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Wood USMC MG";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_v";
	};
	class B_mas_mar_HMG_01_high_F: B_HMG_01_high_F
	{
		_generalMacro = "B_mas_mar_HMG_01_F";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Wood USMC MG High";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_v";
	};
	class B_mas_mar_Mortar_01_F_d: B_Mortar_01_F
	{
		_generalMacro = "B_mas_mar_Mortar_01_F_d";
		faction = "mas_usa_mars";
		displayName = "Des USMC Mortar";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_d";
	};
	class B_mas_mar_static_AT_F_d: B_static_AT_F
	{
		_generalMacro = "B_mas_mar_static_AT_F_d";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Des USMC AT launcher";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_d";
	};
	class B_mas_mar_static_AA_F_d: B_static_AA_F
	{
		_generalMacro = "B_mas_mar_static_AA_F_d";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Des USMC AA launcher";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_d";
	};
	class B_mas_mar_GMG_01_F_d: B_GMG_01_F
	{
		_generalMacro = "B_mas_mar_GMG_01_F_d";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Des USMC GMG";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_d";
	};
	class B_mas_mar_GMG_01_high_F_d: B_GMG_01_high_F
	{
		_generalMacro = "B_mas_mar_GMG_01_F_d";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Des USMC GMG High";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_d";
	};
	class B_mas_mar_HMG_01_F_d: B_HMG_01_F
	{
		_generalMacro = "B_mas_mar_HMG_01_F_d";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Des USMC MG";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_d";
	};
	class B_mas_mar_HMG_01_high_F_d: B_HMG_01_high_F
	{
		_generalMacro = "B_mas_mar_HMG_01_F_d";
		side = 1;
		faction = "mas_usa_mars";
		displayName = "Des USMC MG High";
		vehicleClass = "mas_usa_mars_veh_f";
		crew = "B_mas_mar_Soldier_GL_F_d";
	};
	class B_mas_mar_Boat_Transport_01_F: B_Boat_Transport_01_F
	{
		_generalMacro = "B_mas_mar_Boat_Transport_01_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_w";
		crew = "B_mas_mar_Soldier_GL_F";
		supplyRadius = 5;
		transportMaxMagazines = 100;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_mar_Boat_Armed_01_F: B_Boat_Armed_01_minigun_F
	{
		_generalMacro = "B_mas_mar_Boat_Armed_01_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_w";
		crew = "B_mas_mar_Soldier_GL_F";
		supplyRadius = 5;
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 12;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 6;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_SDV_01_F: B_SDV_01_F
	{
		_generalMacro = "B_mas_mar_SDV_01_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_w";
		crew = "B_mas_mar_diver_exp_F";
	};
	class B_mas_mar_Offroad_01_F: B_mas_mar_G_Offbase_01_F
	{
		_generalMacro = "B_mas_mar_Offroad_01_F";
		scope = 2;
		side = 1;
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		displayName = "Offroad MARSOC";
		crew = "B_mas_mar_Soldier2_F_recn";
		typicalCargo[] = {"B_mas_mar_Soldier2_F_recn"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\offroad_01_ext_usa_co.paa","\mas_usa_mars\veh\offroad_01_ext_usa_co.paa"};
		supplyRadius = 10;
		attendant = "true";
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\mas_usa_mars\veh\randomize_IG.sqf""";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 12;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 6;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 8;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m4c
			{
				weapon = "arifle_mas_m4c";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 2;
			};
		};
	};
	class B_mas_mar_Offroad_01_armed_F: B_mas_mar_G_Offbase_01_armed_F
	{
		_generalMacro = "B_mas_mar_Offroad_01_armed_F";
		scope = 2;
		side = 1;
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		displayName = "Offroad MG MARSOC";
		crew = "B_mas_mar_Soldier2_F_recn";
		typicalCargo[] = {"B_mas_mar_Soldier2_F_recn"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\offroad_01_ext_usa_co.paa","\mas_usa_mars\veh\offroad_01_ext_usa_co.paa"};
		supplyRadius = 10;
		attendant = "true";
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\mas_usa_mars\veh\randomize_IG.sqf""";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 12;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 6;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 8;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m4c
			{
				weapon = "arifle_mas_m4c";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 2;
			};
		};
	};
	class B_mas_mar_MRAP_01_F: B_MRAP_01_F
	{
		_generalMacro = "B_mas_mar_MRAP_01_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		crew = "B_mas_mar_Soldier_GL_F_v";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\MRAP_01_base_CO.paa","\mas_usa_mars\veh\MRAP_01_adds_CO.paa",""};
		supplyRadius = 5;
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 12;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 6;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_MRAP_01_med_F: B_mas_mar_MRAP_01_F
	{
		_generalMacro = "B_mas_mar_MRAP_01_med_F";
		displayName = "Hunter Casevac";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_s";
		crew = "B_mas_mar_medic_F_v";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\MRAP_01_base_CO.paa","\mas_usa_mars\veh\MRAP_01_adds_cm.paa",""};
		supplyRadius = 10;
		attendant = "true";
	};
	class B_mas_mar_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		_generalMacro = "B_mas_mar_MRAP_01_gmg_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		crew = "B_mas_mar_Soldier_GL_F_v";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\MRAP_01_base_CO.paa","\mas_usa_mars\veh\MRAP_01_adds_CO.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		supplyRadius = 5;
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 12;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 6;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		_generalMacro = "B_mas_mar_MRAP_01_hmg_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		crew = "B_mas_mar_Soldier_GL_F_v";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\MRAP_01_base_CO.paa","\mas_usa_mars\veh\MRAP_01_adds_CO.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		supplyRadius = 5;
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 12;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 6;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_Quadbike_01_F: B_Quadbike_01_F
	{
		_generalMacro = "B_mas_mar_Quadbike_01_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		crew = "B_mas_mar_Soldier_F_rec";
		displayName = "Quadbike MARSOC";
		supplyRadius = 5;
		maximumLoad = 1000;
		transportMaxWeapons = 4;
		transportMaxMagazines = 600;
		transportMaxBackpacks = 4;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 2;
			};
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_mas_launch_M136_F
			{
				weapon = "mas_launch_M136_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F
	{
		_generalMacro = "B_mas_mar_APC_Wheeled_01_cannon_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		crew = "B_mas_mar_crew_F";
		hiddenSelectionsTextures[] = {"mas_usa_mars\veh\APC_Wheeled_01_base_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 24;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 10;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 16;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 6;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 24;
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 8;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 8;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 6;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 2;
			};
		};
	};
	class B_mas_mar_Truck_01_covered_F: B_Truck_01_covered_F
	{
		_generalMacro = "B_mas_mar_Truck_01_covered_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		crew = "B_mas_mar_Soldier_GL_F_v";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\truck_01_ext_01_co.paa","\mas_usa_mars\veh\truck_01_ext_02_co.paa"};
		maximumLoad = 100000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 6;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_Truck_01_transport_F: B_Truck_01_transport_F
	{
		_generalMacro = "B_mas_mar_Truck_01_transport_F";
		faction = "mas_usa_mars";
		vehicleClass = "mas_usa_mars_veh_g";
		crew = "B_mas_mar_Soldier_GL_F_v";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\truck_01_ext_01_co.paa","\mas_usa_mars\veh\truck_01_ext_02_co.paa"};
		maximumLoad = 100000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 4;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 4;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 6;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 6;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 1;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 2;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 1;
			};
		};
	};
	class B_mas_mar_Truck_01_reammo_F: B_mas_mar_Truck_01_covered_F
	{
		_generalMacro = "B_mas_mar_Truck_01_reammo_F";
		vehicleClass = "mas_usa_mars_veh_s";
		displayName = "HEMTT Reammo";
		crew = "B_mas_mar_soldier_repair_F_v";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\truck_01_ext_01_ca.paa","\mas_usa_mars\veh\truck_01_ext_02_co.paa"};
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Ammo_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_truck_01_ammo_CA.paa";
		transportAmmo = 300000;
		transportSoldier = 2;
	};
	class B_mas_mar_Truck_01_refuel_F: B_mas_mar_Truck_01_covered_F
	{
		_generalMacro = "B_mas_mar_Truck_01_refuel_F";
		vehicleClass = "mas_usa_mars_veh_s";
		displayName = "HEMTT Refuel";
		crew = "B_mas_mar_soldier_repair_F_v";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_fuel_F.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\truck_01_ext_01_cf.paa","\mas_usa_mars\veh\truck_01_fuel_co.paa"};
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Fuel_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_truck_01_fuel_CA.paa";
		transportFuel = 3000;
		transportSoldier = 2;
		transportAmmo = 0;
	};
	class B_mas_mar_Truck_01_repair_F: B_mas_mar_Truck_01_covered_F
	{
		_generalMacro = "B_mas_mar_Truck_01_repair_F";
		vehicleClass = "mas_usa_mars_veh_s";
		displayName = "HEMTT Repair";
		crew = "B_mas_mar_soldier_repair_F_v";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\veh\truck_01_ext_01_cr.paa","\mas_usa_mars\veh\truck_01_ext_02_co.paa"};
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_box_F_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_Truck_01_box_F_CA.paa";
		transportSoldier = 2;
		transportRepair = 200000000;
		supplyRadius = 6.8;
	};
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class B_FieldPack_blk_DiverExp;
	class Box_mas_mar_NATO_Wps_F: Box_NATO_Wps_F
	{
		displayName = "USMC Weapons Box";
		maximumLoad = 999999;
		transportMaxWeapons = 50000;
		transportMaxMagazines = 200000;
		transportMaxBackpacks = 2000;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 120;
			};
			class _xx_30Rnd_mas_556x45_T_Stanag
			{
				magazine = "30Rnd_mas_556x45_T_Stanag";
				count = 60;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 60;
			};
			class _xx_200Rnd_mas_556x45_Stanag
			{
				magazine = "200Rnd_mas_556x45_Stanag";
				count = 60;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x51_Stanag
			{
				magazine = "100Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 60;
			};
			class _xx_20Rnd_mas_762x51_Stanag
			{
				magazine = "20Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_20Rnd_mas_762x51_T_Stanag
			{
				magazine = "20Rnd_mas_762x51_T_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_762x51_Stanag
			{
				magazine = "5Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_762x51_T_Stanag
			{
				magazine = "5Rnd_mas_762x51_T_Stanag";
				count = 30;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_Stanag
			{
				magazine = "5Rnd_mas_127x99_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_dem_Stanag
			{
				magazine = "5Rnd_mas_127x99_dem_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_T_Stanag
			{
				magazine = "5Rnd_mas_127x99_T_Stanag";
				count = 60;
			};
			class _xx_30Rnd_mas_9x21_Stanag
			{
				magazine = "30Rnd_mas_9x21_Stanag";
				count = 60;
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 60;
			};
			class _xx_25Rnd_mas_9x19_Mag
			{
				magazine = "25Rnd_mas_9x19_Mag";
				count = 60;
			};
			class _xx_7Rnd_mas_12Gauge_Slug
			{
				magazine = "7Rnd_mas_12Gauge_Slug";
				count = 30;
			};
			class _xx_7Rnd_mas_12Gauge_Pellets
			{
				magazine = "7Rnd_mas_12Gauge_Pellets";
				count = 30;
			};
			class _xx_17Rnd_mas_9x21_Mag
			{
				magazine = "17Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 60;
			};
			class _xx_15Rnd_mas_9x21_Mag
			{
				magazine = "15Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_10Rnd_mas_45acp_Mag
			{
				magazine = "10Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_8Rnd_mas_45acp_Mag
			{
				magazine = "8Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine = "20Rnd_556x45_UW_mag";
				count = 60;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 16;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 16;
			};
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 16;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 16;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 8;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 20;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 5;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 5;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 5;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 5;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 5;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 10;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine = "APERSTripMine_Wire_Mag";
				count = 5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 5;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 5;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 5;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 10;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 10;
			};
			class _xx_Chemlight_yellow
			{
				magazine = "Chemlight_yellow";
				count = 10;
			};
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 10;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 12;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 4;
			};
			class _xx_arifle_mas_m16_t
			{
				weapon = "arifle_mas_m16_t";
				count = 2;
			};
			class _xx_arifle_mas_m16_e
			{
				weapon = "arifle_mas_m16_e";
				count = 2;
			};
			class _xx_arifle_mas_m16_mt
			{
				weapon = "arifle_mas_m16_mt";
				count = 2;
			};
			class _xx_arifle_mas_m16_mh
			{
				weapon = "arifle_mas_m16_mh";
				count = 2;
			};
			class _xx_arifle_mas_m16_a
			{
				weapon = "arifle_mas_m16_a";
				count = 2;
			};
			class _xx_arifle_mas_m16_mti
			{
				weapon = "arifle_mas_m16_mti";
				count = 1;
			};
			class _xx_arifle_mas_m16_gl
			{
				weapon = "arifle_mas_m16_gl";
				count = 4;
			};
			class _xx_arifle_mas_m16_gl_t
			{
				weapon = "arifle_mas_m16_gl_t";
				count = 2;
			};
			class _xx_arifle_mas_m16_gl_e
			{
				weapon = "arifle_mas_m16_gl_e";
				count = 2;
			};
			class _xx_arifle_mas_m16_gl_mt
			{
				weapon = "arifle_mas_m16_gl_mt";
				count = 2;
			};
			class _xx_arifle_mas_m16_gl_mh
			{
				weapon = "arifle_mas_m16_gl_mh";
				count = 2;
			};
			class _xx_arifle_mas_m16_gl_mti
			{
				weapon = "arifle_mas_m16_gl_mti";
				count = 1;
			};
			class _xx_arifle_mas_m16_gl_a
			{
				weapon = "arifle_mas_m16_gl_a";
				count = 2;
			};
			class _xx_arifle_mas_m4
			{
				weapon = "arifle_mas_m4";
				count = 1;
			};
			class _xx_arifle_mas_m4c
			{
				weapon = "arifle_mas_m4c";
				count = 1;
			};
			class _xx_arifle_mas_m4_h
			{
				weapon = "arifle_mas_m4_h";
				count = 1;
			};
			class _xx_arifle_mas_m4c_h
			{
				weapon = "arifle_mas_m4c_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_sd
			{
				weapon = "arifle_mas_m4_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4c_sd
			{
				weapon = "arifle_mas_m4c_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4_ti
			{
				weapon = "arifle_mas_m4_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_gl
			{
				weapon = "arifle_mas_m4_gl";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_h
			{
				weapon = "arifle_mas_m4_gl_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203
			{
				weapon = "arifle_mas_m4_m203";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c
			{
				weapon = "arifle_mas_m4_m203c";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_h
			{
				weapon = "arifle_mas_m4_m203_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_h
			{
				weapon = "arifle_mas_m4_m203c_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_ti
			{
				weapon = "arifle_mas_m4_m203_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_v
			{
				weapon = "arifle_mas_m4_v";
				count = 1;
			};
			class _xx_arifle_mas_m4c_v
			{
				weapon = "arifle_mas_m4c_v";
				count = 1;
			};
			class _xx_arifle_mas_m4_v_h
			{
				weapon = "arifle_mas_m4_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4c_v_h
			{
				weapon = "arifle_mas_m4c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_v_sd
			{
				weapon = "arifle_mas_m4_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4c_v_sd
			{
				weapon = "arifle_mas_m4c_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4_v_ti
			{
				weapon = "arifle_mas_m4_v_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_gl_v
			{
				weapon = "arifle_mas_m4_gl_v";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_v_h
			{
				weapon = "arifle_mas_m4_gl_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_v
			{
				weapon = "arifle_mas_m4_m203_v";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_v
			{
				weapon = "arifle_mas_m4_m203c_v";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_v_h
			{
				weapon = "arifle_mas_m4_m203_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_v_h
			{
				weapon = "arifle_mas_m4_m203c_v_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_v_ti
			{
				weapon = "arifle_mas_m4_m203_v_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_d
			{
				weapon = "arifle_mas_m4_d";
				count = 1;
			};
			class _xx_arifle_mas_m4c_d
			{
				weapon = "arifle_mas_m4c_d";
				count = 1;
			};
			class _xx_arifle_mas_m4_d_h
			{
				weapon = "arifle_mas_m4_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4c_d_h
			{
				weapon = "arifle_mas_m4c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_d_sd
			{
				weapon = "arifle_mas_m4_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4c_d_sd
			{
				weapon = "arifle_mas_m4c_d_sd";
				count = 1;
			};
			class _xx_arifle_mas_m4_d_ti
			{
				weapon = "arifle_mas_m4_d_ti";
				count = 1;
			};
			class _xx_arifle_mas_m4_gl_d
			{
				weapon = "arifle_mas_m4_gl_d";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_d_h
			{
				weapon = "arifle_mas_m4_gl_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_d
			{
				weapon = "arifle_mas_m4_m203_d";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_d
			{
				weapon = "arifle_mas_m4_m203c_d";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_d_h
			{
				weapon = "arifle_mas_m4_m203_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203c_d_h
			{
				weapon = "arifle_mas_m4_m203c_d_h";
				count = 1;
			};
			class _xx_arifle_mas_m4_m203_d_ti
			{
				weapon = "arifle_mas_m4_m203_d_ti";
				count = 1;
			};
			class _xx_LMG_mas_Mk200_F
			{
				weapon = "LMG_mas_Mk200_F";
				count = 2;
			};
			class _xx_LMG_mas_Mk200_F_h
			{
				weapon = "LMG_mas_Mk200_F_h";
				count = 1;
			};
			class _xx_LMG_mas_Mk200_F_t
			{
				weapon = "LMG_mas_Mk200_F_t";
				count = 1;
			};
			class _xx_LMG_mas_M249a_F
			{
				weapon = "LMG_mas_M249a_F";
				count = 2;
			};
			class _xx_LMG_mas_M249a_F_t
			{
				weapon = "LMG_mas_M249a_F_t";
				count = 1;
			};
			class _xx_LMG_mas_M249a_F_a
			{
				weapon = "LMG_mas_M249a_F_a";
				count = 1;
			};
			class _xx_LMG_mas_M249_F
			{
				weapon = "LMG_mas_M249_F";
				count = 2;
			};
			class _xx_LMG_mas_M249_F_h
			{
				weapon = "LMG_mas_M249_F_h";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_t
			{
				weapon = "LMG_mas_M249_F_t";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_v
			{
				weapon = "LMG_mas_M249_F_v";
				count = 2;
			};
			class _xx_LMG_mas_M249_F_v_h
			{
				weapon = "LMG_mas_M249_F_v_h";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_v_t
			{
				weapon = "LMG_mas_M249_F_v_t";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_d
			{
				weapon = "LMG_mas_M249_F_d";
				count = 2;
			};
			class _xx_LMG_mas_M249_F_d_h
			{
				weapon = "LMG_mas_M249_F_d_h";
				count = 1;
			};
			class _xx_LMG_mas_M249_F_d_t
			{
				weapon = "LMG_mas_M249_F_d_t";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F
			{
				weapon = "LMG_mas_mk48_F";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F_h
			{
				weapon = "LMG_mas_mk48_F_h";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_t
			{
				weapon = "LMG_mas_mk48_F_t";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_v
			{
				weapon = "LMG_mas_mk48_F_v";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F_v_h
			{
				weapon = "LMG_mas_mk48_F_v_h";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_v_t
			{
				weapon = "LMG_mas_mk48_F_v_t";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_d
			{
				weapon = "LMG_mas_mk48_F_d";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F_d_h
			{
				weapon = "LMG_mas_mk48_F_d_h";
				count = 1;
			};
			class _xx_LMG_mas_mk48_F_d_t
			{
				weapon = "LMG_mas_mk48_F_d_t";
				count = 1;
			};
			class _xx_LMG_mas_m240_F
			{
				weapon = "LMG_mas_m240_F";
				count = 2;
			};
			class _xx_LMG_mas_m240_F_h
			{
				weapon = "LMG_mas_m240_F_h";
				count = 1;
			};
			class _xx_LMG_mas_m240_F_a
			{
				weapon = "LMG_mas_m240_F_a";
				count = 1;
			};
			class _xx_arifle_mas_m1014
			{
				weapon = "arifle_mas_m1014";
				count = 4;
			};
			class _xx_arifle_mas_mp5
			{
				weapon = "arifle_mas_mp5";
				count = 2;
			};
			class _xx_arifle_mas_mp5_sd
			{
				weapon = "arifle_mas_mp5_sd";
				count = 1;
			};
			class _xx_arifle_mas_mp5_v
			{
				weapon = "arifle_mas_mp5_v";
				count = 2;
			};
			class _xx_arifle_mas_mp5_v_sd
			{
				weapon = "arifle_mas_mp5_v_sd";
				count = 1;
			};
			class _xx_arifle_mas_mp5_d
			{
				weapon = "arifle_mas_mp5_d";
				count = 2;
			};
			class _xx_arifle_mas_mp5_d_sd
			{
				weapon = "arifle_mas_mp5_d_sd";
				count = 1;
			};
			class _xx_srifle_mas_sr25
			{
				weapon = "srifle_mas_sr25";
				count = 1;
			};
			class _xx_srifle_mas_sr25_h
			{
				weapon = "srifle_mas_sr25_h";
				count = 1;
			};
			class _xx_srifle_mas_sr25_v
			{
				weapon = "srifle_mas_sr25_v";
				count = 1;
			};
			class _xx_srifle_mas_sr25_v_h
			{
				weapon = "srifle_mas_sr25_v_h";
				count = 1;
			};
			class _xx_srifle_mas_sr25_d
			{
				weapon = "srifle_mas_sr25_d";
				count = 1;
			};
			class _xx_srifle_mas_sr25_d_h
			{
				weapon = "srifle_mas_sr25_d_h";
				count = 1;
			};
			class _xx_srifle_mas_m24_h
			{
				weapon = "srifle_mas_m24_h";
				count = 2;
			};
			class _xx_srifle_mas_m24_v_h
			{
				weapon = "srifle_mas_m24_v_h";
				count = 2;
			};
			class _xx_srifle_mas_m24_d_h
			{
				weapon = "srifle_mas_m24_d_h";
				count = 2;
			};
			class _xx_srifle_mas_m107
			{
				weapon = "srifle_mas_m107";
				count = 2;
			};
			class _xx_srifle_mas_m107_h
			{
				weapon = "srifle_mas_m107_h";
				count = 1;
			};
			class _xx_srifle_mas_m107_v
			{
				weapon = "srifle_mas_m107_v";
				count = 2;
			};
			class _xx_srifle_mas_m107_v_h
			{
				weapon = "srifle_mas_m107_v_h";
				count = 1;
			};
			class _xx_srifle_mas_m107_d
			{
				weapon = "srifle_mas_m107_d";
				count = 2;
			};
			class _xx_srifle_mas_m107_d_h
			{
				weapon = "srifle_mas_m107_d_h";
				count = 1;
			};
			class _xx_hgun_mas_acp_F
			{
				weapon = "hgun_mas_acp_F";
				count = 20;
			};
			class _xx_hgun_mas_uzi_F
			{
				weapon = "hgun_mas_uzi_F";
				count = 8;
			};
			class _xx_hgun_mas_m9_F
			{
				weapon = "hgun_mas_m9_F";
				count = 20;
			};
			class _xx_launch_NLAW_F
			{
				weapon = "launch_NLAW_F";
				count = 4;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 4;
			};
			class _xx_mas_launch_M136_F
			{
				weapon = "mas_launch_M136_F";
				count = 4;
			};
			class _xx_mas_launch_stinger_F
			{
				weapon = "mas_launch_stinger_F";
				count = 4;
			};
			class _xx_launch_Titan_short_F
			{
				weapon = "launch_Titan_short_F";
				count = 4;
			};
			class _xx_launch_Titan_F
			{
				weapon = "launch_Titan_F";
				count = 4;
			};
			class _xx_arifle_SDAR_F
			{
				weapon = "arifle_SDAR_F";
				count = 10;
			};
			class _xx_arifle_mas_mp5sd_ds
			{
				weapon = "arifle_mas_mp5sd_ds";
				count = 10;
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
				count = 5;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 5;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 5;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 20;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 10;
			};
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 10;
			};
			class _xx_acc_mas_pointer_IR
			{
				name = "acc_mas_pointer_IR";
				count = 10;
			};
			class _xx_muzzle_mas_snds_M
			{
				name = "muzzle_mas_snds_M";
				count = 10;
			};
			class _xx_muzzle_mas_snds_Mc
			{
				name = "muzzle_mas_snds_Mc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SM
			{
				name = "muzzle_mas_snds_SM";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SMc
			{
				name = "muzzle_mas_snds_SMc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SH
			{
				name = "muzzle_mas_snds_SH";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SHc
			{
				name = "muzzle_mas_snds_SHc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SV
			{
				name = "muzzle_mas_snds_SV";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SVc
			{
				name = "muzzle_mas_snds_SVc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_C
			{
				name = "muzzle_mas_snds_C";
				count = 20;
			};
			class _xx_muzzle_mas_snds_L
			{
				name = "muzzle_mas_snds_L";
				count = 20;
			};
			class _xx_muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 10;
			};
			class _xx_muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 10;
			};
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 10;
			};
			class _xx_muzzle_snds_L
			{
				name = "muzzle_snds_L";
				count = 10;
			};
			class _xx_muzzle_snds_H_MG
			{
				name = "muzzle_snds_H_MG";
				count = 10;
			};
			class _xx_optic_Hamr
			{
				name = "optic_Hamr";
				count = 10;
			};
			class _xx_optic_mas_Hamr_camo
			{
				name = "optic_mas_Hamr_camo";
				count = 10;
			};
			class _xx_optic_Arco
			{
				name = "optic_Arco";
				count = 10;
			};
			class _xx_optic_mas_Arco_blk
			{
				name = "optic_mas_Arco_blk";
				count = 10;
			};
			class _xx_optic_mas_Arco_camo
			{
				name = "optic_mas_Arco_camo";
				count = 10;
			};
			class _xx_optic_MRCO
			{
				name = "optic_MRCO";
				count = 10;
			};
			class _xx_optic_mas_MRCO_camo
			{
				name = "optic_mas_MRCO_camo";
				count = 10;
			};
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_optic_mas_Holosight_blk
			{
				name = "optic_mas_Holosight_blk";
				count = 10;
			};
			class _xx_optic_mas_Holosight_camo
			{
				name = "optic_mas_Holosight_camo";
				count = 10;
			};
			class _xx_optic_Aco
			{
				name = "optic_Aco";
				count = 10;
			};
			class _xx_optic_mas_Aco_camo
			{
				name = "optic_mas_Aco_camo";
				count = 10;
			};
			class _xx_optic_mas_aim
			{
				name = "optic_mas_aim";
				count = 10;
			};
			class _xx_optic_mas_aim_c
			{
				name = "optic_mas_aim_c";
				count = 10;
			};
			class _xx_optic_mas_acog
			{
				name = "optic_mas_acog";
				count = 10;
			};
			class _xx_optic_mas_acog_c
			{
				name = "optic_mas_acog_c";
				count = 10;
			};
			class _xx_optic_mas_acog_eo
			{
				name = "optic_mas_acog_eo";
				count = 10;
			};
			class _xx_optic_mas_acog_eo_c
			{
				name = "optic_mas_acog_eo_c";
				count = 10;
			};
			class _xx_optic_mas_acog_rd
			{
				name = "optic_mas_acog_rd";
				count = 10;
			};
			class _xx_optic_mas_acog_rd_c
			{
				name = "optic_mas_acog_rd_c";
				count = 10;
			};
			class _xx_optic_mas_zeiss
			{
				name = "optic_mas_zeiss";
				count = 10;
			};
			class _xx_optic_mas_zeiss_c
			{
				name = "optic_mas_zeiss_c";
				count = 10;
			};
			class _xx_optic_mas_zeiss_eo
			{
				name = "optic_mas_zeiss_eo";
				count = 10;
			};
			class _xx_optic_mas_zeiss_eo_c
			{
				name = "optic_mas_zeiss_eo_c";
				count = 10;
			};
			class _xx_optic_mas_DMS
			{
				name = "optic_mas_DMS";
				count = 10;
			};
			class _xx_optic_mas_DMS_c
			{
				name = "optic_mas_DMS_c";
				count = 10;
			};
			class _xx_optic_DMS
			{
				name = "optic_DMS";
				count = 10;
			};
			class _xx_optic_SOS
			{
				name = "optic_SOS";
				count = 10;
			};
			class _xx_optic_LRPS
			{
				name = "optic_LRPS";
				count = 10;
			};
			class _xx_optic_NVS
			{
				name = "optic_NVS";
				count = 10;
			};
			class _xx_optic_Nightstalker
			{
				name = "optic_Nightstalker";
				count = 10;
			};
			class _xx_optic_tws
			{
				name = "optic_tws";
				count = 10;
			};
			class _xx_optic_tws_mg
			{
				name = "optic_tws_mg";
				count = 10;
			};
			class _xx_optic_mas_term
			{
				name = "optic_mas_term";
				count = 10;
			};
			class _xx_optic_Holosight_smg
			{
				name = "optic_Holosight_smg";
				count = 10;
			};
			class _xx_optic_Aco_smg
			{
				name = "optic_Aco_smg";
				count = 10;
			};
			class _xx_optic_MRD
			{
				name = "optic_MRD";
				count = 10;
			};
			class _xx_optic_Yorris
			{
				name = "optic_Yorris";
				count = 10;
			};
			class _xx_Rangefinder
			{
				name = "Rangefinder";
				count = 10;
			};
			class _xx_Binocular
			{
				name = "Binocular";
				count = 10;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 4;
			};
			class _xx_NVGoggles
			{
				name = "NVGoggles";
				count = 10;
			};
			class _xx_NVGoggles_mas
			{
				name = "NVGoggles_mas";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask
			{
				name = "NVGoggles_mas_mask";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2
			{
				name = "NVGoggles_mas_mask2";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_b
			{
				name = "NVGoggles_mas_mask_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_b
			{
				name = "NVGoggles_mas_mask2_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_t
			{
				name = "NVGoggles_mas_mask_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_t
			{
				name = "NVGoggles_mas_mask2_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask3
			{
				name = "NVGoggles_mas_mask3";
				count = 10;
			};
		};
	};
	class Box_mas_mar_NATO_equip_F: Box_NATO_Wps_F
	{
		displayName = "USMC Gear Box";
		maximumLoad = 999999;
		transportMaxWeapons = 50000;
		transportMaxMagazines = 200000;
		transportMaxBackpacks = 2000;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 120;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 60;
			};
			class _xx_8Rnd_mas_45acp_Mag
			{
				magazine = "8Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 40;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_m16_mh
			{
				weapon = "arifle_mas_m16_mh";
				count = 10;
			};
			class _xx_arifle_mas_m16_gl_mh
			{
				weapon = "arifle_mas_m16_gl_mh";
				count = 10;
			};
			class _xx_arifle_mas_m4c_h
			{
				weapon = "arifle_mas_m4c_h";
				count = 10;
			};
			class _xx_arifle_mas_m4_m203c_h
			{
				weapon = "arifle_mas_m4_m203c_h";
				count = 10;
			};
			class _xx_hgun_mas_acp_F
			{
				weapon = "hgun_mas_acp_F";
				count = 20;
			};
			class _xx_hgun_mas_m9_F
			{
				weapon = "hgun_mas_m9_F";
				count = 20;
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
				count = 5;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 5;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 5;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 20;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 10;
			};
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 10;
			};
			class _xx_muzzle_mas_snds_M
			{
				name = "muzzle_mas_snds_M";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SM
			{
				name = "muzzle_mas_snds_SM";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SH
			{
				name = "muzzle_mas_snds_SH";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SV
			{
				name = "muzzle_mas_snds_SV";
				count = 10;
			};
			class _xx_muzzle_mas_snds_C
			{
				name = "muzzle_mas_snds_C";
				count = 20;
			};
			class _xx_muzzle_mas_snds_L
			{
				name = "muzzle_mas_snds_L";
				count = 20;
			};
			class _xx_muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 10;
			};
			class _xx_muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 10;
			};
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 10;
			};
			class _xx_muzzle_snds_L
			{
				name = "muzzle_snds_L";
				count = 10;
			};
			class _xx_muzzle_snds_H_MG
			{
				name = "muzzle_snds_H_MG";
				count = 10;
			};
			class _xx_optic_Hamr
			{
				name = "optic_Hamr";
				count = 20;
			};
			class _xx_optic_MRCO
			{
				name = "optic_MRCO";
				count = 20;
			};
			class _xx_optic_Aco
			{
				name = "optic_Aco";
				count = 20;
			};
			class _xx_optic_SOS
			{
				name = "optic_SOS";
				count = 20;
			};
			class _xx_optic_mas_zeiss
			{
				name = "optic_mas_zeiss";
				count = 20;
			};
			class _xx_optic_mas_zeiss_eo
			{
				name = "optic_mas_zeiss_eo";
				count = 20;
			};
			class _xx_optic_mas_acog
			{
				name = "optic_mas_acog";
				count = 20;
			};
			class _xx_optic_mas_acog_eo
			{
				name = "optic_mas_acog_eo";
				count = 20;
			};
			class _xx_optic_mas_acog_rd
			{
				name = "optic_mas_acog_rd";
				count = 20;
			};
			class _xx_optic_mas_aim
			{
				name = "optic_mas_aim";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood
			{
				name = "U_mas_mar_B_CombatUniform_wood";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_tshirt
			{
				name = "U_mas_mar_B_CombatUniform_wood_tshirt";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest1
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest1";
				count = 10;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest2
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest2";
				count = 10;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest3
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest3";
				count = 10;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest4
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest4";
				count = 10;
			};
			class _xx_U_mas_mar_B_CombatUniform_veg
			{
				name = "U_mas_mar_B_CombatUniform_veg";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_veg_tshirt
			{
				name = "U_mas_mar_B_CombatUniform_veg_tshirt";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_veg_vest
			{
				name = "U_mas_mar_B_CombatUniform_veg_vest";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_des
			{
				name = "U_mas_mar_B_CombatUniform_des";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_des_tshirt
			{
				name = "U_mas_mar_B_CombatUniform_des_tshirt";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_des_vest
			{
				name = "U_mas_mar_B_CombatUniform_des_vest";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_sage
			{
				name = "U_mas_mar_B_CombatUniform_sage";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_sage_tshirt
			{
				name = "U_mas_mar_B_CombatUniform_sage_tshirt";
				count = 20;
			};
			class _xx_U_mas_mar_B_IndUniform1_o
			{
				name = "U_mas_mar_B_IndUniform1_o";
				count = 20;
			};
			class _xx_U_mas_mar_B_IndUniform2_o
			{
				name = "U_mas_mar_B_IndUniform2_o";
				count = 20;
			};
			class _xx_U_mas_mar_B_IndUniform1_v
			{
				name = "U_mas_mar_B_IndUniform1_v";
				count = 20;
			};
			class _xx_U_mas_mar_B_IndUniform2_v
			{
				name = "U_mas_mar_B_IndUniform2_v";
				count = 20;
			};
			class _xx_U_mas_mar_B_IndUniform1_d
			{
				name = "U_mas_mar_B_IndUniform1_d";
				count = 20;
			};
			class _xx_U_mas_mar_B_IndUniform2_d
			{
				name = "U_mas_mar_B_IndUniform2_d";
				count = 20;
			};
			class _xx_U_mas_mar_B_CombatUniform_sage_vest
			{
				name = "U_mas_mar_B_CombatUniform_sage_vest";
				count = 20;
			};
			class _xx_U_mas_mar_B_GhillieSuit
			{
				name = "U_mas_mar_B_GhillieSuit";
				count = 20;
			};
			class _xx_U_mas_mar_B_GhillieSuit_v
			{
				name = "U_mas_mar_B_GhillieSuit_v";
				count = 20;
			};
			class _xx_U_mas_mar_B_GhillieSuit_d
			{
				name = "U_mas_mar_B_GhillieSuit_d";
				count = 20;
			};
			class _xx_U_mas_mar_B_GhillieSuit_w
			{
				name = "U_mas_mar_B_GhillieSuit_w";
				count = 20;
			};
			class _xx_V_mas_mar_Rangemaster_belt
			{
				name = "V_mas_mar_Rangemaster_belt";
				count = 10;
			};
			class _xx_V_mas_mar_BandollierB_rgr
			{
				name = "V_mas_mar_BandollierB_rgr";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrier1_rgr
			{
				name = "V_mas_mar_PlateCarrier1_rgr";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrier2_rgr
			{
				name = "V_mas_mar_PlateCarrier2_rgr";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrierGL_rgr
			{
				name = "V_mas_mar_PlateCarrierGL_rgr";
				count = 10;
			};
			class _xx_V_mas_mar_ChestrigB_rgr
			{
				name = "V_mas_mar_ChestrigB_rgr";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrier1_rgr_d
			{
				name = "V_mas_mar_PlateCarrier1_rgr_d";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrier2_rgr_d
			{
				name = "V_mas_mar_PlateCarrier2_rgr_d";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrierGL_rgr_d
			{
				name = "V_mas_mar_PlateCarrierGL_rgr_d";
				count = 10;
			};
			class _xx_V_mas_mar_Rangemaster_belt_g
			{
				name = "V_mas_mar_Rangemaster_belt_g";
				count = 10;
			};
			class _xx_V_mas_mar_BandollierB_rgr_g
			{
				name = "V_mas_mar_BandollierB_rgr_g";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrier1_rgr_g
			{
				name = "V_mas_mar_PlateCarrier1_rgr_g";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrier2_rgr_g
			{
				name = "V_mas_mar_PlateCarrier2_rgr_g";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrierGL_rgr_g
			{
				name = "V_mas_mar_PlateCarrierGL_rgr_g";
				count = 10;
			};
			class _xx_V_mas_mar_ChestrigB_rgr_g
			{
				name = "V_mas_mar_ChestrigB_rgr_g";
				count = 10;
			};
			class _xx_V_mas_mar_PlateCarrier1_rgr_w
			{
				name = "V_mas_mar_PlateCarrier1_rgr_w";
				count = 10;
			};
			class _xx_V_mas_mar_ChestrigB_rgr_w
			{
				name = "V_mas_mar_ChestrigB_rgr_w";
				count = 10;
			};
			class _xx_V_TacVest_blk
			{
				name = "V_TacVest_blk";
				count = 20;
			};
			class _xx_H_mas_mar_HelmetB_camo
			{
				name = "H_mas_mar_HelmetB_camo";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_plain
			{
				name = "H_mas_mar_HelmetB_plain";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_plain_d
			{
				name = "H_mas_mar_HelmetB_plain_d";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB
			{
				name = "H_mas_mar_HelmetB";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_paint
			{
				name = "H_mas_mar_HelmetB_paint";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_light
			{
				name = "H_mas_mar_HelmetB_light";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_d
			{
				name = "H_mas_mar_HelmetB_d";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_paint_d
			{
				name = "H_mas_mar_HelmetB_paint_d";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_light_d
			{
				name = "H_mas_mar_HelmetB_light_d";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_v
			{
				name = "H_mas_mar_HelmetB_v";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_paint_v
			{
				name = "H_mas_mar_HelmetB_paint_v";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_light_v
			{
				name = "H_mas_mar_HelmetB_light_v";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_g
			{
				name = "H_mas_mar_HelmetB_g";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_paint_g
			{
				name = "H_mas_mar_HelmetB_paint_g";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_light_g
			{
				name = "H_mas_mar_HelmetB_light_g";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_b
			{
				name = "H_mas_mar_HelmetB_b";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_paint_b
			{
				name = "H_mas_mar_HelmetB_paint_b";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_light_b
			{
				name = "H_mas_mar_HelmetB_light_b";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_w
			{
				name = "H_mas_mar_HelmetB_w";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_paint_w
			{
				name = "H_mas_mar_HelmetB_paint_w";
				count = 10;
			};
			class _xx_H_mas_mar_HelmetB_light_w
			{
				name = "H_mas_mar_HelmetB_light_w";
				count = 10;
			};
			class _xx_H_mas_mar_helmetv_us
			{
				name = "H_mas_mar_helmetv_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetd_us
			{
				name = "H_mas_mar_helmetd_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetw_us
			{
				name = "H_mas_mar_helmetw_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetvgog_us
			{
				name = "H_mas_mar_helmetvgog_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetdgog_us
			{
				name = "H_mas_mar_helmetdgog_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetwgog_us
			{
				name = "H_mas_mar_helmetwgog_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetv_wrap_us
			{
				name = "H_mas_mar_helmetv_wrap_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetd_wrap_us
			{
				name = "H_mas_mar_helmetd_wrap_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetw_wrap_us
			{
				name = "H_mas_mar_helmetw_wrap_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetvgog_wrap_us
			{
				name = "H_mas_mar_helmetvgog_wrap_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetdgog_wrap_us
			{
				name = "H_mas_mar_helmetdgog_wrap_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmetwgog_wrap_us
			{
				name = "H_mas_mar_helmetwgog_wrap_us";
				count = 20;
			};
			class _xx_H_PilotHelmetHeli_B
			{
				name = "H_PilotHelmetHeli_B";
				count = 10;
			};
			class _xx_H_CrewHelmetHeli_B
			{
				name = "H_CrewHelmetHeli_B";
				count = 10;
			};
			class _xx_H_HelmetCrew_B
			{
				name = "H_HelmetCrew_B";
				count = 10;
			};
			class _xx_H_mas_mar_headset_b
			{
				name = "H_mas_mar_headset_b";
				count = 10;
			};
			class _xx_H_mas_mar_Cap_headphones
			{
				name = "H_mas_mar_Cap_headphones";
				count = 10;
			};
			class _xx_H_mas_mar_revcapheadset_b
			{
				name = "H_mas_mar_revcapheadset_b";
				count = 10;
			};
			class _xx_H_Watchcap_camo
			{
				name = "H_Watchcap_camo";
				count = 20;
			};
			class _xx_H_mas_mar_bandana
			{
				name = "H_mas_mar_bandana";
				count = 20;
			};
			class _xx_H_mas_mar_bandana_V
			{
				name = "H_mas_mar_bandana_V";
				count = 20;
			};
			class _xx_H_mas_mar_bandana_d
			{
				name = "H_mas_mar_bandana_d";
				count = 20;
			};
			class _xx_H_Shemag_olive
			{
				name = "H_Shemag_olive";
				count = 20;
			};
			class _xx_H_mas_mar_Woolhat
			{
				name = "H_mas_mar_Woolhat";
				count = 10;
			};
			class _xx_H_mas_mar_Woolhat_c
			{
				name = "H_mas_mar_Woolhat_c";
				count = 10;
			};
			class _xx_H_mas_mar_Woolhat_w
			{
				name = "H_mas_mar_Woolhat_w";
				count = 10;
			};
			class _xx_H_mas_mar_woolhat_ht
			{
				name = "H_mas_mar_woolhat_ht";
				count = 10;
			};
			class _xx_H_mas_mar_Cap
			{
				name = "H_mas_mar_Cap";
				count = 10;
			};
			class _xx_H_mas_mar_off
			{
				name = "H_mas_mar_off";
				count = 10;
			};
			class _xx_H_mas_mar_off_v
			{
				name = "H_mas_mar_off_v";
				count = 10;
			};
			class _xx_H_mas_mar_off_d
			{
				name = "H_mas_mar_off_d";
				count = 10;
			};
			class _xx_H_mas_mar_off_g
			{
				name = "H_mas_mar_off_g";
				count = 10;
			};
			class _xx_H_mas_mar_Booniehat_wood
			{
				name = "H_mas_mar_Booniehat_wood";
				count = 10;
			};
			class _xx_H_mas_mar_Booniehat_rgr
			{
				name = "H_mas_mar_Booniehat_rgr";
				count = 10;
			};
			class _xx_H_mas_mar_Booniehat_des
			{
				name = "H_mas_mar_Booniehat_des";
				count = 10;
			};
			class _xx_H_mas_mar_Balaclava
			{
				name = "H_mas_mar_Balaclava";
				count = 20;
			};
			class _xx_H_mas_mar_Balaclava_ht
			{
				name = "H_mas_mar_Balaclava_ht";
				count = 20;
			};
			class _xx_H_mas_mar_Balaclava_b
			{
				name = "H_mas_mar_Balaclava_b";
				count = 20;
			};
			class _xx_H_mas_mar_Balaclava_ht_b
			{
				name = "H_mas_mar_Balaclava_ht_b";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_us
			{
				name = "H_mas_mar_helmet_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_bala_us
			{
				name = "H_mas_mar_helmet_bala_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_wrap_us
			{
				name = "H_mas_mar_helmet_wrap_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_l_us
			{
				name = "H_mas_mar_helmet_l_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_l_bala_us
			{
				name = "H_mas_mar_helmet_l_bala_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_g_us
			{
				name = "H_mas_mar_helmet_g_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_g_bala_us
			{
				name = "H_mas_mar_helmet_g_bala_us";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_g_wrap_us
			{
				name = "H_mas_mar_helmet_g_wrap_us";
				count = 20;
			};
			class _xx_H_mas_mar_pro_ht
			{
				name = "H_mas_mar_pro_ht";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_pro_bala
			{
				name = "H_mas_mar_helmet_pro_bala";
				count = 20;
			};
			class _xx_H_mas_mar_pro_ht_v
			{
				name = "H_mas_mar_pro_ht_v";
				count = 20;
			};
			class _xx_H_mas_mar_pro_ht_d
			{
				name = "H_mas_mar_pro_ht_d";
				count = 20;
			};
			class _xx_H_mas_mar_pro_ht_b
			{
				name = "H_mas_mar_pro_ht_b";
				count = 20;
			};
			class _xx_H_mas_mar_helmet_pro_bala_b
			{
				name = "H_mas_mar_helmet_pro_bala_b";
				count = 20;
			};
			class _xx_U_mas_mar_B_pilot
			{
				name = "U_mas_mar_B_pilot";
				count = 20;
			};
			class _xx_U_mas_mar_B_MAR
			{
				name = "U_mas_mar_B_MAR";
				count = 20;
			};
			class _xx_U_mas_mar_B_wint
			{
				name = "U_mas_mar_B_wint";
				count = 20;
			};
			class _xx_U_mas_mar_B_Wetsuit
			{
				name = "U_mas_mar_B_Wetsuit";
				count = 20;
			};
			class _xx_H_mas_mar_HelmetBind_v
			{
				name = "H_mas_mar_HelmetBind_v";
				count = 20;
			};
			class _xx_H_mas_mar_HelmetBind_d
			{
				name = "H_mas_mar_HelmetBind_d";
				count = 20;
			};
			class _xx_H_mas_mar_HelmetBind_w
			{
				name = "H_mas_mar_HelmetBind_w";
				count = 20;
			};
			class _xx_V_RebreatherB
			{
				name = "V_RebreatherB";
				count = 20;
			};
			class _xx_Rangefinder
			{
				name = "Rangefinder";
				count = 10;
			};
			class _xx_Binocular
			{
				name = "Binocular";
				count = 10;
			};
			class _xx_NVGoggles
			{
				name = "NVGoggles";
				count = 10;
			};
			class _xx_NVGoggles_mas
			{
				name = "NVGoggles_mas";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask
			{
				name = "NVGoggles_mas_mask";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2
			{
				name = "NVGoggles_mas_mask2";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_b
			{
				name = "NVGoggles_mas_mask_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_b
			{
				name = "NVGoggles_mas_mask2_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_t
			{
				name = "NVGoggles_mas_mask_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_t
			{
				name = "NVGoggles_mas_mask2_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask3
			{
				name = "NVGoggles_mas_mask3";
				count = 10;
			};
		};
	};
	class B_mas_mar_FieldPack_blk_DiverExp: B_FieldPack_blk_DiverExp
	{
		maximumLoad = 480;
		mass = 40;
		displayName = "Diver Demo bag";
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_H_mas_mar_helmet_pro_bala_b
			{
				name = "H_mas_mar_helmet_pro_bala_b";
				count = 1;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest";
				count = 1;
			};
			class _xx_V_mas_mar_ChestrigB_rgr
			{
				name = "V_mas_mar_ChestrigB_rgr";
				count = 1;
			};
		};
	};
	class B_mas_mar_FieldPack_blk_DiverMedic: B_FieldPack_blk_DiverExp
	{
		maximumLoad = 500;
		mass = 40;
		displayName = "Diver Medic bag";
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 1;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_H_mas_mar_helmet_pro_bala_b
			{
				name = "H_mas_mar_helmet_pro_bala_b";
				count = 1;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest";
				count = 1;
			};
			class _xx_V_mas_mar_ChestrigB_rgr
			{
				name = "V_mas_mar_ChestrigB_rgr";
				count = 1;
			};
		};
	};
	class B_mas_mar_FieldPack_blk_DiverTL: B_FieldPack_blk_DiverExp
	{
		maximumLoad = 500;
		mass = 40;
		displayName = "Diver Assault bag";
		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 1;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 1;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_H_mas_mar_helmet_pro_bala_b
			{
				name = "H_mas_mar_helmet_pro_bala_b";
				count = 1;
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest
			{
				name = "U_mas_mar_B_CombatUniform_wood_vest";
				count = 1;
			};
			class _xx_V_mas_mar_ChestrigB_rgr
			{
				name = "V_mas_mar_ChestrigB_rgr";
				count = 1;
			};
		};
	};
};