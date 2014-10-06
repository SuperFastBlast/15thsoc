
enum 
{
	destructengine=2,
	destructdefault=6,
	destructwreck=7,
	destructtree=3,
	destructtent=4,
	stabilizedinaxisx=1,
	stabilizedinaxesxyz=4,
	stabilizedinaxisy=2,
	stabilizedinaxesboth=3,
	destructno=0,
	stabilizedinaxesnone=0,
	destructman=5,
	destructbuilding=1
};
class CfgPatches
{
	class mas_weapons_pack
	{
		units[] = {"B_mas_AssaultPack_mul","B_mas_Kitbag_mul","B_mas_Bergen_mul","B_mas_AssaultPack_mul_ammo","B_mas_AssaultPack_mul_ammo_MG","B_mas_AssaultPack_mul_Medic","B_mas_AssaultPack_mul_AA","B_mas_AssaultPack_mul_AT","B_mas_AssaultPack_mul_AT4","B_mas_AssaultPack_mul_MAAWS","B_mas_AssaultPack_mul_ATM","B_mas_AssaultPack_mul_Repair","B_mas_Bergen_mul_Exp","B_mas_AssaultPack_des","B_mas_Kitbag_des","B_mas_Bergen_des","B_mas_AssaultPack_des_Medic","B_mas_AssaultPack_des_AA","B_mas_AssaultPack_des_AT","B_mas_AssaultPack_des_AT4","B_mas_AssaultPack_des_MAAWS","B_mas_AssaultPack_des_ATM","B_mas_AssaultPack_des_Repair","B_mas_Bergen_des_Exp","B_mas_AssaultPack_black","B_mas_Kitbag_black","B_mas_Bergen_black","B_mas_AssaultPack_black_Medic","B_mas_AssaultPack_black_AA","B_mas_AssaultPack_black_AT","B_mas_AssaultPack_black_AT4","B_mas_AssaultPack_black_MAAWS","B_mas_AssaultPack_black_ATM","B_mas_AssaultPack_black_Repair","B_mas_Bergen_black_Exp","B_mas_AssaultPack_wint","B_mas_Kitbag_wint","B_mas_Bergen_wint","B_mas_AssaultPack_wint_Medic","B_mas_AssaultPack_wint_AA","B_mas_AssaultPack_wint_AT","B_mas_AssaultPack_wint_AT4","B_mas_AssaultPack_wint_MAAWS","B_mas_AssaultPack_wint_ATM","B_mas_AssaultPack_wint_Repair","B_mas_Bergen_wint_Exp","B_mas_AssaultPack_rng","B_mas_Kitbag_rng","B_mas_Bergen_rng","B_mas_AssaultPack_rng_Medic","B_mas_AssaultPack_rng_AA","B_mas_AssaultPack_rng_AT","B_mas_AssaultPack_rng_AT4","B_mas_AssaultPack_rng_MAAWS","B_mas_AssaultPack_rng_ATM","B_mas_AssaultPack_rng_Repair","B_mas_Bergen_rng_Exp","O_mas_Bergen_flo","O_mas_Bergen_flo_ammo_MG","O_mas_Bergen_flo_AAT","O_mas_Bergen_flo_AAA","O_mas_Bergen_flo_ammo","O_mas_AssaultPack_flo_Medic","O_mas_AssaultPack_flo_AA","O_mas_AssaultPack_flo_AT","O_mas_AssaultPack_flo_RPG7","O_mas_AssaultPack_flo_RPG18","O_mas_AssaultPack_flo_ATM","O_mas_AssaultPack_flo_Repair","O_mas_Bergen_flo_Exp","O_mas_Bergen_blk","O_mas_AssaultPack_blk_Medic","O_mas_AssaultPack_blk_AA","O_mas_AssaultPack_blk_AT","O_mas_AssaultPack_blk_RPG7","O_mas_AssaultPack_blk_RPG18","O_mas_AssaultPack_blk_ATM","O_mas_AssaultPack_blk_Repair","O_mas_Bergen_blk_Exp"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F","mas_weapons"};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class B_FieldPack_blk_DiverExp;
	class B_AssaultPack_rgr;
	class B_Kitbag_mcamo;
	class B_Bergen_sgg;
	class Box_East_Wps_F;
	class B_AssaultPack_mcamo_Ammo;
	class B_Carryall_mcamo_AAA;
	class B_Carryall_mcamo_AAT;
	class B_mas_AssaultPack_mul: B_AssaultPack_rgr
	{
		displayName = "Assault pack multi";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_compact_mcamo_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_co.paa";
	};
	class B_mas_Kitbag_mul: B_Kitbag_mcamo
	{
		displayName = "Fast pack multi";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_fast_mcamo_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_co.paa";
	};
	class B_mas_Bergen_mul: B_Bergen_sgg
	{
		displayName = "Bergen multi";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack1_mcamo_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_co.paa";
		maximumLoad = 480;
		mass = 40;
	};
	class B_mas_AssaultPack_mul_ammo: B_Carryall_mcamo_AAT
	{
		displayName = "Ammo pack multi";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_mul_ammo_MG: B_Carryall_mcamo_AAT
	{
		displayName = "MG Ammo pack multi";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 4;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine = "100Rnd_mas_762x51_T_Stanag";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_mul_Medic: B_mas_AssaultPack_mul
	{
		displayName = "Medic pack multi";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_mas_AssaultPack_mul_AA: B_mas_AssaultPack_mul
	{
		displayName = "AA pack multi";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_mul_AT: B_mas_AssaultPack_mul
	{
		displayName = "NLAW pack multi";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_mul_AT4: B_mas_AssaultPack_mul
	{
		displayName = "AT4 pack multi";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_mul_MAAWS: B_mas_AssaultPack_mul
	{
		displayName = "MAAWS pack multi";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_mul_ATM: B_mas_AssaultPack_mul
	{
		displayName = "Titan AT pack multi";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_mul_Repair: B_mas_Bergen_mul
	{
		displayName = "Engineer pack multi";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_Bergen_mul_Exp: B_mas_Bergen_mul
	{
		displayName = "Demo pack multi";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_AssaultPack_des: B_AssaultPack_rgr
	{
		displayName = "Assault pack des";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_compact_des_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cd.paa";
	};
	class B_mas_Kitbag_des: B_Kitbag_mcamo
	{
		displayName = "Fast pack des";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_fast_des_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cd.paa";
	};
	class B_mas_Bergen_des: B_Bergen_sgg
	{
		displayName = "Bergen des";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack1_des.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cd.paa";
		maximumLoad = 480;
		mass = 40;
	};
	class B_mas_AssaultPack_des_Medic: B_mas_AssaultPack_des
	{
		displayName = "Medic pack des";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_mas_AssaultPack_des_AA: B_mas_AssaultPack_des
	{
		displayName = "AA pack des";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_des_AT: B_mas_AssaultPack_des
	{
		displayName = "NLAW pack des";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_des_AT4: B_mas_AssaultPack_des
	{
		displayName = "AT4 pack des";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_des_MAAWS: B_mas_AssaultPack_des
	{
		displayName = "MAAWS pack des";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_des_ATM: B_mas_AssaultPack_des
	{
		displayName = "Titan AT pack des";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_des_Repair: B_mas_Bergen_des
	{
		displayName = "Engineer pack des";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_Bergen_des_Exp: B_mas_Bergen_des
	{
		displayName = "Demo pack des";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_AssaultPack_black: B_AssaultPack_rgr
	{
		displayName = "Assault pack black";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_compact_blk_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cb.paa";
	};
	class B_mas_Kitbag_black: B_Kitbag_mcamo
	{
		displayName = "Fast pack black";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_fast_blk_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cb.paa";
	};
	class B_mas_Bergen_black: B_Bergen_sgg
	{
		displayName = "Bergen black";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack1_blk_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cb.paa";
		maximumLoad = 480;
		mass = 40;
	};
	class B_mas_AssaultPack_black_Medic: B_mas_AssaultPack_black
	{
		displayName = "Medic pack black";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_mas_AssaultPack_black_AA: B_mas_AssaultPack_black
	{
		displayName = "AA pack black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_black_AT: B_mas_AssaultPack_black
	{
		displayName = "NLAW pack black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_black_AT4: B_mas_AssaultPack_black
	{
		displayName = "AT4 pack black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_black_MAAWS: B_mas_AssaultPack_black
	{
		displayName = "MAAWS pack black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_black_ATM: B_mas_AssaultPack_black
	{
		displayName = "Titan AT pack black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_black_Repair: B_mas_Bergen_black
	{
		displayName = "Engineer pack black";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_Bergen_black_Exp: B_mas_Bergen_black
	{
		displayName = "Demo pack black";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_AssaultPack_wint: B_AssaultPack_rgr
	{
		displayName = "Assault pack wint";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_compact_win_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cw.paa";
	};
	class B_mas_Kitbag_wint: B_Kitbag_mcamo
	{
		displayName = "Fast pack wint";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_fast_win_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cw.paa";
	};
	class B_mas_Bergen_wint: B_Bergen_sgg
	{
		displayName = "Bergen wint";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack1_win_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cw.paa";
		maximumLoad = 480;
		mass = 40;
	};
	class B_mas_AssaultPack_wint_Medic: B_mas_AssaultPack_wint
	{
		displayName = "Medic pack wint";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_mas_AssaultPack_wint_AA: B_mas_AssaultPack_wint
	{
		displayName = "AA pack wint";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_wint_AT: B_mas_AssaultPack_wint
	{
		displayName = "NLAW pack wint";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_wint_AT4: B_mas_AssaultPack_wint
	{
		displayName = "AT4 pack wint";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_wint_MAAWS: B_mas_AssaultPack_wint
	{
		displayName = "MAAWS pack wint";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_wint_ATM: B_mas_AssaultPack_wint
	{
		displayName = "Titan AT pack wint";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_wint_Repair: B_mas_Bergen_wint
	{
		displayName = "Engineer pack wint";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_Bergen_wint_Exp: B_mas_Bergen_wint
	{
		displayName = "Demo pack wint";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_AssaultPack_rng: B_AssaultPack_rgr
	{
		displayName = "Assault pack green";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_compact_rgr_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cv.paa";
	};
	class B_mas_Kitbag_rng: B_Kitbag_mcamo
	{
		displayName = "Fast pack green";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack_fast_rgr_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cv.paa";
	};
	class B_mas_Bergen_rng: B_Bergen_sgg
	{
		displayName = "Bergen green";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack1_rgr_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cv.paa";
		maximumLoad = 480;
		mass = 40;
	};
	class B_mas_AssaultPack_rng_Medic: B_mas_AssaultPack_rng
	{
		displayName = "Medic pack green";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_mas_AssaultPack_rng_AA: B_mas_AssaultPack_rng
	{
		displayName = "AA pack green";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Stinger
			{
				magazine = "mas_Stinger";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_rng_AT: B_mas_AssaultPack_rng
	{
		displayName = "NLAW pack green";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_rng_AT4: B_mas_AssaultPack_rng
	{
		displayName = "AT4 pack green";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_M136
			{
				magazine = "mas_M136";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_rng_MAAWS: B_mas_AssaultPack_rng
	{
		displayName = "MAAWS pack green";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 4;
			};
		};
	};
	class B_mas_AssaultPack_rng_ATM: B_mas_AssaultPack_rng
	{
		displayName = "Titan AT pack green";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_mas_AssaultPack_rng_Repair: B_mas_Bergen_rng
	{
		displayName = "Engineer pack green";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_mas_Bergen_rng_Exp: B_mas_Bergen_rng
	{
		displayName = "Demo pack green";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class O_mas_Bergen_flo: B_Bergen_sgg
	{
		displayName = "Bergen Flora";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack1_flo_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cf.paa";
		maximumLoad = 480;
		mass = 40;
	};
	class O_mas_Bergen_flo_ammo_MG: O_mas_Bergen_flo
	{
		displayName = "MG Ammo pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_100Rnd_mas_545x39_T_mag
			{
				magazine = "100Rnd_mas_545x39_T_mag";
				count = 4;
			};
			class _xx_100Rnd_mas_762x54_T_mag
			{
				magazine = "100Rnd_mas_762x54_T_mag";
				count = 4;
			};
		};
	};
	class O_mas_Bergen_flo_AAT: O_mas_Bergen_flo
	{
		displayName = "AT ass. pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 4;
			};
		};
	};
	class O_mas_Bergen_flo_AAA: O_mas_Bergen_flo
	{
		displayName = "AA ass. pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Strela
			{
				magazine = "mas_Strela";
				count = 3;
			};
		};
	};
	class O_mas_Bergen_flo_ammo: O_mas_Bergen_flo
	{
		displayName = "Ammo pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_545x39_mag
			{
				magazine = "30Rnd_mas_545x39_mag";
				count = 8;
			};
			class _xx_30Rnd_mas_762x39_mag
			{
				magazine = "30Rnd_mas_762x39_mag";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 4;
			};
			class _xx_O_IR_Grenade
			{
				magazine = "O_IR_Grenade";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class O_mas_AssaultPack_flo_Medic: O_mas_Bergen_flo
	{
		displayName = "Medic pack Flora";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class O_mas_AssaultPack_flo_AA: O_mas_Bergen_flo
	{
		displayName = "AA pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Strela
			{
				magazine = "mas_Strela";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_flo_AT: O_mas_Bergen_flo
	{
		displayName = "RPG32 pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 2;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_flo_RPG7: O_mas_Bergen_flo
	{
		displayName = "RPG7 pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_PG7V
			{
				magazine = "mas_PG7V";
				count = 2;
			};
			class _xx_mas_OG7
			{
				magazine = "mas_OG7";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_flo_RPG18: O_mas_Bergen_flo
	{
		displayName = "RPG18 pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_PG18
			{
				magazine = "mas_PG18";
				count = 4;
			};
		};
	};
	class O_mas_AssaultPack_flo_ATM: O_mas_Bergen_flo
	{
		displayName = "Titan AT pack Flora";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_flo_Repair: O_mas_Bergen_flo
	{
		displayName = "Engineer pack Flora";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class O_mas_Bergen_flo_Exp: O_mas_Bergen_flo
	{
		displayName = "Demo pack Flora";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class O_mas_Bergen_blk: B_Bergen_sgg
	{
		displayName = "Bergen Black";
		hiddenSelectionsTextures[] = {"\mas_us_rifle\packs\backpack1_blk_co.paa"};
		picture = "\mas_us_rifle\packs\ui\backpack_cb.paa";
		maximumLoad = 480;
		mass = 40;
	};
	class O_mas_AssaultPack_blk_Medic: O_mas_Bergen_blk
	{
		displayName = "Medic pack Black";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class O_mas_AssaultPack_blk_AA: O_mas_Bergen_blk
	{
		displayName = "AA pack Black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_Strela
			{
				magazine = "mas_Strela";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_blk_AT: O_mas_Bergen_blk
	{
		displayName = "RPG32 pack Black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 2;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_blk_RPG7: O_mas_Bergen_blk
	{
		displayName = "RPG7 pack Black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_PG7V
			{
				magazine = "mas_PG7V";
				count = 2;
			};
			class _xx_mas_OG7
			{
				magazine = "mas_OG7";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_blk_RPG18: O_mas_Bergen_blk
	{
		displayName = "RPG18 pack Black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_mas_PG18
			{
				magazine = "mas_PG18";
				count = 4;
			};
		};
	};
	class O_mas_AssaultPack_blk_ATM: O_mas_Bergen_blk
	{
		displayName = "Titan AT pack Black";
		maximumLoad = 480;
		mass = 40;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class O_mas_AssaultPack_blk_Repair: O_mas_Bergen_blk
	{
		displayName = "Engineer pack Black";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class O_mas_Bergen_blk_Exp: O_mas_Bergen_blk
	{
		displayName = "Demo pack Black";
		class TransportWeapons{};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
};
