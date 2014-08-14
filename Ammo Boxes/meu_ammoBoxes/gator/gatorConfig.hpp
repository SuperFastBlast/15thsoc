// REVISION 13AUG14

// class CfgVehicles
// {

	//class B_supplyCrate_F;
	class Box_meu_gator : B_supplyCrate_F {
		displayname = "[15th] Gator Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
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
			class _xx_FHQ_acc_ANPEQ15 {
				count = 12;
				name = "FHQ_acc_ANPEQ15";
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
			class _xx_H_mas_mar_HelmetBind_v {
				count = 15;
				name = "H_mas_mar_HelmetBind_v";
			};
			class _xx_H_mas_mar_HelmetB_v {
				count = 15;
				name = "H_mas_mar_HelmetB_v";
			};
			class _xx_H_HelmetCrew_I {
				count = 15;
				name = "H_HelmetCrew_I";
			};

// UNIFORMS
			class _xx_U_mas_mar_B_IndUniform1_v {
				count = 15;
				name = "U_mas_mar_B_IndUniform1_v";
			};
			class _xx_Nomex_olive {
				count = 10;
				name = "Nomex_olive";
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
			class _xx_V_mas_mar_PlateCarrier1_rgr_d {
				count = 15;
				name = "V_mas_mar_PlateCarrier1_rgr_d";
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
				count = 50;
				magazine = "rh_15rnd_9x19_m9";
			};
			class _xx_30Rnd_556x45_Stanag {
				count = 180;
				magazine = "30Rnd_556x45_Stanag";
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
			class _xx_rh_m9 {
				count = 20;
				weapon = "rh_m9";
			};
			class _xx_arifle_mas_m4 {
				count = 12;
				weapon = "arifle_mas_m4";
			};
			class _xx_meu_AT4 {
			     count = 10;
				 weapon = "meu_AT4";
			};
		};
	};
	
	
// Dont need this};