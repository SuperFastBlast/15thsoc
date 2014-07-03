// REVISION 02JUL14

// class CfgVehicles
// {

	//class B_supplyCrate_F;
	class Box_meu_ace : B_supplyCrate_F {
		displayname = "[15th] ACE Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
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
			class _xx_FHQ_optic_ACOG {
				count = 20;
				name = "FHQ_optic_ACOG";
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
				count = 20;
				name = "FHQ_optic_AIM";
			};		
			class _xx_FHQ_acc_ANPEQ15 {
				count = 20;
				name = "FHQ_acc_ANPEQ15";
			};			
			class _xx_FHQ_optic_HWS {
				count = 20;
				name = "FHQ_optic_HWS";
			};
			class _xx_FHQ_optic_HWS_G33 {
				count = 15;
				name = "FHQ_optic_HWS_G33";
			};
			class _xx_FHQ_optic_microCCO {
				count = 20;
				name = "FHQ_optic_microCCO";
			};
			
// Medical
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
			class _xx_U_B_PilotCoveralls {
				count = 5;
				name = "U_B_PilotCoveralls";
			};
			class _xx_U_mas_mar_B_pilot {
				count = 5;
				name = "U_mas_mar_B_pilot";
			};			
//Vests

			class _xx_V_TacVest_blk {
				count = 5;
				name = "V_TacVest_blk";
			};	
//Helmets
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
			class _xx_rh_15rnd_9x19_m9 {
				count = 100;
				magazine = "rh_15rnd_9x19_m9";
			};
			class _xx_30Rnd_556x45_Stanag {
				count = 200;
				magazine = "30Rnd_556x45_Stanag";
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
			class _xx_rh_m9 {
				count = 20;
				weapon = "rh_m9";
			};
			class _xx_arifle_mas_m4 {
				count = 25;
				weapon = "arifle_mas_m4";
			};
		};		

		/*
         class TransportBackpacks {	
			class _xx_tf_rt1523g {
		       count = 50;
			   backpack = "rt_1523g";
			 };  
		}; 
		*/
	};

	
// Dont need this};