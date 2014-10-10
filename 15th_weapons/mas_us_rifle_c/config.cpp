
class CfgPatches
{
	class mas_weapons
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {"Box_mas_all_rifle_Wps_F"};
		weapons[] = {"acc_mas_pointer_IR","muzzle_mas_snds_L","muzzle_mas_snds_LM","muzzle_mas_snds_C","muzzle_mas_snds_M","muzzle_mas_snds_Mc","muzzle_mas_snds_AK","muzzle_mas_snds_SM","muzzle_mas_snds_SMc","muzzle_mas_snds_SH","muzzle_mas_snds_SHc","muzzle_mas_snds_SV","muzzle_mas_snds_SVc","muzzle_mas_snds_SVD","muzzle_mas_snds_KSVK","optic_mas_DMS","optic_mas_DMS_c","optic_mas_Holosight_blk","optic_mas_Holosight_camo","optic_mas_Arco_blk","optic_mas_Arco_camo","optic_mas_Hamr_camo","optic_mas_Aco_camo","optic_mas_ACO_grn_camo","optic_mas_MRCO_camo","optic_mas_zeiss","optic_mas_zeiss_c","optic_mas_zeiss_eo","optic_mas_zeiss_eo_c","optic_mas_acog","optic_mas_acog_c","optic_mas_acog_eo","optic_mas_acog_eo_c","optic_mas_acog_rd","optic_mas_acog_rd_c","optic_mas_handle","optic_mas_aim","optic_mas_aim_c","optic_mas_pso","optic_mas_pso_c","optic_mas_pso_eo","optic_mas_pso_eo_c","optic_mas_pso_nv","optic_mas_pso_nv_c","optic_mas_pso_nv_eo","optic_mas_pso_nv_eo_c","optic_mas_term","hgun_mas_usp_F","hgun_mas_usp_l_F","hgun_mas_m23_F","hgun_mas_m23_l_F","hgun_mas_acp_F","hgun_mas_acp_F_sd","hgun_mas_m9_F","hgun_mas_bhp_F","hgun_mas_glock_F","hgun_mas_glocksf_F","hgun_mas_grach_F","hgun_mas_grach_F_sd","hgun_mas_mak_F","hgun_mas_usp_F_sd","hgun_mas_m23_F_sd","hgun_mas_m23_l_F_sd","hgun_mas_usp_l_F_sd","hgun_mas_m9_F_sd","hgun_mas_bhp_F_sd","hgun_mas_glock_F_sd","hgun_mas_glocksf_F_sd","hgun_mas_mak_F_sd","hgun_mas_sa61_F","hgun_mas_sa61_F_sd","hgun_mas_uzi_F","hgun_mas_uzi_F_sd","NVGoggles_mas","NVGoggles_o_mas","NVGoggles_mas_mask","NVGoggles_mas_mask2","NVGoggles_mas_mask_b","NVGoggles_mas_mask2_b","NVGoggles_mas_mask_t","NVGoggles_mas_mask2_t","NVGoggles_mas_mask3","mas_launch_RPG7_F","mas_launch_RPG18_F","mas_launch_M136_F","mas_launch_stinger_F","mas_launch_strela_F","mas_launch_MAAWS_F","launch_mas_sting_F","launch_mas_RPG32AA_F"};
		magazines[] = {"mas_PG7V","mas_OG7","mas_PG18","mas_M136","mas_MAAWS","mas_Stinger","mas_Strela","Sting_mas_AA_F","RPG32_mas_AA_F","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x54_mag","100Rnd_mas_762x54_T_mag","100Rnd_mas_762x39_mag","100Rnd_mas_762x39_T_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","100Rnd_mas_545x39_mag","100Rnd_mas_545x39_T_mag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","5Rnd_mas_762x51_Stanag","5Rnd_mas_762x51_T_Stanag","30Rnd_mas_762x39_mag","30Rnd_mas_762x39_T_mag","10Rnd_mas_762x54_mag","10Rnd_mas_762x54_T_mag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_dem_Stanag","5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x108_mag","5Rnd_mas_127x108_dem_mag","5Rnd_mas_127x108_T_mag","30Rnd_mas_9x21_Stanag","30Rnd_mas_9x21d_Stanag","12Rnd_mas_45acp_Mag","10Rnd_mas_45acp_Mag","8Rnd_mas_45acp_Mag","15Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","13Rnd_mas_9x21_Mag","8Rnd_mas_9x18_mag","7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets","10Rnd_mas_12Gauge_Slug","10Rnd_mas_12Gauge_Pellets","64Rnd_mas_9x18_mag","20Rnd_mas_765x17_Mag","25Rnd_mas_9x19_Mag","M80_Ball_100Rnd_762x51","M80_Ball_Tracer_100Rnd_762x51","M855A1_M4_30Rnd","M855A1_tracer_M4_30Rnd","M855A1_M16_30Rnd","M855A1_tracer_M16_30Rnd","M249_200Rnd_556x45_Stanag","M249_200Rnd_556x45_Stanag_tracer","M855A1_tracer_M27IAR","M855A1_M27IAR","M882_9mm","T2AAF_45ACP"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class Rifle_Base_F;
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class muzzle_snds_H;
	class muzzle_snds_L;
	class muzzle_snds_M;
	class muzzle_snds_B;
	class muzzle_snds_H_MG;
	class optic_Hamr;
	class optic_Arco;
	class optic_Holosight;
	class optic_Aco;
	class optic_ACO_grn;
	class optic_MRCO;
	class optic_SOS;
	class hgun_P07_F;
	class hgun_Rook40_F;
	class hgun_ACPC2_F;
	class launch_NLAW_F;
	class launch_RPG32_F;
	class launch_Titan_F;
	class launch_Titan_short_F;
	class Launcher_Base_F;
	class NVGoggles;
	class NVGoggles_OPFOR;
	class acc_pointer_IR;
	class ARCO2collimator;
	class optic_DMS;
	class acc_mas_pointer_IR: acc_pointer_IR
	{
		displayName = "IR Pointer";
		picture = "\mas_us_rifle\UI\gear_laser_ca.paa";
		model = "\mas_us_rifle\acc\mas_laser";
	};
	class muzzle_mas_snds_M: muzzle_snds_H
	{
		displayName = "Sound Supp M4\M16\HK";
		model = "\mas_us_rifle\acc\mas_rsupp";
		picture = "\mas_us_rifle\UI\gear_rsupp_ca.paa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_mas_snds_Mc: muzzle_mas_snds_M
	{
		displayName = "Sound Supp M4\M16\HK Camo";
		model = "\mas_us_rifle\acc\mas_rsupp_c";
		picture = "\mas_us_rifle\UI\gear_rsupc_ca.paa";
	};
	class muzzle_mas_snds_AK: muzzle_mas_snds_M
	{
		displayName = "Sound Supp PBS(AKs)";
		model = "\mas_ru_rifle\acc\mas_aksupp";
		picture = "\mas_ru_rifle\UI\gear_aksupp_ca.paa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_mas_snds_C: muzzle_mas_snds_M
	{
		displayName = "Sound Supp SMGs";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\A3\weapons_f\acc\acca_snds_l_F";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_mas_snds_L: muzzle_mas_snds_M
	{
		displayName = "Sound Supp Pistols/UZI";
		model = "\mas_us_rifle\acc\mas_psupp";
		picture = "\mas_us_rifle\UI\gear_psupp_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_mas_snds_LM: muzzle_mas_snds_L
	{
		displayName = "Sound Supp Makarov/SA61";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\A3\weapons_f\acc\acca_snds_l_F";
	};
	class muzzle_mas_snds_SM: muzzle_mas_snds_M
	{
		displayName = "Sound Supp SCAR/HK417S/SR25";
		model = "\mas_us_rifle\acc\mas_ssupp";
		picture = "\mas_us_rifle\UI\gear_rsupp_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_mas_snds_SMc: muzzle_mas_snds_SM
	{
		displayName = "Sound Supp SCAR/HK417S/SR25 Camo";
		model = "\mas_us_rifle\acc\mas_ssupp_c";
		picture = "\mas_us_rifle\UI\gear_rsupc_ca.paa";
	};
	class muzzle_mas_snds_SH: muzzle_mas_snds_M
	{
		displayName = "Sound Supp M24";
		model = "\mas_us_rifle\acc\mas_ssupp";
		picture = "\mas_us_rifle\UI\gear_rsupp_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_mas_snds_SHc: muzzle_mas_snds_SH
	{
		displayName = "Sound Supp M24 Camo";
		model = "\mas_us_rifle\acc\mas_ssupp_c";
		picture = "\mas_us_rifle\UI\gear_rsupc_ca.paa";
	};
	class muzzle_mas_snds_SV: muzzle_mas_snds_M
	{
		displayName = "Sound Supp M107";
		model = "\mas_us_rifle\acc\mas_ssupp";
		picture = "\mas_us_rifle\UI\gear_rsupp_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_mas_snds_SVc: muzzle_mas_snds_SV
	{
		displayName = "Sound Supp M107 Camo";
		model = "\mas_us_rifle\acc\mas_ssupp_c";
		picture = "\mas_us_rifle\UI\gear_rsupc_ca.paa";
	};
	class muzzle_mas_snds_SVD: muzzle_mas_snds_SM
	{
		displayName = "Sound Supp PBS(SVD)";
		model = "\mas_ru_rifle\acc\mas_aksupp";
		picture = "\mas_ru_rifle\UI\gear_aksupp_ca.paa";
	};
	class muzzle_mas_snds_KSVK: muzzle_mas_snds_SVD
	{
		displayName = "Sound Supp PBS(KSVK)";
		model = "\mas_ru_rifle\acc\mas_aksupp";
		picture = "\mas_ru_rifle\UI\gear_aksupp_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 4;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class optic_mas_zeiss: optic_SOS
	{
		displayName = "Zeiss";
		picture = "\mas_us_rifle\UI\gear_acco_zeiss_ca.paa";
		model = "\mas_us_rifle\acc\mas_zeiss";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			RMBhint = "Zeiss Sniper Sight";
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.04;
					opticsZoomInit = 0.04;
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1200,1400,1600,2000,2300};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 2300;
					discretefov[] = {0.04,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F","\A3\Weapons_F\acc\reticle_sniper_z_F"};
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Iron: Snip
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};
	class optic_mas_zeiss_c: optic_mas_zeiss
	{
		displayName = "Zeiss camo";
		model = "\mas_us_rifle\acc\mas_zeiss_c";
		picture = "\mas_us_rifle\UI\w\gear_acco_zeiss_ca.paa";
	};
	class optic_mas_zeiss_eo: optic_mas_zeiss
	{
		displayName = "Zeiss Holo";
		picture = "\mas_us_rifle\UI\gear_acco_zeiss_ca.paa";
		model = "\mas_us_rifle\acc\mas_zeiss_eo";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
	};
	class optic_mas_zeiss_eo_c: optic_mas_zeiss_eo
	{
		displayName = "Zeiss Holo camo";
		model = "\mas_us_rifle\acc\mas_zeiss_eo_c";
		picture = "\mas_us_rifle\UI\w\gear_acco_zeiss_ca.paa";
	};
	class optic_mas_DMS: optic_mas_zeiss_eo
	{
		displayName = "Leupold Holo";
		picture = "\A3\Weapons_F_EPA\Acc\data\UI\gear_acco_dms_CA.paa";
		model = "\A3\Weapons_F_EPA\Acc\acco_marksman_F.p3d";
		descriptionShort = "$STR_A3_CFGWEAPONS_ACC_DMS1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			RMBhint = "Zeiss Sniper Sight";
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.04;
					opticsZoomInit = 0.04;
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1200,1400,1600,2000,2300};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 2300;
					discretefov[] = {0.04,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F","\A3\Weapons_F\acc\reticle_sniper_z_F"};
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Iron: Snip
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};
	class optic_mas_DMS_c: optic_mas_DMS
	{
		displayName = "Leupold Holo camo";
		model = "\mas_us_rifle\acc\acco_marksman_F.p3d";
		picture = "\mas_us_rifle\UI\gear_acco_dms_ca.paa";
	};
	class optic_mas_Holosight_blk: optic_Holosight
	{
		displayName = "Holosight black";
		model = "\mas_us_rifle\acc\acco_EOTxps3_b_F";
		picture = "\mas_us_rifle\UI\gear_acco_holo_b_ca.paa";
	};
	class optic_mas_Holosight_camo: optic_Holosight
	{
		displayName = "Holosight camo";
		model = "\mas_us_rifle\acc\acco_EOTxps3_F";
		picture = "\mas_us_rifle\UI\gear_acco_holo_ca.paa";
	};
	class optic_mas_Arco_blk: optic_Arco
	{
		displayName = "ARCO black";
		model = "\mas_us_rifle\acc\acco_arco_b_F";
		picture = "\mas_us_rifle\UI\gear_acco_arco_b_ca.paa";
	};
	class optic_mas_Arco_camo: optic_Arco
	{
		displayName = "ARCO camo";
		model = "\mas_us_rifle\acc\acco_Arco_F";
		picture = "\mas_us_rifle\UI\gear_acco_arco_ca.paa";
	};
	class optic_mas_Hamr_camo: optic_Hamr
	{
		displayName = "RCO camo";
		model = "\mas_us_rifle\acc\acco_hamr_F";
		picture = "\mas_us_rifle\UI\gear_acco_hamr_ca.paa";
	};
	class optic_mas_Aco_camo: optic_Aco
	{
		displayName = "ACO (red) camo";
		model = "\mas_us_rifle\acc\acco_Aco_F";
		picture = "\mas_us_rifle\UI\gear_acco_aco_ca.paa";
	};
	class optic_mas_ACO_grn_camo: optic_ACO_grn
	{
		displayName = "ACO (green) camo";
		model = "\mas_us_rifle\acc\acco_Aco_op_F";
		picture = "\mas_us_rifle\UI\gear_acco_aco_grn_ca.paa";
	};
	class optic_mas_MRCO_camo: optic_MRCO
	{
		displayName = "MRCO camo";
		model = "\mas_us_rifle\acc\acco_MRCO_F";
		picture = "\mas_us_rifle\UI\gear_acco_mrco_ca.paa";
	};
	class optic_mas_acog: optic_Hamr
	{
		displayName = "Acog";
		picture = "\mas_us_rifle\UI\gear_acco_triji_ca.paa";
		model = "\mas_us_rifle\acc\mas_acog";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "Acog Combat Sight";
			optics = 1;
			modelOptics = "\mas_us_rifle\acc\mas_acog";
			class OpticsModes
			{
				class Acog_col
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class Acog_scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.11;
					opticsZoomMax = 0.11;
					opticsZoomInit = 0.11;
					memoryPointCamera = "eye1";
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
			};
		};
	};
	class optic_mas_acog_c: optic_mas_acog
	{
		displayName = "Acog camo";
		model = "\mas_us_rifle\acc\mas_acog_c";
		picture = "\mas_us_rifle\UI\w\gear_acco_triji_ca.paa";
	};
	class optic_mas_acog_eo: optic_mas_acog
	{
		displayName = "Acog Holo";
		picture = "\mas_us_rifle\UI\gear_acco_triji2_ca.paa";
		model = "\mas_us_rifle\acc\mas_acog_eo";
	};
	class optic_mas_acog_eo_c: optic_mas_acog_eo
	{
		displayName = "Acog Holo camo";
		model = "\mas_us_rifle\acc\mas_acog_eo_c";
		picture = "\mas_us_rifle\UI\w\gear_acco_triji2_ca.paa";
	};
	class optic_mas_acog_rd: optic_mas_acog
	{
		displayName = "Acog Red Dot";
		picture = "\mas_us_rifle\UI\gear_acco_triji2_ca.paa";
		model = "\mas_us_rifle\acc\mas_acog_rd";
	};
	class optic_mas_acog_rd_c: optic_mas_acog_rd
	{
		displayName = "Acog Red Dot camo";
		model = "\mas_us_rifle\acc\mas_acog_rd_c";
		picture = "\mas_us_rifle\UI\w\gear_acco_triji2_ca.paa";
	};
	class optic_mas_handle: optic_Aco
	{
		displayName = "M4 Handle";
		picture = "\mas_us_rifle\UI\gear_acco_handle_ca.paa";
		model = "\mas_us_rifle\acc\mas_handle";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			RMBhint = "M4 Handle Sight";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Handle
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};
	class optic_mas_aim: optic_Aco
	{
		displayName = "Aimpoint";
		picture = "\mas_us_rifle\UI\gear_acco_aim_ca.paa";
		model = "\mas_us_rifle\acc\mas_aim";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			RMBhint = "Aimpoint Sight";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Handle
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};
	class optic_mas_aim_c: optic_mas_aim
	{
		displayName = "Aimpoint camo";
		model = "\mas_us_rifle\acc\mas_aim_c";
		picture = "\mas_us_rifle\UI\w\gear_acco_aim_ca.paa";
	};
	class optic_mas_pso: optic_Arco
	{
		displayName = "PSO";
		picture = "\mas_ru_rifle\UI\gear_acco_pso_ca.paa";
		model = "\mas_ru_rifle\acc\mas_pso";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "PSO Combat Sight";
			optics = 1;
			modelOptics = "\mas_ru_rifle\acc\reticle_sniper_pso";
			class OpticsModes
			{
				class PSO_col
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class PSO_scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0723;
					opticsZoomMax = 0.0723;
					opticsZoomInit = 0.0723;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
	};
	class optic_mas_pso_c: optic_mas_pso
	{
		displayName = "PSO camo";
		model = "\mas_ru_rifle\acc\mas_pso_c";
		picture = "\mas_ru_rifle\UI\w\gear_acco_pso_ca.paa";
	};
	class optic_mas_pso_eo: optic_mas_pso
	{
		displayName = "PSO Holo";
		picture = "\mas_ru_rifle\UI\gear_acco_pso_ca.paa";
		model = "\mas_ru_rifle\acc\mas_pso_eo";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
	};
	class optic_mas_pso_eo_c: optic_mas_pso_eo
	{
		displayName = "PSO Holo camo";
		model = "\mas_ru_rifle\acc\mas_pso_eo_c";
		picture = "\mas_ru_rifle\UI\w\gear_acco_pso_ca.paa";
	};
	class optic_mas_pso_nv: optic_mas_pso
	{
		displayName = "PSO Sniper";
		picture = "\mas_ru_rifle\UI\gear_acco_pso_ca.paa";
		model = "\mas_ru_rifle\acc\mas_pso_nv";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			RMBhint = "PSO Sniper Sight";
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\mas_ru_rifle\acc\reticle_sniper_pso";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.04;
					opticsZoomInit = 0.04;
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1200,1400,1600,2000,2300};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 2300;
					discretefov[] = {0.04,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\mas_ru_rifle\acc\reticle_sniper_pso","\mas_ru_rifle\acc\reticle_sniper_z_pso"};
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Iron: Snip
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};
	class optic_mas_pso_nv_c: optic_mas_pso_nv
	{
		displayName = "PSO Sniper camo";
		model = "\mas_ru_rifle\acc\mas_pso_nv_c";
		picture = "\mas_ru_rifle\UI\w\gear_acco_pso_ca.paa";
	};
	class optic_mas_pso_nv_eo: optic_mas_pso_nv
	{
		displayName = "PSO Sniper Holo";
		picture = "\mas_ru_rifle\UI\gear_acco_pso_ca.paa";
		model = "\mas_ru_rifle\acc\mas_pso_nv_eo";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Hamr1";
		weaponInfoType = "RscWeaponZeroing";
	};
	class optic_mas_pso_nv_eo_c: optic_mas_pso_nv_eo
	{
		displayName = "PSO Sniper Holo camo";
		model = "\mas_ru_rifle\acc\mas_pso_nv_eo_c";
		picture = "\mas_ru_rifle\UI\w\gear_acco_pso_ca.paa";
	};
	class optic_mas_term: optic_SOS
	{
		displayName = "IR\NVG Tactical";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Sniper_CA.paa";
		model = "\A3\Weapons_F\acc\acco_Sniper_F";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\mas_us_rifle\acc\reticle_sniper_termal";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.375;
					opticsZoomMax = 0.075;
					opticsZoomInit = 0.375;
					discretefov[] = {0.375,0.075};
					discreteInitIndex = 0;
					discreteDistance[] = {100,200,300,400,500,600};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 600;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\mas_us_rifle\acc\reticle_sniper_termal"};
					visionMode[] = {"Normal","TI","NVG"};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Iron: Snip
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class hgun_mas_usp_F: hgun_P07_F
	{
		displayname = "HK USP45CT";
		model = "\mas_us_rifle\mas_usp";
		picture = "\mas_us_rifle\UI\gear_usp_x_ca.paa";
		magazines[] = {"12Rnd_mas_45acp_Mag","10Rnd_mas_45acp_Mag","8Rnd_mas_45acp_Mag"};
		descriptionshort = "Pistol<br />Caliber: .45 ACP";
		class Library
		{
			libtextdesc = "The USP is a semi-automatic pistol developed in Germany by Heckler & Koch GmbH as a replacement for the P7 series of handguns. The USP45CT Compact Tactical is a .45 caliber handgun developed for U.S. special operations use that combines features of the full-size USP45 Tactical pistol in a smaller, more concealable package. Features include an extended threaded o-ring barrel with polygonal bore profile and taller sights enabling use of sound suppressors. The USP CT is .45 caliber only.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1,30};
			closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_us_rifle\sounds\usp_s1",0.562341,1,1000};
			begin2[] = {"\mas_us_rifle\sounds\usp_s2",0.562341,1,1000};
			begin3[] = {"\mas_us_rifle\sounds\usp_s3",0.562341,1,1000};
			soundBegin[] = {"begin1",0.4,"begin2",0.3,"begin3",0.3};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.562341,1,600};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.562341,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds\usp_reload",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_usp_F_sd: hgun_mas_usp_F
	{
		displayName = "HK USP45CT SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_usp_l_F: hgun_mas_usp_F
	{
		displayname = "HK USP45CT Holo";
		model = "\mas_us_rifle\mas_usp";
		picture = "\mas_us_rifle\UI\gear_usp_x_ca.paa";
		magazines[] = {"12Rnd_mas_45acp_Mag","10Rnd_mas_45acp_Mag","8Rnd_mas_45acp_Mag"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Yorris";
			};
		};
	};
	class hgun_mas_usp_l_F_sd: hgun_mas_usp_l_F
	{
		displayName = "HK USP45CT Holo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Yorris";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_m23_F: hgun_P07_F
	{
		displayname = "HK Mk23";
		model = "\mas_us_rifle\mas_mk23";
		picture = "\mas_us_rifle\UI\gear_m23_x_ca.paa";
		magazines[] = {"12Rnd_mas_45acp_Mag","10Rnd_mas_45acp_Mag","8Rnd_mas_45acp_Mag"};
		descriptionshort = "Pistol<br />Caliber: .45 ACP";
		class Library
		{
			libtextdesc = "The Heckler & Koch MK 23 is a weapon system consisting of a match grade semi automatic pistol, a laser aiming module, and suppressor. It was adopted by the United States Special Operations Command for special operations units in the 1990s. While the designation applies to the complete system, it is also commonly used in reference to the pistol component itself. The pistol itself, chambered for the 45 ACP cartridge, was developed by Heckler & Koch, and was selected over the Colt OHWS through USSOCOM Offensive Handgun Weapon System program.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1,30};
			closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_us_rifle\sounds\usp_s1",0.562341,1,1000};
			begin2[] = {"\mas_us_rifle\sounds\usp_s2",0.562341,1,1000};
			begin3[] = {"\mas_us_rifle\sounds\usp_s3",0.562341,1,1000};
			soundBegin[] = {"begin1",0.4,"begin2",0.3,"begin3",0.3};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.562341,1,600};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.562341,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds\usp_reload",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_m23_F_sd: hgun_mas_m23_F
	{
		displayName = "HK Mk23 SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_m23_l_F: hgun_mas_m23_F
	{
		displayname = "HK Mk23 Holo";
		model = "\mas_us_rifle\mas_mk23";
		picture = "\mas_us_rifle\UI\gear_m23_x_ca.paa";
		magazines[] = {"12Rnd_mas_45acp_Mag","10Rnd_mas_45acp_Mag","8Rnd_mas_45acp_Mag"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Yorris";
			};
		};
	};
	class hgun_mas_m23_l_F_sd: hgun_mas_m23_l_F
	{
		displayName = "HK Mk23 Holo SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Yorris";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_acp_F: hgun_ACPC2_F
	{
		scope = 2;
		displayname = "1911 ACP";
		model = "\mas_us_rifle\mas_acp";
		picture = "\mas_us_rifle\UI\gear_acpc2_x_ca.paa";
		magazines[] = {"12Rnd_mas_45acp_Mag","10Rnd_mas_45acp_Mag","8Rnd_mas_45acp_Mag","T2AAF_45ACP"};
		descriptionshort = "Pistol<br />Caliber: .45 ACP";
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1,30};
			closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_us_rifle\sounds\usp_s1",0.562341,1,1000};
			begin2[] = {"\mas_us_rifle\sounds\usp_s2",0.562341,1,1000};
			begin3[] = {"\mas_us_rifle\sounds\usp_s3",0.562341,1,1000};
			soundBegin[] = {"begin1",0.4,"begin2",0.3,"begin3",0.3};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.562341,1,600};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.562341,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds\usp_reload",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 30.5;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_acp_F_sd: hgun_mas_acp_F
	{
		displayName = "1911 ACP SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_m9_F: hgun_P07_F
	{
		scope = 2;
		displayname = "M9";
		model = "\mas_us_rifle\mas_m9";
		picture = "\mas_us_rifle\UI\gear_m9_x_ca.paa";
		magazines[] = {"15Rnd_mas_9x21_Mag","16Rnd_9x21_Mag","17Rnd_mas_9x21_Mag","13Rnd_mas_9x21_Mag","M882_9mm"};
		descriptionshort = "Pistol<br />Caliber: 9x21 mm";
		class Library
		{
			libtextdesc = "The Beretta M9, formally Pistol, Semiautomatic, 9mm, M9, is a 9×19mm Parabellum pistol of the United States military adopted in 1985. It is essentially a military specification Beretta 92F, later the 92FS. The M9 won a competition in the 1980s to replace the M1911A1 as the primary sidearm of the U.S. military, beating many other contenders. It officially entered service in 1990.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_us_rifle\sounds\m9_s1",0.562341,1,700};
			begin2[] = {"\mas_us_rifle\sounds\m9_s2",0.562341,1,700};
			begin3[] = {"\mas_us_rifle\sounds\m9_s3",0.562341,1,700};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M9R.wss",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 25;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_m9_F_sd: hgun_mas_m9_F
	{
		displayName = "M9 SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_bhp_F: hgun_P07_F
	{
		displayname = "Browning HP";
		model = "\mas_us_rifle\mas_bhp";
		picture = "\mas_us_rifle\UI\gear_bhp_x_ca.paa";
		magazines[] = {"15Rnd_mas_9x21_Mag","16Rnd_9x21_Mag","17Rnd_mas_9x21_Mag","13Rnd_mas_9x21_Mag"};
		descriptionshort = "Pistol<br />Caliber: 9x21 mm";
		class Library
		{
			libtextdesc = "The Browning Hi-Power is a single-action, 9mm semi-automatic handgun. It is based on a design by American firearms inventor John Browning, and completed by Dieudonné Saive at Fabrique Nationale of Herstal, Belgium. Browning died in 1926, several years before the design was finalized. The Hi-Power is one of the most widely used military pistols of all time, having been used by the armed forces of over 50 countries. The Hi-Power name alluded to the 13-round magazine capacity, almost twice that of contemporary designs such as the Luger or Mauser 1910.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_us_rifle\sounds\m9_s1",0.562341,1,700};
			begin2[] = {"\mas_us_rifle\sounds\m9_s2",0.562341,1,700};
			begin3[] = {"\mas_us_rifle\sounds\m9_s3",0.562341,1,700};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds\usp_reload",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_bhp_F_sd: hgun_mas_bhp_F
	{
		displayName = "Browning HP SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_glock_F: hgun_P07_F
	{
		displayname = "Glock 17";
		model = "\mas_us_rifle\mas_glock";
		picture = "\mas_us_rifle\UI\gear_glock_x_ca.paa";
		magazines[] = {"17Rnd_mas_9x21_Mag","16Rnd_9x21_Mag","15Rnd_mas_9x21_Mag","13Rnd_mas_9x21_Mag"};
		descriptionshort = "Pistol<br />Caliber: 9x21 mm";
		class Library
		{
			libtextdesc = "The GLOCK 17 in caliber 9x19 is the most widely used law enforcement pistol worldwide. Because of its unsurpassed reliability, above-average magazine capacity of 17 cartridges in the standard magazine and its low weight, it is trusted by law enforcement officers in their daily duties throughout the world. It is safe, easy and quick to use through the revolutionary “Safe Action” trigger system.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_us_rifle\sounds\glock_s1",0.562341,1,700};
			begin2[] = {"\mas_us_rifle\sounds\glock_s2",0.562341,1,700};
			begin3[] = {"\mas_us_rifle\sounds\glock_s3",0.562341,1,700};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds\usp_reload",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_glock_F_sd: hgun_mas_glock_F
	{
		displayName = "Glock 17 SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_glocksf_F: hgun_P07_F
	{
		displayname = "Glock 21SF";
		model = "\mas_us_rifle\mas_glocs";
		picture = "\mas_us_rifle\UI\gear_glocksf_x_ca.paa";
		magazines[] = {"12Rnd_mas_45acp_Mag","10Rnd_mas_45acp_Mag"};
		descriptionshort = "Pistol<br />Caliber: .45 ACP";
		class Library
		{
			libtextdesc = "The GLOCK 21SF in caliber .45 ACP delivers the legendary stopping power of the .45 Auto round with 10 round magazine capacity. Countless law enforcement units swear by the G21SF pistol, and that's why this powerful, lightweight, all climate.. It is safe, easy and quick to use through the revolutionary “Safe Action” trigger system.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_us_rifle\sounds\glock_s1",0.562341,1,700};
			begin2[] = {"\mas_us_rifle\sounds\glock_s2",0.562341,1,700};
			begin3[] = {"\mas_us_rifle\sounds\glock_s3",0.562341,1,700};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds\usp_reload",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_glocksf_F_sd: hgun_mas_glocksf_F
	{
		displayName = "Glock 21SF SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class hgun_mas_grach_F: hgun_Rook40_F
	{
		displayname = "MP-443 Grach";
		magazines[] = {"17Rnd_mas_9x21_Mag","16Rnd_9x21_Mag","15Rnd_mas_9x21_Mag","13Rnd_mas_9x21_Mag","8Rnd_mas_9x18_Mag"};
		descriptionshort = "Pistol<br />Caliber: 9x19 mm";
		class Library
		{
			libtextdesc = "The MP 443 Grach is the Russian standard military issue side arm. It was developed under designation Grach in response to Russian military trials, which began in 1993. In 2003, it was adopted under designation PYa as a standard sidearm for all branches of Russian military and law enforcement, alongside Makarov PM, GSh 18, and SPS.";
		};
		class WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_LM"};
			};
		};
	};
	class hgun_mas_grach_F_sd: hgun_mas_grach_F
	{
		displayName = "MP-443 Grach SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_LM";
			};
		};
	};
	class hgun_mas_mak_F: hgun_Rook40_F
	{
		displayname = "Makarov";
		model = "\mas_ru_rifle\mas_makarov";
		picture = "\mas_ru_rifle\UI\gear_mak_x_ca.paa";
		magazines[] = {"8Rnd_mas_9x18_Mag"};
		descriptionshort = "Pistol<br />Caliber: 9x18 mm";
		class Library
		{
			libtextdesc = "The Makarov pistol or PM is a Russian semi-automatic pistol. Under the project leadership of Nikolay Fyodorovich Makarov, it became the Soviet Union's standard military side arm from 1951-1991, utilizing the 9x18mm Makarov cartridge designed by B.V. Semin in 1946.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\mas_ru_rifle\sounds\maka_s1",0.562341,1,700};
			begin2[] = {"\mas_ru_rifle\sounds\maka_s2",0.562341,1,700};
			begin3[] = {"\mas_ru_rifle\sounds\maka_s3",0.562341,1,700};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_ru_rifle\sounds\usp_dry",1,1,20};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_LM"};
			};
		};
	};
	class hgun_mas_mak_F_sd: hgun_mas_mak_F
	{
		displayName = "Makarov SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_LM";
			};
		};
	};
	class hgun_mas_sa61_F: hgun_Rook40_F
	{
		displayname = "SA61 Skorpion";
		model = "\mas_ru_rifle\mas_sa61";
		picture = "\mas_ru_rifle\UI\gear_sa61_x_ca.paa";
		magazines[] = {"20Rnd_mas_765x17_Mag"};
		descriptionshort = "Machine Pistol<br />Caliber: 7.65x17 mm";
		class Library
		{
			libtextdesc = "The Skorpion vz61 is a Czechoslovak 7.65 mm submachine gun developed in 1959 and produced under the official designation Samopal vzor 61. Although it was developed for use with security forces and special forces, the weapon was also accepted into service with the Czechoslovak Army, as a personal sidearm for lower ranking army staff, vehicle drivers, armored vehicle personnel and special forces. Currently the weapon is in use with the armed forces of several countries as a sidearm.";
		};
		drySound[] = {"\mas_ru_rifle\sounds\ak74_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_ru_rifle\sounds\ak74_reload",1,1,30};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\AK74U_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\AK74U_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			recoil = "recoil_single_pdw";
			recoilProne = "recoil_single_prone_pdw";
			dispersion = 0.002;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.398107,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.398107,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ru_rifle\sounds\AK74U_s1",1.0,1,900};
				begin2[] = {"\mas_ru_rifle\sounds\AK74U_s2",1.0,1,900};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			recoil = "recoil_auto_pdw";
			recoilProne = "recoil_auto_prone_pdw";
			dispersion = 0.0035;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_LM"};
			};
		};
	};
	class hgun_mas_sa61_F_sd: hgun_mas_sa61_F
	{
		displayName = "SA61 Skorpion SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Yorris";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_LM";
			};
		};
	};
	class hgun_mas_uzi_F: hgun_mas_sa61_F
	{
		displayname = "Micro UZI";
		model = "\mas_us_rifle\mas_uzi";
		picture = "\mas_us_rifle\UI\gear_uzi_x_ca.paa";
		magazines[] = {"25Rnd_mas_9x19_Mag","17Rnd_mas_9x21_Mag","16Rnd_9x21_Mag","15Rnd_mas_9x21_Mag","13Rnd_mas_9x21_Mag","30Rnd_mas_9x21_Stanag","30Rnd_9x21_Mag"};
		descriptionshort = "Machine Pistol<br />Caliber: 9x19 mm";
		class Library
		{
			libtextdesc = "The Uzi is a family of Israeli open bolt, blowback operated submachine guns. Smaller variants are considered to be machine pistols. The Uzi was one of the first weapons to use a telescoping bolt design which allows the magazine to be housed in the pistol grip for a shorter weapon. The Uzi has been exported to over 90 countries. Over its service lifetime, it has been manufactured by Israel Military Industries, FN Herstal, and other manufacturers. From the 1960s through the 1980s, more Uzi submachine guns were sold to more military, law enforcement and security markets than any other submachine gun ever made.";
		};
		class WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L","muzzle_mas_snds_L"};
			};
		};
	};
	class hgun_mas_uzi_F_sd: hgun_mas_uzi_F
	{
		displayName = "Micro UZI SD";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Yorris";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_mas_snds_L";
			};
		};
	};
	class NVGoggles_mas: NVGoggles
	{
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		displayName = "NVG Recon(Blufor)";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "";
			mass = 8;
		};
	};
	class NVGoggles_o_mas: NVGoggles_OPFOR
	{
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
		displayName = "NVG Recon(Opfor)";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
			modelOff = "";
			mass = 8;
		};
	};
	class NVGoggles_mas_mask: NVGoggles
	{
		displayName = "Balaclava Headset NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\mas_us_rifle\nvg\mas_nvg_on";
		picture = "\mas_us_rifle\nvg\ui\icon_h_nvg_h.paa";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "mas_us_rifle\nvg\mas_nvg_on.p3d";
			modelOff = "mas_us_rifle\nvg\mas_nvg_off.p3d";
			mass = 8;
		};
	};
	class NVGoggles_mas_mask2: NVGoggles
	{
		displayName = "Balaclava NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\mas_us_rifle\nvg\mas_nvg_on2";
		picture = "\mas_us_rifle\nvg\ui\icon_h_nvg.paa";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "mas_us_rifle\nvg\mas_nvg_on2.p3d";
			modelOff = "mas_us_rifle\nvg\mas_nvg_off2.p3d";
			mass = 8;
		};
	};
	class NVGoggles_mas_mask_b: NVGoggles
	{
		displayName = "Balaclava Skull Headset NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\mas_us_rifle\nvg\mas_nvg_on_b";
		picture = "\mas_us_rifle\nvg\ui\icon_h_nvg_hb.paa";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "mas_us_rifle\nvg\mas_nvg_on_b.p3d";
			modelOff = "mas_us_rifle\nvg\mas_nvg_off_b.p3d";
			mass = 8;
		};
	};
	class NVGoggles_mas_mask2_b: NVGoggles
	{
		displayName = "Balaclava Skull NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\mas_us_rifle\nvg\mas_nvg_on2_b";
		picture = "\mas_us_rifle\nvg\ui\icon_h_nvg_b.paa";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "mas_us_rifle\nvg\mas_nvg_on2_b.p3d";
			modelOff = "mas_us_rifle\nvg\mas_nvg_off2_b.p3d";
			mass = 8;
		};
	};
	class NVGoggles_mas_mask_t: NVGoggles
	{
		displayName = "Balaclava Tan Headset NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\mas_us_rifle\nvg\mas_nvg_on_t";
		picture = "\mas_us_rifle\nvg\ui\icon_h_nvg_ht.paa";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "mas_us_rifle\nvg\mas_nvg_on_t.p3d";
			modelOff = "mas_us_rifle\nvg\mas_nvg_off_t.p3d";
			mass = 8;
		};
	};
	class NVGoggles_mas_mask2_t: NVGoggles
	{
		displayName = "Balaclava Tan NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\mas_us_rifle\nvg\mas_nvg_on2_t";
		picture = "\mas_us_rifle\nvg\ui\icon_h_nvg_t.paa";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "mas_us_rifle\nvg\mas_nvg_on2_t.p3d";
			modelOff = "mas_us_rifle\nvg\mas_nvg_off2_t.p3d";
			mass = 8;
		};
	};
	class NVGoggles_mas_mask3: NVGoggles
	{
		displayName = "Wrap Multi NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\mas_us_rifle\nvg\mas_nvg_on3";
		picture = "\mas_us_rifle\nvg\ui\icon_h_nvg_wrap.paa";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "mas_us_rifle\nvg\mas_nvg_on3.p3d";
			modelOff = "mas_us_rifle\nvg\mas_nvg_off3.p3d";
			mass = 8;
		};
	};
	class mas_launch_RPG7_F: launch_RPG32_F
	{
		displayName = "RPG7";
		model = "\mas_ru_rifle\rpg7_launcher.p3d";
		picture = "\mas_ru_rifle\ui\gear_RPG7_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\anim\Handanim_rpg7.rtm"};
		reloadAction = "ReloadRPG";
		modelOptics = "-";
		magazines[] = {"mas_PG7V","mas_OG7"};
		class OpticsModes
		{
			class ARCO2collimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		descriptionshort = "Rocket Launcher<br />Caliber: 85 mm";
		class Library
		{
			libtextdesc = "The RPG7 is a Soviet portable, unguided, shoulder launched, anti tank rocket propelled grenade launcher. Originally the RPG7 and its predecessor, the RPG2, was designed by the Soviet Union. It is now manufactured by the Russian company Bazalt. The weapon has the GRAU index 6G3. The English language term rocket propelled grenade, though frequently encountered and reasonably descriptive, is a backronym for RPG and not based on a literal translation.";
		};
	};
	class mas_launch_RPG18_F: launch_RPG32_F
	{
		displayName = "RPG18";
		model = "\mas_ru_rifle\rpg18.p3d";
		picture = "\mas_ru_rifle\ui\gear_RPG18_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\anim\Handanim_rpg18.rtm"};
		reloadAction = "ReloadRPG";
		modelOptics = "-";
		magazines[] = {"mas_PG18"};
		class OpticsModes
		{
			class ARCO2collimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		descriptionshort = "Rocket Launcher<br />Caliber: 64 mm";
		class Library
		{
			libtextdesc = "The RPG18 Mukha is a Russian short range, disposable light anti tank rocket launcher. The RPG18 fires a 64 mm PG18 HEAT warhead mounted on a small rocket capable of engaging any target within 200 meters. The warhead self destructs 6 seconds after launch, placing definite limits on range even if a sight was used that was effective with targets beyond 200 meters.";
		};
	};
	class mas_launch_M136_F: launch_RPG32_F
	{
		displayName = "M136 AT-4";
		model = "\mas_us_rifle\m136_launcher.p3d";
		picture = "\mas_us_rifle\ui\gear_M136_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\mas_us_rifle\anim\Handanim_m136.rtm"};
		reloadAction = "ReloadRPG";
		modelOptics = "-";
		magazines[] = {"mas_M136"};
		class OpticsModes
		{
			class ARCO2collimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		descriptionshort = "Rocket Launcher<br />Caliber: 84 mm";
		class Library
		{
			libtextdesc = "The AT4 is an 84mm unguided, portable, single shot recoilless smoothbore weapon built in Sweden by Saab Bofors Dynamics. Saab has had considerable sales success with the AT4, making it one of the most common light anti tank weapons in the world.";
		};
	};
	class mas_launch_Stinger_F: Launcher_Base_F
	{
		displayName = "FIM-92 Stinger";
		scope = 2;
		model = "\mas_us_rifle\stinger_launcher.p3d";
		picture = "\mas_us_rifle\ui\gear_stinger_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\mas_us_rifle\anim\Handanim_stinger.rtm"};
		reloadAction = "ReloadRPG";
		magazines[] = {"mas_Stinger","Titan_AA"};
		cursor = "missile";
		nameSound = "aalauncher";
		weaponInfoType = "RscWeaponEmpty";
		modelOptics = "-";
		descriptionshort = "Anti Air Launcher<br />Caliber: 84 mm";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class OpticsModes
		{
			class ARCO2collimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\launcher\nlaw_final_2",3.16228,1,1400};
			soundBegin[] = {"begin1",1};
		};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.158489,1,18};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\missile_reload",1.0,1,20};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.630957,1.5,300};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		value = 20;
		canLock = 2;
		recoil = "recoil_single_titan";
		minRange = 10;
		minRangeProbab = 0.8;
		midRange = 2500;
		midRangeProbab = 0.9;
		maxRange = 4800;
		maxRangeProbab = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2500;
		class Library
		{
			libtextdesc = "The FIM92 Stinger is a personal portable infrared homing surface to air missile, which can be adapted to fire from ground vehicles or helicopters, developed in the United States and entered into service in 1981. Used by the militaries of the United States and by 29 other countries, it is manufactured by Raytheon Missile Systems, under license by EADS in Germany and by Roketsan in Turkey with 70000 missiles produced. It is classified as a Man Portable Air Defense System MANPADS.";
		};
		inertia = 1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
		};
		class ItemInfo
		{
			priority = 3;
		};
		weaponLockDelay = 3;
		weaponLockSystem = 1;
		cmImmunity = 0.9;
		lockAcquire = 0;
	};
	class mas_launch_Strela_F: mas_launch_Stinger_F
	{
		displayName = "SA-7 Strela";
		model = "\mas_ru_rifle\strela_launcher.p3d";
		picture = "\mas_ru_rifle\ui\gear_strela_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\anim\Handanim_strela.rtm"};
		reloadAction = "ReloadRPG";
		magazines[] = {"mas_Strela","Titan_AA"};
		weaponInfoType = "RscWeaponEmpty";
		modelOptics = "-";
		descriptionshort = "Anti Air Launcher<br />Caliber: 84 mm";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class OpticsModes
		{
			class ARCO2collimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		class Library
		{
			libtextdesc = "The 9K32 Strela 2, NATO reporting name SA-7 Grail, is a man portable, shoulder fired, low altitude surface to air missile system with a high explosive warhead and passive infrared homing guidance. Broadly comparable in performance and inspired by the earlier US Army FIM 43 Redeye, which was designed in 1959, it was the first generation of Soviet man portable SAMs, entering service in 1968, with series production starting in 1970.";
		};
	};
	class mas_launch_maaws_F: launch_NLAW_F
	{
		displayName = "M3 MAAWS";
		model = "\mas_us_rifle\MAAWS.p3d";
		picture = "\mas_us_rifle\ui\gear_MAAWS_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\mas_us_rifle\anim\Handanim_maaws.rtm"};
		magazines[] = {"mas_MAAWS","NLAW_F"};
		descriptionshort = "Rocket Launcher<br />Caliber: 84 mm";
		class Library
		{
			libtextdesc = "The Carl Gustav is an 84 mm man portable reusable multi role recoilless rifle produced by Saab Bofors Dynamics in Sweden. The first prototype of the Carl Gustaf was produced in 1946, and while similar weapons of the era have generally disappeared, the Carl Gustaf remains in widespread use today. In US military service it is known as the M3 Multi role Anti armor Anti tank Weapon System.";
		};
	};
	class launch_mas_sting_F: mas_launch_Stinger_F
	{
		scope = 1;
		displayName = "FIM-92 Stinger(L)";
	};
	class launch_mas_RPG32AA_F: mas_launch_Strela_F
	{
		scope = 1;
		displayName = "SA-7 Strela(L)";
	};
};
class CfgAmmo
{
	class BulletBase;
	class G_40mm_HE;
	class B_556x45_Ball;
	class B_556x45_Ball_Tracer_Red;
	class M_Titan_AA;
	class B_56x15_dual;
	class B_9x21_Ball;
	class B_762x51_Ball;
	class B_762x51_Tracer_Red;
	class B_127x99_Ball;
	class B_127x99_Ball_Tracer_Red;
	class B_12Gauge_Slug;
	class B_12Gauge_Pellets;
	class M_NLAW_AT_F;
	class R_PG32V_F;
	class R_TBG32V_F;
	class R_mas_AT_F: R_PG32V_F
	{
		airFriction = 0.4;
		sideAirFriction = 0.1;
		maxSpeed = 275;
		initTime = 0.25;
		thrustTime = 0.75;
		thrust = 400;
		fuseDistance = 5;
	};
	class R_mas_AP_F: R_TBG32V_F
	{
		airFriction = 0.4;
		sideAirFriction = 0.1;
		maxSpeed = 275;
		initTime = 0.25;
		thrustTime = 0.75;
		thrust = 400;
		fuseDistance = 5;
	};
	class M_mas_sting_AA_F: M_Titan_AA{};
	class M_mas_RPG32_AA_F: M_Titan_AA{};
	class M80_Ball: B_762x51_Tracer_Red
	{
		hit=12; // millimeters of armor penned
		typicalSpeed=853; // muzzle velocity
		caliber=1.05; // penetration value 1 is 7.62
		airFriction = -0.00125;
		deflecting=20; // deflection angle
		deflectingChance = 100; // % chance of deflect
		deflectingRandomness = 0.5; // How shot reacts to surface bump
		visibleFire=5; // how well AI can see rounds
		visibleFireTime=5; //how long can see
		audibleFire=10; // how much can AI hear 
		audibleFireTime=10; //how long can hear
	};
	class M80_Ball_Tracer: B_762x51_Tracer_Red 
	{
		hit=12;
		typicalSpeed=853;
		caliber=1.05;
		airFriction = -0.00125;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=5;
		visibleFireTime=5;
		audibleFire=10;
		audibleFireTime=10;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class M855A1_M4: B_556x45_Ball_Tracer_Red
	{
		hit=8.11;
		typicalSpeed=900;
		airFriction = -0.0011543788;
		caliber = 0.855;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
	};
	class M855A1_tracer_M4: B_556x45_Ball_Tracer_Red
	{
		hit=8.11;
		typicalSpeed=900;
		airFriction = -0.0011543788;
		caliber = 0.855;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class M855A1_M16: B_556x45_Ball_Tracer_Red 
	{
		hit=8.60;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
	};
	class M855A1_tracer_M16: B_556x45_Ball_Tracer_Red 
	{
		hit=8.60;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class M855A1_M249: B_556x45_Ball_Tracer_Red 
	{
		hit=8.60;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
	};
	class M855A1_tracer_M249: B_556x45_Ball_Tracer_Red 
	{
		hit=8.60;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class M855A1_tracer_M27IAR: B_556x45_Ball_Tracer_Red 
	{
		hit=8.60;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class M855A1_M27IAR: B_556x45_Ball_Tracer_Red
	{
		hit=8.60;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
	};
	class M118LR_Tracer: B_762x51_Tracer_Red 
    	{
        hit=20;
        typicalSpeed=783;
        caliber=1.05;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
        visibleFire=20;
        visibleFireTime=15;
        audibleFire=20;
        audibleFireTime=10;
        tracerendtime = 1.4;
        tracerscale = 1;
        tracerstarttime = 0.06;
   	 };
	class M118LR_Ball: B_762x51_Ball
   	{
        hit=20;
        typicalSpeed=783;
        caliber=1.05;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
        visibleFire=20;
        visibleFireTime=15;
        audibleFire=20;
        audibleFireTime=10;
    	};
	class B_mas_556x45_Ball: B_556x45_Ball
	{
		hit = 10;
	};
	class B_mas_556x45_Ball_T: B_556x45_Ball_Tracer_Red
	{
		hit = 10;
	};
	class B_mas_9x21p_Ball: B_9x21_Ball
	{
	hit = 7;
	};
	class M882_9mm: B_9x21_Ball
   	 {
   	hit = 9;
        cartridge = "FxCartridge_65_caseless";
        cost = 100;
        typicalSpeed = 390;
        airFriction = -0.0014;
        caliber = 1.7;
        deflecting = 45;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 1;
        visibleFire = 3;
        audibleFire = 5;
    };
	class B_mas_9x21d_Ball: B_56x15_dual
	{
		hit = 8;
	};
	class B_mas_762x39_Ball: B_762x51_Ball
	{
		hit = 12;
	};
	class B_mas_762x39_Ball_T: B_762x51_Tracer_Red
	{
		hit = 12;
	};
	class B_mas_762x51_Ball: B_762x51_Ball
	{
		hit = 12;
	};
	class B_mas_762x51_Ball_T: B_762x51_Tracer_Red
	{
		hit = 12;
	};
	class B_mas_762x54_Ball: B_762x51_Ball
	{
		hit = 14;
	};
	class B_mas_762x54_Ball_T: B_762x51_Tracer_Red
	{
		hit = 14;
	};
	class B_mas_127x99_Ball: B_127x99_Ball
	{
		hit = 120;
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
	class B_mas_127x99_Ball_T: B_127x99_Ball_Tracer_Red
	{
		hit = 120;
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
	class B_mas_127x99_dem_Ball: B_127x99_Ball
	{
		hit = 70;
		indirectHit = 5;
		indirectHitRange = 0.3;
		explosive = 0.1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
	class B_mas_45acp_Ball: B_9x21_Ball
	{
	hit = 10;
	};
	class T2AAF_45ACP: B_9x21_Ball
    	{
    	hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_65_caseless";
        caliber = 2.6;
        deflecting = 45;
        visibleFire = 5;
        audibleFire = 9;
        cost = 100;
        typicalSpeed = 280;
        airFriction = -0.0018;
   	};
	class B_mas_12Gauge_Slug: B_12Gauge_Slug
	{
		hit = 30;
		cartridge = "FxCartridge_slug";
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	class B_mas_12Gauge_Pellets: B_12Gauge_Pellets
	{
		hit = 10;
		cartridge = "FxCartridge_slug";
		caliber = 0.8;
		indirectHit = 0;
        	indirectHitRange = 0;
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
class M433_40mm_HEDP: G_40mm_HE
  {
        hit = 170;
        indirectHit = 25;
        indirectHitRange = 5;
        caliber = 3;
        class CamShakeHit
        {
            power = 30;
            duration = "((round (30^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
};
class CfgMagazines
{
	class CA_Magazine;
	class 1Rnd_HE_Grenade_shell;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 20Rnd_762x51_Mag;
	class 16Rnd_9x21_Mag;
	class 200Rnd_65x39_cased_Box;
	class 200Rnd_65x39_cased_Box_Tracer;
	class NLAW_F;
	class RPG32_F;
	class RPG32_HE_F;
	class Titan_AA;
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class M433_40mm_HEDP: 1Rnd_HE_Grenade_shell
	{
		scope = 2
		Displayname = "M433 40mm HEDP
		ammo = "M433_40mm_DEDP"
		mass = 5 
		descriptionshort = "Caliber: 40 mm<br />Rounds: 1<br />Used in: M203";
	};
	class mas_PG7V: RPG32_F
	{
		displayName = "PG7 AT";
		ammo = "R_mas_AT_F";
		model = "\mas_ru_rifle\PG7_proxy.p3d";
		modelSpecial = "\mas_ru_rifle\RPG7_Launcher_loaded";
		picture = "\mas_ru_rifle\ui\gear_rpg7_rocket_ca.paa";
		mass = 50;
		descriptionshort = "Caliber: 85 mm<br />Rounds: 1<br />Used in: RPG7";
	};
	class mas_OG7: RPG32_HE_F
	{
		displayName = "OG7 HE";
		ammo = "R_mas_AP_F";
		model = "\mas_ru_rifle\OG7V_proxy.p3d";
		modelSpecial = "\mas_ru_rifle\RPG7O_Launcher_loaded";
		picture = "\mas_ru_rifle\ui\gear_tbg7v_rocket_ca.paa";
		mass = 50;
		descriptionshort = "Caliber: 40 mm<br />Rounds: 1<br />Used in: RPG7";
	};
	class mas_PG18: RPG32_F
	{
		displayName = "PG18 AT";
		ammo = "R_mas_AT_F";
		model = "\mas_us_rifle\M136_ammo.p3d";
		modelSpecial = "\mas_ru_rifle\rpg18_loaded.p3d";
		picture = "\mas_ru_rifle\ui\gear_rpg18_rocket_ca.paa";
		mass = 50;
		descriptionshort = "Caliber: 64 mm<br />Rounds: 1<br />Used in: RPG18";
	};
	class mas_M136: RPG32_F
	{
		displayName = "M136 AT-4";
		ammo = "R_mas_AT_F";
		model = "\mas_us_rifle\M136_ammo.p3d";
		modelSpecial = "\mas_us_rifle\m136_launcher_loaded";
		picture = "\mas_us_rifle\ui\gear_m136_rocket_ca.paa";
		mass = 50;
		descriptionshort = "Caliber: 84 mm<br />Rounds: 1<br />Used in: M136-AT4";
	};
	class mas_MAAWS: NLAW_F
	{
		displayName = "M3 MAAWS";
		modelSpecial = "\mas_us_rifle\MAAWS.p3d";
		mass = 50;
		descriptionshort = "Caliber: 84 mm<br />Rounds: 1<br />Used in: M3 MAAWS";
	};
	class mas_Stinger: Titan_AA
	{
		displayName = "FIM-92 Stinger";
		modelSpecial = "\mas_us_rifle\stinger_launcher_loaded.p3d";
		descriptionshort = "Caliber: 70 mm<br />Rounds: 1<br />Used in: FIM-92 Stinger";
	};
	class mas_Strela: Titan_AA
	{
		displayName = "SA-7 Strela";
		modelSpecial = "\mas_ru_rifle\strela_launcher_loaded.p3d";
		descriptionshort = "Caliber: 70 mm<br />Rounds: 1<br />Used in: SA-7 Strela";
	};
	class Sting_mas_AA_F: Titan_AA
	{
		scope = 1;
		displayName = "FIM-92 Stinger(L)";
		modelSpecial = "\mas_us_rifle\stinger_launcher_loaded.p3d";
		descriptionshort = "Caliber: 70 mm<br />Rounds: 1<br />Used in: FIM-92 Stinger";
		mass = 60;
	};
	class RPG32_mas_AA_F: Titan_AA
	{
		scope = 1;
		displayName = "SA-7 Strela(L)";
		modelSpecial = "\mas_ru_rifle\strela_launcher_loaded.p3d";
		descriptionshort = "Caliber: 70 mm<br />Rounds: 1<br />Used in: SA-7 Strela";
		mass = 60;
	};
	class 30Rnd_mas_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_556x45_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: M4,HK416,M16,SCAR-L";
		displayname = "30rnd 5.56mm STANAG";
		picture = "\mas_us_rifle\ui\m_30stanag_CA.paa";
	};
	class 30Rnd_mas_556x45_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_556x45_Ball_T";
		count = 30;
		descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: M4,HK416,M16,SCAR-L";
		displayname = "30rnd 5.56mm STANAG(Tracer)";
		picture = "\mas_us_rifle\ui\m_30stanag_red_CA.paa";
	};
	class M855A1_M4_30Rnd: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		ammo = "M855A1_M4";
		initspeed = 900;
		count = 30;
		mass = 11.8;
		lastroundstracer = 3;
        	descriptionshort = "M855A1 for M4<br />Caliber: 5.56x45 mm STANAG<br />Rounds: 30";
        	displayname = "M4 M855A1 5.56mm 30rnd";
		picture = "\mas_us_rifle\ui\m_30stanag_CA.paa";
	};
	class M855A1_tracer_M4_30Rnd: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		ammo = "M855A1_tracer_M4";
		mass = 11.8;
		initspeed = 900;
		count = 30;
		tracersevery = 1;
        	descriptionshort = "M855A1 tracer for M4<br />Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30";
        	displayname = "M4 M855A1 5.56mm 30rnd Tracer";
		picture = "\mas_us_rifle\ui\m_30stanag_red_CA.paa";
	};
	class M855A1_M16_30Rnd: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		ammo = "M855A1_M16";
		mass = 11.8;
		initspeed = 960;
		count = 30;
		lastroundstracer = 3;
       		descriptionshort = "M855A1 for M16<br />Caliber: 5.56x45 mm STANAG<br />Rounds: 30";
       		displayname = "M16 M855A1 5.56mm 30rnd";
		picture = "\mas_us_rifle\ui\m_30stanag_CA.paa";
	};
	class M855A1_tracer_M16_30Rnd: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		ammo = "M855A1_tracer_M16";
		mass = 11.8;
		initspeed = 960;
		count = 30;
		tracersevery = 1;
       		descriptionshort = "M855A1 for M16<br />Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30";
        	displayname = "M16 M855A1 5.56mm 30rnd Tracer";
		picture = "\mas_us_rifle\ui\m_30stanag_red_CA.paa";
	};
	class M249_200Rnd_556x45_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		mass = 56;
		ammo = "M855A1_M249";
		count = 200;
        	descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200<br />Used in: M249";
        	displayname = "M249 M855A1 5.56mm 200rnd";
		picture = "\mas_us_rifle\ui\m_200LMG_ca.paa";
        	initspeed = 960;
        	lastroundstracer = 5;
		tracersevery = 5;
	};
	class M249_200Rnd_556x45_Stanag_tracer: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		mass = 56;
       		ammo = "M855A1_tracer_M249";
		count = 200;
        	descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200 Tracer<br />Used in: M249";
       	 	displayname = "M249 M855A1 5.56mm 200rnd Tracer";
		picture = "\mas_us_rifle\ui\m_200LMG_red_ca.paa";
       	 	initspeed = 960;
       	 	lastroundstracer = 4;
		tracersevery = 1;
	};
	class M855A1_tracer_M27IAR: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo="M855A1_tracer_M27IAR";
		mass = 11.8;
		count=30;
		descriptionshort="";
		displayname="M27 IAR Tracer 5.56mm 30-round Stanag";
		initspeed=960;
		tracersevery=1;
		picture = "\mas_us_rifle\ui\m_30stanag_red_CA.paa";
		scope=2;
	};
	class M855A1_M27IAR: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo="M855A1_M27IAR";
		mass = 11.8;
		count=30;
		descriptionshort="";
		displayname="M27 IAR 5.56mm 30-round Stanag";
		initspeed=960;
		picture="\mas_us_rifle\ui\m_30stanag_CA.paa";
		scope=2;
		lastroundstracer=5;
	};
	class M80_Ball_100Rnd_762x51: 150Rnd_762x51_Box
	{
		scope = 2;
		mass = 33.8;
		ammo = "M80_Ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 100<br />Used in: Mk48,M240";
		displayname = "M240 100Rnd. M80 Ball";
        	initspeed = 853;
        	lastroundstracer = 3;
		tracersevery = 5;
	};
	class M80_Ball_Tracer_100Rnd_762x51: M80_Ball_100Rnd_762x51
	{
		scope = 2;
		mass = 33.8;
		ammo = "M80_Ball_Tracer";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG Tracer<br />Rounds: 100<br />Used in: Mk48,M240";
		displayname = "M240 100Rnd. M62 Tracer";
		tracersevery = 1;
	};
	class M118LR_Ball: 30Rnd_556x45_Stanag
    	{
        ammo = "M118LR_Ball";
	scope = 2;
        count = 20;
        descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 20<br />Used in: M110";
        displayname = "M118LR 7.62";
        picture = "\mas_us_rifle\ui\m_20hk417_ca.paa";
	mass = 12;
    	};
	class M118LR_Tracer: 30Rnd_556x45_Stanag_Tracer_Red
    	{
        ammo = "M118LR_Tracer";
	scope = 2;
        count = 20;
        descriptionshort = "Caliber: 7.62x51 mm Tracer STANAG<br />Rounds: 20<br />Used in: M110";
        displayname = "M118LR 7.62 Tracer";
        picture = "\mas_us_rifle\ui\m_20hk417_red_ca.paa";
	mass = 12;
    	};
	class 200Rnd_mas_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_556x45_Ball";
		count = 200;
		descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200<br />Used in: Stoner LMG,M249";
		displayname = "200rnd 5.56mm Box";
		picture = "\mas_us_rifle\ui\m_200LMG_ca.paa";
		mass = 25;
	};
	class 200Rnd_mas_556x45_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_556x45_Ball_T";
		count = 200;
		descriptionshort = "Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 200<br />Used in: Stoner LMG,M249";
		displayname = "200rnd 5.56mm Box(Tracer)";
		picture = "\mas_us_rifle\ui\m_200LMG_red_ca.paa";
		mass = 25;
	};
	class 100Rnd_mas_762x51_Stanag: 150Rnd_762x51_Box
	{
		ammo = "B_mas_762x51_Ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 100<br />Used in: Mk48,M240";
		displayname = "100rnd 7.62mm Box";
		mass = 30;
	};
	class 100Rnd_mas_762x51_T_Stanag: 150Rnd_762x51_Box_Tracer
	{
		ammo = "B_mas_762x51_Ball_T";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG Tracer<br />Rounds: 100<br />Used in: Mk48,M240";
		displayname = "100rnd 7.62mm Box(Tracer)";
		mass = 30;
	};
	class 100Rnd_mas_762x54_mag: 150Rnd_762x51_Box
	{
		ammo = "B_mas_762x51_Ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x54 mm<br />Rounds: 100<br />Used in: PKM";
		displayname = "100rnd 7.62x54mm Box";
		mass = 30;
	};
	class 100Rnd_mas_762x54_T_mag: 150Rnd_762x51_Box_Tracer
	{
		ammo = "B_mas_762x51_Ball_T";
		count = 100;
		descriptionshort = "Caliber: 7.62x54 mm Tracer<br />Rounds: 100<br />Used in: PKM";
		displayname = "100rnd 7.62x54mm Box(Tracer)";
		mass = 30;
	};
	class 100Rnd_mas_762x39_mag: 150Rnd_762x51_Box
	{
		ammo = "B_mas_762x39_Ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x39 mm<br />Rounds: 100<br />Used in: M72";
		displayname = "100rnd 7.62x39mm Drum";
		mass = 30;
	};
	class 100Rnd_mas_762x39_T_mag: 150Rnd_762x51_Box_Tracer
	{
		ammo = "B_mas_762x39_Ball_T";
		count = 100;
		descriptionshort = "Caliber: 7.62x39 mm Tracer<br />Rounds: 100<br />Used in: M72";
		displayname = "100rnd 7.62x39mm Drum(Tracer)";
		mass = 30;
	};
	class 30Rnd_mas_545x39_mag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_556x45_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK74M,AKS74,AKSU";
		displayname = "30rnd 5.45mm Mag";
		picture = "\mas_us_rifle\ui\m_30ak74m_ca.paa";
	};
	class 30Rnd_mas_545x39_T_mag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_556x45_Ball_T";
		count = 30;
		descriptionshort = "Caliber: 5.45x39 mm Tracer<br />Rounds: 30<br />Used in: AK74M,AKS74,AKSU";
		displayname = "30rnd 5.45mm Mag(Tracer)";
		picture = "\mas_us_rifle\ui\m_30ak74m_red_ca.paa";
	};
	class 100Rnd_mas_545x39_mag: 200Rnd_65x39_cased_Box
	{
		ammo = "B_mas_556x45_Ball";
		count = 100;
		descriptionshort = "Caliber: 5.45x39 mm<br />Rounds: 100<br />Used in: RPK74";
		displayname = "100rnd 5.45mm Drum";
		picture = "\mas_us_rifle\ui\m_100rpk_ca.paa";
		mass = 25;
	};
	class 100Rnd_mas_545x39_T_mag: 200Rnd_65x39_cased_Box_Tracer
	{
		ammo = "B_mas_556x45_Ball_T";
		count = 100;
		descriptionshort = "Caliber: 5.45x39 mm Tracer<br />Rounds: 100<br />Used in: RPK74";
		displayname = "100rnd 5.45mm Drum(Tracer)";
		picture = "\mas_us_rifle\ui\m_100rpk_red_ca.paa";
		mass = 25;
	};
	class 20Rnd_mas_762x51_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_762x51_Ball";
		count = 20;
		descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 20<br />Used in: HK417,SR25,SCAR-H,EBR";
		displayname = "20rnd 7.62mm Mag";
		picture = "\mas_us_rifle\ui\m_20hk417_ca.paa";
	};
	class 20Rnd_mas_762x51_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_762x51_Ball_T";
		count = 20;
		descriptionshort = "Caliber: 7.62x51 mm Tracer STANAG<br />Rounds: 20<br />Used in: HK417,SR25,SCAR-H,EBR";
		displayname = "20rnd 7.62mm Mag(Tracer)";
		picture = "\mas_us_rifle\ui\m_20hk417_red_ca.paa";
	};
	class 5Rnd_mas_762x51_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_762x51_Ball";
		count = 5;
		descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 5<br />Used in: M24";
		displayname = "5rnd 7.62mm Mag";
		picture = "\mas_us_rifle\ui\m_m24_ca.paa";
	};
	class 5Rnd_mas_762x51_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_762x51_Ball_T";
		count = 5;
		descriptionshort = "Caliber: 7.62x51 mm Tracer STANAG<br />Rounds: 5<br />Used in: M24";
		displayname = "5rnd 7.62mm Mag(Tracer)";
		picture = "\mas_us_rifle\ui\m_m24_ca.paa";
	};
	class 30Rnd_mas_762x39_mag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_762x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AKM,AKMS";
		displayname = "30rnd 7.62mm Mag";
		picture = "\mas_us_rifle\ui\m_30akm_ca.paa";
	};
	class 30Rnd_mas_762x39_T_mag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_762x39_Ball_T";
		count = 30;
		descriptionshort = "Caliber: 7.62x39 mm Tracer<br />Rounds: 30<br />Used in: AKM,AKMS";
		displayname = "30rnd 7.62mm Mag(Tracer)";
		picture = "\mas_us_rifle\ui\m_30akm_red_ca.paa";
	};
	class 10Rnd_mas_762x54_mag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_762x54_Ball";
		count = 10;
		descriptionshort = "Caliber: 7.62x54 mm<br />Rounds: 10<br />Used in: SVD";
		displayname = "10rnd 7.62mm Mag";
		picture = "\mas_us_rifle\ui\m_10svd_ca.paa";
	};
	class 10Rnd_mas_762x54_T_mag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_762x54_Ball_T";
		count = 10;
		descriptionshort = "Caliber: 7.62x54 mm Tracer<br />Rounds: 10<br />Used in: SVD";
		displayname = "10rnd 7.62mm Mag(Tracer)";
		picture = "\mas_us_rifle\ui\m_10svd_red_ca.paa";
	};
	class 5Rnd_mas_127x99_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_127x99_Ball";
		count = 10;
		descriptionshort = "Caliber: 12.7x99 mm STANAG<br />Rounds: 10<br />Used in: M107";
		displayname = "10rnd 12.7mm Mag";
		picture = "\mas_us_rifle\ui\m_5m107_ca.paa";
	};
	class 5Rnd_mas_127x99_dem_Stanag: 5Rnd_mas_127x99_Stanag
	{
		ammo = "B_mas_127x99_dem_Ball";
		count = 10;
		descriptionshort = "Caliber: 12.7x99 mm Demo STANAG<br />Rounds: 10<br />Used in: M107";
		displayname = "10rnd 12.7mm Demo Mag";
		picture = "\mas_us_rifle\ui\m_5m107dem_ca.paa";
	};
	class 5Rnd_mas_127x99_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		ammo = "B_mas_127x99_Ball_T";
		count = 10;
		descriptionshort = "Caliber: 12.7x99 mm Tracer STANAG<br />Rounds: 10<br />Used in: M107";
		displayname = "10rnd 12.7mm Mag(Tracer)";
		picture = "\mas_us_rifle\ui\m_5m107_red_ca.paa";
	};
	class 5Rnd_mas_127x108_mag: 5Rnd_mas_127x99_Stanag
	{
		count = 5;
		descriptionshort = "Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK";
		displayname = "5rnd 12.7mm Mag";
		picture = "\mas_us_rifle\ui\m_5m107_ca.paa";
	};
	class 5Rnd_mas_127x108_dem_mag: 5Rnd_mas_127x99_dem_Stanag
	{
		count = 5;
		descriptionshort = "Caliber: 12.7x108 mm Demo<br />Rounds: 5<br />Used in: KSVK";
		displayname = "5rnd 12.7mm Demo Mag";
		picture = "\mas_us_rifle\ui\m_5m107dem_ca.paa";
	};
	class 5Rnd_mas_127x108_T_mag: 5Rnd_mas_127x99_T_Stanag
	{
		count = 5;
		descriptionshort = "Caliber: 12.7x108 mm Tracer<br />Rounds: 5<br />Used in: KSVK";
		displayname = "5rnd 12.7mm Mag(Tracer)";
		picture = "\mas_us_rifle\ui\m_5m107_red_ca.paa";
	};
	class 30Rnd_mas_9x21_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_9x21_Ball";
		count = 30;
		descriptionshort = "Caliber: 9x21 mm STANAG<br />Rounds: 30<br />Used in: HKMP5,HKMP5SD6";
		displayname = "30rnd 9mm Mag";
		picture = "\mas_us_rifle\ui\m_30mp5_ca.paa";
	};
	class 30Rnd_mas_9x21d_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_9x21d_Ball";
		count = 30;
		descriptionshort = "Caliber: 9x21 mm STANAG<br />Rounds: 30<br />Used in: HKMP5SD6 UW";
		displayname = "30rnd 9mm Mag UW";
		picture = "\mas_us_rifle\ui\m_30mp5_ca.paa";
	};
	class 12Rnd_mas_45acp_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_45acp_Ball";
		count = 12;
		displayName = "12rnd .45ACP Mag";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		descriptionshort = "Caliber: .45ACP<br />Rounds: 12<br />Used in: MK23,USP45CT";
	};
	class 10Rnd_mas_45acp_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_45acp_Ball";
		count = 10;
		displayName = "10rnd .45ACP Mag";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		descriptionshort = "Caliber: .45ACP<br />Rounds: 10<br />Used in: Glock21SF";
	};
	class 8Rnd_mas_45acp_Mag: 16Rnd_9x21_Mag
	{
		scope = 2;
		ammo = "B_mas_45acp_Ball";
		count = 8;
		displayName = "8rnd .45ACP Mag";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		descriptionshort = "Caliber: .45ACP<br />Rounds: 8<br />Used in: M1911 ACP";
		initSpeed = 280;
	};
	class 15Rnd_mas_9x21_Mag: 16Rnd_9x21_Mag
	{
		scope = 2;
		ammo = "B_9x21_Ball";
		count = 15;
		displayName = "15rnd 9mm Mag";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		descriptionshort = "Caliber: 9x21 mm STANAG<br />Rounds: 15<br />Used in: Beretta M9";
		initSpeed = 390;
	};
	class M882_9mm: 16Rnd_9x21_Mag
    	{
	mass = 1;
        scope = 2;
        ammo = "M882_9mm";
        count = 15;
        displayName = "M882 9mm Mag";
        picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
        descriptionshort = "Caliber: 9x19 mm STANAG<br />Rounds: 15<br />Used in: Beretta M9";
        initSpeed = 390;
    	};
	class T2AAF_45ACP: 16Rnd_9x21_Mag
    	{
        scope = 2;
	mass = 2;
        ammo = "T2AAF_45ACP";
        count = 7;
        displayName = "T2AAF .45ACP";
        picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
        descriptionshort = "Caliber: .45ACP<br />Rounds: 8<br />Used in: M1911 ACP";
        initSpeed = 280;
    	};
	class 17Rnd_mas_9x21_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_9x21_Ball";
		count = 17;
		displayName = "17rnd 9mm Mag";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		descriptionshort = "Caliber: 9x21 mm STANAG<br />Rounds: 17<br />Used in: Glock17";
	};
	class 13Rnd_mas_9x21_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_9x21_Ball";
		count = 13;
		displayName = "13rnd 9mm Mag";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		descriptionshort = "Caliber: 9x21 mm STANAG<br />Rounds: 17<br />Used in: Browning HP";
	};
	class 8Rnd_mas_9x18_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_9x21_Ball";
		count = 8;
		displayName = "8rnd 9mm Mag";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		descriptionshort = "Caliber: 9x18 mm Makarov<br />Rounds: 8<br />Used in: Makarov";
	};
	class 20Rnd_mas_765x17_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_9x21_Ball";
		count = 20;
		displayName = "20rnd 7.65x17mm Mag";
		picture = "\mas_us_rifle\ui\m_sa61_ca.paa";
		descriptionshort = "Caliber: 7.65x17 mm SA61<br />Rounds: 20<br />Used in: SA61";
	};
	class 25Rnd_mas_9x19_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_9x21_Ball";
		count = 25;
		displayName = "25rnd 9x19mm Mag";
		picture = "\mas_us_rifle\ui\m_uzi_ca.paa";
		descriptionshort = "Caliber: 9x19 mm Micro UZI<br />Rounds: 25<br />Used in: Micro UZI";
	};
	class 7Rnd_mas_12Gauge_Slug: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_12Gauge_Slug";
		count = 7;
		mass = 4;
		displayName = "12cal Slug M1014";
		picture = "\mas_us_rifle\ui\m_12gauge_slugs_ca.paa";
		descriptionshort = "Caliber: 12 cal<br />Rounds: 7<br />Used in: M1014";
	};
	class 7Rnd_mas_12Gauge_Pellets: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_12Gauge_Pellets";
		count = 7;
		mass = 4;
		displayName = "12cal Pellets M1014";
		picture = "\mas_us_rifle\ui\m_12gauge_ca.paa";
		descriptionshort = "Caliber: 12 cal<br />Rounds: 7<br />Used in: M1014";
	};
	class 10Rnd_mas_12Gauge_Slug: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_12Gauge_Slug";
		count = 10;
		displayName = "12cal Slug Saiga";
		picture = "\mas_us_rifle\ui\m_12gauge_slugs_ca.paa";
		descriptionshort = "Caliber: 12 cal<br />Rounds: 10<br />Used in: Saiga";
	};
	class 10Rnd_mas_12Gauge_Pellets: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_12Gauge_Pellets";
		count = 10;
		displayName = "12cal Pellets Saiga";
		picture = "\mas_us_rifle\ui\m_12gauge_ca.paa";
		descriptionshort = "Caliber: 12 cal<br />Rounds: 10<br />Used in: Saiga";
	};
	class 64Rnd_mas_9x18_mag: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_9x21_Ball";
		count = 64;
		displayName = "64rnds 9x18 Bizon";
		picture = "\mas_us_rifle\ui\m_bizon_ca.paa";
		descriptionshort = "Caliber: 9x18 mm cal<br />Rounds: 64<br />Used in: Bizon";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class Box_mas_all_rifle_Wps_F: Box_NATO_Wps_F
	{
		displayName = "NATO SF-Spetsnaz Weapons Box";
		maximumLoad = 999999;
		transportMaxWeapons = 50000;
		transportMaxMagazines = 200000;
		transportMaxBackpacks = 2000;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 120;
			};
			class _xx_30Rnd_mas_556x45_T_Stanag
			{
				magazine = "30Rnd_mas_556x45_T_Stanag";
				count = 60;
			};
			class _xx_30Rnd_mas_545x39_mag
			{
				magazine = "30Rnd_mas_545x39_mag";
				count = 120;
			};
			class _xx_30Rnd_mas_545x39_T_mag
			{
				magazine = "30Rnd_mas_545x39_T_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_545x39_mag
			{
				magazine = "100Rnd_mas_545x39_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_545x39_T_mag
			{
				magazine = "100Rnd_mas_545x39_T_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x54_mag
			{
				magazine = "100Rnd_mas_762x54_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x54_T_mag
			{
				magazine = "100Rnd_mas_762x54_T_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x39_mag
			{
				magazine = "100Rnd_mas_762x39_mag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x39_T_mag
			{
				magazine = "100Rnd_mas_762x39_T_mag";
				count = 60;
			};
			class _xx_200Rnd_mas_556x45_Stanag
			{
				magazine = "200Rnd_mas_556x45_Stanag";
				count = 60;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x51_Stanag
			{
				magazine = "100Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 60;
			};
			class _xx_30Rnd_mas_762x39_mag
			{
				magazine = "30Rnd_mas_762x39_mag";
				count = 120;
			};
			class _xx_30Rnd_mas_762x39_T_mag
			{
				magazine = "30Rnd_mas_762x39_T_mag";
				count = 60;
			};
			class _xx_10Rnd_mas_762x54_mag
			{
				magazine = "10Rnd_mas_762x54_mag";
				count = 120;
			};
			class _xx_10Rnd_mas_762x54_T_mag
			{
				magazine = "10Rnd_mas_762x54_T_mag";
				count = 60;
			};
			class _xx_20Rnd_mas_762x51_Stanag
			{
				magazine = "20Rnd_mas_762x51_Stanag";
				count = 120;
			};
			class _xx_20Rnd_mas_762x51_T_Stanag
			{
				magazine = "20Rnd_mas_762x51_T_Stanag";
				count = 60;
			};
			class _xx_64Rnd_mas_9x18_mag
			{
				magazine = "64Rnd_mas_9x18_mag";
				count = 60;
			};
			class _xx_20Rnd_mas_765x17_Mag
			{
				magazine = "20Rnd_mas_765x17_Mag";
				count = 60;
			};
			class _xx_25Rnd_mas_9x19_Mag
			{
				magazine = "25Rnd_mas_9x19_Mag";
				count = 60;
			};
			class _xx_5Rnd_mas_762x51_Stanag
			{
				magazine = "5Rnd_mas_762x51_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_762x51_T_Stanag
			{
				magazine = "5Rnd_mas_762x51_T_Stanag";
				count = 30;
			};
			class _xx_5Rnd_mas_127x99_Stanag
			{
				magazine = "5Rnd_mas_127x99_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_dem_Stanag
			{
				magazine = "5Rnd_mas_127x99_dem_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x99_T_Stanag
			{
				magazine = "5Rnd_mas_127x99_T_Stanag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x108_mag
			{
				magazine = "5Rnd_mas_127x108_mag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x108_dem_mag
			{
				magazine = "5Rnd_mas_127x108_dem_mag";
				count = 60;
			};
			class _xx_5Rnd_mas_127x108_T_mag
			{
				magazine = "5Rnd_mas_127x108_T_mag";
				count = 60;
			};
			class _xx_30Rnd_mas_9x21_Stanag
			{
				magazine = "30Rnd_mas_9x21_Stanag";
				count = 60;
			};
			class _xx_30Rnd_mas_9x21d_Stanag
			{
				magazine = "30Rnd_mas_9x21d_Stanag";
				count = 60;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 60;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine = "12Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_10Rnd_mas_45acp_Mag
			{
				magazine = "10Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_8Rnd_mas_45acp_Mag
			{
				magazine = "8Rnd_mas_45acp_Mag";
				count = 60;
			};
			class _xx_15Rnd_mas_9x21_Mag
			{
				magazine = "15Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_17Rnd_mas_9x21_Mag
			{
				magazine = "17Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_13Rnd_mas_9x21_Mag
			{
				magazine = "13Rnd_mas_9x21_Mag";
				count = 60;
			};
			class _xx_8Rnd_mas_9x18_Mag
			{
				magazine = "8Rnd_mas_9x18_Mag";
				count = 60;
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 30;
			};
			class _xx_7Rnd_mas_12Gauge_Slug
			{
				magazine = "7Rnd_mas_12Gauge_Slug";
				count = 30;
			};
			class _xx_7Rnd_mas_12Gauge_Pellets
			{
				magazine = "7Rnd_mas_12Gauge_Pellets";
				count = 30;
			};
			class _xx_10Rnd_mas_12Gauge_Slug
			{
				magazine = "10Rnd_mas_12Gauge_Slug";
				count = 30;
			};
			class _xx_10Rnd_mas_12Gauge_Pellets
			{
				magazine = "10Rnd_mas_12Gauge_Pellets";
				count = 30;
			};
			class _xx_100Rnd_65x39_caseless_mag_Tracer
			{
				magazine = "100Rnd_65x39_caseless_mag_Tracer";
				count = 40;
			};
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 40;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 30;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine = "20Rnd_556x45_UW_mag";
				count = 60;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 60;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 16;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 16;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 16;
			};
			class _xx_mas_PG7V
			{
				magazine = "mas_PG7V";
				count = 16;
			};
			class _xx_mas_OG7
			{
				magazine = "mas_OG7";
				count = 16;
			};
			class _xx_mas_PG18
			{
				magazine = "mas_PG18";
				count = 16;
			};
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 16;
			};
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 16;
			};
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 16;
			};
			class _xx_mas_Strela
			{
				magazine = "mas_Strela";
				count = 16;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 8;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 20;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 20;
			};
			class _xx_I_IR_Grenade
			{
				magazine = "I_IR_Grenade";
				count = 20;
			};
			class _xx_O_IR_Grenade
			{
				magazine = "O_IR_Grenade";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 5;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 5;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 5;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 5;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 5;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 5;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 10;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine = "APERSTripMine_Wire_Mag";
				count = 5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 5;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 5;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 5;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 10;
			};
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 10;
			};
			class _xx_Chemlight_yellow
			{
				magazine = "Chemlight_yellow";
				count = 10;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 10;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 12;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_hk416
			{
				weapon = "arifle_mas_hk416";
				count = 2;
			};
			class _xx_arifle_mas_hk416c
			{
				weapon = "arifle_mas_hk416c";
				count = 2;
			};
			class _xx_arifle_mas_hk416_gl
			{
				weapon = "arifle_mas_hk416_gl";
				count = 4;
			};
			class _xx_arifle_mas_hk416_m203
			{
				weapon = "arifle_mas_hk416_m203";
				count = 2;
			};
			class _xx_arifle_mas_hk416_m203c
			{
				weapon = "arifle_mas_hk416_m203c";
				count = 2;
			};
			class _xx_arifle_mas_hk416_v
			{
				weapon = "arifle_mas_hk416_v";
				count = 2;
			};
			class _xx_arifle_mas_hk416c_v
			{
				weapon = "arifle_mas_hk416c_v";
				count = 2;
			};
			class _xx_arifle_mas_hk416_gl_v
			{
				weapon = "arifle_mas_hk416_gl_v";
				count = 4;
			};
			class _xx_arifle_mas_hk416_m203_v
			{
				weapon = "arifle_mas_hk416_m203_v";
				count = 2;
			};
			class _xx_arifle_mas_hk416_m203c_v
			{
				weapon = "arifle_mas_hk416_m203c_v";
				count = 2;
			};
			class _xx_arifle_mas_hk416_d
			{
				weapon = "arifle_mas_hk416_d";
				count = 2;
			};
			class _xx_arifle_mas_hk416c_d
			{
				weapon = "arifle_mas_hk416c_d";
				count = 2;
			};
			class _xx_arifle_mas_hk416_gl_d
			{
				weapon = "arifle_mas_hk416_gl_d";
				count = 4;
			};
			class _xx_arifle_mas_hk416_m203_d
			{
				weapon = "arifle_mas_hk416_m203_d";
				count = 2;
			};
			class _xx_arifle_mas_hk416_m203c_d
			{
				weapon = "arifle_mas_hk416_m203c_d";
				count = 2;
			};
			class _xx_arifle_mas_hk417c
			{
				weapon = "arifle_mas_hk417c";
				count = 2;
			};
			class _xx_arifle_mas_hk417_m203c
			{
				weapon = "arifle_mas_hk417_m203c";
				count = 2;
			};
			class _xx_arifle_mas_hk417c_v
			{
				weapon = "arifle_mas_hk417c_v";
				count = 2;
			};
			class _xx_arifle_mas_hk417_m203c_v
			{
				weapon = "arifle_mas_hk417_m203c_v";
				count = 2;
			};
			class _xx_arifle_mas_hk417c_d
			{
				weapon = "arifle_mas_hk417c_d";
				count = 2;
			};
			class _xx_arifle_mas_hk417_m203c_d
			{
				weapon = "arifle_mas_hk417_m203c_d";
				count = 2;
			};
			class _xx_arifle_mas_m4
			{
				weapon = "arifle_mas_m4";
				count = 2;
			};
			class _xx_arifle_mas_m4c
			{
				weapon = "arifle_mas_m4c";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl
			{
				weapon = "arifle_mas_m4_gl";
				count = 4;
			};
			class _xx_arifle_mas_m4_m203
			{
				weapon = "arifle_mas_m4_m203";
				count = 2;
			};
			class _xx_arifle_mas_m4_m203c
			{
				weapon = "arifle_mas_m4_m203c";
				count = 2;
			};
			class _xx_arifle_mas_m4_v
			{
				weapon = "arifle_mas_m4_v";
				count = 2;
			};
			class _xx_arifle_mas_m4c_v
			{
				weapon = "arifle_mas_m4c_v";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_v
			{
				weapon = "arifle_mas_m4_gl_v";
				count = 4;
			};
			class _xx_arifle_mas_m4_m203_v
			{
				weapon = "arifle_mas_m4_m203_v";
				count = 2;
			};
			class _xx_arifle_mas_m4_m203c_v
			{
				weapon = "arifle_mas_m4_m203c_v";
				count = 2;
			};
			class _xx_arifle_mas_m4_d
			{
				weapon = "arifle_mas_m4_d";
				count = 2;
			};
			class _xx_arifle_mas_m4c_d
			{
				weapon = "arifle_mas_m4c_d";
				count = 2;
			};
			class _xx_arifle_mas_m4_gl_d
			{
				weapon = "arifle_mas_m4_gl_d";
				count = 4;
			};
			class _xx_arifle_mas_m4_m203_d
			{
				weapon = "arifle_mas_m4_m203_d";
				count = 2;
			};
			class _xx_arifle_mas_m4_m203c_d
			{
				weapon = "arifle_mas_m4_m203c_d";
				count = 2;
			};
			class _xx_arifle_mas_l119
			{
				weapon = "arifle_mas_l119";
				count = 4;
			};
			class _xx_arifle_mas_l119_gl
			{
				weapon = "arifle_mas_l119_gl";
				count = 4;
			};
			class _xx_arifle_mas_l119_m203
			{
				weapon = "arifle_mas_l119_m203";
				count = 4;
			};
			class _xx_arifle_mas_l119_v
			{
				weapon = "arifle_mas_l119_v";
				count = 4;
			};
			class _xx_arifle_mas_l119_gl_v
			{
				weapon = "arifle_mas_l119_gl_v";
				count = 4;
			};
			class _xx_arifle_mas_l119_m203_v
			{
				weapon = "arifle_mas_l119_m203_v";
				count = 4;
			};
			class _xx_arifle_mas_l119_d
			{
				weapon = "arifle_mas_l119_d";
				count = 4;
			};
			class _xx_arifle_mas_l119_gl_d
			{
				weapon = "arifle_mas_l119_gl_d";
				count = 4;
			};
			class _xx_arifle_mas_l119_m203_d
			{
				weapon = "arifle_mas_l119_m203_d";
				count = 4;
			};
			class _xx_arifle_mas_m16
			{
				weapon = "arifle_mas_m16";
				count = 4;
			};
			class _xx_arifle_mas_m16_gl
			{
				weapon = "arifle_mas_m16_gl";
				count = 4;
			};
			class _xx_arifle_mas_mk16
			{
				weapon = "arifle_mas_mk16";
				count = 4;
			};
			class _xx_arifle_mas_mk16_gl
			{
				weapon = "arifle_mas_mk16_gl";
				count = 4;
			};
			class _xx_arifle_mas_mk16_l
			{
				weapon = "arifle_mas_mk16_l";
				count = 4;
			};
			class _xx_arifle_mas_mk16_l_gl
			{
				weapon = "arifle_mas_mk16_l_gl";
				count = 4;
			};
			class _xx_arifle_mas_mk17
			{
				weapon = "arifle_mas_mk17";
				count = 4;
			};
			class _xx_arifle_mas_mk17_gl
			{
				weapon = "arifle_mas_mk17_gl";
				count = 4;
			};
			class _xx_arifle_mas_m1014
			{
				weapon = "arifle_mas_m1014";
				count = 4;
			};
			class _xx_arifle_mas_g3
			{
				weapon = "arifle_mas_g3";
				count = 4;
			};
			class _xx_arifle_mas_g3s
			{
				weapon = "arifle_mas_g3s";
				count = 4;
			};
			class _xx_arifle_mas_g3_m203
			{
				weapon = "arifle_mas_g3_m203";
				count = 4;
			};
			class _xx_arifle_mas_g3s_m203
			{
				weapon = "arifle_mas_g3s_m203";
				count = 4;
			};
			class _xx_arifle_mas_fal
			{
				weapon = "arifle_mas_fal";
				count = 4;
			};
			class _xx_arifle_mas_fal_m203
			{
				weapon = "arifle_mas_fal_m203";
				count = 4;
			};
			class _xx_LMG_mas_Mk200_F
			{
				weapon = "LMG_mas_Mk200_F";
				count = 4;
			};
			class _xx_LMG_mas_M249a_F
			{
				weapon = "LMG_mas_M249a_F";
				count = 4;
			};
			class _xx_LMG_mas_M249_F
			{
				weapon = "LMG_mas_M249_F";
				count = 4;
			};
			class _xx_LMG_mas_M249_F_v
			{
				weapon = "LMG_mas_M249_F_v";
				count = 2;
			};
			class _xx_LMG_mas_M249_F_d
			{
				weapon = "LMG_mas_M249_F_d";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F
			{
				weapon = "LMG_mas_mk48_F";
				count = 4;
			};
			class _xx_LMG_mas_mk48_F_v
			{
				weapon = "LMG_mas_mk48_F_v";
				count = 2;
			};
			class _xx_LMG_mas_mk48_F_d
			{
				weapon = "LMG_mas_mk48_F_d";
				count = 2;
			};
			class _xx_LMG_mas_m240_F
			{
				weapon = "LMG_mas_m240_F";
				count = 4;
			};
			class _xx_LMG_mas_mg3_F
			{
				weapon = "LMG_mas_mg3_F";
				count = 4;
			};
			class _xx_arifle_mas_mp5
			{
				weapon = "arifle_mas_mp5";
				count = 4;
			};
			class _xx_arifle_mas_mp5_v
			{
				weapon = "arifle_mas_mp5_v";
				count = 4;
			};
			class _xx_arifle_mas_mp5_d
			{
				weapon = "arifle_mas_mp5_d";
				count = 4;
			};
			class _xx_arifle_mas_mp5sd
			{
				weapon = "arifle_mas_mp5sd";
				count = 2;
			};
			class _xx_srifle_mas_hk417_h
			{
				weapon = "srifle_mas_hk417_h";
				count = 4;
			};
			class _xx_srifle_mas_hk417_v_h
			{
				weapon = "srifle_mas_hk417_v_h";
				count = 4;
			};
			class _xx_srifle_mas_hk417_d_h
			{
				weapon = "srifle_mas_hk417_d_h";
				count = 4;
			};
			class _xx_srifle_mas_sr25_h
			{
				weapon = "srifle_mas_sr25_h";
				count = 4;
			};
			class _xx_srifle_mas_sr25_v_h
			{
				weapon = "srifle_mas_sr25_v_h";
				count = 4;
			};
			class _xx_srifle_mas_sr25_d_h
			{
				weapon = "srifle_mas_sr25_d_h";
				count = 4;
			};
			class _xx_srifle_mas_mk17s_h
			{
				weapon = "srifle_mas_mk17s_h";
				count = 4;
			};
			class _xx_srifle_mas_m110_h
			{
				weapon = "srifle_mas_m110_h";
				count = 4;
			};
			class _xx_srifle_mas_m24_h
			{
				weapon = "srifle_mas_m24_h";
				count = 2;
			};
			class _xx_srifle_mas_m24_v_h
			{
				weapon = "srifle_mas_m24_v_h";
				count = 2;
			};
			class _xx_srifle_mas_m24_d_h
			{
				weapon = "srifle_mas_m24_d_h";
				count = 2;
			};
			class _xx_srifle_mas_ebr_h
			{
				weapon = "srifle_mas_ebr_h";
				count = 4;
			};
			class _xx_srifle_mas_m107_h
			{
				weapon = "srifle_mas_m107_h";
				count = 4;
			};
			class _xx_srifle_mas_m107_v_h
			{
				weapon = "srifle_mas_m107_v_h";
				count = 4;
			};
			class _xx_srifle_mas_m107_d_h
			{
				weapon = "srifle_mas_m107_d_h";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m
			{
				weapon = "arifle_mas_ak_74m";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m_gl
			{
				weapon = "arifle_mas_ak_74m_gl";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m_c
			{
				weapon = "arifle_mas_ak_74m_c";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m_gl_c
			{
				weapon = "arifle_mas_ak_74m_gl_c";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m_sf
			{
				weapon = "arifle_mas_ak_74m_sf";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m_sf_gl
			{
				weapon = "arifle_mas_ak_74m_sf_gl";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m_sf_c
			{
				weapon = "arifle_mas_ak_74m_sf_c";
				count = 4;
			};
			class _xx_arifle_mas_ak_74m_sf_gl_c
			{
				weapon = "arifle_mas_ak_74m_sf_gl_c";
				count = 4;
			};
			class _xx_arifle_mas_aks74
			{
				weapon = "arifle_mas_aks74";
				count = 4;
			};
			class _xx_arifle_mas_aks74_gl
			{
				weapon = "arifle_mas_aks74_gl";
				count = 4;
			};
			class _xx_arifle_mas_aks74u
			{
				weapon = "arifle_mas_aks74u";
				count = 4;
			};
			class _xx_arifle_mas_bizon
			{
				weapon = "arifle_mas_bizon";
				count = 4;
			};
			class _xx_arifle_mas_aks74u_c
			{
				weapon = "arifle_mas_aks74u_c";
				count = 4;
			};
			class _xx_arifle_mas_akms
			{
				weapon = "arifle_mas_akms";
				count = 4;
			};
			class _xx_arifle_mas_akms_gl
			{
				weapon = "arifle_mas_akms_gl";
				count = 4;
			};
			class _xx_arifle_mas_akms_c
			{
				weapon = "arifle_mas_akms_c";
				count = 4;
			};
			class _xx_arifle_mas_akms_gl_c
			{
				weapon = "arifle_mas_akms_gl_c";
				count = 4;
			};
			class _xx_arifle_mas_akm
			{
				weapon = "arifle_mas_akm";
				count = 4;
			};
			class _xx_arifle_mas_akm_gl
			{
				weapon = "arifle_mas_akm_gl";
				count = 4;
			};
			class _xx_arifle_mas_m70
			{
				weapon = "arifle_mas_m70";
				count = 4;
			};
			class _xx_arifle_mas_m70_gl
			{
				weapon = "arifle_mas_m70_gl";
				count = 4;
			};
			class _xx_arifle_mas_m70ab
			{
				weapon = "arifle_mas_m70ab";
				count = 4;
			};
			class _xx_arifle_mas_m70ab_gl
			{
				weapon = "arifle_mas_m70ab_gl";
				count = 4;
			};
			class _xx_arifle_mas_saiga
			{
				weapon = "arifle_mas_saiga";
				count = 4;
			};
			class _xx_srifle_mas_svd_h
			{
				weapon = "srifle_mas_svd_h";
				count = 4;
			};
			class _xx_srifle_mas_m91_l
			{
				weapon = "srifle_mas_m91_l";
				count = 4;
			};
			class _xx_srifle_mas_ksvk_h
			{
				weapon = "srifle_mas_ksvk_h";
				count = 4;
			};
			class _xx_srifle_mas_ksvk_c_h
			{
				weapon = "srifle_mas_ksvk_c_h";
				count = 4;
			};
			class _xx_LMG_mas_rpk_F
			{
				weapon = "LMG_mas_rpk_F";
				count = 4;
			};
			class _xx_LMG_mas_m72_F
			{
				weapon = "LMG_mas_m72_F";
				count = 4;
			};
			class _xx_LMG_mas_pkm_F
			{
				weapon = "LMG_mas_pkm_F";
				count = 4;
			};
			class _xx_hgun_mas_sa61_F
			{
				weapon = "hgun_mas_sa61_F";
				count = 4;
			};
			class _xx_hgun_mas_uzi_F
			{
				weapon = "hgun_mas_uzi_F";
				count = 4;
			};
			class _xx_hgun_mas_usp_F
			{
				weapon = "hgun_mas_usp_F";
				count = 4;
			};
			class _xx_hgun_mas_usp_l_F
			{
				weapon = "hgun_mas_usp_l_F";
				count = 4;
			};
			class _xx_hgun_mas_m23_F
			{
				weapon = "hgun_mas_m23_F";
				count = 4;
			};
			class _xx_hgun_mas_m23_l_F
			{
				weapon = "hgun_mas_m23_l_F";
				count = 4;
			};
			class _xx_hgun_mas_acp_F
			{
				weapon = "hgun_mas_acp_F";
				count = 4;
			};
			class _xx_hgun_mas_m9_F
			{
				weapon = "hgun_mas_m9_F";
				count = 4;
			};
			class _xx_hgun_mas_bhp_F
			{
				weapon = "hgun_mas_bhp_F";
				count = 4;
			};
			class _xx_hgun_mas_glock_F
			{
				weapon = "hgun_mas_glock_F";
				count = 4;
			};
			class _xx_hgun_mas_glocksf_F
			{
				weapon = "hgun_mas_glocksf_F";
				count = 4;
			};
			class _xx_hgun_mas_mak_F
			{
				weapon = "hgun_mas_mak_F";
				count = 4;
			};
			class _xx_hgun_mas_grach_F
			{
				weapon = "hgun_mas_grach_F";
				count = 4;
			};
			class _xx_launch_NLAW_F
			{
				weapon = "launch_NLAW_F";
				count = 4;
			};
			class _xx_launch_RPG32_F
			{
				weapon = "launch_RPG32_F";
				count = 4;
			};
			class _xx_mas_launch_RPG7_F
			{
				weapon = "mas_launch_RPG7_F";
				count = 4;
			};
			class _xx_mas_launch_RPG18_F
			{
				weapon = "mas_launch_RPG18_F";
				count = 4;
			};
			class _xx_mas_launch_M136_F
			{
				weapon = "mas_launch_M136_F";
				count = 4;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon = "mas_launch_MAAWS_F";
				count = 4;
			};
			class _xx_mas_launch_stinger_F
			{
				weapon = "mas_launch_stinger_F";
				count = 4;
			};
			class _xx_mas_launch_strela_F
			{
				weapon = "mas_launch_strela_F";
				count = 4;
			};
			class _xx_launch_Titan_short_F
			{
				weapon = "launch_Titan_short_F";
				count = 4;
			};
			class _xx_launch_Titan_F
			{
				weapon = "launch_Titan_F";
				count = 4;
			};
			class _xx_arifle_SDAR_F
			{
				weapon = "arifle_SDAR_F";
				count = 20;
			};
			class _xx_arifle_mas_mp5sd_ds
			{
				weapon = "arifle_mas_mp5sd_ds";
				count = 10;
			};
			class _xx_hgun_P07_F
			{
				weapon = "hgun_P07_F";
				count = 4;
			};
			class _xx_hgun_P07_snds_F
			{
				weapon = "hgun_P07_snds_F";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 5;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 5;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 20;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 20;
			};
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 20;
			};
			class _xx_acc_mas_pointer_IR
			{
				name = "acc_mas_pointer_IR";
				count = 20;
			};
			class _xx_muzzle_mas_snds_M
			{
				name = "muzzle_mas_snds_M";
				count = 10;
			};
			class _xx_muzzle_mas_snds_Mc
			{
				name = "muzzle_mas_snds_Mc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SM
			{
				name = "muzzle_mas_snds_SM";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SMc
			{
				name = "muzzle_mas_snds_SMc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SH
			{
				name = "muzzle_mas_snds_SH";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SHc
			{
				name = "muzzle_mas_snds_SHc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SV
			{
				name = "muzzle_mas_snds_SV";
				count = 10;
			};
			class _xx_muzzle_mas_snds_SVc
			{
				name = "muzzle_mas_snds_SVc";
				count = 10;
			};
			class _xx_muzzle_mas_snds_C
			{
				name = "muzzle_mas_snds_C";
				count = 20;
			};
			class _xx_muzzle_mas_snds_L
			{
				name = "muzzle_mas_snds_L";
				count = 20;
			};
			class _xx_muzzle_mas_snds_LM
			{
				name = "muzzle_mas_snds_LM";
				count = 20;
			};
			class _xx_muzzle_mas_snds_AK
			{
				name = "muzzle_mas_snds_AK";
				count = 20;
			};
			class _xx_muzzle_mas_snds_SVD
			{
				name = "muzzle_mas_snds_SVD";
				count = 20;
			};
			class _xx_muzzle_mas_snds_KSVK
			{
				name = "muzzle_mas_snds_KSVK";
				count = 20;
			};
			class _xx_muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 10;
			};
			class _xx_muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 10;
			};
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 10;
			};
			class _xx_muzzle_snds_L
			{
				name = "muzzle_snds_L";
				count = 10;
			};
			class _xx_muzzle_snds_H_MG
			{
				name = "muzzle_snds_H_MG";
				count = 10;
			};
			class _xx_optic_Hamr
			{
				name = "optic_Hamr";
				count = 10;
			};
			class _xx_optic_mas_Hamr_camo
			{
				name = "optic_mas_Hamr_camo";
				count = 10;
			};
			class _xx_optic_Arco
			{
				name = "optic_Arco";
				count = 10;
			};
			class _xx_optic_mas_Arco_blk
			{
				name = "optic_mas_Arco_blk";
				count = 10;
			};
			class _xx_optic_mas_Arco_camo
			{
				name = "optic_mas_Arco_camo";
				count = 10;
			};
			class _xx_optic_MRCO
			{
				name = "optic_MRCO";
				count = 10;
			};
			class _xx_optic_mas_MRCO_camo
			{
				name = "optic_mas_MRCO_camo";
				count = 10;
			};
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_optic_mas_Holosight_blk
			{
				name = "optic_mas_Holosight_blk";
				count = 10;
			};
			class _xx_optic_mas_Holosight_camo
			{
				name = "optic_mas_Holosight_camo";
				count = 10;
			};
			class _xx_optic_Aco
			{
				name = "optic_Aco";
				count = 10;
			};
			class _xx_optic_mas_Aco_camo
			{
				name = "optic_mas_Aco_camo";
				count = 10;
			};
			class _xx_optic_Aco_grn
			{
				name = "optic_Aco_grn";
				count = 10;
			};
			class _xx_optic_mas_ACO_grn_camo
			{
				name = "optic_mas_ACO_grn_camo";
				count = 10;
			};
			class _xx_optic_mas_aim
			{
				name = "optic_mas_aim";
				count = 10;
			};
			class _xx_optic_mas_aim_c
			{
				name = "optic_mas_aim_c";
				count = 10;
			};
			class _xx_optic_mas_acog
			{
				name = "optic_mas_acog";
				count = 10;
			};
			class _xx_optic_mas_acog_c
			{
				name = "optic_mas_acog_c";
				count = 10;
			};
			class _xx_optic_mas_acog_eo
			{
				name = "optic_mas_acog_eo";
				count = 10;
			};
			class _xx_optic_mas_acog_eo_c
			{
				name = "optic_mas_acog_eo_c";
				count = 10;
			};
			class _xx_optic_mas_acog_rd
			{
				name = "optic_mas_acog_rd";
				count = 10;
			};
			class _xx_optic_mas_acog_rd_c
			{
				name = "optic_mas_acog_rd_c";
				count = 10;
			};
			class _xx_optic_mas_pso
			{
				name = "optic_mas_pso";
				count = 10;
			};
			class _xx_optic_mas_pso_c
			{
				name = "optic_mas_pso_c";
				count = 10;
			};
			class _xx_optic_mas_pso_nv
			{
				name = "optic_mas_pso_nv";
				count = 10;
			};
			class _xx_optic_mas_pso_nv_c
			{
				name = "optic_mas_pso_nv_c";
				count = 10;
			};
			class _xx_optic_mas_pso_eo
			{
				name = "optic_mas_pso_eo";
				count = 10;
			};
			class _xx_optic_mas_pso_eo_c
			{
				name = "optic_mas_pso_eo_c";
				count = 10;
			};
			class _xx_optic_mas_pso_nv_eo
			{
				name = "optic_mas_pso_nv_eo";
				count = 10;
			};
			class _xx_optic_mas_pso_nv_eo_c
			{
				name = "optic_mas_pso_nv_eo_c";
				count = 10;
			};
			class _xx_optic_mas_zeiss
			{
				name = "optic_mas_zeiss";
				count = 10;
			};
			class _xx_optic_mas_zeiss_c
			{
				name = "optic_mas_zeiss_c";
				count = 10;
			};
			class _xx_optic_mas_zeiss_eo
			{
				name = "optic_mas_zeiss_eo";
				count = 10;
			};
			class _xx_optic_mas_zeiss_eo_c
			{
				name = "optic_mas_zeiss_eo_c";
				count = 10;
			};
			class _xx_optic_mas_DMS
			{
				name = "optic_mas_DMS";
				count = 10;
			};
			class _xx_optic_mas_DMS_c
			{
				name = "optic_mas_DMS_c";
				count = 10;
			};
			class _xx_optic_DMS
			{
				name = "optic_DMS";
				count = 10;
			};
			class _xx_optic_SOS
			{
				name = "optic_SOS";
				count = 10;
			};
			class _xx_optic_LRPS
			{
				name = "optic_LRPS";
				count = 10;
			};
			class _xx_optic_NVS
			{
				name = "optic_NVS";
				count = 10;
			};
			class _xx_optic_Nightstalker
			{
				name = "optic_Nightstalker";
				count = 10;
			};
			class _xx_optic_tws
			{
				name = "optic_tws";
				count = 10;
			};
			class _xx_optic_tws_mg
			{
				name = "optic_tws_mg";
				count = 10;
			};
			class _xx_optic_mas_term
			{
				name = "optic_mas_term";
				count = 10;
			};
			class _xx_optic_Holosight_smg
			{
				name = "optic_Holosight_smg";
				count = 10;
			};
			class _xx_optic_Aco_smg
			{
				name = "optic_Aco_smg";
				count = 10;
			};
			class _xx_optic_ACO_grn_smg
			{
				name = "optic_ACO_grn_smg";
				count = 10;
			};
			class _xx_optic_MRD
			{
				name = "optic_MRD";
				count = 10;
			};
			class _xx_optic_Yorris
			{
				name = "optic_Yorris";
				count = 10;
			};
			class _xx_Rangefinder
			{
				name = "Rangefinder";
				count = 10;
			};
			class _xx_Binocular
			{
				name = "Binocular";
				count = 10;
			};
			class _xx_LaserDesignator
			{
				name = "LaserDesignator";
				count = 4;
			};
			class _xx_NVGoggles
			{
				name = "NVGoggles";
				count = 10;
			};
			class _xx_NVGoggles_mas
			{
				name = "NVGoggles_mas";
				count = 10;
			};
			class _xx_NVGoggles_OPFOR
			{
				name = "NVGoggles_OPFOR";
				count = 10;
			};
			class _xx_NVGoggles_o_mas
			{
				name = "NVGoggles_o_mas";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask
			{
				name = "NVGoggles_mas_mask";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2
			{
				name = "NVGoggles_mas_mask2";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_b
			{
				name = "NVGoggles_mas_mask_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_b
			{
				name = "NVGoggles_mas_mask2_b";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask_t
			{
				name = "NVGoggles_mas_mask_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask2_t
			{
				name = "NVGoggles_mas_mask2_t";
				count = 10;
			};
			class _xx_NVGoggles_mas_mask3
			{
				name = "NVGoggles_mas_mask3";
				count = 10;
			};
		};
	};
};

