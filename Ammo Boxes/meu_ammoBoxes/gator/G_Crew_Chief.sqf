//Bravo (AAV) Company, Crew Chief Loadout
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

 _unit additem "NVGoggles_OPFOR";
 _unit assignItem "NVGoggles_OPFOR";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemMap";
 _unit assignitem "itemMap";
 
_unit additem "itemCompass";
_unit assignitem "itemCompass";
 
 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "itemRadio";
  //_unit assignitem "itemRadio"; //Commented out due to TFAR funkyness upon spawn in, and a dissapearing radio


 _unit addbackpack "tf_rt1523g";


 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 _unit addmagazine "M855A1_M4_30Rnd";
 
 _unit addweapon "M4Car";
 _unit addPrimaryWeaponItem "optic_Hamr";
 _unit addPrimaryWeaponItem "acc_pointer_IR";


 _unit addmagazine "rh_15rnd_9x19_m9";
 _unit addmagazine "rh_15rnd_9x19_m9";


 _unit addweapon "RH_M9";


 _unit addweapon "Rangefinder";
 _unit assignitem "Rangefinder";
 
 _unit addweapon "itemandroid";


 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "AGM_EarBuds";


 _unit adduniform "Nomex_olive";
