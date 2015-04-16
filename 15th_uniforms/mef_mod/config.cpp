
class CfgPatches
{
    class mef_mod
    {
        units[] = {"MEF_S_LS_ReconHC","MEF_D_LS_ReconHC","MEF_W_LS_ReconHC","MEF_TAN_F_Pilot","MEF_TAN_H_Pilot","MEF_OD_F_Pilot","MEF_IN_SNOW_LS","MEF_S_LS_Rpr","MEF_S_LS_HC","MEF_S_LS_Exp2","MEF_S_LS_Exp","MEF_USMC_Huron","MEF_IN_DMARPAT_RS","MEF_D_LS_Rpr","MEF_D_LS_HC","MEF_D_LS_Exp2","MEF_D_LS_Exp","MEF_IN_DMARPAT_LS","MEF_IN_WMARPAT_RS","MEF_W_LS_Rpr","MEF_W_LS_HC","MEF_W_LS_Exp2","MEF_W_LS_Exp","MEF_IN_WMARPAT_LS","MEF_WMARPAT_LS","MEF_WMARPAT_RS","MEF_WMARPAT_TS","MEF_DMARPAT_LS","MEF_DMARPAT_RS","MEF_DMARPAT_TS",
"MEF_RECON_WBLK","MEF_RECON_WBLK_RS","MEF_RECON_WOD","MEF_RECON_WOD_RS","MEF_RECON_WTAN","MEF_RECON_WTAN_RS","MEF_RECON_WDIV","MEF_RECON_DBLK","MEF_RECON_DBLK_RS","MEF_RECON_DOD","MEF_RECON_DOD_RS","MEF_RECON_DTAN","MEF_RECON_DTAN_RS","MEF_RECON_DDIV"};
        weapons[] = {"OliveCoveralls","MEF_TAN_HP_Uni","MEF_TAN_F_SUIT","MEF_OD_F_SUIT","MEF_Vest_Tan_v2_Infantry","MEF_Snow_Goggles_Helmet_LWH","MEF_Snow_Helmet_LWH","MEF_Wood_MARPAT_TS","MEF_Wood_MARPAT_RS","MEF_Wood_MARPAT_LS","MEF_Desert_MARPAT_TS","MEF_Desert_MARPAT_RS","MEF_Desert_MARPAT_LS","MEF_DBLK_RS","MEF_DBLK","MEF_WBLK_RS","MEF_WBLK","MEF_DOD_RS","MEF_DOD","MEF_WOD_RS","MEF_WOD","MEF_DTAN_RS","MEF_DTAN","MEF_WTAN_RS","MEF_WTAN","MEF_DDIV","MEF_WDIV","MEF_Wood_IN_MARPAT_RS","MEF_Wood_IN_MARPAT_LS","MEF_Des_IN_MARPAT_LS","MEF_Des_IN_MARPAT_RS","MEF_Vest_Tan_Medical","MEF_Vest_Tan_Medical_L","MEF_Vest_Tan_Infantry","MEF_Vest_Tan_Infantry_L","MEF_Vest_Tan_Armor","MEF_Vest_Tan_Armor_L","MEF_Tan_Range_Belt","MEF_Desert_Helmet_MICH","MEF_woodland_Helmet_MICH","MEF_Boonie_Wood","MEF_Boonie_Des","MEF_Woodland_8Point","MEF_Desert_8Point","MEF_Wood_Goggles_Helmet_LWH","MEF_Wood_Helmet_LWH","MEF_Desert_Goggles_Helmet_LWH","MEF_Desert_Helmet_LWH"};
	author[] = {"Mattastic"};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F","A3_Weapons_F_Ammoboxes","A3_Air_F_Heli_Heli_Transport_03","A3_Air_F"};
    };
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
//////////Marine Expeditionary Unit//////////
class CfgFactionClasses 
{
	class MEF
	{
		displayName = "15th MEU";
		icon = "\mef_mod\15thintro.paa";	
		priority = 1;
		side = 1;
	};
};
//////////Marine Expeditionary Unit Types//////////
class CfgVehicleClasses 
{
	class MEF_A3_Units_1 
	{
		displayName = "2/4 Marines [WOOD]";
	};
	class MEF_A3_Units_2
	{
		displayName = "2/4 Marines [DESERT]";
	};
	class MEF_A3_Units_3
	{
		displayName = "ACE Personnel";
	};
	class MEF_A3_Units_4
	{
		displayName = "2/4 Marines [SNOW]";
	};
	class MEF_A3_Units_5
	{
		displayName = "MEF Tieovers [WOOD]";
	};
	class MEF_A3_Units_6
	{
		displayName = "MEF Tieovers [DESERT]";
	};
};
class CfgVehicles
{
//////////2rd Battalion 4th Marines Woodland//////////
	class B_soldier_exp_F;
	class B_Soldier_base_F;
	class B_Soldier_02_f;
	class B_Soldier_03_f;
	class B_soldier_repair_F;
	class B_Helipilot_F;
	class B_medic_F;
	class B_Soldier_A_F;
	class B_Soldier_TL_F;
	class B_soldier_AR_F;
	class B_Carryall_khk;
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class B_TacticalPack_oli;
	class B_Heli_Transport_03_F;
	class b_soldier_survival_F;
	
