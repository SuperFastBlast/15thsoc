//Delta Company, Commander Loadout
// REVISION 14OCT14

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

 _unit additem "NVGoggles_OPFOR";
 _unit assignItem "NVGoggles_OPFOR";

 _unit additem "itemandroid";
 _unit assignitem "itemandroid";

 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit assignitem "itemRadio";

 _unit addbackpack "tf_rt1523g";

 (unitBackpack _unit) additemCargo ["AGM_Bandage",4];
 (unitBackpack _unit) additemCargo ["Medikit",1];

 _unit addmagazine "30Rnd_M4_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_T_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_T_Stanag";
 
 _unit addweapon "M4Car";
 _unit addPrimaryWeaponItem "FHQ_optic_AIM";
 _unit addPrimaryWeaponItem "acc_pointer_IR";

 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";

 _unit addweapon "hgun_mas_m9_F";

 _unit addweapon "Binocular";
 _unit assignitem "Binocular";

 _unit addmagazine "SmokeShellBlue";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "AGM_EarBuds";

 _unit adduniform "U_mas_mar_B_CombatUniform_veg";
