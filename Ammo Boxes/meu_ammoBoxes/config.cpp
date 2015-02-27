
class CfgPatches
{
	class meu_ammoBoxes
	{
		units[] = {"Box_meu_ace","Box_meu_arty","Box_meu_bas","Box_meu_lce","Box_meu_gator","Box_meu_hq","Box_meu_inf","Box_meu_spectre","Box_meu_suply","Box_meu_titan","Box_meu_wep","Box_meu_vehicle","Box_meu_lar","Box_meu_empty","Box_meu_boats"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CBA_MAIN_A3","A3_Weapons_F"};
	};
};
class CfgNotifications {
	class meu_vicCrates {
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

class CfgVehicles{
	class Box_NATO_WpsSpecial_F;
	class Box_meu_spectre : Box_NATO_WpsSpecial_F {
		displayname = "[15th] Spectre Box";
		icon = "iconCrateLarge";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		scope = 2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;


		class TransportItems {

// SUPPRESSORS 
			
			class _xx_muzzle_snds_M {
				count = 25;
				name = "muzzle_snds_M";
			};
			class _xx_CUP_muzzle_snds_M110 {
				count = 25;
				name = "CUP_muzzle_snds_M110";
			};
			class _xx_CUP_muzzle_snds_M16 {
				count = 25;
				name = "CUP_muzzle_snds_M16";
			};
			class _xx_Trixie_Cyclone {			// M40 and M27 SUPRESSOR
				count = 40;
				name = "Trixie_Cyclone";
			};

// OPTICS
			class _xx_optic_Arco {
				count = 25;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 25;
				name = "optic_Hamr";
			};
			class _xx_CUP_optic_ACOG {
				count = 50;
				name = "CUP_optic_ACOG";
			};
			class _xx_optic_Aco {
				count = 25;
				name = "optic_Aco";
			};
			class _xx_optic_Holosight {
				count = 25;
				name = "optic_Holosight";
			};
			class _xx_optic_SOS {
				count = 25;
				name = "optic_SOS";
			};
			class _xx_CUP_optic_LeupoldMk4 {
				count = 25;
				name = "CUP_optic_LeupoldMk4";
			};
			class _xx_acc_flashlight {
				count = 25;
				name = "acc_flashlight";
			};
			class _xx_optic_MRCO {
				count = 25;
				name = "optic_MRCO";
			};
			class _xx_optic_DMS {
				count = 25;
				name = "optic_DMS";
			};
			class _xx_optic_LRPS {
				count = 25;
				name = "optic_LRPS";
			};
			class _xx_optic_NVS {
				count = 25;
				name = "optic_NVS";
			};
			class _xx_optic_tws {
				count = 25;
				name = "optic_tws";
			};
			class _xx_optic_tws_mg {
				count = 25;
				name = "optic_tws_mg";
			};
			class _xx_CUP_optic_CompM4 {
				count = 5;
				name = "CUP_optic_CompM4";
			};		
			class _xx_CUP_acc_ANPEQ_15 {
				count = 5;
				name = "CUP_acc_ANPEQ_15";
			};			
			class _xx_CUP_optic_Eotech533 {
				count = 5;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_optic_AN_PVS_10 {
				count = 50;
				name = "CUP_optic_AN_PVS_10";
			};
			class _xx_CUP_optic_CompM2_Black {
				count = 5;
				name = "CUP_optic_CompM2_Black";
			};
		

// HELMETS
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};
			class _xx_MEF_Boonie_Wood {
				count = 15;
				name = "MEF_Boonie_Wood";
			};


// NVG AND GOGGLES
			class _xx_AGM_NVG_Gen4 {
				count = 25;
				name = "AGM_NVG_Gen4";
			};
			class _xx_AV_ESS_blk {
				count = 25;
				name = "AV_ESS_blk";
			};
			class _xx_AV_ESS_blk_clr {
				count = 25;
				name = "AV_ESS_blk_clr";
			};
			class _xx_AV_ESS_tan {
				count = 25;
				name = "AV_ESS_tan";
			};
			class _xx_AV_ESS_tan_clr {
				count = 25;
				name = "AV_ESS_tan_clr";
			};
			class _xx_AV_ESS_grn {
				count = 25;
				name = "AV_ESS_grn";
			};
			class _xx_AV_ESS_grn_clr {
				count = 25;
				name = "AV_ESS_grn_clr";
			};		

// ACCESSORIES
			class _xx_ItemWatch {
				count = 25;
				name = "ItemWatch";
			};
			class _xx_AGM_Altimeter {
				count = 25;
				name = "AGM_Altimeter";
			};
			class _xx_ItemCompass {
				count = 25;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 25;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 100;
				name = "ItemRadio";
			};
			class _xx_tf_anprc152 {
				count = 100;
				name = "tf_anprc152";
			};
			class _xx_ItemMap {
				count = 25;
				name = "ItemMap";
			};
			class _xx_MineDetector {
				count = 5;
				name = "MineDetector";
			};
			class _xx_Binocular {
				count = 25;
				name = "Binocular";
			};
			class _xx_meu_MX2A_tan {
				count = 25;
				name = "meu_MX2A_tan";
			};
			class _xx_Rangefinder {
				count = 25;
				name = "Rangefinder";
			};
			class _xx_Laserdesignator {
				count = 25;
				name = "Laserdesignator";
			};
			class _xx_Laserbatteries {
				count = 25;
				name = "Laserbatteries";
			};
			class _xx_B_UavTerminal {
				count = 5;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 25;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 25;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 25;
				name = "ItemcTabHCam";
			};
			class _xx_ToolKit {
				count = 25;
				name = "ToolKit";
			};
			class _xx_ItemSMGR {
				count = 25;
				name = "ItemSMGR";
			};
			class _xx_AGM_EarBuds {
				count = 25;
				name = "AGM_EarBuds";
			};
			class _xx_AGM_Vector {
				count = 25;
				name = "AGM_Vector";
			};
			class _xx_AGM_ItemKestrel {
				count = 25;
				name = "AGM_ItemKestrel";
			};
			class _xx_AGM_CableTie {
				count = 50;
				name = "AGM_CableTie";
			};
			class _xx_AGM_UAVBattery {
				count = 5;
				name = "AGM_UAVBattery";
			};
			class _xx_AGM_MapTools {
				count = 25;
				name = "AGM_MapTools";
			};
			class _xx_AGM_DefusalKit {
				count = 15;
				name = "AGM_DefusalKit";
			};
			class _xx_AGM_SpareBarrel {
				count = 5;
				name = "AGM_SpareBarrel";
			};
			class _xx_AGM_Clacker {
				count = 10;
				name = "AGM_Clacker";
			};
			class _xx_AGM_M26_Clacker {
				count = 10;
				name = "AGM_M26_Clacker";
			};
			class _xx_AGM_IR_Strobe_Item {
				count = 25;
				name = "AGM_IR_Strobe_Item";
			};
			
// RIGS AND CARRIERS
			class _xx_MEF_Vest_Tan_Infantry {
				count = 15;
				name = "MEF_Vest_Tan_Infantry";
			};
			class _xx_MEF_Vest_Tan_Infantry_L {
				count = 15;
				name = "MEF_Vest_Tan_Infantry_L";
			};
			class _xx_V_HarnessO_brn {
				count = 15;
				name = "V_HarnessO_brn";
			};
			
// SPECIALTY UNIFORMS AND GEAR
			class _xx_V_RebreatherB {
				count = 25;
				name = "V_RebreatherB";
			};
			class _xx_U_B_survival_uniform {
				count = 25;
				name = "U_B_survival_uniform";
			};
			class _xx_U_B_Wetsuit {
				count = 25;
				name = "U_B_Wetsuit";
			};

// UNIFORMS
			class _xx_MEF_Wood_MARPAT_RS {
				count = 15;
				name = "MEF_Wood_MARPAT_RS";
			};
			
// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		    class _xx_AGM_Morphine  {
			     count = 100; 
				 name = "AGM_Morphine";
			};
		    class _xx_AGM_Bloodbag  {
			     count = 100; 
				 name = "AGM_Bloodbag";
			};
		};
	
// AMMO
		class TransportMagazines {
			class _xx_MEU_T2AAF_45ACP {
				count = 250;
				magazine = "MEU_T2AAF_45ACP";
			};
			class _xx_MEU_M882_9mm {
				count = 250;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 500;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_Stanag";
			};
			class _xx_MEU_200Rnd_MEU_200Rnd_M249_556x45_T_Stanag {
				count = 50;
				magazine = "MEU_200Rnd_M249_556x45_T_Stanag";
			};
			class _xx_MEU_100Rnd_M240_762x51 {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51";
			};
			class _xx_MEU_100Rnd_M240_762x51_T {
				count = 50;
				magazine = "MEU_100Rnd_M240_762x51_T";
			};
			class _xx_MEU_20x762_Mag {
				count = 100;
				magazine = "MEU_20x762_Mag";
			};
			class _xx_MEU_5x762_Mag {
				count = 100;
				magazine = "MEU_5x762_Mag";
			};
			class _xx_MEU_30x556_Mk262_Mag {
				count = 100;
				magazine = "MEU_30x556_Mk262_Mag";
			};
			class _xx_MEU_10x127_HEIAP_Mag {
				count = 100;
				magazine = "MEU_10x127_HEIAP_Mag";
			};
			class _xx_MEU_8Rnd_12Gauge_Slug {
				count = 50;
				magazine = "MEU_8Rnd_12Gauge_Slug";
			};
			class _xx_MEU_8Rnd_12Gauge_Pellets {
				count = 50;
				magazine = "MEU_8Rnd_12Gauge_Pellets";
			};
			
// LAUNCHED
			class _xx_Trixie_SMAW_HEAA {
				count = 50;
				magazine = "Trixie_SMAW_HEAA";
			};
			class _xx_Trixie_SMAW_HEDP {
				count = 50;
				magazine = "Trixie_SMAW_HEDP";
			};
			class _xx_M433_40mm_HEDP_Shell {
				count = 50;
				magazine = "M433_40mm_HEDP_Shell";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 50;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
			};
			class _xx_6Rnd_Smoke_M32 {
				count = 15;
				magazine = "6Rnd_Smoke_M32";
			};
			class _xx_6Rnd_HE_M32 {
				count = 30;
				magazine = "6Rnd_HE_M32";
			};
			
// THROWN
			class _xx_HandGrenade {
				count = 100;
				magazine = "HandGrenade";
			};
			class _xx_MiniGrenade {
				count = 100;
				magazine = "MiniGrenade";
			};
			class _xx_AGM_M84 {
				count = 100;
				magazine = "AGM_M84";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_AGM_HandFlare_White {
				count = 50;
				magazine = "AGM_HandFlare_White";
			};
			class _xx_AGM_HandFlare_Red {
				count = 50;
				magazine = "AGM_HandFlare_Red";
			};
			class _xx_AGM_HandFlare_Green {
				count = 50;
				magazine = "AGM_HandFlare_Green";
			};
			class _xx_AGM_HandFlare_Yellow {
				count = 50;
				magazine = "AGM_HandFlare_Yellow";
			};
			class _xx_SmokeShell {
				count = 50;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellRed {
				count = 50;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellYellow {
				count = 50;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellBlue {
				count = 50;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			
//EXPLOSIVES
			class _xx_ATMine_Range_Mag {
				count = 50;
				magazine = "ATMine_Range_Mag";
			};
			class _xx_APERSMine_Range_Mag {
				count = 50;
				magazine = "APERSMine_Range_Mag";
			};
			class _xx_APERSBoundingMine_Range_Mag {
				count = 50;
				magazine = "APERSBoundingMine_Range_Mag";
			};
			class _xx_SLAMDirectionalMine_Wire_Mag {
				count = 50;
				magazine = "SLAMDirectionalMine_Wire_Mag";
			};
			class _xx_APERSTripMine_Wire_Mag {
				count = 50;
				magazine = "APERSTripMine_Wire_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 50;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag {
				count = 50;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_SatchelCharge_Remote_Mag {
				count = 50;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_CUP_TimeBomb_M {
				count = 50;
				magazine = "CUP_TimeBomb_M";
			};
			class _xx_CUP_PipeBomb_M {
				count = 50;
				magazine = "CUP_PipeBomb_M";
			};
		};
		
// WEAPONS
		class TransportWeapons 
		{
			class _xx_CUP_hgun_Colt1911 {
				count = 25;
				weapon = "CUP_hgun_Colt1911";
			};			
			class _xx_CUP_hgun_M9 {
				count = 25;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4A1_black {
				count = 25;
				weapon = "CUP_arifle_M4A1_black";
			};
			class _xx_CUP_arifle_M4A1_BUIS_GL {
				count = 25;
				weapon = "CUP_arifle_M4A1_BUIS_GL";
			};
			class _xx_CUP_lmg_M249 {
				count = 5;
				weapon = "CUP_lmg_M249";
			};
			class _xx_ej_IAR30 {
				count = 5;
				weapon = "ej_IAR30";
			};
			class _xx_CUP_lmg_M240 {
				count = 5;
				weapon = "CUP_lmg_M240";
			};
			class _xx_CUP_srifle_M107_Base {
				count = 5;
				weapon = "CUP_srifle_M107_Base";
			};
			class _xx_CUP_srifle_M110 {
				count = 5;
				weapon = "CUP_srifle_M110";
			};
			class _xx_CUP_srifle_Mk12SPR {
				count = 5;
				weapon = "CUP_srifle_Mk12SPR";
			};
			class _xx_MEU_M40A5 {
				count = 5;
				weapon = "MEU_M40A5";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
			class _xx_meu_AT4_CS {
				count = 20;
				weapon = "meu_AT4_CS";
			};
			class _xx_caf_m72a6 {
				count = 10;
				weapon = "caf_m72a6";
			};
			class _xx_Trixie_SMAW {
				count = 3;
				weapon = "Trixie_SMAW";
			};
			class _xx_M32 {
				count = 5;
				weapon = "M32";
			};
			class _xx_CUP_sgun_M1014 {
				count = 5;
				weapon = "CUP_sgun_M1014";
			};
		};
	};
		class B_supplyCrate_F;
		class Box_meu_bas: B_supplyCrate_F {
		displayname = "[15th] Battalion Aid Station ";
		scope=2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;


		class TransportItems {

// OPTICS
			class _xx_acc_flashlight {
				count = 5;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 5;
				name = "acc_pointer_IR";
			};	
			class _xx_CUP_optic_ACOG {
				count = 5;
				name = "CUP_optic_ACOG";
			};		
			class _xx_CUP_acc_ANPEQ_15 {
				count = 5;
				name = "CUP_acc_ANPEQ_15";
			};			
			class _xx_CUP_optic_Eotech533 {
				count = 15;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_optic_CompM2_Black {
				count = 5;
				name = "CUP_optic_CompM2_Black";
			};
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};	

// ACCESSORIES
			class _xx_ItemWatch {
				count = 5;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 5;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 5;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 5;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 5;
				name = "Binocular";
			};
			class _xx_Rangefinder {
				count = 5;
				name = "Rangefinder";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_NVGoggles_OPFOR {
				count = 10;
				name = "NVGoggles_OPFOR";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};

// HELMETS
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};

// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};

// VESTS
			class _xx_MEF_Vest_Tan_Medical {
				count = 15;
				name = "MEF_Vest_Tan_Medical";
			};
			class _xx_MEF_Vest_Tan_Medical_L {
				count = 15;
				name = "MEF_Vest_Tan_Medical_L";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		    class _xx_AGM_Morphine  {
			     count = 100; 
				 name = "AGM_Morphine";
			};
		    class _xx_AGM_Bloodbag  {
			     count = 100; 
				 name = "AGM_Bloodbag";
			};
		};

// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 100;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 300;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};


//Smoke 203
			class _xx_AGM_M84 {
				count = 20;
				magazine = "AGM_M84";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
			class _xx_SmokeShell {
				count = 50;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellBlue {
				count = 50;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_HandGrenade {
				count = 20;
				magazine = "HandGrenade";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 200;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
		};
		
		class TransportWeapons {
//Weapons	
			class _xx_CUP_hgun_M9 {
				count = 5;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M16A4_GL {
				count = 5;
				weapon = "CUP_arifle_M16A4_GL";
			};
			class _xx_CUP_arifle_M4CAR_BUIS_GL {
				count = 5;
				weapon = "CUP_arifle_M4CAR_BUIS_GL";
			};
		};
	};
	class Box_meu_inf : B_supplyCrate_F {
		displayname = "[15th] Infantry Box";
		scope = 2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {

// OPTICS
			class _xx_acc_flashlight {
				count = 15;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 15;
				name = "acc_pointer_IR";
			};
			class _xx_CUP_optic_ACOG {
				count = 50;
				name = "CUP_optic_ACOG";
			};
			class _xx_optic_acog_holo {
				count = 10;
				name = "optic_acog_holo";
			};
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_mrco {
				count = 15;
				name = "optic_mrco";
			};
			class _xx_CUP_optic_LeupoldMk4 {
				count = 25;
				name = "CUP_optic_LeupoldMk4";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};			
			class _xx_CUP_optic_CompM4 {
				count = 5;
				name = "CUP_optic_CompM4";
			};		
			class _xx_CUP_acc_ANPEQ_15 {
				count = 5;
				name = "CUP_acc_ANPEQ_15";
			};			
			class _xx_CUP_optic_Eotech533 {
				count = 5;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_optic_Eotech533Grey {
				count = 5;
				name = "CUP_optic_Eotech533Grey";
			};
			class _xx_CUP_optic_AN_PVS_10 {
				count = 50;
				name = "CUP_optic_AN_PVS_10";
			};
			class _xx_CUP_optic_CompM2_Black {
				count = 5;
				name = "CUP_optic_CompM2_Black";
			};
			class _xx_optic_tws {
				count = 15;
				name = "optic_tws";
			};
// GOGGLES
			class _xx_NVGoggles_OPFOR {
				count = 50;
				name = "NVGoggles_OPFOR";
			};
			class _xx_AV_ESS_blk_clr {
				count = 50;
				name = "AV_ESS_blk_clr";
			};
			class _xx_AV_ESS_tan {
				count = 50;
				name = "AV_ESS_tan";
			};
			class _xx_AV_ESS_tan_clr {
				count = 50;
				name = "AV_ESS_tan_clr";
			};
			class _xx_AV_ESS_grn {
				count = 50;
				name = "AV_ESS_grn";
			};
			class _xx_AV_ESS_grn_clr {
				count = 50;
				name = "AV_ESS_grn_clr";
			};				

// HELMETS
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};
		
// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};

// VESTS
			class _xx_MEF_Vest_Tan_Infantry {
				count = 15;
				name = "MEF_Vest_Tan_Infantry";
			};
			class _xx_MEF_Vest_Tan_Infantry_L {
				count = 15;
				name = "MEF_Vest_Tan_Infantry_L";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};

// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 25;
				name = "ItemGPS";
			};
			class _xx_ItemSMGR {
				count = 20;
				name = "ItemSMGR";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_AGM_MapTools {
				count = 10;
				name = "AGM_MapTools";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_meu_MX2A_tan {
				count = 20;
				name = "meu_MX2A_tan";
			};
			class _xx_Rangefinder {
				count = 20;
				name = "Rangefinder";
			};
			class _xx_Laserdesignator {
				count = 1;
				name = "Laserdesignator";
			};
			class _xx_Laserbatteries {
				count = 5;
				name = "Laserbatteries";
			};
			class _xx_AGM_Vector {
				count = 5;
				name = "AGM_Vector";
			};
			class _xx_AGM_ItemKestrel {
				count = 2;
				name = "AGM_ItemKestrel";
			};
			class _xx_B_UavTerminal {
				count = 2;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 2;
				name = "ItemcTabHCam";
			};
			class _xx_MEU_FlareGreen_M203 {
				count = 25;
				name = "MEU_FlareGreen_M203";
			};
			class _xx_MEU_FlareRed_M203 {
				count = 25;
				name = "MEU_FlareRed_M203";
			};
			class _xx_MEU_FlareWhite_M203 {
				count = 25;
				name = "MEU_FlareWhite_M203";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			class _xx_AGM_SpareBarrel {
				count = 6;
				name = "AGM_SpareBarrel";
			};
			class _xx_AGM_Clacker {
				count = 10;
				name = "AGM_Clacker";
			};
			class _xx_AGM_DefusalKit {
				count = 10;
				name = "AGM_DefusalKit";
			};
			class _xx_AGM_CableTie {
				count = 100;
				name = "AGM_CableTie";
			};
			class _xx_AGM_IR_Strobe_Item {
				count = 50;
				name = "AGM_IR_Strobe_Item";
			};
		};
	
// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 100;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 200;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_MEU_100Rnd_M240_762x51 {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51";
			};
			class _xx_MEU_100Rnd_M240_762x51_T {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51_T";
			};
			class _xx_MEU_200Rnd_M249_556x45_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_T_Stanag";
			};
			class _xx_MEU_8Rnd_12Gauge_Slug {
				count = 100;
				magazine = "MEU_8Rnd_12Gauge_Slug";
			};
			class _xx_MEU_8Rnd_12Gauge_Pellets {
				count = 100;
				magazine = "MEU_8Rnd_12Gauge_Pellets";
			};
			class _xx_MEU_20x762_Mag {
				count = 100;
				magazine = "MEU_20x762_Mag";
			};
			class _xx_MEU_30x556_Mk262_Mag {
				count = 100;
				magazine = "MEU_30x556_Mk262_Mag";
			};
			

// THROWN
			class _xx_SmokeShell {
				count = 100;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 50;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 50;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellOrange {
				count = 50;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeshellBlue {
				count = 50;
				magazine = "SmokeshellBlue";
			};
			class _xx_HandGrenade {
				count = 100;
				magazine = "HandGrenade";
			};
			class _xx_M433_40mm_HEDP_Shell {
				count = 100;
				magazine = "M433_40mm_HEDP_Shell";
			};			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 25;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_AGM_M84 {
				count = 100;
				magazine = "AGM_M84";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
			class _xx_6Rnd_HE_M32 {
				count = 45;
				magazine = "6Rnd_HE_M32";
			};
			class _xx_6Rnd_Smoke_M32 {
				count = 30;
				magazine = "6Rnd_Smoke_M32";
			};
			class _xx_AGM_HandFlare_White {
				count = 50;
				magazine = "AGM_HandFlare_White";
			};
			class _xx_AGM_HandFlare_Red {
				count = 50;
				magazine = "AGM_HandFlare_Red";
			};
			class _xx_AGM_HandFlare_Green {
				count = 50;
				magazine = "AGM_HandFlare_Green";
			};
			class _xx_AGM_HandFlare_Yellow {
				count = 50;
				magazine = "AGM_HandFlare_Yellow";
			};

// EXPLOSIVES
			class _xx_DemoCharge_Remote_Mag {
				count = 50;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 50;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
		};
		
// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 20;
				weapon = "CUP_arifle_M4CAR_black";
			};
			class _xx_CUP_arifle_M4CAR_BUIS_GL {
				count = 20;
				weapon = "CUP_arifle_M4CAR_BUIS_GL";
			};
			class _xx_CUP_arifle_M4A1_black {
				count = 5;
				weapon = "CUP_arifle_M4A1_black";
			};
			class _xx_CUP_arifle_M4A1_BUIS_GL {
				count = 5;
				weapon = "CUP_arifle_M4A1_BUIS_GL";
			};
			class _xx_CUP_arifle_M16A4_Base {
				count = 20;
				weapon = "CUP_arifle_M16A4_Base";
			};
			class _xx_CUP_arifle_M16A4_GL {
				count = 20;
				weapon = "CUP_arifle_M16A4_GL";
			};
			class _xx_CUP_lmg_M249 {
				count = 20;
				weapon = "CUP_lmg_M249";
			};
			class _xx_ej_IAR30 {
				count = 20;
				weapon = "ej_IAR30";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
			class _xx_meu_AT4_CS {
				count = 20;
				weapon = "meu_AT4_CS";
			};
			class _xx_CAF_M72A6 {
				count = 5;
				weapon = "CAF_M72A6";
			};
			class _xx_M32 {
				count = 6;
				weapon = "M32";
			};
			class _xx_CUP_srifle_M110 {
				count = 2;
				weapon = "CUP_srifle_M110";
			};
			class _xx_CUP_srifle_Mk12SPR {
				count = 2;
				weapon = "CUP_srifle_Mk12SPR";
			};
			class _xx_CUP_sgun_M1014 {
				count = 3;
				weapon = "CUP_sgun_M1014";
			};
		};
	};
	class Box_meu_wep : B_supplyCrate_F {
		scope=2;
		displayname = "[15th] Weapons Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {

// OPTICS

			class _xx_acc_flashlight {
				count = 5;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 5;
				name = "acc_pointer_IR";
			};
			class _xx_CUP_optic_ACOG {
				count = 50;
				name = "CUP_optic_ACOG";
			};
			class _xx_optic_acog_holo {
				count = 5;
				name = "optic_acog_holo";
			};		
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};			
			class _xx_CUP_optic_Eotech533 {
				count = 5;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_optic_CUP_optic_AN_PVS_10 {
				count = 50;
				name = "CUP_optic_AN_PVS_10";
			};
			class _xx_CUP_optic_CompM2_Black {
				count = 5;
				name = "CUP_optic_CompM2_Black";
			};
			class _xx_CUP_acc_ANPEQ_15 {
				count = 5;
				name = "CUP_acc_ANPEQ_15";
			};	
			class _xx_optic_tws {
				count = 5;
				name = "optic_tws";
			};
			class _xx_optic_tws_mg {
				count = 5;
				name = "optic_tws_mg";
			};
			class _xx_CUP_optic_ElcanM145 {
				count = 15;
				name = "CUP_optic_ElcanM145";
			};


// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 20;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_Rangefinder {
				count = 20;
				name = "Rangefinder";
			};
			class _xx_B_UavTerminal {
				count = 4;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 10;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 10;
				name = "ItemcTabHCam";
			};
			class _xx_ToolKit {
				count = 20;
				name = "ToolKit";
			};
			class _xx_MineDetector {
				count = 10;
				name = "MineDetector";
			};	
			class _xx_NVGoggles_Opfor {
				count = 20;
				name = "NVGoggles_Opfor";
			};
			class _xx_ItemSMGR {
				count = 20;
				name = "ItemSMGR";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			class _xx_AGM_SpareBarrel {
				count = 6;
				name = "AGM_SpareBarrel";
			};
			class _xx_AGM_CableTie {
				count = 20;
				name = "AGM_CableTie";
			};
			class _xx_AGM_UAVBattery {
				count = 5;
				name = "AGM_UAVBattery";
			};
			class _xx_AGM_MapTools {
				count = 20;
				name = "AGM_MapTools";
			};
			class _xx_AGM_DefusalKit {
				count = 15;
				name = "AGM_DefusalKit";
			};
			class _xx_meu_MX2A_tan {
				count = 20;
				name = "meu_MX2A_tan";
			};
			class _xx_AGM_Vector {
				count = 20;
				name = "AGM_Vector";
			};
			class _xx_AGM_Clacker {
				count = 20;
				name = "AGM_Clacker";
			};
			class _xx_MEU_FlareGreen_M203 {
				count = 25;
				name = "MEU_FlareGreen_M203";
			};
			class _xx_MEU_FlareRed_M203 {
				count = 25;
				name = "MEU_FlareRed_M203";
			};
			class _xx_MEU_FlareWhite_M203 {
				count = 25;
				name = "MEU_FlareWhite_M203";
			};
			
// HELMETS
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};


// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};

// VESTS
			class _xx_MEF_Vest_Tan_Infantry {
				count = 15;
				name = "MEF_Vest_Tan_Infantry";
			};
			class _xx_MEF_Vest_Tan_Infantry_L {
				count = 15;
				name = "MEF_Vest_Tan_Infantry_L";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		};

// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 100;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 200;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_MEU_100Rnd_M240_762x51 {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51";
			};
			class _xx_MEU_100Rnd_M240_762x51_T {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51_T";
			};
			class _xx_Trixie_SMAW_HEDP {
				count = 50;
				magazine = "Trixie_SMAW_HEDP";
			};
			class _xx_Trixie_SMAW_HEAA {
				count = 50;
				magazine = "Trixie_SMAW_HEAA";
			};

//Smoke 203
			class _xx_SmokeShell {
				count = 100;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 50;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 50;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellOrange {
				count = 50;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeshellBlue {
				count = 50;
				magazine = "SmokeshellBlue";
			};
			class _xx_HandGrenade {
				count = 100;
				magazine = "HandGrenade";
			};
			class _xx_M433_40mm_HEDP_Shell {
				count = 100;
				magazine = "M433_40mm_HEDP_Shell";
			};			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 25;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_AGM_M84 {
				count = 100;
				magazine = "AGM_M84";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
			class _xx_AGM_HandFlare_Green {
				count = 50;
				magazine = "AGM_HandFlare_Green";
			};


// EXPLOSIVES
			class _xx_APERSMine_Range_Mag {
				count = 20;
				magazine = "APERSMine_Range_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 20;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag {
				count = 20;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_SatchelCharge_Remote_Mag {
				count = 20;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_CUP_TimeBomb_M {
				count = 20;
				magazine = "CUP_TimeBomb_M";
			};
			class _xx_CUP_PipeBomb_M {
				count = 20;
				magazine = "CUP_PipeBomb_M";
			};
			class _xx_SLAMDirectionalMine_Wire_Mag {
				count = 20;
				magazine = "SLAMDirectionalMine_Wire_Mag";
			};

// Laser designator
			class _xx_Laserbatteries {
				count = 5;
				magazine = "Laserbatteries";
			};
		};

// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 20;
				weapon = "CUP_arifle_M4CAR_black";
			};
			class _xx_CUP_arifle_M4CAR_BUIS_GL {
				count = 20;
				weapon = "CUP_arifle_M4CAR_BUIS_GL";
			};
			class _xx_CUP_arifle_M4A1_black {
				count = 5;
				weapon = "CUP_arifle_M4A1_black";
			};
			class _xx_CUP_arifle_M4A1_BUIS_GL {
				count = 5;
				weapon = "CUP_arifle_M4A1_BUIS_GL";
			};
			class _xx_CUP_arifle_M16A4_Base {
				count = 20;
				weapon = "CUP_arifle_M16A4_Base";
			};
			class _xx_CUP_arifle_M16A4_GL {
				count = 20;
				weapon = "CUP_arifle_M16A4_GL";
			};
			class _xx_CUP_lmg_M240 {
				count = 20;
				weapon = "CUP_lmg_M240";
			};
			class _xx_Trixie_SMAW {
				count = 20;
				weapon = "Trixie_SMAW";
			};
			class _xx_Laserdesignator {
				count = 1;
				weapon = "Laserdesignator";
			};
		};
	};
	class Box_meu_ace : B_supplyCrate_F {
		scope = 2;
		displayname = "[15th] ACE Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;


		class TransportItems {

// OPTICS
			class _xx_acc_flashlight {
				count = 20;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 20;
				name = "acc_pointer_IR";
			};	
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};				
			class _xx_CUP_optic_CompM4 {
				count = 20;
				name = "CUP_optic_CompM4";
			};	
			class _xx_CUP_optic_ACOG {
				count = 20;
				name = "CUP_optic_ACOG";
			};	
			class _xx_CUP_acc_ANPEQ_15 {
				count = 20;
				name = "CUP_acc_ANPEQ_15";
			};			
			class _xx_CUP_optic_Eotech533 {
				count = 20;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_optic_AN_PVS_10 {
				count = 50;
				name = "CUP_optic_AN_PVS_10";
			};
			class _xx_CUP_optic_CompM2_Black {
				count = 20;
				name = "CUP_optic_CompM2_Black";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};

// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 2;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
            		class _xx_NVGoggles {
			    count = 25;
				name = "NVGoggles";
			};	
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_ItemCtabHCam {
				count = 4;
				name = "ItemCtabHCam";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};

// UNIFORMS			
			class _xx_Nomex_olive {
				count = 10;
				name = "Nomex_olive";
			};
			class _xx_overall_db {
				count = 10;
				name = "overall_db";
			};
// GOGGLES
			class _xx_AV_ESS_tan {
				count = 25;
				name = "AV_ESS_tan";
			};
			class _xx_G_Aviator {
				count = 25;
				name = "G_Aviator";
			};
// VESTS
			class _xx_V_TacVest_blk {
				count = 5;
				name = "V_TacVest_blk";
			};
			class _xx_MEF_Vest_Tan_Armor_L {
				count = 5;
				name = "MEF_Vest_Tan_Armor_L";
			};
// HELMETS
			class _xx_H_PilotHelmetFighter_B {
				count = 5;
				name = "H_PilotHelmetFighter_B";
			};
			class _xx_H_CrewHelmetHeli_B {
				count = 5;
				name = "H_CrewHelmetHeli_B";
			};
			class _xx_H_PilotHelmetHeli_B {
				count = 5;
				name = "H_PilotHelmetHeli_B";
			};		
			};	

		class TransportMagazines {
// AMMO
			class _xx_MEU_M882_9mm {
				count = 100;
				magazine = "MEU_M882_9mm";
			};
			class _xx_30Rnd_M855A1_556x45_Stanag {
				count = 200;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
//Smoke 203
            		class _xx_SmokeShell {
				count = 20;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 20;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 20;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 20;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeshellBlue {
				count = 15;
				magazine = "SmokeshellBlue";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
		};
		
		class TransportWeapons {
// WEAPONS
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 25;
				weapon = "CUP_arifle_M4CAR_black";
			};
		};
	};
	class Box_meu_titan : B_supplyCrate_F {
		scope=2;
		displayname = "[15th] Titan Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;	
		transportMaxitems = 9999;	
		SLX_XEH_DISABLED = 0;

		class TransportItems {

// OPTICS

			class _xx_acc_flashlight {
				count = 12;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 12;
				name = "acc_pointer_IR";
			};	
			class _xx_CUP_optic_CompM2_Black {
				count = 12;
				name = "CUP_optic_CompM2_Black";
			};		
			class _xx_CUP_acc_ANPEQ_15 {
				count = 12;
				name = "CUP_acc_ANPEQ_15";
			};			
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};	

// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 6;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_ToolKit {
				count = 25;
				name = "ToolKit";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			
// HELMETS
			class _xx_MEF_Woodland_Helmet_MICH {
				count = 15;
				name = "MEF_Woodland_Helmet_MICH";
			};
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};
			class _xx_H_HelmetCrew_I {
				count = 15;
				name = "H_HelmetCrew_I";
			};

// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};

// VESTS
			class _xx_MEF_Vest_Tan_Armor {
				count = 15;
				name = "MEF_Vest_Tan_Armor";
			};
			class _xx_MEF_Vest_Tan_Armor_L {
				count = 15;
				name = "MEF_Vest_Tan_Armor_L";
			};
// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		};
	
// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 12;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 750;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			
// THROWN
			class _xx_SmokeShell {
				count = 20;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 20;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 20;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 20;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeshellBlue {
				count = 15;
				magazine = "SmokeshellBlue";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
		};

// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 12;
				weapon = "CUP_arifle_M4CAR_black";
			};
		};
	};
	class Box_meu_gator : B_supplyCrate_F {
		scope=2;
		displayname = "[15th] Gator Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {

// OPTICS
			class _xx_acc_flashlight {
				count = 12;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 12;
				name = "acc_pointer_IR";
			};	
			class _xx_optic_Hamr {
				count = 12;
				name = "optic_Hamr";
			};		
				class _xx_CUP_acc_ANPEQ_15 {
				count = 15;
				name = "CUP_acc_ANPEQ_15";
			};

// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 18;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_tf_anprc152 {
				count = 50;
				name = "tf_anprc152";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_Rangefinder {
				count = 4;
				name = "Rangefinder";
			};
			class _xx_ToolKit {
				count = 25;
				name = "ToolKit";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};

// HELMETS
			class _xx_MEF_Woodland_Helmet_MICH {
				count = 15;
				name = "MEF_Woodland_Helmet_MICH";
			};
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};
			class _xx_H_HelmetCrew_I {
				count = 15;
				name = "H_HelmetCrew_I";
			};

// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};
			class _xx_Nomex_olive {
				count = 10;
				name = "Nomex_olive";
			};

// VESTS
			class _xx_MEF_Vest_Tan_Armor {
				count = 15;
				name = "MEF_Vest_Tan_Armor";
			};
			class _xx_MEF_Vest_Tan_Armor_L {
				count = 15;
				name = "MEF_Vest_Tan_Armor_L";
			};			

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		};

// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 50;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 180;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};

// SMOKE + 203
			class _xx_SmokeShell {
				count = 110;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 36;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 36;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 36;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeshellBlue {
				count = 36;
				magazine = "SmokeshellBlue";
			};
		};

// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 12;
				weapon = "CUP_arifle_M4CAR_black";
			};
			class _xx_meu_AT4 {
			     count = 10;
				 weapon = "meu_AT4";
			};
		};
	};
	class Box_meu_arty : B_supplyCrate_F {
		scope=2;
		displayname = "[15th] Battlestar Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {		


// ACCESSORIES
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 20;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Rangefinder {
				count = 20;
				name = "Rangefinder";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 4;
				name = "ItemcTabHCam";
			};			
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};
			class _xx_CUP_acc_ANPEQ_15 {
				count = 15;
				name = "CUP_acc_ANPEQ_15";
			};
			class _xx_acc_flashlight {
				count = 15;
				name = "acc_flashlight";
			};			
			class _xx_CUP_optic_ACOG {
				count = 15;
				name = "CUP_optic_ACOG";
			};
			class _xx_NVGoggles_OPFOR {
				count = 15;
				name = "NVGoggles_OPFOR";
			};
			class _xx_CUP_optic_Eotech533 {
				count = 15;
				name = "CUP_optic_Eotech533";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			class _xx_itemctab {
				count = 10;
				name = "itemctab";
			};

// HELMETS

			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};

// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};

// VESTS
			class _xx_MEF_Vest_Tan_Infantry {
				count = 15;
				name = "MEF_Vest_Tan_Infantry";
			};
			class _xx_MEF_Vest_Tan_Infantry_L {
				count = 15;
				name = "MEF_Vest_Tan_Infantry_L";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		};

// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 12;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_T_Stanag";
			};

// THROWN
			class _xx_SmokeShell {
				count = 20;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 20;
				magazine = "SmokeShellGreen";
			};
			class _xx_HandGrenade {
				count = 20;
				magazine = "HandGrenade";
			};
			class _xx_SmokeshellBlue {
				count = 20;
				magazine = "SmokeshellBlue";
			};
		};

// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 12;
				weapon = "CUP_arifle_M4CAR_black";
			};
			class _xx_CUP_arifle_M16A4_Base {
				count = 12;
				weapon = "CUP_arifle_M16A4_Base";
			};
			class _xx_CUP_lmg_M249 {
				count = 10;
				weapon = "CUP_lmg_M249";
			};
			class _xx_ej_IAR30 {
				count = 10;
				weapon = "ej_IAR30";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
		};
	};
	class Box_meu_hq : B_supplyCrate_F {
		scope=2;
		displayname = "[15th] MEU HQ Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {

// OPTICS
			class _xx_acc_flashlight {
				count = 5;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 5;
				name = "acc_pointer_IR";
			};	
			class _xx_CUP_optic_ACOG {
				count = 5;
				name = "CUP_optic_ACOG";
			};
			class _xx_CUP_optic_LeupoldMk4 {
				count = 25;
				name = "CUP_optic_LeupoldMk4";
			};
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};				
			class _xx_CUP_optic_CompM4 {
				count = 5;
				name = "CUP_optic_CompM4";
			};		
			class _xx_CUP_acc_ANPEQ_15 {
				count = 5;
				name = "CUP_acc_ANPEQ_15";
			};			
			class _xx_CUP_optic_Eotech533 {
				count = 5;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_optic_AN_PVS_10 {
				count = 50;
				name = "CUP_optic_AN_PVS_10";
			};
			class _xx_CUP_optic_CompM2_Black {
				count = 5;
				name = "CUP_optic_CompM2_Black";
			};
			class _xx_optic_tws {
				count = 5;
				name = "optic_tws";
			};
			class _xx_optic_tws_mg {
				count = 5;
				name = "optic_tws_mg";
			};
			class _xx_NVGoggles_OPFOR {
				count = 100;
				name = "NVGoggles_OPFOR";
			};

// HELMETS
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};
			class _xx_MEF_Woodland_8Point {
				count = 5;
				name = "MEF_Woodland_8Point";
			};				

// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};
			class _xx_MEF_Wood_IN_MARPAT_RS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_RS";
			};

// VESTS
			class _xx_MEF_Vest_Tan_Infantry {
				count = 15;
				name = "MEF_Vest_Tan_Infantry";
			};
			class _xx_MEF_Vest_Tan_Infantry_L {
				count = 15;
				name = "MEF_Vest_Tan_Infantry_L";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};	

// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 2;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_meu_MX2A_tan {
				count = 20;
				name = "meu_MX2A_tan";
			};
			class _xx_Rangefinder {
				count = 20;
				name = "Rangefinder";
			};
			class _xx_Laserdesignator {
				count = 2;
				name = "Laserdesignator";
			};
			class _xx_Laserbatteries {
				count = 4;
				name = "Laserbatteries";
			};
			class _xx_B_UavTerminal {
				count = 2;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 2;
				name = "ItemcTabHCam";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
		};
	
// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 100;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 200;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_MEU_100Rnd_M240_762x51 {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51";
			};
			class _xx_MEU_100Rnd_M240_762x51_T {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51_T";
			};
			class _xx_MEU_200Rnd_M249_556x45_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_T_Stanag";
			};
			
// SMOKE + 203
			class _xx_SmokeShell {
				count = 100;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 50;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 50;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellOrange {
				count = 50;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeshellBlue {
				count = 50;
				magazine = "SmokeshellBlue";
			};
			class _xx_HandGrenade {
				count = 100;
				magazine = "HandGrenade";
			};
			class _xx_M433_40mm_HEDP_Shell {
				count = 100;
				magazine = "M433_40mm_HEDP_Shell";
			};			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 25;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_AGM_M84 {
				count = 100;
				magazine = "AGM_M84";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};

// EXPLOSIVES
			class _xx_DemoCharge_Remote_Mag {
				count = 50;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 20;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
		};

// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 5;
				weapon = "CUP_arifle_M4CAR_black";
			};
			class _xx_CUP_arifle_M4CAR_BUIS_GL {
				count = 5;
				weapon = "CUP_arifle_M4CAR_BUIS_GL";
			};
			class _xx_CUP_arifle_M4A1_black {
				count = 5;
				weapon = "CUP_arifle_M4A1_black";
			};
			class _xx_CUP_arifle_M4A1_BUIS_GL {
				count = 5;
				weapon = "CUP_arifle_M4A1_BUIS_GL";
			};
			class _xx_CUP_arifle_M16A4_Base {
				count = 5;
				weapon = "CUP_arifle_M16A4_Base";
			};
			class _xx_CUP_arifle_M16A4_GL {
				count = 5;
				weapon = "CUP_arifle_M16A4_GL";
			};
			class _xx_CUP_lmg_M249 {
				count = 5;
				weapon = "CUP_lmg_M249";
			};
			class _xx_ej_IAR30 {
				count = 5;
				weapon = "ej_IAR30";
			};
			class _xx_CAF_M72A6 {
				count = 5;
				weapon = "CAF_M72A6";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
		};
	};
	class Box_meu_suply: B_supplyCrate_F
	{
		displayname = "[15th] Resupply ALPHA";
		scope =2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;
		        class TransportItems {
         
// MEDICAL
            class _xx_AGM_Bandage  {
                 count = 500;
                 name = "AGM_Bandage";
            };
            class _xx_AGM_Epipen  {
                 count = 75;
                 name = "AGM_Epipen";
            };
            class _xx_AGM_Morphine  {
                 count = 100;
                 name = "AGM_Morphine";
            };
            class _xx_AGM_Bloodbag  {
                 count = 50;
                 name = "AGM_Bloodbag";
            };
            class _xx_AGM_CableTie  {
                 count = 10;
                 name = "AGM_CableTie";
            };
            class _xx_AGM_EarBuds  {
                 count = 10;
                 name = "AGM_EarBuds";
            };
            class _xx_tf_anprc152  {
                 count = 10;
                 name = "tf_anprc152";
            };
            class _xx_AGM_Vector  {
                 count = 4;
                 name = "AGM_Vector";
            };
        };
     
     
        class TransportMagazines {
// EQUIPMENT
            class _xx_Chemlight_red {
                count = 20;
                magazine = "Chemlight_red";
            };
            class _xx_Chemlight_blue {
                count = 20;
                magazine = "Chemlight_blue";
            };
            class _xx_Chemlight_ {
                count = 20;
                magazine = "Chemlight_green";
            };
         
// AMMO
 
