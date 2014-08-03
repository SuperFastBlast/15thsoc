//15th Weapons Assault Squad Leader
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
 _unit addheadgear "H_mas_mar_HelmetB_v";


  _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";


 _unit additem "itemGPS";
 _unit assignitem "itemGPS";


 _unit additem "itemRadio";
 _unit additem "itemRadio";


 _unit addbackpack "B_Kitbag_cbr";


 (unitBackpack _unit) additemCargo ["itemRadio",3];
 (unitBackpack _unit) additemCargo ["AGM_Bandage",3];
 (unitBackpack _unit) additemCargo ["acc_flashlight",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) addmagazineCargo ["Trixie_SMAW_HEDP",1];
 (unitBackpack _unit) addmagazineCargo ["DemoCharge_Remote_Mag",1];
 (unitBackpack _unit) addmagazineCargo ["SatchelCharge_Remote_Mag",1];
 (unitBackpack _unit) additemCargo ["ItemcTabHCam",1];
 (unitBackpack _unit) additemCargo ["itemandroid",1];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];


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


 _unit addmagazine "1Rnd_HE_Grenade_shell";
 _unit addmagazine "1Rnd_HE_Grenade_shell";
 _unit addmagazine "1Rnd_HE_Grenade_shell";
 _unit addmagazine "1Rnd_HE_Grenade_shell";
 _unit addmagazine "1Rnd_HE_Grenade_shell";
 _unit addmagazine "1Rnd_HE_Grenade_shell";
 _unit addmagazine "1Rnd_HE_Grenade_shell";
 _unit addmagazine "1Rnd_HE_Grenade_shell";


 _unit addweapon "arifle_mas_m4_m203";
 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";


 _unit addmagazine "rh_15rnd_9x19_m9";
 _unit addmagazine "rh_15rnd_9x19_m9";
 _unit addmagazine "rh_15rnd_9x19_m9";


 _unit addweapon "RH_M9";


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


 _unit addmagazine "REV1_flash";
 _unit addmagazine "REV1_flash";


 _unit adduniform "U_mas_mar_B_CombatUniform_veg";