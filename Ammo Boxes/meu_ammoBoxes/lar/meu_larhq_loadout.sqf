//15th Marauder HQ Loadout
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

 _unit additem "itemRadio";
 _unit additem "itemRadio";

 _unit addbackpack "tf_rt1523g";

 (unitBackpack _unit) additemCargo ["AGM_Bandage",2];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["itemctab",1];
 (unitBackpack _unit) additemCargo ["ItemcTabHCam",1];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];

 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_mas_556x45_T_Stanag";
 _unit addmagazine "30Rnd_mas_556x45_T_Stanag";
 _unit addmagazine "30Rnd_mas_556x45_T_Stanag";
 _unit addmagazine "30Rnd_mas_556x45_T_Stanag";
 _unit addmagazine "30Rnd_mas_556x45_T_Stanag";

 _unit addweapon "arifle_mas_m4"; 
 _unit addPrimaryWeaponItem "Optic_Hamr";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addmagazine "rh_15rnd_9x19_m9";
 _unit addmagazine "rh_15rnd_9x19_m9";
 _unit addmagazine "rh_15rnd_9x19_m9";

 _unit addweapon "RH_M9";

 _unit addweapon "Laserdesignator";
 _unit assignitem "Laserdesignator";

 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
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