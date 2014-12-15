// REVISION 24NOV14

//15th LCE Combat Engineer loadout

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 removeAllItems _unit;

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit adduniform "U_mas_mar_B_IndUniform2_v";
 _unit addvest "V_mas_mar_PlateCarrier2_rgr_g";
 _unit addHeadgear "H_mas_mar_off_v";
 _unit addbackpack "B_Kitbag_rgr";

 (unitBackpack _unit) additemCargo ["H_Watchcap_camo",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) additemCargo ["AGM_Bandage",10];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) additemCargo["U_mas_mar_B_IndUniform1_v",1];
 (unitBackpack _unit) additemCargo ["H_mas_mar_HelmetBind_v",1];
 for "_i" from 1 to 2 do {(unitBackpack _unit) additemCargo "AGM_CableTie";};
 (unitBackpack _unit) additemCargo ["AGM_HandFlare_Red",1];
 (unitBackpack _unit) additemCargo ["AGM_HandFlare_Green",1];

 
 _unit addItemToUniform "AGM_EarBuds";
 for "_i" from 1 to 10 do {_unit addItemToUniform "30Rnd_M855A1_556x45_Stanag";);
 for "_i" from 1 to 3 do {_unit addItemToUniform "16Rnd_9x21_Mag";);
 
 _unit addweapon "arifle_mas_m4";
 _unit addWeapon "hgun_P07_F";
 _unit addWeapon "Binocular";

 _unit addPrimaryWeaponItem "FHQ_optic_ACOG";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addItemToVest "itemRadio";
 _unit addItemToVest "itemRadio";

 _unit addItemToVest "SmokeShell";
 _unit addItemToVest "SmokeShell";
 _unit addItemToVest "SmokeShell";
 _unit addItemToVest "SmokeShellRed";
 _unit addItemToVest "SmokeShellGreen";
 _unit addItemToVest "SmokeShellGreen";
 
 _unit linkItem "ItemMap";
 _unit linkItem "ItemCompass";
 _unit linkItem "ItemWatch";
 _unit linkItem "ItemRadio";
 _unit linkItem "ItemGPS";

