
class CfgPatches
{
	class CUP_Weapons_East_Attachments
	{
		units[] = {};
		weapons[] = {"CUP_optic_PSO_1","CUP_optic_PSO_3","CUP_optic_Kobra","CUP_optic_GOSHAWK","CUP_optic_NSPU","CUP_optic_PechenegScope","CUP_muzzle_PBS4","CUP_muzzle_PB6P9","CUP_muzzle_Bizon"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","asdg_jointrails"};
	};
};
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems
	{
		CUP_optic_PSO_1 = 1;
		CUP_optic_Kobra = 1;
		CUP_optic_GOSHAWK = 1;
		CUP_optic_NSPU = 1;
		CUP_optic_PSO_3 = 1;
	};
};
class CUP_DovetailMount: asdg_OpticSideMount
{
	access = 0;
	scope = 0;
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "East Dovetail Optics Mount";
};
class CUP_PerchenegMount
{
	access = 0;
	scope = 2;
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "East Percheneg Mount";
	class compatibleItems
	{
		CUP_optic_PSO_1 = 0;
		CUP_optic_Kobra = 0;
		CUP_optic_GOSHAWK = 0;
		CUP_optic_NSPU = 0;
		CUP_optic_PSO_3 = 0;
		CUP_optic_PechenegScope = 1;
	};
};
class CUP_EastMuzzleSlotPBS4
{
	access = 0;
	scope = 0;
	displayName = "Suppressor Attachment";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		CUP_muzzle_PBS4 = 1;
		CUP_muzzle_Bizon = 0;
	};
};
class CUP_EastMuzzleSlot9mm
{
	access = 0;
	scope = 0;
	displayName = "Suppressor Attachment";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		CUP_muzzle_PBS4 = 0;
		CUP_muzzle_Bizon = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_L;
	class CUP_optic_PSO_1: ItemCore
	{
		scope = 2;
		displayName = "PSO-1 Scope";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_1_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\pso_1.p3d";
		descriptionShort = "Medium to Long range Russian optic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 13;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\pso_optics";
			class OpticsModes
			{
				class PSO
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomInit = 0.0623;
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class CUP_optic_PSO_3: ItemCore
	{
		scope = 2;
		displayName = "PSO-3 Scope";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_3_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\pso_3.p3d";
		descriptionShort = "Long range Russian optic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 16;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\pso3_optics";
			class OpticsModes
			{
				class PSO
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomInit = 0.0311;
					opticsZoomMin = 0.0311;
					opticsZoomMax = 0.0311;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					cameraDir = "";
				};
			};
		};
		inertia = 0.2;
	};
	class CUP_optic_Kobra: ItemCore
	{
		scope = 2;
		displayName = "Kobra Reflex Sight";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\Kobra\data\UI\gear_acco_kobra_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\Kobra\kobra.p3d";
		descriptionShort = "Close Combat optic";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "Advanced Collimator Optics";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class ACO
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
					opticsPPEffects[] = {};
				};
			};
		};
		inertia = 0;
	};
	class CUP_optic_GOSHAWK: ItemCore
	{
		scope = 2;
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\goshawk\goshawk";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\goshawk\data\ui\gear_acco_goshawk_ca.paa";
		displayName = "GOSHAWK TWS";
		descriptionShort = "GOSHAWK Thermal Weapon Sight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 35;
			weaponInfoType = "RscWeaponRangeZeroingModeFOV";
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_East_Attachments\Goshawk\TI_goshawk_optic.p3d";
			class OpticsModes
			{
				class TWS
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.06944444;
					opticsZoomMax = 0.06944444;
					opticsZoomInit = 0.06944444;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {"Ti"};
					thermalMode[] = {0};
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
		inertia = 0.3;
	};
	class CUP_optic_NSPU: ItemCore
	{
		scope = 2;
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\NSPU\nspu.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\NSPU\data\ui\gear_acco_nspu_ca.paa";
		displayName = "1PN34 / NSPU Scope";
		descriptionShort = "NSPU Night Vision Scope";
		class Library
		{
			libTextDesc = "Rifle Scope with built-in night vision.";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 30;
			weaponInfoType = "RscWeaponRangeZeroingModeFOV";
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_East_Attachments\NSPU\NV_nspu_optic.p3d";
			class OpticsModes
			{
				class NSPU
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsZoomMin = 0.07082153;
					opticsZoomMax = 0.07082153;
					opticsZoomInit = 0.07082153;
					opticsDisablePeripherialVision = 1;
					memoryPointCamera = "opticView";
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Ironsights: NSPU
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.5;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
		inertia = 0.3;
	};
	class CUP_optic_PechenegScope: ItemCore
	{
		scope = 2;
		displayName = "Pecheneg Scope";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\data\ui\gear_acco_pechenegscope_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\pkp_scope.p3d";
		descriptionShort = "Long range Russian optic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 13;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\2Dscope_Pecheneg.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomInit = 0.0623;
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticsView";
					visionMode[] = {"Normal"};
					cameraDir = "";
				};
			};
		};
		inertia = 0.2;
	};
	class CUP_muzzle_PBS4: ItemCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "PBS4 silencer";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\pbs4_Silencer\data\UI\gear_acca_pbs4_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\pbs4_Silencer\pbs4.p3d";
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
				visibleFire = 0.07;
				audibleFire = 0.07;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
				typicalSpeed = 1.2;
				airFriction = 1.2;
			};
			muzzleEnd = "muzzlePoint";
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
		inertia = 0.1;
	};
	class CUP_muzzle_PB6P9: ItemCore
	{
		scope = 2;
		displayName = "PB 6P9 silencer";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\PB_6P9_Silencer\Data\UI\gear_acca_pb_6p9_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\PB_6P9_Silencer\pb_6p9_silencer.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1.1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
				typicalSpeed = 1.2;
				airFriction = 1.2;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
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
		intertia = 0;
	};
	class CUP_muzzle_Bizon: ItemCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "PP-19 Bizon silencer";
		picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\bizon_Silencer\data\UI\gear_acca_bizon_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_East_Attachments\bizon_silencer\bizon_silencer.p3d";
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
				visibleFire = 0.07;
				audibleFire = 0.07;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
				typicalSpeed = 1.2;
				airFriction = 1.2;
			};
			muzzleEnd = "muzzlePoint";
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
		inertia = 0.1;
	};
};
