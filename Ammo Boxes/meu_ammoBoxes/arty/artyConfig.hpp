// REVISION 01OCT14

// class CfgVehicles
// {

	//class B_supplyCrate_F;
	class Box_meu_arty : B_supplyCrate_F {
		displayname = "[15th] Battlestar Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
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
			class _xx_FHQ_acc_ANPEQ15 {
				count = 15;
				name = "FHQ_acc_ANPEQ15";
			};
			class _xx_acc_flashlight {
				count = 15;
				name = "acc_flashlight";
			};			
			class _xx_FHQ_optic_ACOG {
				count = 15;
				name = "FHQ_optic_ACOG";
			};
			class _xx_NVGoggles_OPFOR {
				count = 15;
				name = "NVGoggles_OPFOR";
			};
			class _xx_FHQ_optic_HWS_G33 {
				count = 15;
				name = "FHQ_optic_HWS_G33";
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
			class _xx_H_mas_mar_HelmetBind_v {
				count = 15;
				name = "H_mas_mar_HelmetBind_v";
			};
			class _xx_H_mas_mar_HelmetB_v {
				count = 15;
				name = "H_mas_mar_HelmetB_v";
			};

// UNIFORMS
			class _xx_U_mas_mar_B_IndUniform1_v {
				count = 15;
				name = "U_mas_mar_B_IndUniform1_v";
			};
			class _xx_V_mas_mar_PlateCarrier2_rgr {
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
		};

// AMMO
		class TransportMagazines {
			class _xx_rh_15rnd_9x19_m9 {
				count = 12;
				magazine = "rh_15rnd_9x19_m9";
			};
			class _xx_M855A1_M16_30Rnd {
				count = 60;
				magazine = "M855A1_M16_30Rnd";
			};
			class _xx_M855A1_tracer_M16_30Rnd {
				count = 60;
				magazine = "M855A1_tracer_M16_30Rnd";
			};
			class _xx_M855A1_M4_30Rnd {
				count = 60;
				magazine = "M855A1_M4_30Rnd";
			};
			class _xx_M855A1_tracer_M4_30Rnd {
				count = 60;
				magazine = "M855A1_tracer_M4_30Rnd";
			};
			class _xx_M249_200Rnd_556x45_Stanag_tracer {
				count = 100;
				magazine = "M249_200Rnd_556x45_Stanag_tracer";
			};
			class _xx_M855A1_tracer_M27IAR {
				count = 100;
				magazine = "M855A1_tracer_M27IAR";
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
			class _xx_rh_m9 {
				count = 20;
				weapon = "rh_m9";
			};
			class _xx_M4Car {
				count = 12;
				weapon = "M4Car";
			};
			class _xx_arifle_mas_m16 {
				count = 12;
				weapon = "arifle_mas_m16";
			};
			class _xx_LMG_mas_M249a_F {
				count = 10;
				weapon = "LMG_mas_M249a_F";
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
	
	
// Dont need this};