				class MEF_WMARPAT_LS : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					canDeactivateMines = 1;
					detectSkill = 10;
					_generalMacro = "MEF_WMARPAT_LS";
					displayName = "MEF NATO Uniform LS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_MARPAT_LS";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
				};
/////////////////ROLLED SHIRT///////////////////////
				class MEF_WMARPAT_RS : B_Soldier_03_f
				{
					side = 1;
					scope = 2;
					nakedUniform = "U_BasicBody";
					_generalMacro = "MEF_WMARPAT_RS";
					displayName = "MEF NATO Uniform RS";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_MARPAT_RS";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
				};
////////////////TEE SHIRT//////////////////
				class MEF_WMARPAT_TS : B_soldier_AR_F
				{
					side = 1;
					scope = 2;
					nakedUniform = "U_BasicBody";
					_generalMacro = "MEF_WMARPAT_TS";
					displayName = "MEF NATO Uniform TS";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_MARPAT_TS";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
				};
//////////3rd Battalion 9th Marines Desert//////////
				class MEF_DMARPAT_LS : B_Soldier_A_F
				{
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					canDeactivateMines = 1;
					detectSkill = 10;
					_generalMacro = "MEF_DMARPAT_LS";
					displayName = "MEF NATO Uniform LS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Desert_MARPAT_LS";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
				};
/////////////////ROLLED SHIRT///////////////////////
				class MEF_DMARPAT_RS : B_Soldier_TL_F
				{
					side = 1;
					scope = 2;
					nakedUniform = "U_BasicBody";
					_generalMacro = "MEF_DMARPAT_RS";
					displayName = "MEF NATO Uniform RS";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Desert_MARPAT_RS";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
				};
////////////////TEE SHIRT//////////////////
				class MEF_DMARPAT_TS : B_soldier_AR_F
				{
					side = 1;
					scope = 2;
					nakedUniform = "U_BasicBody";
					_generalMacro = "MEF_DMARPAT_TS";
					displayName = "MEF NATO Uniform TS";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Desert_MARPAT_TS";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
				};
////////////////RECON UNIFORMS//////////////////
///////////////WOOD////////////////////////////
				class MEF_RECON_WBLK : B_Soldier_base_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_WBLK";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Black Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_WBLK";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_blk_wmarpat_co.paa"};
				};
				class MEF_RECON_WBLK_RS : B_Soldier_03_f
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_WBLK_RS";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Black Uniform RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_WBLK_RS";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_blk_wmarpat_co.paa"};
				};
				class MEF_RECON_WOD : B_Soldier_A_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_WOD";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon OD Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_WOD";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_od_wmarpat_co.paa"};
				};
				class MEF_RECON_WOD_RS : B_Soldier_TL_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_WOD_RS";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon OD Uniform RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_WOD_RS";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_od_wmarpat_co.paa"};
				};
				class MEF_RECON_WTAN : B_Soldier_A_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_WTAN";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Tan Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_WTAN";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_tan_wmarpat_co.paa"};
				};
				class MEF_RECON_WTAN_RS : B_Soldier_03_f
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_WTAN_RS";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Tan Uniform RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_WTAN_RS";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_tan_wmarpat_co.paa"};
				};
				class MEF_RECON_WDIV : b_soldier_survival_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_WDIV";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Diver Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_WDIV";
				hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
				};
////////////////DESERT///////////////
				class MEF_RECON_DBLK : B_Soldier_base_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_DBLK";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Black Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_DBLK";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_blk_dmarpat_co.paa"};
				};
				class MEF_RECON_DBLK_RS : B_Soldier_03_f
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_DBLK_RS";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Black Uniform RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_DBLK_RS";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_blk_dmarpat_co.paa"};
				};
				class MEF_RECON_DOD : B_Soldier_A_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_DOD";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon OD Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_DOD";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_od_wmarpat_co.paa"};
				};
				class MEF_RECON_DOD_RS : B_Soldier_TL_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_DOD_RS";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon OD Uniform RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_DOD_RS";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_od_dmarpat_co.paa"};
				};
				class MEF_RECON_DTAN : B_Soldier_A_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_DTAN";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon TAN Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_DTAN";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_tan_dmarpat_co.paa"};
				};
				class MEF_RECON_DTAN_RS : B_Soldier_03_f
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_RECON_DTAN_RS";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon TAN Uniform RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_DTAN_RS";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_tan_dmarpat_co.paa"};
				};
				class MEF_RECON_DDIV : b_soldier_survival_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_DDIV";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					displayName = "Recon Driver Uniform";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_DDIV";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
				};
