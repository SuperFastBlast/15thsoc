// REVISION 06AUG14

// class CfgVehicles
// {

	class B_supplyCrate_F;
	class Box_meu_inf : B_supplyCrate_F {
		displayname = "[15th] Infantry Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
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
			class _xx_FHQ_optic_ACOG {
				count = 15;
				name = "FHQ_optic_ACOG";
			};
			class _xx_optic_acog_holo {
				count = 10;
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
			class _xx_FHQ_optic_AIM {
				count = 15;
				name = "FHQ_optic_AIM";
			};		
			class _xx_FHQ_acc_ANPEQ15 {
				count = 15;
				name = "FHQ_acc_ANPEQ15";
			};			
			class _xx_FHQ_optic_HWS {
				count = 15;
				name = "FHQ_optic_HWS";
			};
			class _xx_FHQ_optic_HWS_G33 {
				count = 15;
				name = "FHQ_optic_HWS_G33";
			};
			class _xx_FHQ_optic_microCCO {
				count = 15;
				name = "FHQ_optic_microCCO";
			};
			class _xx_optic_tws {
				count = 15;
				name = "optic_tws";
			};
			class _xx_mas_acog_eo {
				count = 10;
				name = "mas_acog_eo";
			};
			class _xx_optic_mas_acog_rd {
				count = 20;
				name = "optic_mas_acog_rd";
			};
			class _xx_FHQ_optic_AC11704 {
				count = 10;
				name = "FHQ_optic_AC11704";
			};
			class _xx_FHQ_optic_tws3050 {
				count = 15;
				name = "FHQ_optic_tws3050";
			};
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

// HELMETS
			class _xx_H_mas_mar_HelmetBind_v {
				count = 15;
				name = "H_mas_mar_HelmetBind_v";
			};
			class _xx_H_mas_mar_HelmetB_v {
				count = 15;
				name = "H_mas_mar_HelmetB_v";
			};
			class _xx_H_mas_mar_helmetv_us {
				count = 50;
				name = "H_mas_mar_helmetv_us";
			};
		
// UNIFORMS
			class _xx_U_mas_mar_B_IndUniform1_v {
				count = 15;
				name = "U_mas_mar_B_IndUniform1_v";
			};
			class _xx_U_mas_mar_B_CombatUniform_veg {
				count = 15;
				name = "U_mas_mar_B_CombatUniform_veg";
			};

// VESTS
			class _xx_V_mas_mar_PlateCarrier2_rgr_d {
				count = 15;
				name = "V_mas_mar_PlateCarrier2_rgr_d";
			};
			class _xx_V_mas_mar_PlateCarrierGL_rgr_d {
				count = 15;
				name = "V_mas_mar_PlateCarrierGL_rgr_d";
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
			class _xx_ItemSMGR {
				count = 20;
				name = "ItemSMGR";
			};
			class _xx_UGL_FlareGreen_F {
				count = 25;
				name = "UGL_FlareGreen_F";
			};
			class _xx_UGL_FlareRed_F {
				count = 25;
				name = "UGL_FlareRed_F";
			};
			class _xx_UGL_FlareWhite_F {
				count = 25;
				name = "UGL_FlareWhite_F";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			class _xx_AGM_SpareBarrel {
				count = 6;
				name = "AGM_SpareBarrel";
			};
		};
	
// AMMO
		class TransportMagazines {
			class _xx_rh_15rnd_9x19_m9 {
				count = 100;
				magazine = "rh_15rnd_9x19_m9";
			};
			class _xx_30Rnd_556x45_Stanag {
				count = 200;
				magazine = "30Rnd_556x45_Stanag";
			};
			class _xx_30Rnd_mas_556x45_T_Stanag {
				count = 100;
				magazine = "30Rnd_mas_556x45_T_Stanag";
			};
			class _xx_100Rnd_mas_762x51_Stanag {
				count = 100;
				magazine = "100Rnd_mas_762x51_Stanag";
			};
			class _xx_100Rnd_mas_762x51_T_Stanag {
				count = 100;
				magazine = "100Rnd_mas_762x51_T_Stanag";
			};
			class _xx_200Rnd_mas_556x45_Stanag {
				count = 100;
				magazine = "200Rnd_mas_556x45_Stanag";
			};
			class _xx_200Rnd_mas_556x45_T_Stanag {
				count = 100;
				magazine = "200Rnd_mas_556x45_T_Stanag";
			};
			class _xx_20Rnd_mas_762x51_Stanag {
				count = 50;
				magazine = "20Rnd_mas_762x51_Stanag";
			};
			class _xx_20Rnd_mas_762x51_T_Stanag {
				count = 50;
				magazine = "20Rnd_mas_762x51_T_Stanag";
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
			class _xx_1Rnd_HE_Grenade_shell {
				count = 100;
				magazine = "1Rnd_HE_Grenade_shell";
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
			class _xx_REV1_flash {
				count = 100;
				magazine = "REV1_flash";
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

// Explosives
			class _xx_DemoCharge_Remote_Mag {
				count = 50;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 50;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
		};
		
// AMMO
		class TransportWeapons {
			class _xx_rh_m9 {
				count = 20;
				weapon = "rh_m9";
			};
			class _xx_arifle_mas_m4 {
				count = 20;
				weapon = "arifle_mas_m4";
			};
			class _xx_arifle_mas_m4_m203 {
				count = 20;
				weapon = "arifle_mas_m4_m203";
			};
			class _xx_arifle_mas_m16 {
				count = 20;
				weapon = "arifle_mas_m16";
			};
			class _xx_arifle_mas_m16_gl {
				count = 20;
				weapon = "arifle_mas_m16_gl";
			};
			class _xx_srifle_mas_sr25_h {
				count = 5;
				weapon = "srifle_mas_sr25_h";
			};
			class _xx_LMG_mas_M249a_F {
				count = 20;
				weapon = "LMG_mas_M249a_F";
			};
			class _xx_LMG_mas_M249_F {
				count = 20;
				weapon = "LMG_mas_M249_F";
			};
			class _xx_meu_AT4 {
				count = 20;
				weapon = "meu_AT4";
			};
			class _xx_CAF_M72A6 {
				count = 5;
				weapon = "CAF_M72A6";
			};
			class _xx_M32 {
				count = 6;
				weapon = "M32";
			};
		};
	};
	
	
// Dont need this};