
class CfgPatches
{
    class mef_mod
    {
        units[] = {};
        weapons[] = {"MEF_Wood_MARPAT_LS","MEF_Desert_MARPAT_LS","MEF_Vest_Tan_Infantry","MEF_Vest_Tan_Armor","MEF_Vest_Tan_Medical","MEF_Woodland_Helmet_MICH","MEF_Desert_Helmet_MICH"};
		author[] = {"Mattastic"};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F","A3_Weapons_F_Ammoboxes","A3_Air_F_Heli_Heli_Transport_03"};
    };
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
//////////Marine Expeditionary Force//////////
class CfgFactionClasses 
{
	class MEF 
	{
		displayName = "Marine Expeditionary Force";
		icon = "\mef_mod\mef_icon.paa";	
		priority = 1;
		side = 1;
	};
};
//////////Marine Expeditionary Force Unit Types//////////
class CfgVehicleClasses 
{
	class MEF_A3_Units_1 
	{
		displayName = "3/9 Marines [WOOD]";
	};
	class MEF_A3_Units_2 
	{
		displayName = "2nd Medical Btn [WOOD]";
	};
	class MEF_A3_Units_3
	{
		displayName = "3/9 Marines [DESERT]";
	};
	class MEF_A3_Units_4
	{
		displayName = "Marine Aircraft Wing";
	};
	class MEF_A3_Units_5
	{
		displayName = "3/9 Marines II [WOOD]";
	};
	class MEF_A3_Units_6
	{
		displayName = "3/9 Marines II [DESERT]";
	};
};
class CfgVehicles
{
//////////3rd Battalion 9th Marines Woodland//////////
	class B_Soldier_base_F;
	class B_Soldier_02_f;
	class B_Soldier_03_f;
	class B_Soldier_A_F;
	class B_Soldier_TL_F;
	class B_soldier_AR_F;
	class B_Carryall_khk;
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class B_TacticalPack_oli;
	class B_Heli_Transport_03_F;
	
