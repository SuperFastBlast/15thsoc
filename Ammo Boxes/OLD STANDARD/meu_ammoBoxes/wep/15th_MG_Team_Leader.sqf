// REVISION 11NOV14

//15th Weapons MG Team Leader
//15thMEU Realism Unit, Weapons Platoon
//By: SSgt Callaghan

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "V_mas_mar_PlateCarrier2_rgr_d";
 _unit addheadgear "H_mas_mar_HelmetBind_v";


 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";


 _unit additem "itemGPS";
 _unit assignitem "itemGPS";


 _unit addbackpack "B_Kitbag_cbr";


 (unitBackpack _unit) additemCargo ["itemRadio",2];
 (unitBackpack _unit) additemCargo ["AGM_Bandage",3];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) addmagazineCargo ["100Rnd_M240_762x51_T_Stanag",2];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];
(unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];


 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";


 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";
 _unit addmagazine "M433_40mm_HEDP_Shell";


 _unit addweapon "M4Car203";
 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";


 _unit addweapon "rangefinder";
 _unit assignitem "rangefinder";


 _unit addmagazine "1Rnd_SmokeRed_Grenade_Shell";
 _unit addmagazine "1Rnd_SmokeRed_Grenade_Shell";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "AGM_EarBuds";


 _unit adduniform "U_mas_mar_B_CombatUniform_veg";