///////////////////////IND Variant Units - What we USE in the 15th//////////////////////////////
////////////////WOOD///////////////////
				class MEF_IN_WMARPAT_LS : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					_generalMacro = "MEF_IN_WMARPAT_LS";
					displayName = "15th Rifleman [Wood]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					backpack = "MEF_Wood_Assault";
					canDeactivateMines = 1;
					detectSkill = 10;
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
				};
				class MEF_W_LS_Exp : MEF_IN_WMARPAT_LS
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 3;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_W_LS_Exp";
					displayName = "15th Assault/EOD [Wood]";
					vehicleClass = "MEF_A3_Units_1";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_W_LS_Exp2 : MEF_IN_WMARPAT_LS
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .03;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_W_LS_Exp2";
					displayName = "15th Recon [Wood]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_W_LS_HC : B_medic_F
				{
					side = 1;
					attendant = true;
					_generalMacro = "MEF_W_LS_HC";
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					displayName = "15th Hospital Corpsman (Wood)";
					faction = "MEF";
					canDeactivateMines = 1;
					detectSkill = 10;
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					icon = "iconManMedic";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Medical","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Medical","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
					picture = "pictureHeal";
				};
				class MEF_W_LS_ReconHC : B_medic_F
				{
					side = 1;
					attendant = true;
					_generalMacro = "MEF_W_LS_ReconHC";
					scope = 2;
					audible = .03;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					displayName = "15th Recon Corpsman (Wood)";
					faction = "MEF";
					canDeactivateMines = 1;
					detectSkill = 80;
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					icon = "iconManMedic";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Medical","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Medical","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
					picture = "pictureHeal";
				};
				class MEF_W_LS_Rpr: B_soldier_repair_F
				{
					attendant = true;
					_generalMacro = "MEF_W_LS_Rpr";
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
  					engineer = 1;
  					detectSkill = 40;
					displayName = "15th Combat Engineer [Wood]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					backpack = "MEF_Wood_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
					icon = "iconManEngineer";
  					picture = "pictureRepair";
				};
				class MEF_IN_WMARPAT_RS : B_Soldier_02_f
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					_generalMacro = "MEF_IN_WMARPAT_RS";
					displayName = "MEF Rifleman [RS-Wood]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					backpack = "MEF_Wood_Assault";
					canDeactivateMines = 1;
					detectSkill = 10;
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_MARPAT_RS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
				};
////////////////DESERT///////////////////
				class MEF_IN_DMARPAT_LS : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					_generalMacro = "MEF_IN_DMARPAT_LS";
					displayName = "15th Rifleman [Des]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					backpack = "MEF_Des_Assault";
					canDeactivateMines = 1;
					detectSkill = 10;
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
				};
				class MEF_D_LS_Exp : B_soldier_exp_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 3;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_D_LS_Exp";
					displayName = "15th Assault/EOD [Des]";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
				};
				class MEF_D_LS_Exp2 : B_soldier_exp_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_D_LS_Exp2";
					displayName = "15th Recon [Des]";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
				};
				class MEF_D_LS_HC : B_medic_F
				{
					side = 1;
					attendant = true;
					_generalMacro = "MEF_D_LS_HC";
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					displayName = "Hospital Corpsman (LS-Des)";
					faction = "MEF";
					canDeactivateMines = 1;
					detectSkill = 10;
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					icon = "iconManMedic";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
					picture = "pictureHeal";
				};	
				class MEF_D_LS_ReconHC : B_medic_F
				{
					side = 1;
					attendant = true;
					_generalMacro = "MEF_D_LS_ReconHC";
					scope = 2;
					audible = .03;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					displayName = "15th Recon Corpsman (LS-Des)";
					faction = "MEF";
					canDeactivateMines = 1;
					detectSkill = 80;
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					icon = "iconManMedic";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
					picture = "pictureHeal";
				};
				class MEF_D_LS_Rpr: B_soldier_repair_F
				{
					attendant = true;
					_generalMacro = "MEF_D_LS_Rpr";
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
  					engineer = 1;
  					detectSkill = 40;
					displayName = "15th Combat Engineer [Des]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
					icon = "iconManEngineer";
  					picture = "pictureRepair";
				};
				class MEF_IN_DMARPAT_RS : B_Soldier_02_f
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					_generalMacro = "MEF_IN_DMARPAT_LS";
					displayName = "MEF Rifleman [RS-Des]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					backpack = "MEF_Des_Assault";
					canDeactivateMines = 1;
					detectSkill = 10;
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_RS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
				};
