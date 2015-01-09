// REVISION 15/JAN/15

// class CfgVehicles
// {

	//class B_supplyCrate_F;
	class Box_lce : B_supplyCrate_F {
		displayname = "[15th] Logistics Box";
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
			class _xx_AGM_CableTie {
				count = 100;
				name = "AGM_CableTie";
			};
			class _xx_AGM_IR_Strobe_Item {
				count = 50;
				name = "AGM_IR_Strobe_Item";
			};
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
			class _xx_MEU_100Rnd_M240_762x51_Stanag {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51_Stanag";
			};
			class _xx_MEU_100Rnd_M240_762x51_T_Stanag {
				count = 100;
				magazine = "MEU_100Rnd_M240_762x51_T_Stanag";
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

	// Dont need this};