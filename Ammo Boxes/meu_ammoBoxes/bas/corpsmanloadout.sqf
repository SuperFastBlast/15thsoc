// REVISION 15/JAN/15

//15th Corpsman Loadout
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;


 _unit addvest "MEF_Vest_Tan_Medical";
 _unit addheadgear "MEF_Wood_Helmet_LWH"; 

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "NVGoggles_OPFOR";
 _unit unassignItem "NVGoggles_OPFOR";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemRadio";

 _unit addbackpack "MEF_Wood_Carryall";

 (unitBackpack _unit) additemCargo ["AGM_Bandage" ,30];
 (unitBackpack _unit) additemCargo ["AGM_Epipen" ,10];
 (unitBackpack _unit) additemCargo ["AGM_Morphine" ,20];
 (unitBackpack _unit) additemCargo ["AGM_Bloodbag" ,2];

 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 
 _unit addweapon "CUP_arifle_M4CAR_BUIS_GL";
 _unit addPrimaryWeaponItem "CUP_optic_ACOG";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";

 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";

 _unit addweapon "CUP_hgun_M9";
   
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellBlue";
 _unit addmagazine "SmokeShellPurple";
 _unit addmagazine "SmokeShellPurple";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit additem "AGM_EarBuds";
 
 _unit adduniform "MEF_Wood_IN_MARPAT_LS";