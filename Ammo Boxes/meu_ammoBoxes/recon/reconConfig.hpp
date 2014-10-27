// REVISION 27OCT14

// class CfgVehicles
// {

	class Box_NATO_WpsSpecial_F;
	class Box_meu_spectre : Box_NATO_WpsSpecial_F {
		displayname = "[15th] Spectre Box";
		icon = "iconCrateLarge";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		//scope = 2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		SLX_XEH_DISABLED = 0;


		class TransportItems {

// SUPPRESSORS + CARRY HANDLE
			class _xx_muzzle_mas_snds_M {
				count = 25;
				name = "muzzle_mas_snds_M";
			};
			class _xx_muzzle_mas_snds_SM {
				count = 25;
				name = "muzzle_mas_snds_SM";
			};
			class _xx_muzzle_mas_snds_SV {
				count = 25;
				name = "muzzle_mas_snds_SV";
			};
			class _xx_optic_mas_handle {
				count = 25;
				name = "optic_mas_handle";
			};
			class _xx_SFLMG_ej {					//IAR SUPRESSOR
				count = 5;
				name = "SFLMG_ej";
			};
			class _xx_Trixie_Cyclone {				//M110 AND M40 SUPRESSOR
				count = 5;
				name = "Trixie_Cyclone";
			};

// OPTICS
			class _xx_optic_mas_term {
				count = 25;
				name = "optic_mas_term";
			};
			class _xx_optic_Arco {
				count = 25;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 25;
				name = "optic_Hamr";
			};
			class _xx_optic_Aco {
				count = 25;
				name = "optic_Aco";
			};
			class _xx_optic_Holosight {
				count = 25;
				name = "optic_Holosight";
			};
			class _xx_optic_mas_zeiss {
				count = 25;
				name = "optic_mas_zeiss";
			};
			class _xx_optic_mas_zeiss_eo {
				count = 25;
				name = "optic_mas_zeiss_eo";
			};
			class _xx_optic_SOS {
				count = 25;
				name = "optic_SOS";
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
			class _xx_FHQ_optic_ACOG {
				count = 25;
				name = "FHQ_optic_ACOG";
			};
			class _xx_FHQ_optic_AIM {
				count = 25;
				name = "FHQ_optic_AIM";
			};
			class _xx_FHQ_optic_TWS3050 {
				count = 25;
				name = "FHQ_optic_TWS3050";
			};
			class _xx_FHQ_optic_HWS {
				count = 25;
				name = "FHQ_optic_HWS";
			};
			class _xx_FHQ_optic_HWS_G33 {
				count = 25;
				name = "FHQ_optic_HWS_G33";
			};
			class _xx_FHQ_optic_MicroCCO {
				count = 25;
				name = "FHQ_optic_MicroCCO";
			};
			class _xx_FHQ_optic_MicroCCO_low {
				count = 25;
				name = "FHQ_optic_MicroCCO_low";
			};
			class _xx_FHQ_optic_AC11704 {
				count = 25;
				name = "FHQ_optic_AC11704";
			};
			class _xx_RH_x300 {
				count = 25;
				name = "RH_x300";
			};
			class _xx_FHQ_optic_LeupoldERT {
				count = 5;
				name = "FHQ_optic_LeupoldERT";
			};
			class _xx_FHQ_acc_ANPEQ15_black {
				count = 25;
				name = "FHQ_acc_ANPEQ15_black";
			};
			class _xx_FHQ_acc_ANPEQ15 {
				count = 25;
				name = "FHQ_acc_ANPEQ15";
			};
			class _xx_M145 {
				count = 5;
				name = "M145";
			};

// HELMETS
			class _xx_H_mas_mar_Booniehat_rgr {
				count = 25;
				name = "H_mas_mar_Booniehat_rgr";
			};
			class _xx_H_mas_mar_Booniehat_des {
				count = 25;
				name = "H_mas_mar_Booniehat_des";
			};
			class _xx_H_mas_mar_helmetv_us {
				count = 25;
				name = "H_mas_mar_helmetv_us";
			};
			class _xx_H_mas_mar_helmet_us {
				count = 25;
				name = "H_mas_mar_helmet_us";
			};
			class _xx_H_mas_mar_helmetd_us {
				count = 25;
				name = "H_mas_mar_helmetd_us";
			};
			class _xx_H_mas_mar_Woolhat {
				count = 25;
				name = "H_mas_mar_Woolhat";
			};


// NVG AND GOGGLES
			class _xx_NVGoggles {
				count = 25;
				name = "NVGoggles";
			};
			class _xx_NVGoggles_mas {
				count = 25;
				name = "NVGoggles_mas";
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
			class _xx_AGM_IR_Strobe_Item {
				count = 25;
				name = "AGM_IR_Strobe_Item";
			};
			
// RIGS AND CARRIERS
			class _xx_V_mas_mar_PlateCarrier2_rgr {
				count = 25;
				name = "V_mas_mar_PlateCarrier2_rgr";
			};
			class _xx_V_mas_mar_PlateCarrierGL_rgr_d {
				count = 25;
				name = "V_mas_mar_PlateCarrierGL_rgr_d";
			};
			class _xx_V_PlateCarrier1_blk {
				count = 25;
				name = "V_PlateCarrier1_blk";
			};
			class _xx_V_mas_mar_ChestrigB_rgr {
				count = 25;
				name = "V_mas_mar_ChestrigB_rgr";
			};
			
// SPECIALTY UNIFORMS AND GEAR
			class _xx_V_RebreatherB {
				count = 25;
				name = "V_RebreatherB";
			};
			class _xx_U_mas_mar_B_Wetsuit {
				count = 25;
				name = "U_mas_mar_B_Wetsuit";
			};
			class _xx_U_B_survival_uniform {
				count = 25;
				name = "U_B_survival_uniform";
			};
			class _xx_U_mas_mar_B_GhillieSuit_d {
				count = 10;
				name = "U_mas_mar_B_GhillieSuit_d";
			};
			class _xx_U_mas_mar_B_GhillieSuit_v {
				count = 10;
				name = "U_mas_mar_B_GhillieSuit_v";
			};

// UNIFORMS
			class _xx_U_mas_mar_B_CombatUniform_wood_vest3 {		//BLACK SHIRT, OLD WOOD CAMO PANTS
				count = 25;
				name = "U_mas_mar_B_CombatUniform_wood_vest3";
			};
			class _xx_U_mas_mar_B_CombatUniform_veg_vest {			//WOOD MARPAT SLEEVES UP
				count = 25;
				name = "U_mas_mar_B_CombatUniform_veg_vest";
			};
			class _xx_U_mas_mar_B_CombatUniform_des_vest {			//DESERT MARPAT SLEEVES UP
				count = 25;
				name = "U_mas_mar_B_CombatUniform_des_vest";
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
			class _xx_T2AAF_45ACP {
				count = 250;
				magazine = "T2AAF_45ACP";
			};
			class _xx_M882_9mm {
				count = 250;
				magazine = "M882_9mm";
			};
			class _xx_30Rnd_M855A1_556x45_Stanag {
				count = 500;
				magazine = "30Rnd_M855A1_556x45_Stanag";
			};
			class _xx_30Rnd_M855A1_556x45_T_Stanag {
				count = 100;
				magazine = "30Rnd_M855A1_556x45_T_Stanag";
			};
			class _xx_200Rnd_M249_556x45_Stanag {
				count = 100;
				magazine = "200Rnd_M249_556x45_Stanag";
			};
			class _xx_200Rnd_M249_556x45_T_Stanag {
				count = 50;
				magazine = "200Rnd_M249_556x45_T_Stanag";
			};
			class _xx_100Rnd_M240_762x51_Stanag {
				count = 100;
				magazine = "100Rnd_M240_762x51_Stanag";
			};
			class _xx_100Rnd_M240_762x51_T_Stanag {
				count = 50;
				magazine = "100Rnd_M240_762x51_T_Stanag";
			};
			class _xx_Trixie_10x127_HEIAP_Mag {
				count = 50;
				magazine = "Trixie_10x127_HEIAP_Mag";
			};
			class _xx_Trixie_20x762_Mag {
				count = 100;
				magazine = "Trixie_20x762_Mag";
			};
			class _xx_Trixie_30x556_Mk262_Mag {
				count = 100;
				magazine = "Trixie_30x556_Mk262_Mag";
			};
			class _xx_Trixie_5x762_Mag {
				count = 100;
				magazine = "Trixie_5x762_Mag";
			};
			class _xx_7Rnd_mas_12Gauge_Slug {
				count = 50;
				magazine = "7Rnd_mas_12Gauge_Slug";
			};
			class _xx_7Rnd_mas_12Gauge_Pellets {
				count = 50;
				magazine = "7Rnd_mas_12Gauge_Pellets";
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
			class _xx_REV1_flash {
				count = 100;
				magazine = "REV1_flash";
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
		};
		
// WEAPONS
		class TransportWeapons {
			class _xx_hgun_mas_acp_F {
				count = 25;
				weapon = "hgun_mas_acp_F";
			};			
			class _xx_hgun_mas_m9_F {
				count = 25;
				weapon = "hgun_mas_m9_F";
			};
			class _xx_arifle_mas_m4 {
				count = 25;
				weapon = "arifle_mas_m4";
			};
			class _xx_arifle_mas_m4_m203 {
				count = 25;
				weapon = "arifle_mas_m4_m203";
			};
			class _xx_arifle_mas_m4c {
				count = 25;
				weapon = "arifle_mas_m4c";
			};
			class _xx_arifle_mas_m4_m203c {
				count = 25;
				weapon = "arifle_mas_m4_m203c";
			};
			class _xx_LMG_mas_M249_F {
				count = 5;
				weapon = "LMG_mas_M249_F";
			};
			class _xx_ej_IAR30 {
				count = 5;
				weapon = "ej_IAR30";
			};
			class _xx_LMG_mas_M240_F {
				count = 5;
				weapon = "LMG_mas_M240_F";
			};
			class _xx_Trixie_M107 {
				count = 5;
				weapon = "Trixie_M107";
			};
			class _xx_Trixie_M110 {
				count = 5;
				weapon = "Trixie_M110";
			};
			class _xx_Trixie_MK12 {
				count = 5;
				weapon = "Trixie_MK12";
			};
			class _xx_Trixie_M40A3 {
				count = 5;
				weapon = "Trixie_M40A3";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
			class _xx_meu_AT4_CS {
				count = 20;
				weapon = "meu_AT4_CS";
			};
			class _xx_Trixie_SMAW {
				count = 3;
				weapon = "Trixie_SMAW";
			};
			class _xx_M32 {
				count = 5;
				weapon = "M32";
			};
			class _xx_arifle_mas_m1014 {
				count = 5;
				weapon = "arifle_mas_m1014";
			};
		};
	};
	
	
// Dont need this};