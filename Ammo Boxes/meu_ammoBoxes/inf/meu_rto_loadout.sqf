//15th RTO Loadout
// REVISION 01OCT14

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

 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "AV_ESS_tan_clr";

 _unit addbackpack "tf_rt1523g";

 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];

 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";

 _unit addweapon "M4Car";
 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addweapon "rangefinder";
 _unit assignitem "rangefinder";

 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeshellBlue";

 _unit additem "ItemcTabHCam";
 _unit additem "itemandroid";
 _unit additem "acc_flashlight";
 _unit additem "AGM_Bandage";
 _unit additem "AGM_Bandage";
 _unit additem "AGM_Bandage";
 _unit additem "AGM_EarBuds";

 _unit adduniform "U_mas_mar_B_IndUniform1_v";