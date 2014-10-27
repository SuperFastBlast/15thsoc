// REVISION 27OCT14

//15th Designated Marksmen Loadout
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

 _unit addbackpack "B_KitBag_cbr";

 (unitBackpack _unit) additemCargo ["AGM_Bandage",3];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) addmagazineCargo ["Trixie_20x762_Mag",5];
 (unitBackpack _unit) addweaponcargo ["Trixie_M110",1];

 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M855A1_556x45_T_Stanag";

 _unit addweapon "M4Car";
 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "REV1_flash";
 _unit addmagazine "REV1_flash";
 _unit additem "AGM_EarBuds";

 _unit adduniform "U_mas_mar_B_IndUniform1_v";