////////////////SNOW///////////////////
				class MEF_IN_SNOW_LS : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					_generalMacro = "MEF_IN_SNOW_LS";
					displayName = "15th Rifleman [Snow]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_4";
					backpack = "MEF_TAN_Assault";
					canDeactivateMines = 1;
					detectSkill = 10;
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_SNOW_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\snowcamo\mef_u2_sm_co.paa"};
				};
				class MEF_S_LS_Exp : B_soldier_exp_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 3;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_S_LS_Exp";
					displayName = "15th Assault/EOD [Snow]";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_4";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_SNOW_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\snowcamo\mef_u2_sm_co.paa"};
				};
				class MEF_S_LS_Exp2 : B_soldier_exp_F
				{
					canHideBodies = true;
					side = 1;
					scope = 2;
					audible = .04;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 2;
					threat[] = {1,0.2,0.05};
					_generalMacro = "MEF_S_LS_Exp2";
					displayName = "15th Recon [Snow]";
					canDeactivateMines = 1;
					detectSkill = 80;
					icon = "iconManExplosive";
					picture = "pictureExplosive";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_4";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_SNOW_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\snowcamo\mef_u2_sm_co.paa"};
				};
				class MEF_S_LS_HC : B_medic_F
				{
					side = 1;
					attendant = true;
					_generalMacro = "MEF_S_LS_HC";
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					displayName = "15th Hospital Corpsman (Snow)";
					faction = "MEF";
					canDeactivateMines = 1;
					detectSkill = 10;
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_4";
					icon = "iconManMedic";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_SNOW_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\snowcamo\mef_u2_sm_co.paa"};
					picture = "pictureHeal";
				};
				class MEF_S_LS_ReconHC : B_medic_F
				{
					side = 1;
					attendant = true;
					_generalMacro = "MEF_S_LS_ReconHC";
					scope = 2;
					audible = .03;
					accuracy = 0.25;
					camouflage = 0.6;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
					displayName = "15th Recon Corpsman (Snow)";
					faction = "MEF";
					canDeactivateMines = 1;
					detectSkill = 80;
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_4";
					icon = "iconManMedic";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_SNOW_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\snowcamo\mef_u2_sm_co.paa"};
					picture = "pictureHeal";
				};	
				class MEF_S_LS_Rpr: B_soldier_repair_F
				{
					attendant = true;
					_generalMacro = "MEF_S_LS_Rpr";
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {1,0.1,0.05};
  					engineer = 1;
  					detectSkill = 40;
					displayName = "15th Combat Engineer [Snow]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_4";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Snow_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_SNOW_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\snowcamo\mef_u2_sm_co.paa"};
					icon = "iconManEngineer";
  					picture = "pictureRepair";
				};
////////////////////Pilots///////////////////////
				class MEF_TAN_H_Pilot : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {0.9,0.05,0.05};
					canDeactivateMines = 1;
					detectSkill = 10;
					displayName = "Crew Chief [Coveralls,TAN]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_3";
					backpack = "MEF_TAN_Assault";
					weapons[] = {"Throw","Put"};
					respawnWeapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"H_CrewHelmetHeli_B","V_TacVest_khk","NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"H_CrewHelmetHeli_B","V_TacVest_khk","NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_TAN_HP_Uni";
					model = "\A3\Characters_F\Common\coveralls.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\pilot\coveralls_sand_co.paa"};
				};
				class MEF_OD_F_Pilot : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {0.9,0.05,0.05};
					canDeactivateMines = 1;
					detectSkill = 10;
					displayName = "Pilot [Flight Suit,Olive]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_3";
					backpack = "MEF_TAN_Assault";
					weapons[] = {"Throw","Put"};
					respawnWeapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"H_CrewHelmetHeli_B","V_TacVest_khk","NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"H_CrewHelmetHeli_B","V_TacVest_khk","NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_OD_F_SUIT";
					model = "\A3\Characters_F\Common\pilot_f.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\pilot\pilot_suit_rus_co.paa"};
				};
				class MEF_TAN_F_Pilot : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					audible = .05;
					accuracy = 0.25;
					camouflage = 1.4;
					oxygenCapacity = 80;
  					minGunElev = -80;
  					maxGunElev = 80;
					cost = 1;
					threat[] = {0.9,0.05,0.05};
					canDeactivateMines = 1;
					detectSkill = 10;
					displayName = "Pilot [Flight Suit,TAN]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_3";
					backpack = "MEF_TAN_Assault";
					weapons[] = {"Throw","Put"};
					respawnWeapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"H_CrewHelmetHeli_B","V_TacVest_khk","NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"H_CrewHelmetHeli_B","V_TacVest_khk","NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_TAN_F_SUIT";
					model = "\A3\Characters_F\Common\pilot_f.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\pilot\pilot_suit_tan_co.paa"};
				};
