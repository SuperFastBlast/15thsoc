class CfgPatches
{
	class mas_usa_mars
	{
		units[] = {};
		weapons[] = {"U_mas_mar_B_CombatUniform_wood","U_mas_mar_B_CombatUniform_wood_tshirt","U_mas_mar_B_CombatUniform_wood_vest","U_mas_mar_B_CombatUniform_wood_vest1","U_mas_mar_B_CombatUniform_wood_vest2","U_mas_mar_B_CombatUniform_wood_vest3","U_mas_mar_B_CombatUniform_wood_vest4","U_mas_mar_B_CombatUniform_veg","U_mas_mar_B_CombatUniform_veg_tshirt","U_mas_mar_B_CombatUniform_veg_vest","U_mas_mar_B_CombatUniform_des","U_mas_mar_B_CombatUniform_des_tshirt","U_mas_mar_B_CombatUniform_des_vest","U_mas_mar_B_CombatUniform_sage","U_mas_mar_B_CombatUniform_sage_tshirt","U_mas_mar_B_CombatUniform_sage_vest","U_mas_mar_B_IndUniform1_o","U_mas_mar_B_IndUniform2_o","U_mas_mar_B_IndUniform1_v","U_mas_mar_B_IndUniform2_v","U_mas_mar_B_IndUniform1_d","U_mas_mar_B_IndUniform2_d","U_mas_mar_B_MAR","U_mas_mar_B_pilot","U_mas_mar_B_wint","U_mas_mar_B_Wetsuit","U_mas_mar_B_GhillieSuit","U_mas_mar_B_GhillieSuit_v","U_mas_mar_B_GhillieSuit_d","U_mas_mar_B_GhillieSuit_w","V_mas_mar_Rangemaster_belt","V_mas_mar_BandollierB_rgr","V_mas_mar_PlateCarrier1_rgr","V_mas_mar_PlateCarrier2_rgr","V_mas_mar_PlateCarrierGL_rgr","V_mas_mar_ChestrigB_rgr","V_mas_mar_Rangemaster_belt_d","V_mas_mar_BandollierB_rgr_d","V_mas_mar_PlateCarrier1_rgr_d","V_mas_mar_PlateCarrier2_rgr_d","V_mas_mar_PlateCarrierGL_rgr_d","V_mas_mar_ChestrigB_rgr_d","V_mas_mar_Rangemaster_belt_g","V_mas_mar_BandollierB_rgr_g","V_mas_mar_PlateCarrier1_rgr_g","V_mas_mar_PlateCarrier2_rgr_g","V_mas_mar_PlateCarrierGL_rgr_g","V_mas_mar_ChestrigB_rgr_g","V_mas_mar_PlateCarrier1_rgr_w","V_mas_mar_ChestrigB_rgr_w","H_mas_mar_HelmetB","H_mas_mar_HelmetB_paint","H_mas_mar_HelmetB_light","H_mas_mar_HelmetB_d","H_mas_mar_HelmetB_paint_d","H_mas_mar_HelmetB_light_d","H_mas_mar_HelmetB_v","H_mas_mar_HelmetB_paint_v","H_mas_mar_HelmetB_light_v","H_mas_mar_HelmetB_g","H_mas_mar_HelmetB_paint_g","H_mas_mar_HelmetB_light_g","H_mas_mar_HelmetB_b","H_mas_mar_HelmetB_paint_b","H_mas_mar_HelmetB_light_b","H_mas_mar_HelmetB_w","H_mas_mar_HelmetB_paint_w","H_mas_mar_HelmetB_light_w","H_mas_mar_helmetv_us","H_mas_mar_helmetd_us","H_mas_mar_helmetw_us","H_mas_mar_helmetvgog_us","H_mas_mar_helmetdgog_us","H_mas_mar_helmetwgog_us","H_mas_mar_helmetv_wrap_us","H_mas_mar_helmetd_wrap_us","H_mas_mar_helmetw_wrap_us","H_mas_mar_helmetvgog_wrap_us","H_mas_mar_helmetdgog_wrap_us","H_mas_mar_helmetwgog_wrap_us","H_mas_mar_HelmetBind_v","H_mas_mar_HelmetBind_d","H_mas_mar_HelmetBind_w","H_mas_mar_Cap_headphones","H_mas_mar_Woolhat","H_mas_mar_Woolhat_c","H_mas_mar_Woolhat_w","H_mas_mar_Cap","H_mas_mar_Booniehat_wood","H_mas_mar_Booniehat_rgr","H_mas_mar_Booniehat_des","H_mas_mar_Balaclava","H_mas_mar_Balaclava_ht","H_mas_mar_Balaclava_b","H_mas_mar_Balaclava_ht_b","H_mas_mar_helmet_ht","H_mas_mar_woolhat_ht","H_mas_mar_pro_ht","H_mas_mar_pro_ht_v","H_mas_mar_pro_ht_d","H_mas_mar_pro_ht_b","H_mas_mar_off","H_mas_mar_off_v","H_mas_mar_off_d","H_mas_mar_off_g","H_mas_mar_helmet_us","H_mas_mar_helmet_bala_us","H_mas_mar_helmet_wrap_us","H_mas_mar_helmet_l_us","H_mas_mar_helmet_l_bala_us","H_mas_mar_helmet_g_us","H_mas_mar_helmet_g_bala_us","H_mas_mar_helmet_g_wrap_us","H_mas_mar_helmet_pro_bala","H_mas_mar_helmet_pro_bala_b","H_mas_mar_headset_b","H_mas_mar_revcapheadset_b","H_mas_mar_bandana","H_mas_mar_bandana_v","H_mas_mar_bandana_d","H_mas_mar_HelmetB_camo","H_mas_mar_HelmetB_plain","H_mas_mar_HelmetB_plain_d","arifle_mas_m16_mt","arifle_mas_m16_gl_mt","arifle_mas_m16_mh","arifle_mas_m16_gl_mh","arifle_mas_m16_mti","arifle_mas_m16_gl_mti"};
		requiredVersion = 0.7;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","mas_weapons"};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgFactionClasses
{
	access = "ReadAndCreate";
	class mas_usa_mars
	{
		displayName = "US Marines Corps";
		priority = 2;
		side = 1;
		icon = "\mas_usa_mars_c\cfgfaction_mas_usa_mar_ca.paa";
	};
};
class CfgVehicleClasses
{
	class mas_usa_mars
	{
		displayName = "MARSOC";
	};
	class mas_usa_mars_a
	{
		displayName = "MARSOC(Recon)";
	};
	class mas_usa_mars_b
	{
		displayName = "MARSOC DA Units";
	};
	class mas_usa_mars_c
	{
		displayName = "MARSOC Para";
	};
	class mas_usa_mars_d
	{
		displayName = "USMC MEU Wood";
	};
	class mas_usa_mars_e
	{
		displayName = "USMC MEU Des";
	};
	class mas_usa_mars_f
	{
		displayName = "USMC MEU Winter";
	};
	class mas_usa_mars_g
	{
		displayName = "USMC Recon(Wood)";
	};
	class mas_usa_mars_h
	{
		displayName = "USMC Recon(Des)";
	};
	class mas_usa_mars_i
	{
		displayName = "USMC Recon(Winter)";
	};
	class mas_usa_mars_j
	{
		displayName = "USMC Snipers";
	};
	class mas_usa_mars_k
	{
		displayName = "USMC Scuba";
	};
	class mas_usa_mars_l
	{
		displayName = "USMC Support Units";
	};
	class mas_usa_mars_veh_a
	{
		displayName = "USMC Vehicles Air";
	};
	class mas_usa_mars_veh_g
	{
		displayName = "USMC Vehicles Tactical";
	};
	class mas_usa_mars_veh_f
	{
		displayName = "USMC Vehicles Fire Support";
	};
	class mas_usa_mars_veh_s
	{
		displayName = "USMC Vehicles Logistic";
	};
	class mas_usa_mars_veh_w
	{
		displayName = "USMC Vehicles Waterborne";
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class ItemInfo;
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_tshirt;
	class U_B_CombatUniform_mcam_vest;
	class U_B_Wetsuit;
	class U_B_HeliPilotCoveralls;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Vest_Base;
	class V_Rangemaster_belt;
	class V_BandollierB_khk;
	class V_BandollierB_cbr;
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier1_cbr;
	class V_PlateCarrier2_rgr;
	class V_PlateCarrierGL_rgr;
	class V_Chestrig_khk;
	class V_TacVest_oli;
	class H_HelmetB;
	class H_HelmetB_paint;
	class H_HelmetB_light;
	class H_PilotHelmetHeli_B;
	class H_CrewHelmetHeli_B;
	class H_MilCap_mcamo;
	class H_Cap_headphones;
	class H_Booniehat_khk;
	class U_B_GhillieSuit;
	class H_Bandanna_mcamo;
	class H_Watchcap_blk;
	class arifle_mas_m16;
	class arifle_mas_m16_gl;
	class U_mas_mar_B_CombatUniform_wood: U_B_CombatUniform_mcam
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_wood_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Wood CBT uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_F";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_wood_tshirt: U_B_CombatUniform_mcam_tshirt
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_wood_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Wood Tshirt uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_02_f";
			containerClass = "Supply60";
			mass = 35;
		};
	};
	class U_mas_mar_B_CombatUniform_wood_vest: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_wood_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Wood Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_03_f";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_wood_vest1: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_wood_vest_cr.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Wood\Green Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_04_f";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_wood_vest2: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_wood_vest_cs.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Wood\Tan Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_05_f";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_wood_vest3: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_wood_vest_cp.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Wood\Black Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_06_f";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_wood_vest4: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_wood_vest_cq.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Wood\Grey Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_07_f";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_veg: U_B_CombatUniform_mcam
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_veg_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Wood Marpat CBT uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_F_v";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_veg_tshirt: U_B_CombatUniform_mcam_tshirt
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_veg_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Wood Marpat Tshirt uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_02_f_v";
			containerClass = "Supply60";
			mass = 35;
		};
	};
	class U_mas_mar_B_CombatUniform_veg_vest: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_veg_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Wood Marpat Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_03_f_v";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_des: U_B_CombatUniform_mcam
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_des_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Des Marpat CBT uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_F_d";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_des_tshirt: U_B_CombatUniform_mcam_tshirt
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_des_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Des Marpat Tshirt uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_02_f_d";
			containerClass = "Supply60";
			mass = 35;
		};
	};
	class U_mas_mar_B_CombatUniform_des_vest: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_des_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Des Marpat Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_03_f_d";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_sage: U_B_CombatUniform_mcam
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_sage_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Nomex CQB uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_F_g";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_CombatUniform_sage_tshirt: U_B_CombatUniform_mcam_tshirt
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_sage_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Nomex CQB Tshirt uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_02_f_g";
			containerClass = "Supply60";
			mass = 35;
		};
	};
	class U_mas_mar_B_CombatUniform_sage_vest: U_B_CombatUniform_mcam_vest
	{
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_CombatUniform_sage_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "MARSOC Nomex CQB Recon uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_03_f_g";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_IndUniform1_o: U_B_CombatUniform_mcam
	{
		picture = "\mas_usa_mars\md\data\ui\icon_u_ir1_co.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Wood uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_ind1_f";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_IndUniform2_o: U_mas_mar_B_IndUniform1_o
	{
		picture = "\mas_usa_mars\md\data\ui\icon_u_ir2_co.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Wood uniform sleeve";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_ind2_f";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_IndUniform1_v: U_mas_mar_B_IndUniform1_o
	{
		picture = "\mas_usa_mars\md\data\ui\icon_u_ir1_cv.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Marpat Wood uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_ind1_f_v";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_IndUniform2_v: U_mas_mar_B_IndUniform1_v
	{
		picture = "\mas_usa_mars\md\data\ui\icon_u_ir2_cv.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Marpat Wood uniform sleeve";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_ind2_f_v";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_IndUniform1_d: U_mas_mar_B_IndUniform1_o
	{
		picture = "\mas_usa_mars\md\data\ui\icon_u_ir1_cd.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Marpat Des uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_ind1_f_d";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_IndUniform2_d: U_mas_mar_B_IndUniform1_d
	{
		picture = "\mas_usa_mars\md\data\ui\icon_u_ir2_cd.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Marpat Des uniform sleeve";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_ind2_f_d";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_MAR: U_B_HeliPilotCoveralls
	{
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\mas_usa_mars\md\data\ui\icon_u_b_combatuniform_mars_ca.paa";
		displayName = "MARSOC CQB coverall";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_02_f_cov";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_pilot: U_B_HeliPilotCoveralls
	{
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\mas_usa_mars\md\data\ui\icon_u_b_combatuniform_pilot_ca.paa";
		displayName = "USMC Pilot coverall";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Helipilot_F";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_wint: U_B_HeliPilotCoveralls
	{
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\mas_usa_mars\md\data\ui\icon_u_b_combatuniform_win_ca.paa";
		displayName = "USMC Arctic coverall";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_Soldier_F_w";
			containerClass = "Supply60";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_Wetsuit: U_B_Wetsuit
	{
		picture = "\A3\characters_f\data\ui\icon_U_B_Wetsuit_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "USMC Diver suite";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_diver_F";
			containerClass = "Supply160";
			uniformType = "Neopren";
			mass = 75.5;
		};
	};
	class U_mas_mar_B_GhillieSuit: U_B_GhillieSuit
	{
		displayName = "USMC Ghillie Suit wood";
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_ghillie_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_soldier_Mkg_F";
			containerClass = "Supply80";
			mass = 100;
		};
	};
	class U_mas_mar_B_GhillieSuit_v: U_B_GhillieSuit
	{
		displayName = "USMC Ghillie Suit Wood marpat";
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_ghillie_veg_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_soldier_Mkg_F_v";
			containerClass = "Supply80";
			mass = 100;
		};
	};
	class U_mas_mar_B_GhillieSuit_d: U_B_GhillieSuit
	{
		displayName = "USMC Ghillie Suit Des marpat";
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_ghillie_des_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_soldier_Mkg_F_d";
			containerClass = "Supply80";
			mass = 100;
		};
	};
	class U_mas_mar_B_GhillieSuit_w: U_B_GhillieSuit
	{
		displayName = "USMC Ghillie Suit Arctic";
		picture = "\mas_usa_mars\md\data\ui\icon_U_B_ghillie_wint_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_mar_soldier_Mkg_F_w";
			containerClass = "Supply80";
			mass = 100;
		};
	};
	class V_mas_mar_Rangemaster_belt: V_Rangemaster_belt
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "USMC Rangemaster belt Tan";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply120";
			mass = 20;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_mas_mar_BandollierB_rgr: V_BandollierB_khk
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_BandollierB_CA.paa";
		displayName = "USMC Slash Bandolier Tan";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			containerClass = "Supply140";
			mass = 30;
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_mas_mar_PlateCarrier1_rgr: V_PlateCarrier1_rgr
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "MARSOC Platecarrier lite Tan";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply200";
			mass = 270;
			armor = 50;
			passThrough = 0.1;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_mas_mar_PlateCarrier2_rgr: V_PlateCarrier2_rgr
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "MARSOC Platecarrier rig Tan";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply200";
			mass = 300;
			armor = 50;
			passThrough = 0.1;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_mas_mar_PlateCarrierGL_rgr: V_PlateCarrierGL_rgr
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "MARSOC Platecarrier rig GL Tan";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply200";
			mass = 300;
			armor = 60;
			passThrough = 0.1;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_mas_mar_ChestrigB_rgr: V_Chestrig_khk
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_Chestrig_khk_CA.paa";
		displayName = "USMC Chest rig Tan";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\civil\data\equip_chestrig_des_co.paa","\mas_usa_mars\md\civil\data\armor1_cd.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
			containerClass = "Supply200";
			mass = 100;
			armor = 10;
			passThrough = 1;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	class V_mas_mar_PlateCarrier1_rgr_d: V_mas_mar_PlateCarrier1_rgr
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "USMC Platecarrier lite Tan";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cd.paa"};
	};
	class V_mas_mar_PlateCarrier2_rgr_d: V_mas_mar_PlateCarrier2_rgr
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "USMC Platecarrier rig Tan";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cd.paa"};
	};
	class V_mas_mar_PlateCarrierGL_rgr_d: V_mas_mar_PlateCarrierGL_rgr
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "USMC Platecarrier rig GL Tan";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cd.paa"};
	};
	class V_mas_mar_Rangemaster_belt_g: V_mas_mar_Rangemaster_belt
	{
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		displayName = "MARSOC Rangemaster belt Green";
		picture = "\mas_usa_mars\md\Data\UI\icon_V_BandollierB_Cg.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cg.paa"};
	};
	class V_mas_mar_BandollierB_rgr_g: V_mas_mar_BandollierB_rgr
	{
		displayName = "MARSOC Slash Bandolier Green";
		picture = "\mas_usa_mars\md\Data\UI\icon_V_BandollierB_Cg.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cg.paa"};
	};
	class V_mas_mar_PlateCarrier1_rgr_g: V_mas_mar_PlateCarrier1_rgr
	{
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "MARSOC Platecarrier lite Green";
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_1_Cg.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cg.paa"};
	};
	class V_mas_mar_PlateCarrier2_rgr_g: V_mas_mar_PlateCarrier2_rgr
	{
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_2_Cg.paa";
		displayName = "MARSOC Platecarrier rig Green";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cg.paa"};
	};
	class V_mas_mar_PlateCarrierGL_rgr_g: V_mas_mar_PlateCarrierGL_rgr
	{
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "MARSOC Platecarrier rig GL Green";
		picture = "\mas_usa_mars\md\Data\UI\icon_V_plate_carrier_2_Cg.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cg.paa"};
	};
	class V_mas_mar_ChestrigB_rgr_g: V_mas_mar_ChestrigB_rgr
	{
		displayName = "MARSOC Chest rig Green";
		picture = "\mas_usa_mars\md\Data\UI\icon_V_Chestrig_khk_Cg.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\civil\data\equip_chestrig_rgr_co.paa","\mas_usa_mars\md\civil\data\armor1_cv.paa"};
	};
	class V_mas_mar_PlateCarrier1_rgr_w: V_mas_mar_PlateCarrier1_rgr
	{
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "USMC Platecarrier arctic";
		picture = "\mas_usa_mars\md\Data\UI\icon_v_plate_carrier_1_cw.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\vests_rgr_cw.paa"};
	};
	class V_mas_mar_ChestrigB_rgr_w: V_mas_mar_ChestrigB_rgr
	{
		displayName = "USMC Chest rig arctic";
		picture = "\mas_usa_mars\md\Data\UI\icon_V_Chestrig_khk_Cw.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\civil\data\equip_chestrig_win_co.paa","\mas_usa_mars\md\civil\data\armor1_cw.paa"};
	};
	class H_HelmetSpecB;
	class H_mas_mar_HelmetB: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_CA.paa";
		displayName = "MARSOC ECH Tan";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_co.paa"};
	};
	class H_mas_mar_HelmetB_paint: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_CA.paa";
		displayName = "MARSOC ECH Tan Paint";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_desert_co.paa"};
	};
	class H_mas_mar_HelmetB_light: H_HelmetB_light
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_CA.paa";
		displayName = "MARSOC ECH Tan Light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_co.paa"};
	};
	class H_mas_mar_HelmetB_d: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cd.paa";
		displayName = "USMC ECH Des";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cd.paa"};
	};
	class H_mas_mar_HelmetB_paint_d: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cd.paa";
		displayName = "USMC ECH Des Paint";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_sand_co.paa"};
	};
	class H_mas_mar_HelmetB_light_d: H_HelmetB_light
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cd.paa";
		displayName = "USMC ECH Des Light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cd.paa"};
	};
	class H_mas_mar_HelmetB_v: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cv.paa";
		displayName = "USMC ECH Wood";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cv.paa"};
	};
	class H_mas_mar_HelmetB_paint_v: H_HelmetSpecB
	{
		displayName = "USMC ECH Wood Paint";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cv.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_grass_co.paa"};
	};
	class H_mas_mar_HelmetB_light_v: H_HelmetB_light
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cv.paa";
		displayName = "USMC ECH Wood Light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cv.paa"};
	};
	class H_mas_mar_HelmetB_g: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cg.paa";
		displayName = "MARSOC ECH Green";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cg.paa"};
	};
	class H_mas_mar_HelmetB_paint_g: H_HelmetSpecB
	{
		displayName = "MARSOC ECH Green Paint";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cg.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_snake_co.paa"};
	};
	class H_mas_mar_HelmetB_light_g: H_HelmetB_light
	{
		displayName = "MARSOC ECH Green light";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cg.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cg.paa"};
	};
	class H_mas_mar_HelmetB_b: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cb.paa";
		displayName = "MARSOC ECH Black";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cb.paa"};
	};
	class H_mas_mar_HelmetB_paint_b: H_HelmetSpecB
	{
		displayName = "MARSOC ECH Black Paint";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cb.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_black_co.paa"};
	};
	class H_mas_mar_HelmetB_light_b: H_HelmetB_light
	{
		displayName = "MARSOC ECH Black light";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cb.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cb.paa"};
	};
	class H_mas_mar_HelmetB_w: H_HelmetSpecB
	{
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cw.paa";
		displayName = "USMC ECH arctic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cw.paa"};
	};
	class H_mas_mar_HelmetB_paint_w: H_HelmetSpecB
	{
		displayName = "USMC ECH arctic Paint";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cw.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cw.paa"};
	};
	class H_mas_mar_HelmetB_light_w: H_HelmetB_light
	{
		displayName = "USMC ECH arctic Light";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cw.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\blufor\data\equip1_cw.paa"};
	};
	class H_mas_mar_helmetv_us: H_HelmetB
	{
		displayName = "USMC Helmet wood";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmet_canvas_cv.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatsgb_co.paa"};
	};
	class H_mas_mar_helmetd_us: H_HelmetB
	{
		displayName = "USMC Helmet des";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmet_canvas_cd.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatsgb_cd.paa"};
	};
	class H_mas_mar_helmetw_us: H_HelmetB
	{
		displayName = "USMC Helmet arctic";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmet_canvas_cw.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatsgb_cw.paa"};
	};
	class H_mas_mar_helmetvgog_us: H_HelmetB
	{
		displayName = "USMC Helmet\Gog wood";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetg_canvas_cv.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_googles.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_googles.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatmggb_co.paa"};
	};
	class H_mas_mar_helmetdgog_us: H_HelmetB
	{
		displayName = "USMC Helmet\Gog des";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetg_canvas_cd.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_googles.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_googles.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatmggb_cd.paa"};
	};
	class H_mas_mar_helmetwgog_us: H_HelmetB
	{
		displayName = "USMC Helmet\Gog arctic";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetg_canvas_cw.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_googles.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_googles.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatmggb_cw.paa"};
	};
	class H_mas_mar_helmetv_wrap_us: H_HelmetB
	{
		displayName = "USMC Helmet\wrap wood";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetw_canvas_cv.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatsgb_co.paa","\mas_usa_mars\hats\data\usmc_marpwood_co.paa"};
	};
	class H_mas_mar_helmetd_wrap_us: H_HelmetB
	{
		displayName = "USMC Helmet\wrap des";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetw_canvas_cd.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatsgb_cd.paa","\mas_usa_mars\hats\data\usmc_marpdes_co.paa"};
	};
	class H_mas_mar_helmetw_wrap_us: H_HelmetB
	{
		displayName = "USMC Helmet\wrap arctic";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetw_canvas_cw.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatsgb_cw.paa","\mas_usa_mars\hats\data\usmc_marpwint_co.paa"};
	};
	class H_mas_mar_helmetvgog_wrap_us: H_HelmetB
	{
		displayName = "USMC Helmet Gog\wrap wood";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetgw_canvas_cv.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_googles_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_googles_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatmggb_co.paa","\mas_usa_mars\hats\data\usmc_marpwood_co.paa"};
	};
	class H_mas_mar_helmetdgog_wrap_us: H_HelmetB
	{
		displayName = "USMC Helmet Gog\wrap des";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetgw_canvas_cd.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_googles_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_googles_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatmggb_cd.paa","\mas_usa_mars\hats\data\usmc_marpdes_co.paa"};
	};
	class H_mas_mar_helmetwgog_wrap_us: H_HelmetB
	{
		displayName = "USMC Helmet Gog\wrap arctic";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmetgw_canvas_cw.paa";
		model = "\mas_usa_mars\hats\mas_usmchelmet_googles_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_usmchelmet_googles_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\usmc_marpatmggb_cw.paa","\mas_usa_mars\hats\data\usmc_marpwint_co.paa"};
	};
	class H_mas_mar_HelmetBind_v: H_HelmetB
	{
		displayName = "USMC Old Wood helmet";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmet_canvas_cv.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {1,3};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\indep\Data\headgear_helmet_canvas_cv.paa"};
	};
	class H_mas_mar_HelmetBind_d: H_HelmetB
	{
		displayName = "USMC Old Des helmet";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmet_canvas_cd.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {1,3};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\indep\Data\headgear_helmet_canvas_cd.paa"};
	};
	class H_mas_mar_HelmetBind_w: H_HelmetB
	{
		displayName = "USMC Old Arctic helmet";
		picture = "\mas_usa_mars\md\Data\UI\icon_h_i_helmet_canvas_cw.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {1,3};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\indep\Data\headgear_helmet_canvas_cw.paa"};
	};
	class H_mas_mar_Cap_headphones: H_Cap_headphones
	{
		displayName = "USMC Cap Headphones";
		picture = "\mas_usa_mars\md\Data\UI\icon_capb_headphones_ca.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {6};
			allowedSlots[] = {801,901,701,605};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\capb_headphones_co.paa"};
	};
	class H_mas_mar_Woolhat: H_Watchcap_blk
	{
		displayName = "USMC Woolhat";
		picture = "\mas_usa_mars\md\data\ui\icon_h_wool2_ca.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\woolhat_black_co.paa"};
	};
	class H_mas_mar_Woolhat_c: H_mas_mar_Woolhat
	{
		displayName = "USMC Woolhat camo";
		picture = "\mas_usa_mars\md\data\ui\icon_h_wool1_ca.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\woolhat_black_cu.paa"};
	};
	class H_mas_mar_Woolhat_w: H_mas_mar_Woolhat
	{
		displayName = "USMC Woolhat arctic";
		picture = "\mas_usa_mars\md\data\ui\icon_h_wool3_ca.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\woolhat_black_cw.paa"};
	};
	class H_mas_mar_Cap: H_HelmetB
	{
		displayName = "USMC cap";
		picture = "\mas_usa_mars\md\data\ui\icon_h_cap_tan_ca.paa";
		model = "\A3\Characters_F\common\capb";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\capb_mar_co.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\capb_mar_co.paa"};
	};
	class H_mas_mar_Booniehat_wood: H_Booniehat_khk
	{
		displayName = "USMC Booniehat Wood";
		picture = "\mas_usa_mars\md\data\ui\icon_h_booniehat_co.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\booniehat_mar_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 5;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_mas_mar_Booniehat_rgr: H_mas_mar_Booniehat_wood
	{
		displayName = "USMC Booniehat Wood marpat";
		picture = "\mas_usa_mars\md\data\ui\icon_h_booniehat_cv.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\booniehat_mar_cv.paa"};
	};
	class H_mas_mar_Booniehat_des: H_mas_mar_Booniehat_wood
	{
		displayName = "USMC Booniehat Des marpat";
		picture = "\mas_usa_mars\md\data\ui\icon_h_booniehat_cd.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\booniehat_mar_cd.paa"};
	};
	class H_mas_mar_Balaclava: H_HelmetB
	{
		displayName = "USMC Balaclava Headset";
		picture = "\mas_usa_mars\hats\UI\icon_h_bala.paa";
		model = "\mas_usa_mars\hats\mas_headset_bala.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sf_co.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_headset_bala.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo","camo2"};
		};
	};
	class H_mas_mar_Balaclava_ht: H_HelmetB
	{
		displayName = "USMC LCH Helmet Balaclava";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_l_bala.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_light_bala.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_light_bala.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sh_co.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
	};
	class H_mas_mar_Balaclava_b: H_HelmetB
	{
		displayName = "USMC Balaclava Headset Skull";
		picture = "\mas_usa_mars\hats\UI\icon_h_bala_s.paa";
		model = "\mas_usa_mars\hats\mas_headset_bala.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sf_co.paa","\mas_usa_mars\hats\Data\bala_cb.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_headset_bala.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo","camo2"};
		};
	};
	class H_mas_mar_Balaclava_ht_b: H_HelmetB
	{
		displayName = "USMC LCH Helmet Balaclava Black";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_lb_bala.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_light_bala.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_light_bala.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sh_cb.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
	};
	class H_mas_mar_helmet_us: H_HelmetB
	{
		displayName = "USMC MCH Helmet";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\do_helmets_cd.paa"};
	};
	class H_mas_mar_helmet_bala_us: H_HelmetB
	{
		displayName = "Marsoc MCH Helmet Balaclava";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_bala.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_bala.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_bala.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\do_helmets_cd.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
	};
	class H_mas_mar_helmet_wrap_us: H_HelmetB
	{
		displayName = "Marsoc MCH Helmet Wrap";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_wrap.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\do_helmets_cd.paa","\mas_usa_mars\hats\Data\woodland_co.paa"};
	};
	class H_mas_mar_helmet_l_us: H_HelmetB
	{
		displayName = "Marsoc LCH Helmet";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_l.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_light.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_light.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sh_co.paa"};
	};
	class H_mas_mar_helmet_l_bala_us: H_HelmetB
	{
		displayName = "Marsoc LCH Helmet Balaclava";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_l_bala.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_light_bala.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_light_bala.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sh_co.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
	};
	class H_mas_mar_helmet_g_us: H_HelmetB
	{
		displayName = "Marsoc MCH Helmet Goggles";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_g.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_googles.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_googles.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\do_helmets_co.paa"};
	};
	class H_mas_mar_helmet_g_bala_us: H_HelmetB
	{
		displayName = "Marsoc MCH Helmet Goggles Balaclava";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_g_bala.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_googles_bala.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_googles_bala.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\do_helmets_co.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
	};
	class H_mas_mar_helmet_g_wrap_us: H_HelmetB
	{
		displayName = "Marsoc MCH Helmet Goggles Wrap";
		picture = "\mas_usa_mars\hats\UI\icon_h_Helmet_us_g_wrap.paa";
		model = "\mas_usa_mars\hats\mas_ushelmet_googles_wrap.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\mas_usa_mars\hats\mas_ushelmet_googles_wrap.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 5;
			passThrough = 0.5;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\do_helmets_co.paa","\mas_usa_mars\hats\Data\woodland_co.paa"};
	};
	class H_mas_mar_headset_b: H_HelmetB
	{
		displayName = "Marsoc Headset";
		picture = "\mas_usa_mars\hats\UI\icon_h_headset.paa";
		model = "\mas_usa_mars\hats\mas_headset.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sf_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_headset.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_mas_mar_revcapheadset_b: H_HelmetB
	{
		displayName = "Marsoc Reverse cap Headset";
		picture = "\mas_usa_mars\hats\UI\icon_h_revcap_headset.paa";
		model = "\mas_usa_mars\hats\mas_reversecap_headset.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\sf_co.paa","\mas_usa_mars\hats\Data\hats_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_reversecap_headset.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo","camo2"};
		};
	};
	class H_mas_mar_woolhat_ht: H_Booniehat_khk
	{
		displayName = "USMC Woolhat Headset";
		picture = "\mas_usa_mars\md\data\ui\icon_h_wool_ht_ca.paa";
		model = "\mas_usa_mars\hats\mas_beanie_headset";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\sf_co.paa","\mas_usa_mars\hats\Data\hats_cw.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 5;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\mas_usa_mars\hats\mas_beanie_headset";
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_mas_mar_bandana: H_Bandanna_mcamo
	{
		displayName = "USMC Bandana Wood";
		picture = "\mas_usa_mars\md\data\ui\icon_h_bandanna_wood_ca.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\h_bandana_wood_co.paa"};
	};
	class H_mas_mar_bandana_v: H_Bandanna_mcamo
	{
		displayName = "USMC Bandana Mar Wood";
		picture = "\mas_usa_mars\md\data\ui\icon_h_bandanna_marw_ca.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\h_bandana_marpw_co.paa"};
	};
	class H_mas_mar_bandana_d: H_Bandanna_mcamo
	{
		displayName = "USMC Bandana Mar Des";
		picture = "\mas_usa_mars\md\data\ui\icon_h_bandanna_mard_ca.paa";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\Common\Data\h_bandana_des_co.paa"};
	};
	class H_mas_mar_off: H_HelmetB
	{
		displayName = "USMC cap Wood";
		picture = "\mas_usa_mars\hats\ui\icon_h_cap_off_co.paa";
		model = "\mas_usa_mars\hats\mas_cdrhat";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_cdrhat.p3d";
			hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_co.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_co.paa"};
	};
	class H_mas_mar_off_v: H_HelmetB
	{
		displayName = "USMC cap Mar wood";
		picture = "\mas_usa_mars\hats\ui\icon_h_cap_off_cv.paa";
		model = "\mas_usa_mars\hats\mas_cdrhat";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_cdrhat.p3d";
			hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_cv.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_cv.paa"};
	};
	class H_mas_mar_off_d: H_HelmetB
	{
		displayName = "USMC cap Mar Des";
		picture = "\mas_usa_mars\hats\ui\icon_h_cap_off_cd.paa";
		model = "\mas_usa_mars\hats\mas_cdrhat";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_cdrhat.p3d";
			hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_cd.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_cd.paa"};
	};
	class H_mas_mar_off_g: H_HelmetB
	{
		displayName = "USMC cap Green";
		picture = "\mas_usa_mars\hats\ui\icon_h_cap_off_cg.paa";
		model = "\mas_usa_mars\hats\mas_cdrhat";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\mas_usa_mars\hats\mas_cdrhat.p3d";
			hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_cg.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\Data\us_officer_equip_cg.paa"};
	};
	class H_mas_mar_pro_ht: H_HelmetB
	{
		displayName = "USMC Pro Helmet Camo";
		picture = "\mas_usa_mars\hats\UI\icon_h_prohelmet_c.paa";
		model = "\mas_usa_mars\hats\mas_prohelmet.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\prohelmet_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\mas_usa_mars\hats\mas_prohelmet.p3d";
			modelSides[] = {3,1};
			armor = 4;
			passThrough = 0.75;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_mas_mar_helmet_pro_bala: H_HelmetB
	{
		displayName = "USMC Pro Helmet Camo Balaclava";
		picture = "\mas_usa_mars\hats\UI\icon_h_prohelmet_bala.paa";
		model = "\mas_usa_mars\hats\mas_prohelmet_bala.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\mas_usa_mars\hats\mas_prohelmet_bala.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 4;
			passThrough = 0.75;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\prohelmet_co.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
	};
	class H_mas_mar_pro_ht_v: H_HelmetB
	{
		displayName = "USMC Pro Helmet Camo2";
		picture = "\mas_usa_mars\hats\UI\icon_h_prohelmet_c.paa";
		model = "\mas_usa_mars\hats\mas_prohelmet.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\prohelmet_cv.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\mas_usa_mars\hats\mas_prohelmet.p3d";
			modelSides[] = {3,1};
			armor = 4;
			passThrough = 0.75;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_mas_mar_pro_ht_d: H_HelmetB
	{
		displayName = "USMC Pro Helmet Tan";
		picture = "\mas_usa_mars\hats\UI\icon_h_prohelmet_d.paa";
		model = "\mas_usa_mars\hats\mas_prohelmet.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\prohelmet_cd.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\mas_usa_mars\hats\mas_prohelmet.p3d";
			modelSides[] = {3,1};
			armor = 4;
			passThrough = 0.75;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_mas_mar_pro_ht_b: H_HelmetB
	{
		displayName = "USMC Pro Helmet Black";
		picture = "\mas_usa_mars\hats\UI\icon_h_prohelmet_b.paa";
		model = "\mas_usa_mars\hats\mas_prohelmet.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\prohelmet_cb.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\mas_usa_mars\hats\mas_prohelmet.p3d";
			modelSides[] = {3,1};
			armor = 4;
			passThrough = 0.75;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_mas_mar_helmet_pro_bala_b: H_HelmetB
	{
		displayName = "USMC Pro Helmet Black Balaclava";
		picture = "\mas_usa_mars\hats\UI\icon_h_prohelmet_b_bala.paa";
		model = "\mas_usa_mars\hats\mas_prohelmet_bala.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\mas_usa_mars\hats\mas_prohelmet_bala.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2"};
			armor = 4;
			passThrough = 0.75;
		};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\hats\data\prohelmet_cb.paa","\mas_usa_mars\hats\Data\bala_co.paa"};
	};
	class H_mas_mar_HelmetB_camo: H_HelmetB
	{
		displayName = "USMC ECH(camo)";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\BLUFOR\Data\equip1_cg.paa","\A3\characters_f\common\data\ghillie2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo1","camo2"};
		};
	};
	class H_mas_mar_HelmetB_plain: H_HelmetB
	{
		displayName = "USMC ECH Green(plain)";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_cg.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\BLUFOR\Data\equip1_cg.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			armor = 5;
			passThrough = 0.5;
		};
	};
	class H_mas_mar_HelmetB_plain_d: H_HelmetB
	{
		displayName = "USMC ECH Tan(plain)";
		picture = "\mas_usa_mars\md\Data\UI\icon_H_HelmetB_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\mas_usa_mars\md\BLUFOR\Data\equip1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			armor = 5;
			passThrough = 0.5;
		};
	};
	class arifle_mas_m16_mt: arifle_mas_m16
	{
		displayName = "M16A4 Acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_gl_mt: arifle_mas_m16_gl
	{
		displayName = "M16A4 M203 Acog";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mas_acog_rd";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_mh: arifle_mas_m16
	{
		displayName = "M16A4 Hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_gl_mh: arifle_mas_m16_gl
	{
		displayName = "M16A4 M203 Hamr";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_mti: arifle_mas_m16
	{
		displayName = "M16A4 Nightstalker";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Nightstalker";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_m16_gl_mti: arifle_mas_m16_gl
	{
		displayName = "M16A4 M203 Nightstalker";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Nightstalker";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_mas_pointer_IR";
			};
		};
	};
};
class CfgGroups
{
	class West
	{
		class mas_usa_mars
		{
			name = "US Marines Corps(Alive)";
			class Infantry
			{
				name = "Infantry Detachment";
				class BUS_mas_mar_InfSquad_alive
				{
					name = "Assault Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_v";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "SERGEANT";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_M_F_v";
						rank = "CORPORAL";
						position[] = {18,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "SERGEANT";
						position[] = {21,0,0};
					};
				};
				class BUS_mas_mar_InfSquad_Weapons_alive
				{
					name = "Fire Support Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_v";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "SERGEANT";
						position[] = {8,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_JTAC_F_v";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_v";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "SERGEANT";
						position[] = {17,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_alive
				{
					name = "Combat Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_v";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AT_alive
				{
					name = "Team Anti-Tank";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AA_alive
				{
					name = "Team Anti-Air";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfSentry_alive
				{
					name = "Security Patrol";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_v";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class SpecOps
			{
				name = "SpecOps Detachment";
				class BUS_mas_mar_InfTeam_a_alive
				{
					name = "Strike Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_a_alive
				{
					name = "Recon Team(Light)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_an_alive
				{
					name = "Recon Team(Heavy)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_recn";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_recn";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_recn";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_recn";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_recn";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfSniper_a_alive
				{
					name = "Sniper Team(Ghillie)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Sg_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Mhg_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class Support
			{
				name = "Support Detachment";
				class BUS_mas_mar_Support_CLS_alive
				{
					name = "Combat Medic Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_v";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_Support_EOD_alive
				{
					name = "Combat EOD Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_Support_ENG_alive
				{
					name = "Combat Engineer Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_repair_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_repair_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Detachment";
				class BUS_mas_mar_Motrec1_Team_alive
				{
					name = "Offroad SF Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_F_rec";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_F";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_recn";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F_rec";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_recn";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class BUS_mas_mar_Motrec2_Team_alive
				{
					name = "Offroad SF MG Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_armed_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_armed_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_armed_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MotInf_Team_alive
				{
					name = "Motorized Assault Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MotInf_Team_med_alive
				{
					name = "Motorized Medic Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_med_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_MotInf_AT_alive
				{
					name = "Motorized Anti-Tank Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_MotInf_AA_alive
				{
					name = "Motorized Anti-Air Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Detachment";
				class BUS_mas_mar_MechInf_T_alive
				{
					name = "Mechanized Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_v";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "SERGEANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_APC_Wheeled_01_cannon_F";
						rank = "SERGEANT";
						position[] = {18,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
			};
		};
		class BLU_mas_mar_marine_F
		{
			name = "US Marines Corps";
			class Infantry_mas_mar
			{
				name = "USMC Detachment MARSOC";
				class BUS_mas_mar_InfSquad
				{
					name = "Assault Detachment";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F";
						rank = "SERGEANT";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_M_F";
						rank = "CORPORAL";
						position[] = {18,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F";
						rank = "SERGEANT";
						position[] = {21,0,0};
					};
				};
				class BUS_mas_mar_InfSquad_Weapons
				{
					name = "Fire Support Detachment";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F";
						rank = "SERGEANT";
						position[] = {8,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F";
						rank = "SERGEANT";
						position[] = {17,0,0};
					};
				};
				class BUS_mas_mar_InfTeam
				{
					name = "Strike Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AT
				{
					name = "Team Anti-Tank";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AA
				{
					name = "Team Anti-Air";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfSentry
				{
					name = "Security Patrol";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec
				{
					name = "Recon Team(Light)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_recn
				{
					name = "Recon Team(Heavy)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_recn";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_recn";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_recn";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_recn";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_recn";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfSniper
				{
					name = "Sniper Team(Ghillie)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Sg_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Mhg_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class Infantry_mas_mar_v
			{
				name = "USMC Detachment Woodland";
				class BUS_mas_mar_InfSquad_v
				{
					name = "Rifle Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_v";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "SERGEANT";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_M_F_v";
						rank = "CORPORAL";
						position[] = {18,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "SERGEANT";
						position[] = {21,0,0};
					};
				};
				class BUS_mas_mar_InfSquad_Weapons_v
				{
					name = "Fire Support Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_v";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "SERGEANT";
						position[] = {8,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_v";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_v";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "SERGEANT";
						position[] = {17,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_v
				{
					name = "Fire Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_v";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AT_v
				{
					name = "Team Anti-Tank";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AA_v
				{
					name = "Team Anti-Air";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfSentry_v
				{
					name = "Security Patrol";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_v";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_v
				{
					name = "Recon Team(Light)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec_v";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec_v";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec_v";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_vn
				{
					name = "Recon Team(Heavy)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec_vn";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec_vn";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec_vn";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec_vn";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec_vn";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfSniper_v
				{
					name = "Sniper Team(Ghillie)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Sg_F_v";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Mhg_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class Infantry_mas_mar_d
			{
				name = "USMC Detachment Desert";
				class BUS_mas_mar_InfSquad_d
				{
					name = "Rifle Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_d";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_d";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_d";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_d";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_d";
						rank = "SERGEANT";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_M_F_d";
						rank = "CORPORAL";
						position[] = {18,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_d";
						rank = "SERGEANT";
						position[] = {21,0,0};
					};
				};
				class BUS_mas_mar_InfSquad_Weapons_d
				{
					name = "Fire Support Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_d";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_d";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_d";
						rank = "SERGEANT";
						position[] = {8,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_d";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_d";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_d";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_d";
						rank = "SERGEANT";
						position[] = {17,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_d
				{
					name = "Rifle Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F_d";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_d";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_d";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AT_d
				{
					name = "Team Anti-Tank";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_d";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_d";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AA_d
				{
					name = "Team Anti-Air";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_d";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_d";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfSentry_d
				{
					name = "Security Patrol";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_d";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_d";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_d
				{
					name = "Recon Team(Light)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec_d";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec_d";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec_d";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec_d";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_dn
				{
					name = "Recon Team(Heavy)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec_dn";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec_dn";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec_dn";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec_dn";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec_dn";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfSniper_d
				{
					name = "Sniper Team(Ghillie)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Sg_F_d";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Mhg_F_d";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class Infantry_mas_mar_g
			{
				name = "USMC MARSOC DA Detachment";
				class BUS_mas_mar_InfSquad_g
				{
					name = "Assault Detachment";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_g";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_g";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_g";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_g";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_gn";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_g";
						rank = "LIEUTENANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_g";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_g";
						rank = "SERGEANT";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_M_F_gn";
						rank = "CORPORAL";
						position[] = {18,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_g";
						rank = "SERGEANT";
						position[] = {21,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_g
				{
					name = "Strike Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_g";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F_g";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_g";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_g";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfSentry_g
				{
					name = "Demo Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_g";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_g";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class BUS_mas_mar_InfSniper_g
				{
					name = "Sniper Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_g";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_gn";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class Infantry_mas_mar_w
			{
				name = "USMC Detachment Arctic";
				class BUS_mas_mar_InfSquad_w
				{
					name = "Rifle Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_w";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_w";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_w";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_w";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_w";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_w";
						rank = "LIEUTENANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_w";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_w";
						rank = "SERGEANT";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_M_F_w";
						rank = "CORPORAL";
						position[] = {18,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_w";
						rank = "SERGEANT";
						position[] = {21,0,0};
					};
				};
				class BUS_mas_mar_InfSquad_Weapons_w
				{
					name = "Fire Support Squad";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_w";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_w";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_w";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_w";
						rank = "SERGEANT";
						position[] = {8,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_w";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_w";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_w";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_w";
						rank = "SERGEANT";
						position[] = {17,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_w
				{
					name = "Fire Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_w";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F_w";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_w";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_w";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AT_w
				{
					name = "Team Anti-Tank";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_w";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_w";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_w";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_w";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_AA_w
				{
					name = "Team Anti-Air";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_w";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_w";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_w";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_w";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_InfSentry_w
				{
					name = "Security Patrol";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_GL_F_w";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_w";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_w
				{
					name = "Recon Team(Light)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec_w";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec_w";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec_w";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec_w";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec_w";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfTeam_rec_wn
				{
					name = "Recon Team(Heavy)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_TL_F_rec_wn";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_rec_wn";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_rec_wn";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec_wn";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_F_rec_wn";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_InfSniper_w
				{
					name = "Sniper Team(Ghillie)";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Sg_F_w";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_Mhg_F_w";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class Divers_mas_mar
			{
				name = "USMC Divers Detachment";
				class BUS_mas_mar_DiverTeam
				{
					name = "Diver Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_diver_TL_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_diver_exp_F";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_diver_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_diver_medic_F";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_DiverTeam_Boat
				{
					name = "Diver Boat Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_diver_TL_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Boat_Transport_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_diver_exp_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_diver_F";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_diver_medic_F";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class BUS_mas_mar_DiverTeam_sdv
				{
					name = "Diver SDV Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_diver_TL_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_SDV_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_diver_medic_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
			};
			class Support_mas_mar_v
			{
				name = "USMC CBT Support Detachment Wood";
				class BUS_mas_mar_Support_CLS_v
				{
					name = "Combat Medic Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_v";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_Support_EOD_v
				{
					name = "Combat EOD Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_Support_ENG_v
				{
					name = "Combat Engineer Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_repair_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_repair_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Support_mas_mar_d
			{
				name = "USMC CBT Support Detachment Des";
				class BUS_mas_mar_Support_CLS_d
				{
					name = "Combat Medic Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_d";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_d";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_d";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_Support_EOD_d
				{
					name = "Combat EOD Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_d";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_exp_F_d";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_Support_ENG_d
				{
					name = "Combat Engineer Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_JTAC_F_d";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_repair_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_repair_F_d";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Motorized_mas_mar
			{
				name = "USMC Motorized Detachment";
				class BUS_mas_mar_Motreclight_Team
				{
					name = "Motorized MARSOC Recon";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Quadbike_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_recn";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Quadbike_01_F";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_Motrec1_Team
				{
					name = "Offroad MARSOC Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_F_rec";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_F";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_medic_F_recn";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_AR_F_rec";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_recn";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_M_F_rec";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class BUS_mas_mar_Motrec2_Team
				{
					name = "Offroad MG MARSOC Team";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_armed_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_armed_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_Offroad_01_armed_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MotInf_Team_v
				{
					name = "Motorized Fire Team Wood";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MotInf_Team_med_v
				{
					name = "Motorized Medic Team Wood";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MotInf_AT_v
				{
					name = "Motorized Anti-Tank Team Wood";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_MotInf_AA_v
				{
					name = "Motorized Anti-Air Team Wood";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MechInf_T_v
				{
					name = "Mechanized Squad Wood";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_v";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_v";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_v";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_JTAC_F_v";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_v";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_v";
						rank = "SERGEANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_v";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_APC_Wheeled_01_cannon_F";
						rank = "SERGEANT";
						position[] = {18,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_v";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class BUS_mas_mar_MotInf_Team_d
				{
					name = "Motorized Fire Team Des";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MotInf_Team_med_d
				{
					name = "Motorized Medic Team Des";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MotInf_AT_d
				{
					name = "Motorized Anti-Tank Team Des";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_d";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class BUS_mas_mar_MotInf_AA_d
				{
					name = "Motorized Anti-Air Team Des";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_d";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_MRAP_01_hmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAA_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_mas_mar_MechInf_T_d
				{
					name = "Mechanized Squad Des";
					side = 1;
					faction = "mas_usa_mars";
					class Unit0
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_SL_F_d";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_TL_F_d";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AR_F_d";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_mas_mar_Soldier_JTAC_F_d";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_LAT_F_d";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_AT_F_d";
						rank = "SERGEANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_mas_mar_soldier_MG_F_d";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_mas_mar_APC_Wheeled_01_cannon_F";
						rank = "SERGEANT";
						position[] = {18,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_mas_mar_Medic_F_d";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
			};
		};
	};
};