            class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
                count = 100;
                magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
            };
            class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
                count = 100;
                magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
            };
            class _xx_MEU_200Rnd_M249_556x45_Stanag {
                count = 12;
                magazine = "MEU_200Rnd_M249_556x45_Stanag";
            };
            class _xx_MEU_100Rnd_M240_762x51 {
                count = 6;
                magazine = "MEU_100Rnd_M240_762x51";
            };
            class _xx_MEU_100Rnd_M240_762x51_T {
                count = 6;
                magazine = "MEU_100Rnd_M240_762x51_T";
            };
            class _xx_MEU_M882_9mm {
                count = 24;
                magazine = "MEU_M882_9mm";
            };
            class _xx_DemoCharge_Remote_Mag {
                count = 4;
                magazine = "DemoCharge_Remote_Mag";
            };
            class _xx_Trixie_SMAW_HEAA {
                count = 6;
                magazine = "Trixie_SMAW_HEAA";
            };
            class _xx_Trixie_SMAW_HEDP {
                count = 6;
                magazine = "Trixie_SMAW_HEDP";
            };
             
// GRENADE, SMOKE, M203
            class _xx_HandGrenade {
                count = 25;
                magazine = "HandGrenade";
            };
            class _xx_AGM_M84 {
                count = 12;
                magazine = "AGM_M84";
            };
            class _xx_SmokeShell {
                count = 120;
                magazine = "SmokeShell";
            };
            class _xx_SmokeShellPurple {
                count = 2;
                magazine = "SmokeShellPurple";
            };
            class _xx_SmokeShellBlue {
                count = 2;
                magazine = "SmokeShellBlue";
            };
            class _xx_SmokeShellRed {
                count = 12;
                magazine = "SmokeShellRed";
            };
            class _xx_SmokeShellGreen {
                count = 60;
                magazine = "SmokeShellGreen";
            };
            class _xx_1Rnd_Smoke_Grenade_shell {
                count = 24;
                magazine = "1Rnd_Smoke_Grenade_shell";
            };
            class _xx_1Rnd_SmokeRed_Grenade_shell {
                count = 24;
                magazine = "1Rnd_SmokeRed_Grenade_shell";
            };
            class _xx_1Rnd_SmokeGreen_Grenade_shell {
                count = 24;
                magazine = "1Rnd_SmokeGreen_Grenade_shell";
            };
            class _xx_M433_40mm_HEDP_Shell {
                count = 30;
                magazine = "M433_40mm_HEDP_Shell";
            };
            class _xx_AGM_HandFlare_White {
                count = 10;
                magazine = "AGM_HandFlare_White";
            };
            class _xx_AGM_HandFlare_Green {
                count = 10;
                magazine = "AGM_HandFlare_Green";
            };
            class _xx_MEU_FlareWhite_M203 {
                count = 10;
                magazine = "MEU_FlareWhite_M203";
            };
            class _xx_MEU_FlareGreen_M203 {
                count = 10;
                magazine = "MEU_FlareGreen_M203";
            };
            class _xx_MEU_FlareRed_M203 {
                count = 10;
                magazine = "MEU_FlareRed_M203";
            };
        };
         