//////////////////MEF Backpacks////////////////////
				class MEF_TAN_Carryall : B_Carryall_khk
				{
					scope = 2;
					displayname = "Carryall Pack [Tan]";
					picture = "\mef_mod\icons\ico_y_cb_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_y_cb_co.paa"};
				};
				class MEF_Wood_Carryall : B_Carryall_khk
				{
					scope = 2;
					displayname = "Carryall Pack [Woodland MARPAT]";
					picture = "\mef_mod\icons\ico_y_wm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_y_wm_co.paa"};
				};
				class MEF_Des_Carryall : B_Carryall_khk
				{
					scope = 2;
					displayname = "Carryall Pack [Desert MARPAT]";
					picture = "\mef_mod\icons\ico_y_dm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_y_dm_co.paa"};
				};
				class MEF_TAN_Kitbag : B_Kitbag_Base
				{
					scope = 2;
					displayname = "Kitbag [Tan]";
					picture = "\mef_mod\icons\ico_k_cb_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_cb_co.paa"};
				};
				class MEF_Wood_Kitbag : B_Kitbag_Base
				{
					scope = 2;
					displayname = "Kitbag [Woodland MARPAT]";
					picture = "\mef_mod\icons\ico_k_wm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
				};
				class MEF_Des_Kitbag : B_Kitbag_Base
				{
					scope = 2;
					displayname = "Kitbag [Desert MARPAT]";
					picture = "\mef_mod\icons\ico_k_dm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
				};
				class MEF_TAN_Assault : B_AssaultPack_Base
				{
					scope = 2;
					displayname = "Assault Pack [Tan]";
					picture = "\mef_mod\icons\ico_a_cb_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_a_cb_co.paa"};
				};
				class MEF_Wood_Assault : B_AssaultPack_Base
				{
					scope = 2;
					displayname = "Assault Pack [Woodland MARPAT]";
					picture = "\mef_mod\icons\ico_a_wm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_a_wm_co.paa"};
				};
				class MEF_Des_Assault : B_AssaultPack_Base
				{
					scope = 2;
					displayname = "Assault Pack [Desert MARPAT]";
					picture = "\mef_mod\icons\ico_a_dm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_a_dm_co.paa"};
				};
				class MEF_TAN_Tactical : B_TacticalPack_oli
				{
					scope = 2;
					displayname = "Tactical Backpack [Tan]";
					picture = "\mef_mod\icons\ico_t_cb_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_t_cb_co.paa"};
				};
				class MEF_Wood_Tactical : B_TacticalPack_oli
				{
					scope = 2;
					displayname = "Tactical Backpack [Woodland MARPAT]";
					picture = "\mef_mod\icons\ico_t_wm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_t_wm_co.paa"};
				};
				class MEF_Des_Tactical : B_TacticalPack_oli
				{
					scope = 2;
					displayname = "Tactical Backpack [Desert MARPAT]";
					picture = "\mef_mod\icons\ico_t_dm_ca.paa";
					hiddenSelections[] = {"camo"};
					hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_t_dm_co.paa"};
				};
//////////////////Helicopters/////////////////////
				class MEF_USMC_Huron: B_Heli_Transport_03_F
				{
					_generalMacro = "B_Heli_Transport_03_F";
					side = 1;
					scope = 2;
					crew = "B_Helipilot_F";
					displayName = "MEF Huron [CH-67]";
					typicalCargo[] = {"B_Helipilot_F"};
					hiddenSelectionsTextures[] = {"mef_mod\textures\air\mef_Heli_Transport_03_CO.paa","mef_mod\textures\air\mef_Heli_Transport2_03_CO.paa"};
					incomingMissileDetectionSystem = 16;
					weapons[] = {"CMFlareLauncher"};
					magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};
					maximumLoad = 10000;
					transportMaxWeapons = 8;
					transportMaxMagazines = 200;
					transportMaxBackpacks = 10;
				};
};
class CfgGroups
{
	class West
	{
		class MEF
		{
			name = "15th MEU";
			class Infantry
			{
				name = "Infantry";
				class MEF_InfSquad
				{
					name = "[Wood] Infantry Squad";
					side = 1;
					faction = "MEF";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "LIEUTENANT";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "SERGEANT";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {18,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "SERGEANT";
						position[] = {21,0,0};
					};
				};
				class MEF_InfTeam
				{
					name = "[Wood] Fire Team";
					side = 1;
					faction = "MEF";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class MEF_InfTeam_AT
				{
					name = "[Wood] Team Anti-Tank";
					side = 1;
					faction = "MEF";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class MEF_InfSentry
				{
					name = " [Wood] Security Patrol";
					side = 1;
					faction = "MEF";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "MEF_WMARPAT_LS";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
		};
	};
};
class cfgWeapons
{
//////////MEF MARPAT Uniforms//////////
    class Uniform_Base;
    class UniformItem;
	class ItemInfo;
	class V_PlateCarrier1_rgr;
    class Vest_Camo_Base;
    class VestItem;
	class ItemCore;
    class HeadgearItem;
    class H_HelmetB;
	class V_PlateCarrierIA1_dgtl;
	class V_Rangemaster_belt;
	class U_B_CombatUniform_mcam;
    
