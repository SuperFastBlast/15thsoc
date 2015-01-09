// REVISION 15/JAN/15

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

  _unit adduniform "MEF_Wood_IN_MARPAT_LS";
 _unit addvest "MEF_Vest_Tan_Infantry";
 _unit addheadgear "MEF_Wood_Goggles_Helmet_LWH";
 _unit addbackpack "MEF_Wood_Kitbag";

 (unitBackpack _unit) additemCargo ["H_Watchcap_camo",1];
 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];
 (unitBackpack _unit) additemCargo ["AGM_Bandage",10];
 (unitBackpack _unit) additemCargo ["AV_ESS_tan_clr",1];
 (unitBackpack _unit) addmagazineCargo ["SmokeshellBlue",1];
 (unitBackpack _unit) additemCargo ["AGM_HandFlare_White",3];
 (unitBackpack _unit) additemCargo ["AGM_HandFlare_Green",3];
 (unitBackpack _unit) addmagazineCargo ["Chemlight_green",4];
 (unitBackpack _unit) addmagazineCargo ["Chemlight_yellow",2];
 
 
 _unit addItemToUniform "AGM_EarBuds";
 for "_i" from 1 to 8 do {_unit addItemToUniform "MEU_30Rnd_M855A1_556x45_Stanag";);
 for "_i" from 1 to 3 do {_unit addItemToUniform "16Rnd_9x21_Mag";);
 
 _unit addweapon "CUP_arifle_M4CAR_black";
 _unit addWeapon "Binocular";

 _unit addPrimaryWeaponItem "CUP_optic_ACOG";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";

 _unit addItemToVest "itemRadio";
 _unit addItemToVest "itemRadio";

 _unit addItemToVest "SmokeShell";
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

