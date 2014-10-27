// REVISION 27OCT14

//15th Marauder Scout Team Leader Loadout
//By: 2ndLt Callaghan

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "V_mas_mar_PlateCarrier1_rgr_d";
 _unit addheadgear "H_mas_mar_HelmetB_v";

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit unassignItem "itemRadio";
 _unit removeItem "itemRadio";

 _unit additem "NVGoggles_OPFOR";
 _unit assignitem "NVGoggles_OPFOR";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit addbackpack "B_Assaultpack_cbr";

 (unitBackpack _unit) additemCargo ["itemRadio",2];
 (unitBackpack _unit) additemCargo ["AGM_Bandage",2];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) addmagazineCargo ["M433_40mm_HEDP_Shell",11];
 (unitBackpack _unit) addmagazineCargo ["1Rnd_Smoke_Grenade_shell",2];
 (unitBackpack _unit) addmagazineCargo ["1Rnd_SmokeRed_Grenade_shell",2];
 (unitBackpack _unit) addmagazineCargo ["1Rnd_Smoke_Grenade_shell",2];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];

 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";

 _unit addmagazine "M433_40mm_HEDP_Shell";

 _unit addweapon "M4Car203";
 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addweapon "binocular";
 _unit assignitem "binocular";

 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "REV1_flash";
 _unit addmagazine "REV1_flash";
 _unit additem "AGM_EarBuds";

 _unit adduniform "U_mas_mar_B_CombatUniform_veg";