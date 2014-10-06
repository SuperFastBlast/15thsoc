//15th Marauder Vehicle Commander
//By: 2ndLt Callaghan
// REVISION 01OCT14

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "V_mas_mar_PlateCarrier1_rgr_d";
 _unit addheadgear "H_HelmetCrew_I";

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit unassignItem "itemRadio";
 _unit removeItem "itemRadio";

 _unit additem "NVGoggles_OPFOR";
 _unit assignitem "NVGoggles_OPFOR";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemRadio";
 _unit additem "itemRadio";

 _unit addbackpack "tf_rt1523g";

 (unitBackpack _unit) additemCargo ["AGM_Bandage",2];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["itemandroid",1];
 (unitBackpack _unit) additemCargo ["ItemcTabHCam",1];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];

 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";
 _unit addmagazine "M855A1_tracer_M4_30Rnd";

 _unit addweapon "M4Car"; 
 _unit addPrimaryWeaponItem "Optic_Hamr";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addmagazine "rh_15rnd_9x19_m9";
 _unit addmagazine "rh_15rnd_9x19_m9";
 _unit addmagazine "rh_15rnd_9x19_m9";

 _unit addweapon "RH_M9";

 _unit addweapon "Laserdesignator";
 _unit assignitem "Laserdesignator";

 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellRed";
 _unit additem "AGM_EarBuds";

 _unit adduniform "U_mas_mar_B_CombatUniform_veg";