        class TransportWeapons {
     
            class _xx_meu_AT4 {
                count = 10;
                weapon = "meu_AT4";
            };
            class _xx_caf_m72a6 {
                count = 4;
                weapon = "caf_m72a6";
            };
        };
	};
	class Box_meu_suply_Bravo: B_supplyCrate_F
	{
		displayname = "[15th] Resupply BRAVO";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;
		scope = 0;
		class TransportItems {
		
// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 25; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 25; 
				 name = "AGM_Epipen";
			};
		};
	
	
		class TransportMagazines {
// EQUIPMENT
			class _xx_Chemlight_red {
				count = 3;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_blue {
				count = 3;
				magazine = "Chemlight_blue";
			};
			class _xx_Chemlight_ {
				count = 3;
				magazine = "Chemlight_green";
			};
		
// AMMO

			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 50;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_Stanag {
				count = 6;
				magazine = "MEU_200Rnd_M249_556x45_Stanag";
			};
			
// GRENADE, SMOKE, M203
			class _xx_HandGrenade {
				count = 6;
				magazine = "HandGrenade";
			};
			class _xx_AGM_M84 {
				count = 6;
				magazine = "AGM_M84";
			};
			class _xx_SmokeShell {
				count = 18;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellPurple {
				count = 2;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellBlue {
				count = 2;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellRed {
				count = 6;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellGreen {
				count = 12;
				magazine = "SmokeShellGreen";
			};
			class _xx_M433_40mm_HEDP_Shell {
				count = 12;
				magazine = "M433_40mm_HEDP_Shell";
			};
		};
		
		class TransportWeapons {
	
			class _xx_meu_AT4 {
				count = 3;
				weapon = "meu_AT4";
			};
		};
	};
	class Box_NATO_AmmoVeh_F;
	class Box_meu_vehicle: Box_NATO_AmmoVeh_F
	{
		displayname = "[15th] Vehicle Box";
		transportAmmo = 0;
		scope=2;
		supplyRadius = 0;
		class UserActions
		{
			class clearCargo
			{
				userActionID = 50;
				displayName = "<t color=""#99FF00"">Clear Cargo</t>";
				displayNameDefault = "";
				position = "mph_axis";
				radius = 10;
				animPeriod = 2;
				onlyForplayer = 1;
				condition = "(alive this) && (driver (vehicle player) == player) && (vehicle player in vehicles)";
				statement = "[player,0,true,true] call meu_fnc_vehicleLoadout;";
			};
			class rifle: clearCargo
			{
				displayName = "<t color=""#FF0000"">Rifle Loadout</t>";
				statement = "[player,1,false,true] call meu_fnc_vehicleLoadout;";
			};
			class weapons: clearCargo
			{
				displayName = "<t color=""#FF0000"">Weapons Loadout</t>";
				statement = "[player,2,false,true] call meu_fnc_vehicleLoadout;";
			};
			class assault: clearCargo
			{
				displayName = "<t color=""#FF0000"">Assault Loadout</t>";
				statement = "[player,3,false,true] call meu_fnc_vehicleLoadout;";
			};
			class bas: clearCargo
			{
				displayName = "<t color=""#FF0000"">Medical Loadout</t>";
				statement = "[player,4,false,true] call meu_fnc_vehicleLoadout;";
			};
			class marauder: clearCargo
			{
				displayName = "<t color=""#FF0000"">Marauder Loadout</t>";
				statement = "[player,5,false,true] call meu_fnc_vehicleLoadout;";
			};
		};
	};
		class Box_meu_lar : B_supplyCrate_F {
		scope=2;
		displayname = "[15th] LAR Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {
// ATTACHMENTS

// OPTICS
			class _xx_acc_flashlight {
				count = 20;
				name = "acc_flashlight";
			};
			class _xx_optic_Hamr {
				count = 20;
				name = "optic_Hamr";
			};
			class _xx_optic_MRCO {
				count = 20;
				name = "optic_MRCO";
			};
			class _xx_optic_Holosight {
				count = 20;
				name = "optic_Holosight";
			};
			class _xx_optic_nvs {
				count = 20;
				name = "optic_nvs";
			};
			class _xx_CUP_optic_ACOG {
				count = 20;
				name = "CUP_optic_ACOG";
			};
			class _xx_CUP_optic_CompM4 {
				count = 20;
				name = "CUP_optic_CompM4";
			};
			class _xx_FHQ_optic_HWS {
				count = 20;
				name = "FHQ_optic_HWS";
			};
			class _xx_CUP_optic_Eotech533 {
				count = 20;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_acc_ANPEQ_15 {
				count = 30;
				name = "CUP_acc_ANPEQ_15";
			};
			class _xx_optic_tws {
				count = 5;
				name = "optic_tws";
			};
			class _xx_CUP_optic_AN_PVS_10 {
				count = 40;
				name = "CUP_optic_AN_PVS_10";
			};
			class _xx_acc_pointer_IR {
				count = 20;
				name = "acc_pointer_IR";
			};

// HELMETS
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 30;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 30;
				name = "MEF_Wood_Helmet_LWH";
			};
			class _xx_H_HelmetCrew_I {
				count = 15;
				name = "H_HelmetCrew_I";
			};

// NVG AND GOGGLES
			class _xx_NVGoggles_Opfor {
				count = 20;
				name = "NVGoggles_Opfor";
			};
			class _xx_AV_ESS_blk {
				count = 20;
				name = "AV_ESS_blk";
			};
			class _xx_AV_ESS_blk_clr {
				count = 20;
				name = "AV_ESS_blk_clr";
			};
			class _xx_AV_ESS_tan {
				count = 20;
				name = "AV_ESS_tan";
			};
			class _xx_AV_ESS_tan_clr {
				count = 20;
				name = "AV_ESS_tan_clr";
			};
			class _xx_AV_ESS_grn {
				count = 20;
				name = "AV_ESS_grn";
			};
			class _xx_AV_ESS_grn_clr {
				count = 20;
				name = "AV_ESS_grn_clr";
			};

// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 20;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_tf_anprc152 {
				count = 170;
				name = "tf_anprc152";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_MineDetector {
				count = 10;
				name = "MineDetector";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_Rangefinder {
				count = 20;
				name = "Rangefinder";
			};
			class _xx_Laserdesignator {
				count = 3;
				name = "Laserdesignator";
			};
			class _xx_Laserbatteries {
				count = 9;
				name = "Laserbatteries";
			};
			class _xx_B_UavTerminal {
				count = 4;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 10;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 10;
				name = "ItemcTabHCam";
			};
			class _xx_UGL_FlareCIR_F {
				count = 25;
				name = "UGL_FlareCIR_F";
			};
			class _xx_MEU_FlareGreen_M203 {
				count = 25;
				name = "MEU_FlareGreen_M203";
			};
			class _xx_MEU_FlareRed_M203 {
				count = 25;
				name = "MEU_FlareRed_M203";
			};
			class _xx_MEU_FlareWhite_M203 {
				count = 25;
				name = "MEU_FlareWhite_M203";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			class _xx_AGM_SpareBarrel {
				count = 6;
				name = "AGM_SpareBarrel";
			};
			class _xx_AGM_Clacker {
				count = 6;
				name = "AGM_Clacker";
			};
			class _xx_AGM_Vector {
				count = 5;
				name = "AGM_Vector";
			};
			class _xx_AGM_ItemKestrel {
				count = 2;
				name = "AGM_ItemKestrel";
			};
			class _xx_AGM_CableTie {
				count = 100;
				name = "AGM_CableTie";
			};
			class _xx_AGM_MapTools {
				count = 10;
				name = "AGM_MapTools";
			};
			class _xx_AGM_DefusalKit {
				count = 10;
				name = "AGM_DefusalKit";
			};
			class _xx_AGM_IR_Strobe_Item {
				count = 50;
				name = "AGM_IR_Strobe_Item";
			};
			class _xx_AGM_UAVBattery {
				count = 50;
				name = "AGM_UAVBattery";
			};

// UNIFORMS
			class _xx_MEF_Vest_Tan_Infantry {
				count = 30;
				name = "MEF_Vest_Tan_Infantry";
			};
			class _xx_MEF_Vest_Tan_Infantry_L {
				count = 30;
				name = "MEF_Vest_Tan_Infantry_L";
			};
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 30;
				name = "MEF_Wood_IN_MARPAT_LS";
			};
			
// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		};
	
// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 100;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 200;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_200Rnd_M249_556x45_T_Stanag";
			};
			class _xx_MEU_8Rnd_12Gauge_Slug {
				count = 100;
				magazine = "MEU_8Rnd_12Gauge_Slug";
			};
			class _xx_MEU_8Rnd_12Gauge_Pellets {
				count = 100;
				magazine = "MEU_8Rnd_12Gauge_Pellets";
			};
			class _xx_MEU_20x762_Mag {
				count = 100;
				magazine = "MEU_20x762_Mag";
			};
			class _xx_Trixie_30x556_Mk262_Mag {
				count = 100;
				magazine = "MEU_30x556_Mk262_Mag";
			};
			
// THROWN + LAUNCHED
			class _xx_SmokeShell {
				count = 100;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 50;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 50;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellOrange {
				count = 50;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeshellBlue {
				count = 50;
				magazine = "SmokeshellBlue";
			};
			class _xx_HandGrenade {
				count = 100;
				magazine = "HandGrenade";
			};
			class _xx_M433_40mm_HEDP_Shell {
				count = 100;
				magazine = "M433_40mm_HEDP_Shell";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 25;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_6Rnd_Smoke_M32 {
				count = 48;
				magazine = "6Rnd_Smoke_M32";
			};
			class _xx_6Rnd_HE_M32 {
				count = 24;
				magazine = "6Rnd_HE_M32";
			};
			class _xx_AGM_M84 {
				count = 100;
				magazine = "AGM_M84";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
			class _xx_AGM_HandFlare_White {
				count = 50;
				magazine = "AGM_HandFlare_White";
			};
			class _xx_AGM_HandFlare_Red {
				count = 50;
				magazine = "AGM_HandFlare_Red";
			};
			class _xx_AGM_HandFlare_Green {
				count = 50;
				magazine = "AGM_HandFlare_Green";
			};
			class _xx_AGM_HandFlare_Yellow {
				count = 50;
				magazine = "AGM_HandFlare_Yellow";
			};
			
// EXPLOSIVES
			class _xx_DemoCharge_Remote_Mag {
				count = 50;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
		
// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 20;
				weapon = "CUP_arifle_M4CAR_black";
			};
			class _xx_CUP_arifle_M4CAR_BUIS_GL {
				count = 20;
				weapon = "CUP_arifle_M4CAR_BUIS_GL";
			};
			class _xx_CUP_arifle_M16A4_Base {
				count = 20;
				weapon = "CUP_arifle_M16A4_Base";
			};
			class _xx_CUP_arifle_M16A4_GL {
				count = 20;
				weapon = "CUP_arifle_M16A4_GL";
			};
			class _xx_ej_IAR30 {
				count = 20;
				weapon = "ej_IAR30";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
			class _xx_CUP_srifle_M110 {
				count = 6;
				weapon = "CUP_srifle_M110";
			};
			class _xx_CUP_srifle_Mk12SPR {
				count = 6;
				weapon = "CUP_srifle_Mk12SPR";
			};
			class _xx_CUP_sgun_M1014 {
				count = 3;
				weapon = "CUP_sgun_M1014";
			};
			class _xx_M32 {
				count = 6;
				weapon = "M32";
			};
		};
	};
	class Box_meu_Boats: B_supplyCrate_F
	{
		displayname = "[15th] Boats";
		scope=2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Box_meu_empty: B_supplyCrate_F
	{
		displayname = "[15th] Box Empty";
		scope = 2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
		class Box_meu_lce: B_supplyCrate_F 
	{
		displayname = "[15th] Logistics Box";
		scope = 2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {

// OPTICS
			class _xx_acc_flashlight {
				count = 12;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 12;
				name = "acc_pointer_IR";
			};	
			class _xx_optic_Hamr {
				count = 12;
				name = "optic_Hamr";
			};		
			class _xx_CUP_acc_ANPEQ_15 {
				count = 12;
				name = "CUP_acc_ANPEQ_15";
			};
			class _xx_CUP_optic_ACOG {
				count = 15;
				name = "CUP_optic_ACOG";
			};
			class _xx_CUP_optic_Eotech533 {
				count = 10;
				name = "CUP_optic_Eotech533";
			};
			class _xx_CUP_optic_AN_PVS_10 {
				count = 50;
				name = "CUP_optic_AN_PVS_10";
			};
// GOGGLES
			class _xx_NVGoggles_OPFOR {
				count = 100;
				name = "NVGoggles_OPFOR";
			};
			class _xx_AV_ESS_blk_clr {
				count = 100;
				name = "AV_ESS_blk_clr";
			};
			class _xx_AV_ESS_tan {
				count = 100;
				name = "AV_ESS_tan";
			};
			class _xx_AV_ESS_tan_clr {
				count = 100;
				name = "AV_ESS_tan_clr";
			};
			class _xx_AV_ESS_grn {
				count = 100;
				name = "AV_ESS_grn";
			};
			class _xx_AV_ESS_grn_clr {
				count = 100;
				name = "AV_ESS_grn_clr";
			};				

// ACCESSORIES
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 18;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemSMGR {
				count = 20;
				name = "ItemSMGR";
			};
			class _xx_tf_anprc152 {
				count = 50;
				name = "tf_anprc152";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_AGM_MapTools {
				count = 10;
				name = "AGM_MapTools";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_Rangefinder {
				count = 4;
				name = "Rangefinder";
			};
			class _xx_ToolKit {
				count = 25;
				name = "ToolKit";
			};
			class _xx_AGM_DefusalKit {
				count = 10;
				name = "AGM_DefusalKit";
			};
			class _xx_Laserdesignator {
				count = 1;
				name = "Laserdesignator";
			};
			class _xx_Laserbatteries {
				count = 5;
				name = "Laserbatteries";
			};
			class _xx_AGM_Vector {
				count = 5;
				name = "AGM_Vector";
			};
			class _xx_AGM_ItemKestrel {
				count = 2;
				name = "AGM_ItemKestrel";
			};
			class _xx_B_UavTerminal {
				count = 2;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_ItemcTabHCam {
				count = 2;
				name = "ItemcTabHCam";
			};
			class _xx_AGM_CableTie {
				count = 50;
				name = "AGM_CableTie";
			};
			class _xx_AGM_IR_Strobe_Item {
				count = 25;
				name = "AGM_IR_Strobe_Item";
			};

// HELMETS
			class _xx_MEF_Wood_Goggles_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Goggles_Helmet_LWH";
			};
			class _xx_MEF_Wood_Helmet_LWH {
				count = 15;
				name = "MEF_Wood_Helmet_LWH";
			};
			class _xx_MEF_Woodland_8Point {
				count = 10;
				name = "MEF_Woodland_8Point";
			};
		
// UNIFORMS
			class _xx_MEF_Wood_IN_MARPAT_LS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_LS";
			};
			class _xx_MEF_Wood_IN_MARPAT_RS {
				count = 15;
				name = "MEF_Wood_IN_MARPAT_RS";
			};


// VESTS
			class _xx_MEF_Vest_Tan_Infantry {
				count = 15;
				name = "MEF_Vest_Tan_Infantry";
			};
			class _xx_MEF_Vest_Tan_Infantry_L {
				count = 15;
				name = "MEF_Vest_Tan_Infantry_L";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		};
// AMMO
		class TransportMagazines {
			class _xx_MEU_M882_9mm {
				count = 50;
				magazine = "MEU_M882_9mm";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_Stanag {
				count = 150;
				magazine = "MEU_30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_MEU_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "MEU_30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_MEU_100Rnd_M240_762x51 {
				count = 50;
				magazine = "MEU_100Rnd_M240_762x51";
			};
			class _xx_MEU_100Rnd_M240_762x51_T {
				count = 50;
				magazine = "MEU_100Rnd_M240_762x51_T";
			};
			class _xx_MEU_200Rnd_M249_556x45_Stanag {
				count = 50;
				magazine = "MEU_200Rnd_M249_556x45_Stanag";
			};
			class _xx_MEU_200Rnd_M249_556x45_T_Stanag {
				count = 50;
				magazine = "MEU_200Rnd_M249_556x45_T_Stanag";
			};
			class _xx_MEU_8Rnd_12Gauge_Slug {
				count = 50;
				magazine = "MEU_8Rnd_12Gauge_Slug";
			};
			class _xx_MEU_8Rnd_12Gauge_Pellets {
				count = 50;
				magazine = "MEU_8Rnd_12Gauge_Pellets";
			};
			class _xx_MEU_20x762_Mag {
				count = 50;
				magazine = "MEU_20x762_Mag";
			};
			class _xx_MEU_30x556_Mk262_Mag {
				count = 50;
				magazine = "MEU_30x556_Mk262_Mag";
			};	
// THROWN
			class _xx_SmokeShell {
				count = 100;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 25;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 25;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 25;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellPurple {
				count = 25;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellOrange {
				count = 25;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeshellBlue {
				count = 25;
				magazine = "SmokeshellBlue";
			};
			class _xx_HandGrenade {
				count = 50;
				magazine = "HandGrenade";
			};
			class _xx_M433_40mm_HEDP_Shell {
				count = 50;
				magazine = "M433_40mm_HEDP_Shell";
			};			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 25;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_AGM_M84 {
				count = 50;
				magazine = "AGM_M84";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
			class _xx_6Rnd_HE_M32 {
				count = 45;
				magazine = "6Rnd_HE_M32";
			};
			class _xx_6Rnd_Smoke_M32 {
				count = 30;
				magazine = "6Rnd_Smoke_M32";
			};
			class _xx_AGM_HandFlare_White {
				count = 25;
				magazine = "AGM_HandFlare_White";
			};
			class _xx_AGM_HandFlare_Red {
				count = 25;
				magazine = "AGM_HandFlare_Red";
			};
			class _xx_AGM_HandFlare_Green {
				count = 25;
				magazine = "AGM_HandFlare_Green";
			};
			class _xx_AGM_HandFlare_Yellow {
				count = 25;
				magazine = "AGM_HandFlare_Yellow";
			};

// EXPLOSIVES
			class _xx_DemoCharge_Remote_Mag {
				count = 30;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 30;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
		};
// WEAPONS
		class TransportWeapons {
			class _xx_CUP_hgun_M9 {
				count = 20;
				weapon = "CUP_hgun_M9";
			};
			class _xx_CUP_arifle_M4CAR_black {
				count = 20;
				weapon = "CUP_arifle_M4CAR_black";
			};
			class _xx_CUP_arifle_M4CAR_BUIS_GL {
				count = 20;
				weapon = "CUP_arifle_M4CAR_BUIS_GL";
			};
			class _xx_CUP_arifle_M4A1_black {
				count = 5;
				weapon = "CUP_arifle_M4A1_black";
			};
			class _xx_CUP_arifle_M4A1_BUIS_GL {
				count = 5;
				weapon = "CUP_arifle_M4A1_BUIS_GL";
			};
			class _xx_CUP_arifle_M16A4_Base {
				count = 20;
				weapon = "CUP_arifle_M16A4_Base";
			};
			class _xx_CUP_arifle_M16A4_GL {
				count = 20;
				weapon = "CUP_arifle_M16A4_GL";
			};
			class _xx_CUP_lmg_M249 {
				count = 20;
				weapon = "CUP_lmg_M249";
			};
			class _xx_ej_IAR30 {
				count = 20;
				weapon = "ej_IAR30";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
			class _xx_meu_AT4_CS {
				count = 20;
				weapon = "meu_AT4_CS";
			};
			class _xx_CAF_M72A6 {
				count = 5;
				weapon = "CAF_M72A6";
			};
			class _xx_M32 {
				count = 6;
				weapon = "M32";
			};
			class _xx_CUP_srifle_M110 {
				count = 2;
				weapon = "CUP_srifle_M110";
			};
			class _xx_CUP_srifle_Mk12SPR {
				count = 2;
				weapon = "CUP_srifle_Mk12SPR";
			};
			class _xx_CUP_sgun_M1014 {
				count = 3;
				weapon = "CUP_sgun_M1014";
			};
		};
};
};
class Extended_Init_EventHandlers
{
	class Box_meu_spectre
	{
		Box_meu_spectre_init = "[_this select 0] execVM '\meu_ammoBoxes\recon\obj_init.sqf';";
	};
	class Box_meu_inf
	{
		Box_meu_inf_init = "[_this select 0] execVM '\meu_ammoBoxes\inf\obj_init.sqf';";
	};
	class Box_meu_wep
	{
		Box_meu_wep_init = "[_this select 0] execVM '\meu_ammoBoxes\wep\obj_init.sqf';";
	};
	class Box_meu_bas
	{
		Box_meu_bas_init = "[_this select 0] execVM '\meu_ammoBoxes\bas\obj_init.sqf';";
	};
	class Box_meu_ace
	{
		Box_meu_ace_init = "[_this select 0] execVM '\meu_ammoBoxes\ace\obj_init.sqf';";
	};
	class Box_meu_titan
	{
		Box_meu_titan_init = "[_this select 0] execVM '\meu_ammoBoxes\titan\obj_init.sqf';";
	};
	class Box_meu_gator
	{
		Box_meu_gator_init = "[_this select 0] execVM '\meu_ammoBoxes\gator\obj_init.sqf';";
	};
	class Box_meu_arty
	{
		Box_meu_arty_init = "[_this select 0] execVM '\meu_ammoBoxes\arty\obj_init.sqf';";
	};
	class Box_meu_hq
	{
		Box_meu_hq_init = "[_this select 0] execVM '\meu_ammoBoxes\inf\obj_init.sqf';";
	};
	class Box_meu_suply
	{
		Box_meu_suply_init = "[_this select 0] execVM '\meu_ammoBoxes\resuply\obj_init.sqf';";
	};
	class Box_meu_lar
	{
		Box_meu_lar_init = "[_this select 0] execVM '\meu_ammoBoxes\lar\obj_init.sqf';";
	};
	class Box_meu_lce
	{
		Box_meu_lce_init = "[_this select 0] execVM '\meu_ammoBoxes\lce\obj_init.sqf';";
	};
	class Box_meu_boats
	{
		Box_meu_boats_init = "[_this select 0] execVM '\meu_ammoBoxes\Boats\obj_init.sqf';";
	};
};
class CfgFunctions
{
	class meu
	{
		class vehicle
		{
			class vehicleLoadout
			{
				file = "\meu_ammoBoxes\vehicle\functions\fnc_vehicleLoadout.sqf";
			};
		};
};
};