				class MEF_WMARPAT_LS : B_Soldier_base_F
				{
					side = 1;
					scope = 2;
					displayName = "0311 Rifleman";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
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
				class MEF_WMARPAT_LS_MG : MEF_WMARPAT_LS
				{
					_generalMacro = "MEF_WMARPAT_LS";
					attendant = true;
					displayName = "0331 Machine Gunner";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_LS_MO : MEF_WMARPAT_LS_MG
				{
					_generalMacro = "MEF_WMARPAT_LS";
					attendant = true;
					displayName = "0341 Mortarman";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_LS_AS : MEF_WMARPAT_LS_MO
				{
					_generalMacro = "MEF_WMARPAT_LS";
					attendant = true;
					displayName = "0351 Infantry Assaultman";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					
				};
				class MEF_WMARPAT_LS_AT : MEF_WMARPAT_LS_AS
				{
					_generalMacro = "MEF_WMARPAT_LS";
					attendant = true;
					displayName = "0352 Antitank Missileman";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_LS_UL : MEF_WMARPAT_LS_AT
				{
					_generalMacro = "MEF_WMARPAT_LS";
					attendant = true;
					displayName = "0369 Unit Leader";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_RS : B_Soldier_03_f
				{
					side = 1;
					scope = 2;
					displayName = "0311 Rifleman RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					backpack = "MEF_Wood_Kitbag";
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
				class MEF_WMARPAT_RS_MG : MEF_WMARPAT_RS
				{
					_generalMacro = "MEF_WMARPAT_RS";
					attendant = true;
					displayName = "0331 Machine Gunner RS";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_RS_MO : MEF_WMARPAT_RS_MG
				{
					_generalMacro = "MEF_WMARPAT_RS";
					attendant = true;
					displayName = "0341 Mortarman RS";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_RS_AS : MEF_WMARPAT_RS_MO
				{
					_generalMacro = "MEF_WMARPAT_RS";
					attendant = true;
					displayName = "0351 Infantry Assaultman RS";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_RS_AT : MEF_WMARPAT_RS_AS
				{
					_generalMacro = "MEF_WMARPAT_RS";
					attendant = true;
					displayName = "0352 Antitank Missileman RS";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_RS_UL : MEF_WMARPAT_RS_AT
				{
					_generalMacro = "MEF_WMARPAT_RS";
					attendant = true;
					displayName = "0369 Unit Leader RS";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_TS : B_soldier_AR_F
				{
					side = 1;
					scope = 2;
					displayName = "0311 Rifleman TS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_1";
					backpack = "MEF_Wood_Kitbag";
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
				class MEF_WMARPAT_TS_MG : MEF_WMARPAT_TS
				{
					_generalMacro = "MEF_WMARPAT_TS";
					attendant = true;
					displayName = "0331 Machine Gunner TS";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_TS_MO : MEF_WMARPAT_TS_MG
				{
					_generalMacro = "MEF_WMARPAT_TS";
					attendant = true;
					displayName = "0341 Mortarman TS";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","optic_Hamr","G_Bandanna_khk","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","optic_Hamr","G_Bandanna_khk","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_TS_AS : MEF_WMARPAT_TS_MO
				{
					_generalMacro = "MEF_WMARPAT_TS";
					attendant = true;
					displayName = "0351 Infantry Assaultman TS";
					backpack = "MEF_Wood_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_TS_AT : MEF_WMARPAT_TS_AS
				{
					_generalMacro = "MEF_WMARPAT_TS";
					attendant = true;
					displayName = "0352 Antitank Missileman TS";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_WMARPAT_TS_UL : MEF_WMARPAT_TS_AT
				{
					_generalMacro = "MEF_WMARPAT_TS";
					attendant = true;
					displayName = "0369 Unit Leader TS";
					backpack = "MEF_Wood_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
//////////2nd Medical Battalion Woodland//////////
				class MEF_WMARPAT_LS_HA : B_Soldier_02_f
				{
					side = 1;
					_generalMacro = "B_Soldier_02_f;";
					scope = 2;
					displayName = "HM-8404 FMS Technician";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_2";
					backpack = "MEF_Wood_Tactical";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Medical","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Helmet_LWH","MEF_Vest_Tan_Medical","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_MARPAT_LS";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_wmarpat_co.paa"};
				};
				class MEF_WMARPAT_LS_HM : MEF_WMARPAT_LS_HA
				{
					_generalMacro = "MEF_WMARPAT_LS_HA";
					attendant = true;
					displayName = "HM-8404 Desert MARPAT";
				};
//////////3rd Battalion 9th Marines Desert//////////
				class MEF_DMARPAT_LS_TC : B_Soldier_A_F
				{
					side = 1;
					_generalMacro = "B_Soldier_A_F;";
					scope = 2;
					displayName = "0311 Rifleman";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_3";
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
				class MEF_DMARPAT_LS_TO : MEF_DMARPAT_LS_TC
				{
					_generalMacro = "MEF_DMARPAT_LS_TC";
					attendant = true;
					displayName = "0331 Machine Gunner";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_LS_MM : MEF_DMARPAT_LS_TO
				{
					_generalMacro = "MEF_DMARPAT_LS";
					attendant = true;
					displayName = "0341 Mortarman";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_LS_IA : MEF_DMARPAT_LS_MM
				{
					_generalMacro = "MEF_DMARPAT_LS";
					attendant = true;
					displayName = "0351 Infantry Assaultman";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_LS_ML : MEF_DMARPAT_LS_IA
				{
					_generalMacro = "MEF_DMARPAT_LS";
					attendant = true;
					displayName = "0352 Antitank Missileman";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_LS_UL : MEF_DMARPAT_LS_ML
				{
					_generalMacro = "MEF_DMARPAT_LS";
					attendant = true;
					displayName = "0369 Unit Leader";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_RS : B_Soldier_TL_F
				{
					side = 1;
					_generalMacro = "B_Soldier_TL_F;";
					scope = 2;
					displayName = "0311 Rifleman RS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_3";
					backpack = "MEF_Des_Kitbag";
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
				class MEF_DMARPAT_RS_TO : MEF_DMARPAT_RS
				{
					_generalMacro = "MEF_DMARPAT_RS";
					attendant = true;
					displayName = "0331 Machine Gunner RS";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_RS_MM : MEF_DMARPAT_RS_TO
				{
					_generalMacro = "MEF_DMARPAT_RS";
					attendant = true;
					displayName = "0341 Mortarman RS";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_RS_IA : MEF_DMARPAT_RS_MM
				{
					_generalMacro = "MEF_DMARPAT_RS";
					attendant = true;
					displayName = "0351 Infantry Assaultman RS";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_RS_ML : MEF_DMARPAT_RS_IA
				{
					_generalMacro = "MEF_DMARPAT_RS";
					attendant = true;
					displayName = "0352 Antitank Missileman RS";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_RS_UL : MEF_DMARPAT_RS_ML
				{
					_generalMacro = "MEF_DMARPAT_RS";
					attendant = true;
					displayName = "0369 Unit Leader RS";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_TS : B_soldier_AR_F
				{
					side = 1;
					_generalMacro = "B_soldier_AR_F;";
					scope = 2;
					displayName = "0311 Rifleman TS";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_3";
					backpack = "MEF_Des_Kitbag";
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
				class MEF_DMARPAT_TS_TO : MEF_DMARPAT_TS
				{
					_generalMacro = "MEF_DMARPAT_TS";
					attendant = true;
					displayName = "0331 Machine Gunner TS";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_TS_MM : MEF_DMARPAT_TS_TO
				{
					_generalMacro = "MEF_DMARPAT_TS";
					attendant = true;
					displayName = "0341 Mortarman TS";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_TS_IA : MEF_DMARPAT_TS_MM
				{
					_generalMacro = "MEF_DMARPAT_TS";
					attendant = true;
					displayName = "0351 Infantry Assaultman TS";
					backpack = "MEF_Des_Kitbag";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_TS_ML : MEF_DMARPAT_TS_IA
				{
					_generalMacro = "MEF_DMARPAT_TS";
					attendant = true;
					displayName = "0352 Antitank Missileman TS";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
				class MEF_DMARPAT_TS_UL : MEF_DMARPAT_TS_ML
				{
					_generalMacro = "MEF_DMARPAT_TS";
					attendant = true;
					displayName = "0369 Unit Leader TS";
					backpack = "MEF_Des_Carryall";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Wood_Goggles_Helmet_LWH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
				};
///////////////////////IND Variant Units//////////////////////////////
				class MEF_IN_WMARPAT_LS : B_Soldier_02_f
				{
					side = 1;
					scope = 2;
					displayName = "0311 Rifleman [IND,Wood]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Woodland_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Woodland_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
				};
				class MEF_IN_WMARPAT_RS : B_Soldier_02_f
				{
					side = 1;
					scope = 2;
					displayName = "0311 Rifleman [IND,RS,Wood]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_5";
					backpack = "MEF_Wood_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Woodland_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Woodland_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Wood_IN_MARPAT_RS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\wmarpat\mef_u2_wm_co.paa"};
				};
				class MEF_IN_DMARPAT_LS : B_Soldier_02_f
				{
					side = 1;
					scope = 2;
					displayName = "0311 Rifleman [IND,Des]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_LS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
				};
				class MEF_IN_DMARPAT_RS : B_Soldier_02_f
				{
					side = 1;
					scope = 2;
					displayName = "0311 Rifleman [IND,RS,Des]";
					faction = "MEF";
					nakedUniform = "U_BasicBody";
					vehicleClass = "MEF_A3_Units_6";
					backpack = "MEF_Des_Assault";
					weapons[] = {"Throw","Put"};
					respawnweapons[] = {"Throw","Put"};
					magazines[] = {};
					respawnmagazines[] = {};
					linkedItems[] = {"MEF_Desert_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					respawnLinkedItems[] = {"MEF_Desert_Helmet_MICH","MEF_Vest_Tan_Infantry","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
					uniformClass = "MEF_Des_IN_MARPAT_RS";
					model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
					hiddenSelections[] = {"Camo"};
					hiddenSelectionsTextures[] = {"\mef_mod\textures\dmarpat\mef_u2_dm_co.paa"};
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
					faction = "MEF";
					vehicleClass = "MEF_A3_Units_4";
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
			name = "MEF";
			class Infantry
			{
				name = "Infantry";
				class MEF_InfSquad
				{
					name = "Infantry Squad";
					side = 1;
					faction = "MEF";
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
					name = "Fire Team";
					side = 1;
					faction = "MEF";
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
					name = "Team Anti-Tank";
					side = 1;
					faction = "MEF";
					class Unit0
					{
						side = 1;
						vehicle = "MEF_DMARPAT_RS_IA";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "MEF_DMARPAT_RS_IA";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "MEF_DMARPAT_RS_IA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "MEF_DMARPAT_RS_IA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class MEF_InfSentry
				{
					name = "Security Patrol";
					side = 1;
					faction = "MEF";
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
			uniformClass = "MEF_WMARPAT_RS_MG";		
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
			uniformClass = "MEF_WMARPAT_TS_MG";		
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
            uniformClass = "MEF_DMARPAT_LS_TO";
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
			uniformClass = "MEF_DMARPAT_RS_TO";		
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
            armor = 50;
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
			armor = 50;
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