	class MEF_Wood_MARPAT_LS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform"; 
        picture = "\mef_mod\icons\wood_MARPAT_ui.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_WMARPAT_LS";
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Wood_MARPAT_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform RS"; 
        picture = "\mef_mod\icons\wood_MARPAT_ui.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_WMARPAT_RS";		
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Wood_MARPAT_TS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform TS"; 
        picture = "\mef_mod\icons\wood_MARPAT_ui.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_WMARPAT_TS";		
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Desert_MARPAT_LS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform"; 
        picture = "\mef_mod\icons\desert_MARPAT_ui.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_DMARPAT_LS";
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Desert_MARPAT_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform RS"; 
        picture = "\mef_mod\icons\desert_MARPAT_ui.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_DMARPAT_RS";		
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Desert_MARPAT_TS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform TS"; 
        picture = "\mef_mod\icons\desert_MARPAT_ui.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_DMARPAT_TS_TO";		
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_WBLK : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [Black]"; 
        picture = "\mef_mod\icons\rc_blk_ls_wood.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_blk_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            uniformClass = "MEF_RECON_WBLK";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_WBLK_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [Black] RS"; 
        picture = "\mef_mod\icons\rc_blk_ls_wood.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_blk_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_WBLK_RS";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_WOD : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [OD]"; 
        picture = "\mef_mod\icons\rc_od_ls_wood.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_od_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            uniformClass = "MEF_RECON_WOD";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_WOD_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [OD] RS"; 
        picture = "\mef_mod\icons\rc_od_ls_wood.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_od_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_WOD_RS";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_WTAN : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [TAN]"; 
        picture = "\mef_mod\icons\rc_tan_ls_wood.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_tan_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            uniformClass = "MEF_RECON_WTAN";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_WTAN_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [TAN] RS"; 
        picture = "\mef_mod\icons\rc_tan_ls_wood.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_tan_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_WTAN_RS";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
///////////////////////////////////////////Desert Recon
	class MEF_DBLK : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [Black]"; 
        picture = "\mef_mod\icons\rc_blk_ls_des.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_blk_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            uniformClass = "MEF_RECON_DBLK";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_DBLK_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [Black] RS"; 
        picture = "\mef_mod\icons\rc_blk_ls_des.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_blk_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_DBLK_RS";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_DOD : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [OD]"; 
        picture = "\mef_mod\icons\rc_od_ls_des.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_od_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            uniformClass = "MEF_RECON_DOD_RS";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_DOD_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [OD] RS"; 
        picture = "\mef_mod\icons\rc_od_ls_des.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_od_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_DOD_RS";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_DTAN : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [TAN]"; 
        picture = "\mef_mod\icons\rc_tan_ls_des.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_tan_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            uniformClass = "MEF_RECON_DTAN";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_DTAN_RS : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [TAN] RS"; 
        picture = "\mef_mod\icons\rc_tan_ls_des.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_tan_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_DTAN_RS";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_WDIV : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [Diver]"; 
        picture = "\mef_mod\icons\wood_MARPAT_ts.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_WDIV";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_DDIV : Uniform_Base
	{ 
        scope = 2; 
        displayName = "Combat Tactical Uniform [Diver]"; 
        picture = "\mef_mod\icons\des_MARPAT_ts.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_dmarpat_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			uniformClass = "MEF_RECON_DDIV";		
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Wood_IN_MARPAT_LS : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform II"; 
        picture = "\mef_mod\icons\ico_u2_wm_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_IN_WMARPAT_LS";
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Wood_IN_MARPAT_RS : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform II RS"; 
        picture = "\mef_mod\icons\ico_u2_wm_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_IN_WMARPAT_RS";
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Des_IN_MARPAT_LS : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform II"; 
        picture = "\mef_mod\icons\ico_u2_dm_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_IN_DMARPAT_LS";
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Des_IN_MARPAT_RS : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform II RS"; 
        picture = "\mef_mod\icons\ico_u2_dm_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_IN_DMARPAT_RS";
            containerClass = "Supply60"; 
            mass = 75.5;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_Wood_IN_SNOW_LS : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Utility Uniform II [SNOW]"; 
        picture = "\mef_mod\icons\ico_u2_sm_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\snowcamo\mef_u2_sm_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_IN_SNOW_LS";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class U_B_HeliPilotCoveralls;
	class OliveCoveralls: U_B_HeliPilotCoveralls
	{
		scope = 2;
		displayName = "Combat Utility Coverall [Olive]";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_sage_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_04_f";
			containerClass = "Supply50";
			mass = 30;
		};
	};
	class MEF_TAN_HP_Uni : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Utility Coverall [Tan]"; 
        picture = "\mef_mod\icons\icon_u_ir_tancoveralls_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\pilot\coveralls_sand_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_TAN_H_Pilot";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_OD_F_SUIT : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Flight Suit [OD]"; 
        picture = "\mef_mod\icons\icon_u_ir_odpilotcoveralls_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\pilot\pilot_suit_rus_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_OD_F_Pilot";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
	class MEF_TAN_F_SUIT : U_B_CombatUniform_mcam
	{ 
        scope = 2; 
        displayName = "Combat Flight Suit [TAN]"; 
        picture = "\mef_mod\icons\icon_u_ir_tanpilotcoveralls_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; 
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\pilot\pilot_suit_tan_co.paa"};
		
