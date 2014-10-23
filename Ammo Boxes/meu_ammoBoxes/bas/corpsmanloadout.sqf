//15th Corpsman Loadout
//By: SSgt Callaghan/C. Johnston
// REVISION 14OCT14

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

 _unit additem "NVGoggles_OPFOR";
 _unit unassignItem "NVGoggles_OPFOR";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemRadio";

 _unit addbackpack "B_Carryall_cbr";

 (unitBackpack _unit) additemCargo ["AGM_Bandage" ,30];
 (unitBackpack _unit) additemCargo ["AGM_Epipen" ,10];
 (unitBackpack _unit) additemCargo ["AGM_Morphine" ,20];
 (unitBackpack _unit) additemCargo ["AGM_Bloodbag" ,2];

 _unit addmagazine "30Rnd_M4_556x45_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_Stanag";
 _unit addmagazine "30Rnd_M4_556x45_Stanag";
 
 _unit addweapon "M4Car203";
 _unit addPrimaryWeaponItem "FHQ_acc_ANPEQ15";

 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";

 _unit addweapon "hgun_mas_m9_F";
   
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellBlue";
 _unit addmagazine "SmokeShellPurple";
 _unit addmagazine "SmokeShellPurple";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit additem "AGM_EarBuds";
 
 _unit adduniform "U_mas_mar_B_CombatUniform_veg";