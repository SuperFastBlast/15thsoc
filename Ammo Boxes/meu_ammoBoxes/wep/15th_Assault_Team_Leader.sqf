//15th Weapons Assault Team Leader
//15thMEU Realism Unit, Weapons Platoon
//By: SSgt Callaghan
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


 _unit additem "itemGPS";
 _unit assignitem "itemGPS";


 _unit addbackpack "B_Kitbag_cbr";


 (unitBackpack _unit) additemCargo ["itemRadio",2];
 (unitBackpack _unit) additemCargo ["AGM_Bandage",3];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) addmagazineCargo ["Trixie_SMAW_HEDP",1];
 (unitBackpack _unit) addmagazineCargo ["Trixie_SMAW_HEAA",1];
 (unitBackpack _unit) additemCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];


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
 _unit addweapon "Trixie_SMAW";


 _unit addweapon "rangefinder";
 _unit assignitem "rangefinder";


 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "AGM_EarBuds";


 _unit addmagazine "REV1_flash";
 _unit addmagazine "REV1_flash";


 _unit adduniform "U_mas_mar_B_CombatUniform_veg";