        class ItemInfo : UniformItem { 
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; 
            uniformClass = "MEF_TAN_F_Pilot";
            containerClass = "Supply50"; 
            mass = 30;
			hiddenSelections[] = {"Camo"};
        };
	};
//////////MEF Plate Carriers//////////	
    class MEF_Vest_Tan_Infantry : Vest_Camo_Base
	{
        scope = 2;
        displayName = "Plate Carrier Heavy [Infantry]";
        picture = "\mef_mod\icons\tan_VEST_ui.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_vest_co.paa"};
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply200";
            mass = 300;
            armor = 50;
            passThrough = 0.1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Vest_Tan_Infantry_L : Vest_Camo_Base
	{
        scope = 2;
        displayName = "Plate Carrier Light [Infantry]";
        picture = "\mef_mod\icons\tan_VEST_L_ui.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_vest_co.paa"};
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply200";
            mass = 270;
            armor = 40;
            passThrough = 0.1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Vest_Tan_Medical : V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName="Plate Carrier Heavy [Medical]";
		picture="\mef_mod\icons\tan_VEST_ui.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_vest_med_co.paa"};
		
		class ItemInfo: VestItem {
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply200";
			mass = 300;
			armor = 50;
			passThrough = 0.1;
			hiddenSelections[] = {"camo"};
		};
	};
	class MEF_Vest_Tan_Medical_L : V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName="Plate Carrier Light [Medical]";
		picture="\mef_mod\icons\tan_VEST_L_ui.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_vest_med_co.paa"};
		
		class ItemInfo: VestItem {
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply200";
			mass = 270;
			armor = 40;
			passThrough = 0.1;
			hiddenSelections[] = {"camo"};
		};
	};
	class MEF_Vest_Tan_Armor : V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName="Plate Carrier Heavy [Armor]";
		picture="\mef_mod\icons\tan_VEST_ui.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_vest_arm_co.paa"};
		
		class ItemInfo: VestItem {
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply200";
			mass = 300;
			armor = 50;
			passThrough = 0.1;
			hiddenSelections[] = {"camo"};
		};
	};
	class MEF_Vest_Tan_Armor_L : V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName="Plate Carrier Light [Armor]";
		picture="\mef_mod\icons\tan_VEST_L_ui.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_vest_arm_co.paa"};
		
		class ItemInfo: VestItem {
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply200";
			mass = 270;
			armor = 40;
			passThrough = 0.1;
			hiddenSelections[] = {"camo"};
		};
	};
	class MEF_Vest_Tan_v2_Infantry : V_PlateCarrierIA1_dgtl
	{
        scope = 2;
        displayName = "Plate Carrier V2 [Infantry]";
        picture = "\mef_mod\icons\ico_v2_ct_ca";
        model = "\a3\characters_f_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_v2_ct_co.paa"};
        
        class ItemInfo : VestItem {
            uniformModel = "\a3\characters_f_beta\indep\equip_ia_vest02";
            containerClass = "Supply200";
            mass = 300;
            armor = 50;
            passThrough = 0.1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Tan_Range_Belt : V_Rangemaster_belt
	{
        scope = 2;
        displayName = "Range Belt";
        picture = "\mef_mod\icons\icon_v_belt_ca.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_belt";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\tan_vest\mef_vest_co.paa"};
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
            containerClass = "Supply200";
            mass = 30;
            armor = 10;
            passThrough = 0.1;
            hiddenSelections[] = {"camo"};
        };
	};
