//15th Automatic Rifleman Loadout
// REVISION 15OCT14

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
 
 _unit unassignItem "ItemGPS";
 _unit removeItem "ItemGPS";

 _unit addbackpack "b_kitbag_cbr";

 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) additemCargo ["AGM_Bandage",3];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) additemCargo ["itemRadio",2];
 (unitBackpack _unit) addmagazineCargo ["M855A1_M27IAR",6];
 
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M27_556x45_T_Stanag";

 _unit addweapon "ej_IAR30";
 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";

 _unit addweapon "hgun_mas_m9_F";

 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "REV1_flash";
 _unit addmagazine "REV1_flash";
 _unit additem "AGM_EarBuds";
 
 _unit adduniform "U_mas_mar_B_IndUniform1_v";