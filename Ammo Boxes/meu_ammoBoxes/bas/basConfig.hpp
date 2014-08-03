// REVISION 02JUL14

// class CfgVehicles
// {

	//class B_supplyCrate_F;
	class Box_meu_bas : B_supplyCrate_F {
		displayname = "[15th] Battalion Aid Station ";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
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
			class _xx_FHQ_optic_ACOG {
				count = 5;
				name = "FHQ_optic_ACOG";
			};		
			class _xx_FHQ_acc_ANPEQ15 {
				count = 5;
				name = "FHQ_acc_ANPEQ15";
			};			
			class _xx_FHQ_optic_HWS_G33 {
				count = 15;
				name = "FHQ_optic_HWS_G33";
			};
			class _xx_FHQ_optic_microCCO {
				count = 5;
				name = "FHQ_optic_microCCO";
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
			class _xx_rh_15rnd_9x19_m9 {
				count = 100;
				magazine = "rh_15rnd_9x19_m9";
			};
			class _xx_30Rnd_556x45_Stanag {
				count = 300;
				magazine = "30Rnd_556x45_Stanag";
			};
			class _xx_30Rnd_mas_556x45_T_Stanag {
				count = 100;
				magazine = "30Rnd_mas_556x45_T_Stanag";
			};


//Smoke 203
			class _xx_REV1_flash {
				count = 20;
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
			class _xx_rh_m9 {
				count = 5;
				weapon = "rh_m9";
			};
			class _xx_arifle_mas_m16_gl {
				count = 5;
				weapon = "arifle_mas_m16_gl";
			};
			class _xx_arifle_mas_m4_M203 {
				count = 5;
				weapon = "arifle_mas_m4_M203";
			};
		};
	};
	
	
// Dont need this};