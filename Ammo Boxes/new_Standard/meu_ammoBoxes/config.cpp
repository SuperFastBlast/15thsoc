
#define NO_ZEUS_WINDOW 		// delete line to enable the zeus dialog/disable zeus crate
#define NO_RESUPPLY_BRAVO 	// delete line to enable box_resuply_bravo

#include "script_macros.hpp"

class CfgPatches
{
	class meu_ammoBoxes
	{
		units[] = 
		{
			"Box_meu_ace",
			"Box_meu_arty",
			"Box_meu_bas",
			"Box_meu_lce",
			"Box_meu_gator",
			"Box_meu_hq",
			"Box_meu_inf",
			"Box_meu_spectre",
			"Box_meu_suply",
			"Box_meu_suply_Bravo",
			"Box_meu_titan",
			"Box_meu_wep",
			"Box_meu_vehicle",
			"Box_meu_lar",
			"Box_meu_empty",
			"Box_meu_Boats",
			"Box_meu_zeus"
		};
		weapons[] = {};
		requiredVersion = 3.0; // v3 of config standard
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgNotifications 
{
	class meu_vicCrates 
	{
		title = "15th Vehicle Crate";
		iconPicture = "%1";
		iconText = "";
		description = "%2";
		color[] = {1,1,1,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
};

class CfgFunctions
{
	class meu {
		class crate {
			file = "\meu_ammoBoxes\crateFunctions";
			class vehicleLoadout {};
			class crate {};
		};
		class manager {
			file = "\meu_ammoBoxes\loadoutManager";
			class manager {};
		};
	};
};

class CfgVehicleClasses
{
	class meu_ammoBoxes
	{
		displayName = "[15th] Ammo Boxes";
	};
};

class CfgVehicles
{
	class B_supplyCrate_F;
	class Box_NATO_AmmoVeh_F;
	class Box_NATO_WpsSpecial_F;
	class Box_meu_spectre: Box_NATO_WpsSpecial_F 
	{	
		MEU_CRATE_INFO([15th] Spectre Box)
		
		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"Add Goggles","recon\meu_goggles.sqf"}
		};
		
		class TransportItems 
		{
			// SUPPRESSORS 
			MEU_CLASS_ITEM(muzzle_snds_M,25)
			MEU_CLASS_ITEM(CUP_muzzle_snds_M110,25)
			MEU_CLASS_ITEM(CUP_muzzle_snds_M16,25)
			MEU_CLASS_ITEM(Trixie_Cyclone,40)  // M40 and M27 SUPRESSOR
			// OPTICS
			MEU_CLASS_ITEM(optic_Arco,25)
			MEU_CLASS_ITEM(optic_Hamr,25)
			MEU_CLASS_ITEM(CUP_optic_ACOG,50)
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(optic_Aco,25)
			MEU_CLASS_ITEM(optic_Holosight,25)
			MEU_CLASS_ITEM(optic_SOS,25)
			MEU_CLASS_ITEM(CUP_optic_LeupoldMk4,25)
			MEU_CLASS_ITEM(acc_flashlight,25)
			MEU_CLASS_ITEM(optic_MRCO,25)
			MEU_CLASS_ITEM(optic_DMS,25)
			MEU_CLASS_ITEM(optic_LRPS,25)
			MEU_CLASS_ITEM(optic_NVS,25)
			MEU_CLASS_ITEM(optic_tws,25)
			MEU_CLASS_ITEM(optic_tws_mg,25)
			MEU_CLASS_ITEM(CUP_optic_CompM4,5)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,5)
			MEU_CLASS_ITEM(CUP_optic_Eotech533,5)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,5)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			MEU_CLASS_ITEM(CUP_optic_CompM2_Black,5)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Boonie_Wood,30)
			// NVG AND GOGGLES
			MEU_CLASS_ITEM(AGM_NVG_Gen4,25)
			MEU_CLASS_ITEM(AV_ESS_blk,25)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,25)
			MEU_CLASS_ITEM(AV_ESS_tan,25)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,25)
			MEU_CLASS_ITEM(AV_ESS_grn,25)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,25)
			MEU_CLASS_ITEM(G_B_Diving,25)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,25)
			MEU_CLASS_ITEM(AGM_Altimeter,25)
			MEU_CLASS_ITEM(ItemCompass,25)
			MEU_CLASS_ITEM(ItemGPS,25)
			MEU_CLASS_ITEM(ItemRadio,100)
			MEU_CLASS_ITEM(tf_anprc152,100)
			MEU_CLASS_ITEM(ItemMap,25)
			MEU_CLASS_ITEM(MineDetector,5)
			MEU_CLASS_ITEM(Binocular,25)
			MEU_CLASS_ITEM(meu_MX2A_tan,25)
			MEU_CLASS_ITEM(Rangefinder,25)
			MEU_CLASS_ITEM(Laserdesignator,25)
			MEU_CLASS_ITEM(Laserbatteries,25)
			MEU_CLASS_ITEM(B_UavTerminal,5)
			MEU_CLASS_ITEM(itemctab,25)
			MEU_CLASS_ITEM(itemandroid,25)
			MEU_CLASS_ITEM(ItemcTabHCam,25)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(ItemSMGR,25)
			MEU_CLASS_ITEM(AGM_EarBuds,25)
			MEU_CLASS_ITEM(AGM_Vector,25)
			MEU_CLASS_ITEM(AGM_ItemKestrel,25)
			MEU_CLASS_ITEM(AGM_CableTie,50)
			MEU_CLASS_ITEM(AGM_UAVBattery,5)
			MEU_CLASS_ITEM(AGM_MapTools,25)
			MEU_CLASS_ITEM(AGM_DefusalKit,15)
			MEU_CLASS_ITEM(AGM_SpareBarrel,5)
			MEU_CLASS_ITEM(AGM_Clacker,10)
			MEU_CLASS_ITEM(AGM_M26_Clacker,10)
			MEU_CLASS_ITEM(AGM_IR_Strobe_Item,25)
			// RIGS AND CARRIERS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,15)
			MEU_CLASS_ITEM(V_HarnessO_brn,15)			
			// SPECIALTY UNIFORMS AND GEAR
			MEU_CLASS_ITEM(V_RebreatherB,25)
			MEU_CLASS_ITEM(U_B_survival_uniform,25)
			MEU_CLASS_ITEM(U_B_Wetsuit,25)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_MARPAT_RS,15)			
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,100)
			MEU_CLASS_ITEM(AGM_Epipen,100)
			MEU_CLASS_ITEM(AGM_Morphine,100)
			MEU_CLASS_ITEM(AGM_Bloodbag,100)
		};
		class TransportMagazines 
		{
			// AMMO
			MEU_CLASS_MAG(MEU_T2AAF_45ACP,250)
			MEU_CLASS_MAG(MEU_M882_9mm,250)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,500)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_Stanag,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_T_Stanag,50)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51_T,50)
			MEU_CLASS_MAG(MEU_20x762_Mag,100)
			MEU_CLASS_MAG(MEU_5x762_Mag,100)
			MEU_CLASS_MAG(MEU_30x556_Mk262_Mag,100)
			MEU_CLASS_MAG(MEU_10x127_HEIAP_Mag,100)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Slug,50)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Pellets,50)			
			// LAUNCHED
			MEU_CLASS_MAG(CUP_SMAW_HEAA_M_N,50)
			MEU_CLASS_MAG(CUP_SMAW_HEDP_M_N,50)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,50)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,50)
			MEU_CLASS_MAG(1Rnd_SmokeRed_Grenade_shell,50)
			MEU_CLASS_MAG(1Rnd_SmokeGreen_Grenade_shell,50)
			MEU_CLASS_MAG(1Rnd_SmokeYellow_Grenade_shell,50)
			MEU_CLASS_MAG(1Rnd_SmokeBlue_Grenade_shell,50)
			MEU_CLASS_MAG(MEU_FlareWhite_M203,10)
			MEU_CLASS_MAG(MEU_FlareGreen_M203,10)
			MEU_CLASS_MAG(MEU_FlareRed_M203,10)
			MEU_CLASS_MAG(6Rnd_Smoke_M32,15)
			MEU_CLASS_MAG(6Rnd_HE_M32,30)
			// THROWN	
			MEU_CLASS_MAG(HandGrenade,100)
			MEU_CLASS_MAG(MiniGrenade,100)
			MEU_CLASS_MAG(AGM_M84,100)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(AGM_HandFlare_White,50)
			MEU_CLASS_MAG(AGM_HandFlare_Red,50)
			MEU_CLASS_MAG(AGM_HandFlare_Green,50)
			MEU_CLASS_MAG(AGM_HandFlare_Yellow,50)
			MEU_CLASS_MAG(SmokeShell,50)
			MEU_CLASS_MAG(SmokeShellGreen,50)
			MEU_CLASS_MAG(SmokeShellRed,50)
			MEU_CLASS_MAG(SmokeShellYellow,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellPurple,50)
			//EXPLOSIVES	
			MEU_CLASS_MAG(ATMine_Range_Mag,50)
			MEU_CLASS_MAG(APERSMine_Range_Mag,50)
			MEU_CLASS_MAG(APERSBoundingMine_Range_Mag,50)
			MEU_CLASS_MAG(SLAMDirectionalMine_Wire_Mag,50)
			MEU_CLASS_MAG(APERSTripMine_Wire_Mag,50)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,50)
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
			MEU_CLASS_MAG(SatchelCharge_Remote_Mag,50)
			MEU_CLASS_MAG(CUP_TimeBomb_M,50)
			MEU_CLASS_MAG(CUP_PipeBomb_M,50)
		};		
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_Colt1911,25)
			MEU_CLASS_WEAP(CUP_hgun_M9,25)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_black,25)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_BUIS_GL,25)
			MEU_CLASS_WEAP(CUP_lmg_M249,5)
			MEU_CLASS_WEAP(ej_IAR30,5)
			MEU_CLASS_WEAP(CUP_lmg_M240,5)
			MEU_CLASS_WEAP(CUP_srifle_M107_Base,5)
			MEU_CLASS_WEAP(CUP_srifle_M110,5)
			MEU_CLASS_WEAP(CUP_srifle_Mk12SPR,5)
			MEU_CLASS_WEAP(MEU_M40A5,5)
			MEU_CLASS_WEAP(meu_AT4,20)
			MEU_CLASS_WEAP(meu_AT4_CS,20)
			MEU_CLASS_WEAP(caf_m72a6,10)
			MEU_CLASS_WEAP(CUP_launch_Mk153Mod0,3)
			MEU_CLASS_WEAP(M32,5)
			MEU_CLASS_WEAP(CUP_sgun_M1014,5)
		};		
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5)
			MEU_CLASS_BAG(tf_rt1523g_big,5)
			MEU_CLASS_BAG(B_AssaultPack_cbr,10)
			MEU_CLASS_BAG(B_AssaultPack_blk,10)
			MEU_CLASS_BAG(MEF_Wood_Assault,10)
			MEU_CLASS_BAG(MEF_Wood_Kitbag,10)
			MEU_CLASS_BAG(MEF_Wood_Carryall,10)
			MEU_CLASS_BAG(B_Carryall_cbr,10)
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5)
			MEU_CLASS_BAG(B_CRRC_backpack,5)
			MEU_CLASS_BAG(B_Parachute,25)
		};
	};
	class Box_meu_bas: B_supplyCrate_F  
	{
		MEU_CRATE_INFO([15th] BAS Box)
	
		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"MEU BAS Corpsman Loadout","bas\corpsmanloadout.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,5)
			MEU_CLASS_ITEM(acc_pointer_IR,5)
			MEU_CLASS_ITEM(CUP_optic_ACOG,5)
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,50)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,5)
			MEU_CLASS_ITEM(CUP_optic_Eotech533,15)
			MEU_CLASS_ITEM(CUP_optic_CompM2_Black,5)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,5)
			MEU_CLASS_ITEM(ItemCompass,5)
			MEU_CLASS_ITEM(ItemGPS,5)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,5)
			MEU_CLASS_ITEM(AGM_MapTools,25)
			MEU_CLASS_ITEM(Binocular,5)
			MEU_CLASS_ITEM(Rangefinder,5)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(NVGoggles_OPFOR,10)
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			MEU_CLASS_ITEM(AGM_CableTie,50)
			MEU_CLASS_ITEM(MEU_FlareGreen_M203,25)
			MEU_CLASS_ITEM(MEU_Flareyellow_M203,25)
			MEU_CLASS_ITEM(MEU_FlareWhite_M203,25)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15)
			// VESTS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Medical,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Medical_L,15)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
			MEU_CLASS_ITEM(AGM_Morphine,100)
			MEU_CLASS_ITEM(AGM_Bloodbag,100)
		};
		class TransportMagazines 
		{
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,100)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,300)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			// Smoke 203
			MEU_CLASS_MAG(AGM_M84,20)
			MEU_CLASS_MAG(AGM_HandFlare_White,20)
			MEU_CLASS_MAG(AGM_HandFlare_Green,20)
			MEU_CLASS_MAG(AGM_HandFlare_Yellow,20)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(SmokeShell,50)
			MEU_CLASS_MAG(SmokeShellPurple,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellGreen,50)
			MEU_CLASS_MAG(SmokeShellyellow,50)
			MEU_CLASS_MAG(SmokeShellorange,50)
			MEU_CLASS_MAG(HandGrenade,20)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,200)
		};	
		class TransportWeapons 
		{
			//Weapons	
			MEU_CLASS_WEAP(CUP_hgun_M9,5)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_base,5)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_Black,5)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_GL,5)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_BUIS_GL,5)
		};		
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5)
			MEU_CLASS_BAG(MEF_Wood_Assault,5)
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5)
			MEU_CLASS_BAG(MEF_Wood_Carryall,5)
		};
	};
	class Box_meu_inf: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Infantry Box)	

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"MEU HQ Loadout","inf\meu_hq_loadout.sqf"},
			{"Squad Leader Loadout","inf\meu_squadLeader_lo.sqf"},
			{"Fire Team Leader Loadout","inf\meu_FT_loadout.sqf"},
			{"Rifleman Loadout","inf\meu_rifle_loadout.sqf"},
			{"M27 AR Loadout","inf\meu_ar-iar_loadout.sqf"},
			{"M27 AAR","inf\meu_aar-iar_loadout.sqf"},
			{"Automatic Rifleman Loadout","inf\meu_ar_loadout.sqf"},
			{"Assistant AR Loadout","inf\meu_aar_loadout.sqf"},
			{"RTO Loadout","inf\meu_rto_loadout.sqf"},
			{"Designated Marksman Loadout","inf\meu_dm_loadout.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,15)
			MEU_CLASS_ITEM(acc_pointer_IR,15)
			MEU_CLASS_ITEM(CUP_optic_ACOG,50)
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(optic_acog_holo,10)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_mrco,15)
			MEU_CLASS_ITEM(CUP_optic_LeupoldMk4,25)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(CUP_optic_CompM4,5)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,5)
			MEU_CLASS_ITEM(CUP_optic_Eotech533,5)
			MEU_CLASS_ITEM(CUP_optic_Eotech533Grey,5)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,50)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			MEU_CLASS_ITEM(CUP_optic_CompM2_Black,5)
			MEU_CLASS_ITEM(optic_tws,15)
			// GOGGLES
			MEU_CLASS_ITEM(NVGoggles_OPFOR,50)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,50)
			MEU_CLASS_ITEM(AV_ESS_tan,50)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,50)
			MEU_CLASS_ITEM(AV_ESS_grn,50)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,50)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15)
			// VESTS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,15)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,25)
			MEU_CLASS_ITEM(ItemSMGR,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(AGM_MapTools,10)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(meu_MX2A_tan,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(Laserdesignator,1)
			MEU_CLASS_ITEM(Laserbatteries,5)
			MEU_CLASS_ITEM(AGM_Vector,5)
			MEU_CLASS_ITEM(AGM_ItemKestrel,2)
			MEU_CLASS_ITEM(B_UavTerminal,2)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemcTabHCam,2)
			MEU_CLASS_ITEM(MEU_FlareGreen_M203,25)
			MEU_CLASS_ITEM(MEU_FlareRed_M203,25)
			MEU_CLASS_ITEM(MEU_FlareWhite_M203,25)
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			MEU_CLASS_ITEM(AGM_SpareBarrel,6)
			MEU_CLASS_ITEM(AGM_Clacker,10)
			MEU_CLASS_ITEM(AGM_DefusalKit,10)
			MEU_CLASS_ITEM(AGM_CableTie,100)
			MEU_CLASS_ITEM(AGM_IR_Strobe_Item,50)
		};
		class TransportMagazines {
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,100)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,200)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51_T,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_Stanag,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Slug,100)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Pellets,100)
			MEU_CLASS_MAG(MEU_20x762_Mag,100)
			MEU_CLASS_MAG(MEU_30x556_Mk262_Mag,100)
			// THROWN
			MEU_CLASS_MAG(SmokeShell,100)
			MEU_CLASS_MAG(SmokeShellGreen,50)
			MEU_CLASS_MAG(SmokeShellYellow,50)
			MEU_CLASS_MAG(SmokeShellRed,50)
			MEU_CLASS_MAG(SmokeShellPurple,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(SmokeshellBlue,50)
			MEU_CLASS_MAG(HandGrenade,100)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,100)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeRed_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeYellow_Grenade_shell,50)
			MEU_CLASS_MAG(1Rnd_SmokeOrange_Grenade_shell,50)
			MEU_CLASS_MAG(AGM_M84,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(6Rnd_HE_M32,45)
			MEU_CLASS_MAG(6Rnd_Smoke_M32,30)
			MEU_CLASS_MAG(AGM_HandFlare_White,50)
			MEU_CLASS_MAG(AGM_HandFlare_Red,50)
			MEU_CLASS_MAG(AGM_HandFlare_Green,50)
			MEU_CLASS_MAG(AGM_HandFlare_Yellow,50)
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_BUIS_GL,20)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_black,5)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_BUIS_GL,5)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_Base,20)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_GL,20)
			MEU_CLASS_WEAP(CUP_lmg_M249,20)
			MEU_CLASS_WEAP(ej_IAR30,20)
			MEU_CLASS_WEAP(meu_AT4,20)
			MEU_CLASS_WEAP(meu_AT4_CS,20)
			MEU_CLASS_WEAP(CAF_M72A6,5)
			MEU_CLASS_WEAP(M32,6)
			MEU_CLASS_WEAP(CUP_srifle_M110,2)
			MEU_CLASS_WEAP(CUP_srifle_Mk12SPR,2)
			MEU_CLASS_WEAP(CUP_sgun_M1014,3)
		};		
		class TransportBackpacks
		{
			MEU_CLASS_BAG(tf_rt1523g,5) 
			MEU_CLASS_BAG(tf_rt1523g_big,5) 
			MEU_CLASS_BAG(MEF_Wood_Assault,5) 
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5) 
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5) 
		};
	};
	class Box_meu_wep: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Weapons Box)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"MG Squad Leader Loadout","wep\15th_MG_Squad_Leader.sqf"},
			{"MG Team Leader Loadout","wep\15th_MG_Team_Leader.sqf"},
			{"MG Gunner Loadout","wep\15th_Machinegunner.sqf"},
			{"MG Ammo Man Loadout","wep\15th_MG_Ammo_Man.sqf"},
			{"Assault Squad Leader Loadout","wep\15th_Assault_Squad_Leader.sqf"},
			{"Assault Team Leader Loadout","wep\15th_Assault_Team_Leader.sqf"},
			{"Assault Ammoman Loadout","wep\15th_Assault_Ammoman.sqf"},
			{"Mortar Squad Leader Loadout","wep\15th_Mortar_Squad_Leader.sqf"},
			{"Mortar Assistant Gunner Loadout","wep\15th_Mortar_Assistant_Gunner.sqf"},
			{"MEU HQ Loadout","inf\meu_hq_loadout.sqf",1},
			{"RTO Loadout","inf\meu_rto_loadout.sqf",1}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,5) 
			MEU_CLASS_ITEM(acc_pointer_IR,5) 
			MEU_CLASS_ITEM(CUP_optic_ACOG,50) 
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(optic_acog_holo,5) 
			MEU_CLASS_ITEM(optic_Arco,15) 
			MEU_CLASS_ITEM(optic_Hamr,15) 
			MEU_CLASS_ITEM(CUP_optic_Eotech533,5) 
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,50) 
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			MEU_CLASS_ITEM(CUP_optic_CompM2_Black,5) 
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,5) 
			MEU_CLASS_ITEM(optic_tws,5) 
			MEU_CLASS_ITEM(optic_tws_mg,5) 
			MEU_CLASS_ITEM(CUP_optic_ElcanM145,15) 
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20) 
			MEU_CLASS_ITEM(ItemCompass,20) 
			MEU_CLASS_ITEM(ItemGPS,20) 
			MEU_CLASS_ITEM(ItemRadio,50) 
			MEU_CLASS_ITEM(ItemMap,20) 
			MEU_CLASS_ITEM(Binocular,20) 
			MEU_CLASS_ITEM(Rangefinder,20) 
			MEU_CLASS_ITEM(B_UavTerminal,4) 
			MEU_CLASS_ITEM(itemctab,4) 
			MEU_CLASS_ITEM(itemandroid,10) 
			MEU_CLASS_ITEM(ItemcTabHCam,10) 
			MEU_CLASS_ITEM(ToolKit,20) 
			MEU_CLASS_ITEM(MineDetector,10) 
			MEU_CLASS_ITEM(NVGoggles_Opfor,20) 
			MEU_CLASS_ITEM(ItemSMGR,20) 
			MEU_CLASS_ITEM(AGM_EarBuds,50) 
			MEU_CLASS_ITEM(AGM_SpareBarrel,6) 
			MEU_CLASS_ITEM(AGM_CableTie,20) 
			MEU_CLASS_ITEM(AGM_UAVBattery,5) 
			MEU_CLASS_ITEM(AGM_MapTools,20) 
			MEU_CLASS_ITEM(AGM_DefusalKit,15) 
			MEU_CLASS_ITEM(meu_MX2A_tan,20) 
			MEU_CLASS_ITEM(AGM_Vector,20) 
			MEU_CLASS_ITEM(AGM_Clacker,20) 
			MEU_CLASS_ITEM(MEU_FlareGreen_M203,25) 
			MEU_CLASS_ITEM(MEU_FlareRed_M203,25) 
			MEU_CLASS_ITEM(MEU_FlareWhite_M203,25) 
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15) 
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15) 
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15) 
			// VESTS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,15) 
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,15) 
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300) 
			MEU_CLASS_ITEM(AGM_Epipen,100) 
		};
		class TransportMagazines 
		{
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,100)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,200)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51_T,100)
			MEU_CLASS_MAG(CUP_SMAW_HEDP_M_N,50)
			MEU_CLASS_MAG(CUP_SMAW_HEAA_M_N,50)
			//Smoke 203		
			MEU_CLASS_MAG(SmokeShell,100)
			MEU_CLASS_MAG(SmokeShellGreen,50)
			MEU_CLASS_MAG(SmokeShellYellow,50)
			MEU_CLASS_MAG(SmokeShellRed,50)
			MEU_CLASS_MAG(SmokeShellPurple,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(SmokeshellBlue,50)
			MEU_CLASS_MAG(HandGrenade,100)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,100)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeRed_Grenade_shell,25)
			MEU_CLASS_MAG(AGM_M84,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(AGM_HandFlare_Green,50)
			// EXPLOSIVES
			MEU_CLASS_MAG(APERSMine_Range_Mag,20)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,20)
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,20)
			MEU_CLASS_MAG(SatchelCharge_Remote_Mag,20)
			MEU_CLASS_MAG(CUP_TimeBomb_M,20)
			MEU_CLASS_MAG(CUP_PipeBomb_M,20)
			MEU_CLASS_MAG(SLAMDirectionalMine_Wire_Mag,20)
			// Laser designator
			MEU_CLASS_MAG(Laserbatteries,5)
		};
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_BUIS_GL,20)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_black,5)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_BUIS_GL,5)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_Base,20)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_GL,20)
			MEU_CLASS_WEAP(CUP_lmg_M240,20)
			MEU_CLASS_WEAP(CUP_launch_Mk153Mod0,20)
			MEU_CLASS_WEAP(Laserdesignator,1)
		};		
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5)
			MEU_CLASS_BAG(tf_rt1523g_big,5)
			MEU_CLASS_BAG(MEF_Wood_Assault,5)
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5)
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5)
			MEU_CLASS_BAG(O_Mortar_01_support_F,5)
			MEU_CLASS_BAG(O_Mortar_01_weapon_F,5)
		};
	};
	class Box_meu_ace: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] ACE Box)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"ACE Fixed Pilot","ace\A_Fixed_Pilot.sqf"},
			{"ACE Rotary Crew (Desert)","ace\A_Rotary_Crew_D.sqf"},
			{"ACE Rotary Pilot(Desert)","ace\A_Rotary_Pilot_D.sqf"},
			{"ACE Rotary Crew (Woodland)","ace\A_Rotary_Crew_W.sqf"},
			{"ACE Rotary Pilot (Woodland)","ace\A_Rotary_Pilot_W.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,20)
			MEU_CLASS_ITEM(acc_pointer_IR,20)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(CUP_optic_CompM4,20)
			MEU_CLASS_ITEM(CUP_optic_ACOG,20)
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,20)
			MEU_CLASS_ITEM(CUP_optic_Eotech533,20)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,50)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			MEU_CLASS_ITEM(CUP_optic_CompM2_Black,20)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,2)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(NVGoggles,25)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemCtabHCam,4)
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			// UNIFORMS		
			MEU_CLASS_ITEM(OliveCoveralls,5)	
			MEU_CLASS_ITEM(MEF_TAN_HP_Uni,5)	
			MEU_CLASS_ITEM(MEF_OD_F_SUIT,5)	
			MEU_CLASS_ITEM(MEF_TAN_F_SUIT,5)	
			// GOGGLES	
			MEU_CLASS_ITEM(AV_ESS_tan,25)
			MEU_CLASS_ITEM(G_Aviator,25)
			// VESTS
			MEU_CLASS_ITEM(V_TacVest_blk,5)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Armor_L,5)
			// HELMETS
			MEU_CLASS_ITEM(H_PilotHelmetFighter_B,5)
			MEU_CLASS_ITEM(H_CrewHelmetHeli_B,5)
			MEU_CLASS_ITEM(H_PilotHelmetHeli_B,5)
		};
		class TransportMagazines 
		{
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,100)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,200)
			//Smoke 203
			MEU_CLASS_MAG(SmokeShell,20)
			MEU_CLASS_MAG(SmokeShellGreen,20)
			MEU_CLASS_MAG(SmokeShellYellow,20)
			MEU_CLASS_MAG(SmokeShellRed,20)
			MEU_CLASS_MAG(SmokeshellBlue,15)
			MEU_CLASS_MAG(Chemlight_green,50)
        };		
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,25)
		};		
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5)
			MEU_CLASS_BAG(MEF_Wood_Assault,5)
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5)
			MEU_CLASS_BAG(B_Parachute,5)
		};
	};
	class Box_meu_titan: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Titan Box)
	
		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"Titan Commander","titan\T_Commander.sqf"},
			{"Titan Crewman","titan\T_Crewman.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,12) 
			MEU_CLASS_ITEM(acc_pointer_IR,12) 
			MEU_CLASS_ITEM(CUP_optic_CompM2_Black,12) 
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,12) 
			MEU_CLASS_ITEM(optic_Arco,15) 
			MEU_CLASS_ITEM(optic_Hamr,15) 
			// ACCESSORIES 
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,6)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Woodland_Helmet_MICH,15)
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			MEU_CLASS_ITEM(H_HelmetCrew_I,15)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15)
			// VESTS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Armor,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Armor_L,15)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
		};
		class TransportMagazines 
		{	
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,12)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,750)
			// THROWN
			MEU_CLASS_MAG(SmokeShell,20)
			MEU_CLASS_MAG(SmokeShellGreen,20)
			MEU_CLASS_MAG(SmokeShellYellow,20)
			MEU_CLASS_MAG(SmokeShellRed,20)
			MEU_CLASS_MAG(SmokeshellBlue,15)
			MEU_CLASS_MAG(Chemlight_blue,50)
		};
		class TransportWeapons 
		{
			// WEAPONS	
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,12)
		};		
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5)
		};
	};
	class Box_meu_gator: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Gator Box)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"Gator Crew Chief Commander","gator\G_Crew_Chief.sqf"},
			{"Gator Crewman","gator\G_Crewman.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,12)
			MEU_CLASS_ITEM(acc_pointer_IR,12)
			MEU_CLASS_ITEM(optic_Hamr,12)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,15)
			// ACCESSORIES			
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,18)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(Rangefinder,4)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Woodland_Helmet_MICH,15)
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			MEU_CLASS_ITEM(H_HelmetCrew_I,15)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15)
			MEU_CLASS_ITEM(OliveCoveralls,10)
			// VESTS		
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,15)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
		};
		class TransportMagazines 
		{
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,50) 
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,180) 
			// SMOKE + 203
			MEU_CLASS_MAG(SmokeShell,110)
			MEU_CLASS_MAG(SmokeShellGreen,36)
			MEU_CLASS_MAG(SmokeShellYellow,36)
			MEU_CLASS_MAG(SmokeShellRed,36)
			MEU_CLASS_MAG(SmokeshellBlue,36)
		};
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,12)
			MEU_CLASS_WEAP(meu_AT4,10)
		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5) 
		};
	};
	class Box_meu_arty: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Battlestar Box)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"A_Crew","arty\A_Crew.sqf"},
			{"A_RTO","arty\A_RTO.sqf"}
		};
		
		class TransportItems 
		{		
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(itemctab,10)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemcTabHCam,4)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,15)
			MEU_CLASS_ITEM(acc_flashlight,15)
			MEU_CLASS_ITEM(CUP_optic_ACOG,15)
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(NVGoggles_OPFOR,15)
			MEU_CLASS_ITEM(CUP_optic_Eotech533,15)
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15)
			// VESTS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,15)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
		};
		class TransportMagazines 
		{
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,12) 
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,100) 
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100) 
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_T_Stanag,100) 
			// THROWN
			MEU_CLASS_MAG(SmokeShell,20) 
			MEU_CLASS_MAG(SmokeShellGreen,20) 
			MEU_CLASS_MAG(HandGrenade,20) 
			MEU_CLASS_MAG(SmokeshellBlue,20) 
		};
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,12)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_Base,12)
			MEU_CLASS_WEAP(CUP_lmg_M249,10)
			MEU_CLASS_WEAP(ej_IAR30,10)
			MEU_CLASS_WEAP(meu_AT4,20)
		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5)
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5)
			MEU_CLASS_BAG(B_Mortar_01_support_F,5)
			MEU_CLASS_BAG(B_Mortar_01_weapon_F,5)
		};
	};
	class Box_meu_hq: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] MEU HQ Box)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"MEU HQ Loadout","inf\meu_hq_loadout.sqf"},
			{"Squad Leader Loadout","inf\meu_squadLeader_lo.sqf"},
			{"Fire Team Leader Loadout","inf\meu_FT_loadout.sqf"},
			{"Rifleman Loadout","inf\meu_rifle_loadout.sqf"},
			{"M27 AR Loadout","inf\meu_ar-iar_loadout.sqf"},
			{"M27 AAR","inf\meu_aar-iar_loadout.sqf"},
			{"Automatic Rifleman Loadout","inf\meu_ar_loadout.sqf"},
			{"Assistant AR Loadout","inf\meu_aar_loadout.sqf"},
			{"RTO Loadout","inf\meu_rto_loadout.sqf"},
			{"Designated Marksman Loadout","inf\meu_dm_loadout.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,5)
			MEU_CLASS_ITEM(acc_pointer_IR,5)
			MEU_CLASS_ITEM(CUP_optic_ACOG,5)
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(CUP_optic_LeupoldMk4,25)
			MEU_CLASS_ITEM(optic_Arco,15)
			MEU_CLASS_ITEM(optic_Hamr,15)
			MEU_CLASS_ITEM(CUP_optic_CompM4,5)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,5)
			MEU_CLASS_ITEM(CUP_optic_Eotech533,5)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,50)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			MEU_CLASS_ITEM(CUP_optic_CompM2_Black,5)
			MEU_CLASS_ITEM(optic_tws,5)
			MEU_CLASS_ITEM(optic_tws_mg,5)
			MEU_CLASS_ITEM(NVGoggles_OPFOR,100)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Woodland_8Point,15)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15)
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_RS,15)
			// VESTS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,15)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,2)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(meu_MX2A_tan,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(Laserdesignator,2)
			MEU_CLASS_ITEM(Laserbatteries,4)
			MEU_CLASS_ITEM(B_UavTerminal,2)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(ItemcTabHCam,2)
			MEU_CLASS_ITEM(AGM_EarBuds,50)
		};
		class TransportMagazines 
		{			
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,100)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,200)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51_T,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_Stanag,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_T_Stanag,100)
			// SMOKE + 203
			MEU_CLASS_MAG(SmokeShell,100)
			MEU_CLASS_MAG(SmokeShellGreen,50)
			MEU_CLASS_MAG(SmokeShellYellow,50)
			MEU_CLASS_MAG(SmokeShellRed,50)
			MEU_CLASS_MAG(SmokeShellPurple,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(SmokeshellBlue,50)
			MEU_CLASS_MAG(HandGrenade,100)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,100)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeRed_Grenade_shell,25)
			MEU_CLASS_MAG(AGM_M84,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,20)
		};
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,5)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_BUIS_GL,5)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_black,5)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_BUIS_GL,5)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_Base,5)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_GL,5)
			MEU_CLASS_WEAP(CUP_lmg_M249,5)
			MEU_CLASS_WEAP(ej_IAR30,5)
			MEU_CLASS_WEAP(CAF_M72A6,5)
			MEU_CLASS_WEAP(meu_AT4,20)
		};
		class TransportBackpacks
		{
			// BACKPACKS
			MEU_CLASS_BAG(tf_rt1523g,5) 
			MEU_CLASS_BAG(tf_rt1523g_big,5) 
			MEU_CLASS_BAG(MEF_Wood_Assault,5) 
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5) 
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5) 
		};
	};
	class Box_meu_lce: B_supplyCrate_F 
	{
		MEU_CRATE_INFO([15th] Logistics Box)
		
		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"LCE HQ","lce\lce_hq_loadout.sqf"},
			{"LCE Combat Engineer","lce\lce_engineer.sqf"},
			{"LCE EOD Team Lead","lce\eod_lead.sqf"},
			{"LCE EOD Technician","lce\eod_tech.sqf"},
			{"LCE MP Team Lead","lce\lce_mp_lead.sqf"},
			{"LCE Military Policeman","lce\lce_policeman.sqf"},
			{"LCE Supply Team lead","lce\lce_supply_lead.sqf"},
			{"LCE Supply Driver","lce\lce_supply_driver.sqf"},
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(acc_flashlight,12)
			MEU_CLASS_ITEM(acc_pointer_IR,12)
			MEU_CLASS_ITEM(optic_Hamr,12)
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,12)
			MEU_CLASS_ITEM(CUP_optic_ACOG,15)
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(CUP_optic_Eotech533,10)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,50)
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			// GOGGLES
			MEU_CLASS_ITEM(NVGoggles_OPFOR,100)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,100)
			MEU_CLASS_ITEM(AV_ESS_tan,100)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,100)
			MEU_CLASS_ITEM(AV_ESS_grn,100)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,100)
			// ACCESSORIES
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,18)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(ItemSMGR,20)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(AGM_MapTools,10)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,4)
			MEU_CLASS_ITEM(ToolKit,25)
			MEU_CLASS_ITEM(AGM_DefusalKit,10)
			MEU_CLASS_ITEM(Laserdesignator,1)
			MEU_CLASS_ITEM(Laserbatteries,5)
			MEU_CLASS_ITEM(AGM_Vector,5)
			MEU_CLASS_ITEM(AGM_ItemKestrel,2)
			MEU_CLASS_ITEM(B_UavTerminal,2)
			MEU_CLASS_ITEM(itemandroid,4)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(ItemcTabHCam,2)
			MEU_CLASS_ITEM(AGM_CableTie,50)
			MEU_CLASS_ITEM(AGM_IR_Strobe_Item,25)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,15)
			MEU_CLASS_ITEM(MEF_Woodland_8Point,10)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,15)
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_RS,15)
			// VESTS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,15)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,15)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
		};
		class TransportMagazines 
		{
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,50)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,150)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51,50)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51_T,50)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_Stanag,50)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_T_Stanag,50)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Slug,50)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Pellets,50)
			MEU_CLASS_MAG(MEU_20x762_Mag,50)
			MEU_CLASS_MAG(MEU_30x556_Mk262_Mag,50)
			// THROWN
			MEU_CLASS_MAG(SmokeShell,100)
			MEU_CLASS_MAG(SmokeShellGreen,25)
			MEU_CLASS_MAG(SmokeShellYellow,25)
			MEU_CLASS_MAG(SmokeShellRed,25)
			MEU_CLASS_MAG(SmokeShellPurple,25)
			MEU_CLASS_MAG(SmokeShellOrange,25)
			MEU_CLASS_MAG(SmokeshellBlue,25)
			MEU_CLASS_MAG(HandGrenade,50)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,50)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeRed_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeYellow_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeOrange_Grenade_shell,25)
			MEU_CLASS_MAG(AGM_M84,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(6Rnd_HE_M32,45)
			MEU_CLASS_MAG(6Rnd_Smoke_M32,30)
			MEU_CLASS_MAG(AGM_HandFlare_White,25)
			MEU_CLASS_MAG(AGM_HandFlare_Red,25)
			MEU_CLASS_MAG(AGM_HandFlare_Green,25)
			MEU_CLASS_MAG(AGM_HandFlare_Yellow,25)
			// EXPLOSIVES			
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,30)
			MEU_CLASS_MAG(ClaymoreDirectionalMine_Remote_Mag,30)
		};
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_BUIS_GL,20)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_black,5)
			MEU_CLASS_WEAP(CUP_arifle_M4A1_BUIS_GL,5)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_Base,20)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_GL,20)
			MEU_CLASS_WEAP(CUP_lmg_M249,20)
			MEU_CLASS_WEAP(ej_IAR30,20)
			MEU_CLASS_WEAP(meu_AT4,20)
			MEU_CLASS_WEAP(meu_AT4_CS,20)
			MEU_CLASS_WEAP(CAF_M72A6,5)
			MEU_CLASS_WEAP(M32,6)
			MEU_CLASS_WEAP(CUP_srifle_M110,2)
			MEU_CLASS_WEAP(CUP_srifle_Mk12SPR,2)
			MEU_CLASS_WEAP(CUP_sgun_M1014,3)
		};
		class TransportBackpacks
		{
			MEU_CLASS_BAG(tf_rt1523g,5)
			MEU_CLASS_BAG(MEF_Wood_Assault,5)
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5)
		};
	};
	class Box_meu_lar: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] LAR Box)
	
		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"Marauder AAR Loadout","lar\meu_laraar_loadout.sqf"},
			{"Marauder AR Loadout","lar\meu_larar_loadout.sqf"},
			{"Marauder Commander Loadout","lar\meu_larcom_loadout.sqf"},
			{"Marauder Crew Loadout","lar\meu_larcrew_loadout.sqf"},
			{"Marauder HQ Loadout","lar\meu_larhq_loadout.sqf"},
			{"Marauder Rifleman Loadout","lar\meu_larrifle_loadout.sqf"},
			{"Marauder RTO Loadout","lar\meu_larrto_loadout.sqf"},
			{"Marauder Team Leader Loadout","lar\meu_lartl_loadout.sqf"}
		};
		
		class TransportItems 
		{
			// ATTACHMENTS
			MEU_CLASS_ITEM(acc_pointer_IR,20)  
			MEU_CLASS_ITEM(CUP_acc_ANPEQ_15,30) 
			MEU_CLASS_ITEM(acc_flashlight,20)
			// OPTICS 
			MEU_CLASS_ITEM(optic_Hamr,20) 
			MEU_CLASS_ITEM(optic_MRCO,20) 
			MEU_CLASS_ITEM(optic_Holosight,20) 
			MEU_CLASS_ITEM(optic_nvs,20) 
			MEU_CLASS_ITEM(CUP_optic_ACOG,20) 
			MEU_CLASS_ITEM(CUP_optic_ACOG1,50)
			MEU_CLASS_ITEM(CUP_optic_CompM4,20) 
			MEU_CLASS_ITEM(FHQ_optic_HWS,20) 
			MEU_CLASS_ITEM(CUP_optic_Eotech533,20)
			MEU_CLASS_ITEM(optic_tws,5) 
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_10,40) 
			MEU_CLASS_ITEM(CUP_optic_AN_PVS_101,5)
			// HELMETS
			MEU_CLASS_ITEM(MEF_Wood_Goggles_Helmet_LWH,30)
			MEU_CLASS_ITEM(MEF_Wood_Helmet_LWH,30)
			MEU_CLASS_ITEM(H_HelmetCrew_I,15)
			// NVG AND GOGGLES
			MEU_CLASS_ITEM(NVGoggles_Opfor,20)
			MEU_CLASS_ITEM(AV_ESS_blk,20)
			MEU_CLASS_ITEM(AV_ESS_blk_clr,20)
			MEU_CLASS_ITEM(AV_ESS_tan,20)
			MEU_CLASS_ITEM(AV_ESS_tan_clr,20)
			MEU_CLASS_ITEM(AV_ESS_grn,20)
			MEU_CLASS_ITEM(AV_ESS_grn_clr,20)
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,20)
			MEU_CLASS_ITEM(ItemCompass,20)
			MEU_CLASS_ITEM(ItemGPS,20)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,170)
			MEU_CLASS_ITEM(ItemMap,20)
			MEU_CLASS_ITEM(MineDetector,10)
			MEU_CLASS_ITEM(Binocular,20)
			MEU_CLASS_ITEM(Rangefinder,20)
			MEU_CLASS_ITEM(Laserdesignator,3)
			MEU_CLASS_ITEM(Laserbatteries,9)
			MEU_CLASS_ITEM(B_UavTerminal,4)
			MEU_CLASS_ITEM(itemctab,4)
			MEU_CLASS_ITEM(itemandroid,10)
			MEU_CLASS_ITEM(ItemcTabHCam,10)
			MEU_CLASS_ITEM(UGL_FlareCIR_F,25) // wrong
			MEU_CLASS_ITEM(MEU_FlareGreen_M203,25) // category
			MEU_CLASS_ITEM(MEU_FlareRed_M203,25) // ??
			MEU_CLASS_ITEM(MEU_FlareWhite_M203,25) // ^^
			MEU_CLASS_ITEM(AGM_EarBuds,50)
			MEU_CLASS_ITEM(AGM_SpareBarrel,6)
			MEU_CLASS_ITEM(AGM_Clacker,6)
			MEU_CLASS_ITEM(AGM_Vector,5)
			MEU_CLASS_ITEM(AGM_ItemKestrel,2)
			MEU_CLASS_ITEM(AGM_CableTie,100)
			MEU_CLASS_ITEM(AGM_MapTools,10)
			MEU_CLASS_ITEM(AGM_DefusalKit,10)
			MEU_CLASS_ITEM(AGM_IR_Strobe_Item,50)
			MEU_CLASS_ITEM(AGM_UAVBattery,50)
			// UNIFORMS
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry,30)
			MEU_CLASS_ITEM(MEF_Vest_Tan_Infantry_L,30)
			MEU_CLASS_ITEM(MEF_Wood_IN_MARPAT_LS,30)
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,300)
			MEU_CLASS_ITEM(AGM_Epipen,100)
		};
		class TransportMagazines 
		{	
			// AMMO
			MEU_CLASS_MAG(MEU_M882_9mm,100)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,200)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_Stanag,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Slug,100)
			MEU_CLASS_MAG(MEU_8Rnd_12Gauge_Pellets,100)
			MEU_CLASS_MAG(MEU_20x762_Mag,100)
			MEU_CLASS_MAG(MEU_30x556_Mk262_Mag,100)
			// THROWN + LAUNCHED
			MEU_CLASS_MAG(SmokeShell,100)
			MEU_CLASS_MAG(SmokeShellGreen,50)
			MEU_CLASS_MAG(SmokeShellYellow,50)
			MEU_CLASS_MAG(SmokeShellRed,50)
			MEU_CLASS_MAG(SmokeShellPurple,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(SmokeshellBlue,50)
			MEU_CLASS_MAG(HandGrenade,100)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,100)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,25)
			MEU_CLASS_MAG(1Rnd_SmokeRed_Grenade_shell,25)
			MEU_CLASS_MAG(6Rnd_Smoke_M32,48)
			MEU_CLASS_MAG(6Rnd_HE_M32,24)
			MEU_CLASS_MAG(AGM_M84,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(AGM_HandFlare_White,50)
			MEU_CLASS_MAG(AGM_HandFlare_Red,50)
			MEU_CLASS_MAG(AGM_HandFlare_Green,50)
			MEU_CLASS_MAG(AGM_HandFlare_Yellow,50)
			// EXPLOSIVES
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,50)
		};
		class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(CUP_hgun_M9,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_black,20)
			MEU_CLASS_WEAP(CUP_arifle_M4CAR_BUIS_GL,20)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_Base,20)
			MEU_CLASS_WEAP(CUP_arifle_M16A4_GL,20)
			MEU_CLASS_WEAP(ej_IAR30,20)
			MEU_CLASS_WEAP(meu_AT4,20)
			MEU_CLASS_WEAP(CUP_srifle_M110,6)
			MEU_CLASS_WEAP(CUP_srifle_Mk12SPR,6)
			MEU_CLASS_WEAP(CUP_sgun_M1014,3)
			MEU_CLASS_WEAP(M32,6)
		};
		class TransportBackpacks
		{
			MEU_CLASS_BAG(tf_rt1523g,10)
			MEU_CLASS_BAG(MEF_Wood_Assault,5)
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5)
			MEU_CLASS_BAG(B_UAV_01_backpack_F,5)
		};
	};
	class Box_meu_Boats: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Boats)
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportBackPacks 
		{
			// BACKPACKS
			MEU_CLASS_BAG(B_CRRC_backpack,100)
		};
	};
	class Box_meu_empty: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Box Empty)
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportBackPacks{};
	};	
	class Box_meu_suply: B_supplyCrate_F
	{
		MEU_CRATE_INFO([15th] Resupply ALPHA)
		
		class TransportItems 
		{
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,500) 
			MEU_CLASS_ITEM(AGM_Epipen,75) 
			MEU_CLASS_ITEM(AGM_Morphine,100) 
			MEU_CLASS_ITEM(AGM_Bloodbag,50) 
			MEU_CLASS_ITEM(AGM_CableTie,10) 
			MEU_CLASS_ITEM(AGM_EarBuds,10) 
			MEU_CLASS_ITEM(tf_anprc152,10) 
			MEU_CLASS_ITEM(AGM_Vector,4) 
        };
		class TransportMagazines 
		{
			// EQUIPMENT
			MEU_CLASS_MAG(Chemlight_red,20)
			MEU_CLASS_MAG(Chemlight_blue,20)
			MEU_CLASS_MAG(Chemlight_green,20)
            // AMMO
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,100)
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_T_Stanag,100)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_Stanag,12)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51,6)
			MEU_CLASS_MAG(MEU_100Rnd_M240_762x51_T,6)
			MEU_CLASS_MAG(MEU_M882_9mm,24)
			MEU_CLASS_MAG(DemoCharge_Remote_Mag,4)
			MEU_CLASS_MAG(CUP_SMAW_HEAA_M_N,6)
			MEU_CLASS_MAG(CUP_SMAW_HEDP_M_N,6)
            // GRENADE, SMOKE, M203
			MEU_CLASS_MAG(HandGrenade,25)
			MEU_CLASS_MAG(AGM_M84,12)
			MEU_CLASS_MAG(SmokeShell,120)
			MEU_CLASS_MAG(SmokeShellPurple,2)
			MEU_CLASS_MAG(SmokeShellBlue,2)
			MEU_CLASS_MAG(SmokeShellRed,12)
			MEU_CLASS_MAG(SmokeShellGreen,60)
			MEU_CLASS_MAG(1Rnd_Smoke_Grenade_shell,24)
			MEU_CLASS_MAG(1Rnd_SmokeRed_Grenade_shell,24)
			MEU_CLASS_MAG(1Rnd_SmokeGreen_Grenade_shell,24)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,30)
			MEU_CLASS_MAG(AGM_HandFlare_White,10)
			MEU_CLASS_MAG(AGM_HandFlare_Green,10)
			MEU_CLASS_MAG(MEU_FlareWhite_M203,10)
			MEU_CLASS_MAG(MEU_FlareGreen_M203,10)
			MEU_CLASS_MAG(MEU_FlareRed_M203,10)
        }; 
        class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(meu_AT4,10)
			MEU_CLASS_WEAP(caf_m72a6,4)
        };
		class TransportBackpacks
		{
			
		};
	};
	class Box_meu_suply_Bravo: B_supplyCrate_F
	{
		#ifndef NO_RESUPPLY_BRAVO
		MEU_CRATE_INFO([15th] Resupply BRAVO)
		#else
		scope = 0;
		#endif
						
		class TransportItems {	
			// MEDICAL
			MEU_CLASS_ITEM(AGM_Bandage,25)
			MEU_CLASS_ITEM(AGM_Epipen,25)
		};
		class TransportMagazines {
			// EQUIPMENT
			MEU_CLASS_MAG(Chemlight_red,3)
			MEU_CLASS_MAG(Chemlight_blue,3)
			MEU_CLASS_MAG(Chemlight_green,3)		
			// AMMO
			MEU_CLASS_MAG(MEU_30Rnd_M855A1_556x45_Stanag,50)
			MEU_CLASS_MAG(MEU_200Rnd_M249_556x45_Stanag,6)			
			// GRENADE, SMOKE, M203
			MEU_CLASS_MAG(HandGrenade,6)
			MEU_CLASS_MAG(AGM_M84,6)
			MEU_CLASS_MAG(SmokeShell,18)
			MEU_CLASS_MAG(SmokeShellPurple,2)
			MEU_CLASS_MAG(SmokeShellBlue,2)
			MEU_CLASS_MAG(SmokeShellRed,6)
			MEU_CLASS_MAG(SmokeShellGreen,12)
			MEU_CLASS_MAG(M433_40mm_HEDP_Shell,12)
		};		
		class TransportWeapons {		
			MEU_CLASS_WEAP(meu_AT4,3)
		};
		class TransportBackpacks {			
			MEU_CLASS_BAG(MEF_Wood_Kitbag,5)
		};
	};
	class Box_meu_zeus: Box_meu_empty
	{
		displayname = "[15th] Zues Box";
		curatorInfoTypeEmpty = "RscDisplayAttributesInventory";
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		#ifndef NO_ZEUS_WINDOW		
		scope = 0;
		#endif
	};
	class Box_meu_vehicle: Box_NATO_AmmoVeh_F
	{
		MEU_VIC_INFO([15th] Vehicle Box)
		
		class UserActions
		{
			MEU_VIC_LOADOUT_CLEAR // base class
			/*  
			how to add new loadouts:			
			MEU_VIC_LOADOUT(class - any one word, action display name, file with loadout)
			note: no quotations on class
			*/	
			MEU_VIC_LOADOUT(rifle,"Rifle Loadout","vehicle\infantry_rifle.sqf")
			MEU_VIC_LOADOUT(weapons,"Weapons Loadout","vehicle\infantry_mg.sqf")
			MEU_VIC_LOADOUT(assualt,"Assault Loadout","vehicle\infantry_assault.sqf")
			MEU_VIC_LOADOUT(bas,"Medical Loadout","vehicle\bas.sqf")
			MEU_VIC_LOADOUT(marauder,"Marauder Loadout","vehicle\marauder.sqf")
		};
	};
};

#include "\meu_ammoBoxes\loadoutManager\manager_dialog.hpp"