//////////MEF MARPAT Helmets//////////
	class MEF_Snow_Goggles_Helmet_LWH : ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [LWH w/ Goggles] Snow";
        picture = "\mef_mod\icons\icon_h_i_helmetg_canvas_cv.paa";
        model = "\mef_mod\textures\hats\mas_usmchelmet_googles";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_marpatmggb_cw.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 45;
            uniformModel = "\mef_mod\textures\hats\mas_usmchelmet_googles.p3d";
            modelsides[] = {3, 1};
            armor = 50;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Snow_Helmet_LWH : ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [LWH] Snow";
        picture = "\mef_mod\icons\icon_h_i_helmet_canvas_cd.paa";
        model = "\mef_mod\textures\hats\mas_usmchelmet";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_marpatmggb_cw.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 45;
            uniformModel = "\mef_mod\textures\hats\mas_usmchelmet.p3d";
            modelsides[] = {3, 1};
            armor = 50;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
    class MEF_Woodland_Helmet_MICH : ItemCore
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [MICH] Woodland";
        picture = "\mef_mod\icons\ico_m_wm_ca.paa";
        model = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\whelmet\headgear_wood_co.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 40;
            uniformModel = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas.p3d";
            modelSides[] = {3, 1};
            armor = 30;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Desert_Helmet_MICH : H_HelmetB 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [MICH] Desert";
        picture = "\mef_mod\icons\ico_m_dm_ca.paa";
        model = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\dhelmet\headgear_desert_co.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 40;
            uniformModel = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas.p3d";
            modelSides[] = {3, 1};
            armor = 30;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Wood_Goggles_Helmet_LWH : ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [LWH w/ Goggles] Woodland";
        picture = "\mef_mod\icons\icon_h_i_helmetg_canvas_cv.paa";
        model = "\mef_mod\textures\hats\mas_usmchelmet_googles";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_marpatmggb_co.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 40;
            uniformModel = "\mef_mod\textures\hats\mas_usmchelmet_googles.p3d";
            modelSides[] = {3, 1};
            armor = 30;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Wood_Helmet_LWH : ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [LWH] Woodland";
        picture = "\mef_mod\icons\icon_h_i_helmet_canvas_cv.paa";
        model = "\mef_mod\textures\hats\mas_usmchelmet";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_marpatmggb_co.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 40;
            uniformModel = "\mef_mod\textures\hats\mas_usmchelmet.p3d";
            modelSides[] = {3, 1};
            armor = 30;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Desert_Goggles_Helmet_LWH : ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [LWH w/ Goggles] Desert";
        picture = "\mef_mod\icons\icon_h_i_helmetg_canvas_cd.paa";
        model = "\mef_mod\textures\hats\mas_usmchelmet_googles";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_marpatmggb_cd.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 40;
            uniformModel = "\mef_mod\textures\hats\mas_usmchelmet_googles.p3d";
            modelSides[] = {3, 1};
            armor = 30;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Desert_Helmet_LWH : ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [LWH] Desert";
        picture = "\mef_mod\icons\icon_h_i_helmet_canvas_cd.paa";
        model = "\mef_mod\textures\hats\mas_usmchelmet";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_marpatmggb_cd.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 40;
            uniformModel = "\mef_mod\textures\hats\mas_usmchelmet.p3d";
            modelSides[] = {3, 1};
            armor = 30;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Woodland_8Point : ItemCore
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [8-Point] Woodland";
        picture = "\mef_mod\icons\icon_h_cap_off_cv.paa";
        model = "\mef_mod\textures\hats\mas_cdrhat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_officer_equip_co.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 10;
            uniformModel = "\mef_mod\textures\hats\mas_cdrhat.p3d";
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {6};
            armor = 0;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Desert_8Point : ItemCore
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Headgear [8-Point] Desert";
        picture = "\mef_mod\icons\icon_h_cap_off_cd.paa";
        model = "\mef_mod\textures\hats\mas_cdrhat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\usmc_officer_equip_cd.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 10;
            uniformModel = "\mef_mod\textures\hats\mas_cdrhat.p3d";
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {6};
            armor = 0;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
	};
	class MEF_Boonie_Wood : ItemCore 
	{
			scope = 2;
			displayName = "Headgear [Boonie Hat] Woodland";
			picture = "\mef_mod\icons\ico_b_wm_ca.paa";
			model = "\A3\Characters_F\Common\booniehat";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\mef_b_wm_co.paa"};
	
			class ItemInfo : HeadgearItem {
				allowedslots[] = {801, 901, 701, 605};
				mass = 10;
				uniformModel = "\A3\Characters_F\Common\booniehat";
				modelSides[] = {6};
				armor = 0;
				passThrough = 1;
				hiddenSelections[] = {"camo"};
			};
		};
		class MEF_Boonie_Des : ItemCore 
	{
			scope = 2;
			displayName = "Headgear [Boonie Hat] Desert";
			picture = "\mef_mod\icons\ico_b_dm_ca.paa";
			model = "\A3\Characters_F\Common\booniehat";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\mef_mod\textures\hats\mef_b_dm_co.paa"};
	
			class ItemInfo : HeadgearItem {
				allowedslots[] = {801, 901, 701, 605};
				mass = 10;
				uniformModel = "\A3\Characters_F\Common\booniehat";
				modelSides[] = {6};
				armor = 0;
				passThrough = 1;
				hiddenSelections[] = {"camo"};
			};
		};
	};