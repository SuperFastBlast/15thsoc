class CfgPatches
{
	class asdg_jointrails_mas_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.05;
		requiredAddons[] = {"A3_Weapons_F","mas_weapons","mas_weapons_ak","mas_weapons_m4","mas_weapons_nw","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		acc_mas_pointer_IR = 1;
	};
};
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		optic_mas_zeiss = 1;
		optic_mas_zeiss_c = 1;
		optic_mas_zeiss_eo = 1;
		optic_mas_zeiss_eo_c = 1;
		optic_mas_acog = 1;
		optic_mas_acog_c = 1;
		optic_mas_acog_eo = 1;
		optic_mas_acog_eo_c = 1;
		optic_mas_acog_rd = 1;
		optic_mas_DMS = 1;
		optic_mas_acog_rd_c = 1;
		optic_mas_handle = 1;
		optic_mas_aim = 1;
		optic_mas_aim_c = 1;
		optic_mas_term = 1;
		optic_mas_Holosight_blk = 1;
		optic_mas_Arco_blk = 1;
		optic_mas_DMS_c = 1;
		optic_mas_Holosight_camo = 1;
		optic_mas_Arco_camo = 1;
		optic_mas_Hamr_camo = 1;
		optic_mas_Aco_camo = 1;
		optic_mas_ACO_grn_camo = 1;
		optic_mas_MRCO_camo = 1;
	};
};
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems
	{
		optic_mas_pso = 1;
		optic_mas_pso_c = 1;
		optic_mas_pso_eo = 1;
		optic_mas_pso_eo_c = 1;
		optic_mas_pso_nv = 1;
		optic_mas_pso_nv_c = 1;
		optic_mas_pso_nv_eo = 1;
		optic_mas_pso_nv_eo_c = 1;
	};
};
class CfgWeapons
{
	class arifle_Katiba_F;
	class arifle_mas_ak_74m: arifle_Katiba_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_AK74M: asdg_FrontSideRail{};
			class asdg_OpticRail_AK74M: asdg_OpticSideMount{};
		};
	};
	class arifle_mas_ak_74m_sf: arifle_mas_ak_74m
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_AK74MSF: asdg_FrontSideRail{};
			class asdg_OpticRail_AK74MSF: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_akms: arifle_mas_ak_74m
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_AKMS: asdg_FrontSideRail{};
			class asdg_OpticRail_AKMS: asdg_OpticSideMount{};
		};
	};
	class arifle_Katiba_GL_F;
	class arifle_mas_ak_74m_gl: arifle_Katiba_GL_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_AK74MGL: asdg_FrontSideRail{};
			class asdg_OpticRail_AK74MGL: asdg_OpticSideMount{};
		};
	};
	class arifle_mas_ak_74m_sf_gl: arifle_mas_ak_74m_gl
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_AK74MGLSF: asdg_FrontSideRail{};
			class asdg_OpticRail_AK74MGLSF: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_akms_gl: arifle_mas_ak_74m_gl
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_AKMSGL: asdg_FrontSideRail{};
			class asdg_OpticRail_AKMSGL: asdg_OpticSideMount{};
		};
	};
	class srifle_EBR_F;
	class srifle_mas_svd: srifle_EBR_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SVD: asdg_FrontSideRail{};
			class asdg_OpticRail_SVD: asdg_OpticSideMount{};
		};
	};
	class srifle_GM6_F;
	class srifle_mas_ksvk: srifle_GM6_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_KSVK: asdg_FrontSideRail{};
			class asdg_OpticRail_KSVK: asdg_OpticSideMount{};
		};
	};
	class LMG_Mk200_F;
	class LMG_mas_pkm_F: LMG_Mk200_F
	{
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_PKM: asdg_OpticSideMount{};
		};
	};
	class arifle_mas_aks74u: arifle_Katiba_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_AKSU: asdg_FrontSideRail{};
			class asdg_OpticRail_AKSU: asdg_OpticSideMount{};
		};
	};
	class arifle_mas_bizon: arifle_mas_aks74u
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_BIZON: asdg_FrontSideRail{};
			class asdg_OpticRail_BIZON: asdg_OpticSideMount{};
		};
	};
	class arifle_mas_saiga: arifle_mas_ak_74m
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_SAIGA: asdg_FrontSideRail{};
			class asdg_OpticRail_SAIGA: asdg_OpticSideMount{};
		};
	};
	class arifle_MX_F;
	class arifle_mas_hk416: arifle_MX_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_HK416: asdg_FrontSideRail{};
			class asdg_OpticRail_HK416: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_mk16: arifle_mas_hk416
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_mk16: asdg_FrontSideRail{};
			class asdg_OpticRail_mk16: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_m16: arifle_mas_hk416
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M16: asdg_FrontSideRail{};
			class asdg_OpticRail_M16: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_m4: arifle_mas_hk416
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M4: asdg_FrontSideRail{};
			class asdg_OpticRail_M4: asdg_OpticRail1913{};
		};
	};
	class M4Car: arifle_mas_hk416
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M4CAR: asdg_FrontSideRail{};
			class asdg_OpticRail_M4CAR: asdg_OpticRail1913{};
		};
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_HK416GL: asdg_FrontSideRail{};
			class asdg_OpticRail_HK416GL: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_hk416_m203: arifle_mas_hk416_gl
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_HK416M203: asdg_FrontSideRail{};
			class asdg_OpticRail_HK416M203: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_mk16_gl: arifle_mas_hk416_gl
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_mk16_gl: asdg_FrontSideRail{};
			class asdg_OpticRail_mk16_gl: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_m16_gl: arifle_mas_hk416_gl
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M16GL: asdg_FrontSideRail{};
			class asdg_OpticRail_M16GL: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_m4_gl: arifle_mas_hk416_gl
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M4GL: asdg_FrontSideRail{};
			class asdg_OpticRail_M4GL: asdg_OpticRail1913{};
		};
	};
	class M4Car203: arifle_mas_hk416_gl
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_HK416GL: asdg_FrontSideRail{};
			class asdg_OpticRail_HK416GL: asdg_OpticRail1913{};
		};
	};
	class srifle_mas_hk417: srifle_EBR_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_HK417: asdg_FrontSideRail{};
			class asdg_OpticRail_HK417: asdg_OpticRail1913{};
		};
	};
	class srifle_mas_m110: srifle_mas_hk417
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M110: asdg_FrontSideRail{};
			class asdg_OpticRail_M110: asdg_OpticSideMount{};
		};
	};
	class srifle_mas_mk17s: srifle_mas_hk417
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_mk17s: asdg_FrontSideRail{};
			class asdg_OpticRail_mk17s: asdg_OpticRail1913{};
		};
	};
	class srifle_mas_ebr: srifle_EBR_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_EBR: asdg_FrontSideRail{};
			class asdg_OpticRail_EBR: asdg_OpticRail1913{};
		};
	};
	class SMG_02_F;
	class arifle_mas_mp5: SMG_02_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_MP5: asdg_FrontSideRail{};
			class asdg_OpticRail_MP5: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_mp5sd: SMG_02_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_MP5SD: asdg_FrontSideRail{};
			class asdg_OpticRail_MP5SD: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_m1014: arifle_mas_hk416
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M1014: asdg_FrontSideRail{};
			class asdg_OpticRail_M1014: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_g3: arifle_mas_hk416
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_G3: asdg_FrontSideRail{};
			class asdg_OpticRail_G3: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_g3_m203: arifle_mas_hk416_m203
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_G3GL: asdg_FrontSideRail{};
			class asdg_OpticRail_G3GL: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_fal: arifle_mas_hk416
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_FAL: asdg_FrontSideRail{};
			class asdg_OpticRail_FAL: asdg_OpticRail1913{};
		};
	};
	class arifle_mas_fal_m203: arifle_mas_hk416_m203
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_FALGL: asdg_FrontSideRail{};
			class asdg_OpticRail_FALGL: asdg_OpticRail1913{};
		};
	};
	class srifle_LRR_F;
	class srifle_mas_m24: srifle_LRR_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M24: asdg_FrontSideRail{};
			class asdg_OpticRail_M24: asdg_OpticRail1913{};
		};
	};
	class srifle_mas_m107: srifle_GM6_F
	{
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_M107: asdg_OpticRail1913{};
		};
	};
	class LMG_mas_Mk200_F: LMG_Mk200_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_Mk200: asdg_FrontSideRail{};
			class asdg_OpticRail_Mk200: asdg_OpticRail1913{};
		};
	};
	class LMG_mas_M249_F: LMG_Mk200_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_M249: asdg_FrontSideRail{};
			class asdg_OpticRail_M249: asdg_OpticRail1913{};
		};
	};
	class LMG_mas_mk48_F: LMG_Mk200_F
	{
		class WeaponSlotsInfo
		{
			class asdg_FrontSideRail_Mk48: asdg_FrontSideRail{};
			class asdg_OpticRail_Mk48: asdg_OpticRail1913{};
		};
	};
	class LMG_mas_m240_F: LMG_mas_mk48_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_FrontSideRail_Mk48{};
		};
	};
	class LMG_mas_mg3_F: LMG_mas_m240_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_OpticRail_Mk48{};
		};
	};
};