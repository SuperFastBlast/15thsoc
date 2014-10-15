//15th Weapons MG Gunner
//15thMEU Realism Unit, Weapons Platoon
//By: SSgt Callaghan
// REVISION 14OCT14
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "V_mas_mar_PlateCarrier1_rgr_d";
 _unit addheadgear "H_mas_mar_HelmetBind_v";


 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";


 _unit addbackpack "B_Kitbag_cbr";


 (unitBackpack _unit) additemCargo ["AGM_Bandage",3];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) additemCargo ["FHQ_acc_ANPEQ15",1];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];


 _unit addmagazine "100Rnd_M240_762x51_T_Stanag";
 _unit addmagazine "100Rnd_M240_762x51_T_Stanag";
 _unit addmagazine "100Rnd_M240_762x51_T_Stanag";


 _unit addweapon "LMG_mas_M240_F";
 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";


 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";


 _unit addweapon "hgun_mas_m9_F";


 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "AGM_EarBuds";


 _unit adduniform "U_mas_mar_B_IndUniform1_v";