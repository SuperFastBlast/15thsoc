 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "V_TacVest_blk";
 _unit addheadgear "H_CrewHelmetHeli_B"; 
 
 _unit unassignItem "itemRadio";
 _unit removeItem "itemRadio";
 _unit addItem "itemRadio";
 _unit assignItem "itemRadio";

//M4 and Ammo
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addmagazine "30Rnd_556x45_Stanag";
 _unit addweapon "arifle_mas_m4";

//M9 and Ammo
//_unit addmagazine "15Rnd_mas_9x21_Mag";
//_unit addmagazine "15Rnd_mas_9x21_Mag";
//_unit addmagazine "15Rnd_mas_9x21_Mag";
//_unit addweapon "hgun_mas_m9_F";
 
_unit addmagazine "rh_15rnd_9x19_m9";
_unit addmagazine "rh_15rnd_9x19_m9";
_unit addmagazine "rh_15rnd_9x19_m9";
_unit addweapon "RH_M9"; //Use this to equip pistol as secondary
//_unit additem "RH_M9"; //Use this to hide pistol in clothes

 
 //Equipment
 _unit addweapon "Binocular";
 _unit assignitem "Binocular";
 _unit additem "ItemWatch";
 _unit additem "ItemMap";
 _unit additem "ItemGPS";
 _unit additem "ItemCompass";
 _unit additem "itemandroid";
 _unit additem "ItemCtabHCam";
 _unit assignitem "ItemWatch";
 _unit assignitem "ItemMap";
 _unit assignitem "ItemGPS";
 _unit assignitem "ItemCompass";
 _unit unassignItem "nvgoggles";
 _unit additem "NVGoggles_OPFOR";
 _unit assignitem "NVGoggles_OPFOR";
 
 //Grenades
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";

 _unit adduniform "U_B_HeliPilotCoveralls";
 
 //Bandages
 _unit additem "AGM_Bandage";
 _unit additem "AGM_Bandage";