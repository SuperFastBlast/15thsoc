

_F35 = _this select 0;

// Remove All Mags
_F35 removeMagazines "js_m_fa18_aim9x_x1";
_F35 removeMagazines "js_m_fa18_aim120c_x1"; 
_F35 removeMagazines "js_m_fa18_bombrack_x1";
_F35 removeMagazines "js_m_fa18_GBU12_x1";
_F35 removeMagazines "js_m_fa18_MK82_x1";
_F35 removeMagazines "js_m_fa18_GBU38_JDAM_x1";
_F35 removeMagazines "js_m_fa18_GBU32_JDAM_x1"; 
_F35 removeMagazines "js_m_fa18_GBU31_JDAM_x1";
_F35 removeMagazines "js_m_fa18_Maverick_x1";   
_F35 removeMagazines "js_m_fa18_Harpoon_x1";
_F35 removeMagazines "js_m_fa18_wing_tank_x1";
_F35 removeMagazines "js_m_fa18_altflir_pod_x1";  
_F35 removeMagazines "js_m_fa18_empty"; 
_F35 removeMagazines "js_m_fa18_fake_empty";
_F35 removeMagazines "js_m_fa18_buddypod_x1";
_F35 removeMagazines "Laserbatteries";
_F35 removeMagazine "500Rnd_Cannon_30mm_Plane_CAS_02_F";
_F35 removeMagazines "240Rnd_CMFlare_Chaff_Magazine";

// Remove All Weapons
_F35 removeWeapon "js_w_fa18_aim9xLaucher"; 
_F35 removeWeapon "js_w_fa18_aim120cLaucher"; 
_F35 removeWeapon "js_w_fa18_GBU12LGBLaucher";
_F35 removeWeapon "js_w_fa18_Mk82BombLauncher";  
_F35 removeWeapon "js_w_fa18_MaverickLauncher"; 
_F35 removeWeapon "js_w_fa18_fueltank_holder"; 
_F35 removeWeapon "js_w_fa18_HarpoonLauncher";
_F35 removeWeapon "js_w_fa18_GBU31BombLauncher";
_F35 removeWeapon "js_w_fa18_GBU32BombLauncher";
_F35 removeWeapon "js_w_fa18_GBU38BombLauncher";
_F35 removeWeapon "Laserdesignator_mounted";
_F35 removeWeapon "CMFlareLauncher"; 
_F35 removeWeapon "Cannon_30mm_Plane_CAS_02_F"; 



sleep 3;
//120s
_F35 addMagazine "500Rnd_Cannon_30mm_Plane_CAS_02_F";
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; // 1
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; //2
sleep 0.75;
//gbu32s
_F35 addMagazine "js_m_fa18_GBU32_JDAM_x1"; // 3
sleep 0.75;
_F35 addMagazine "js_m_fa18_GBU32_JDAM_x1"; // 4
sleep 0.75;
//65ds
_F35 addMagazine "js_m_fa18_bombrack_x1"; // 5
sleep 0.75;
_F35 addMagazine "js_m_fa18_bombrack_x1"; // 6
sleep 0.75;
_F35 addMagazine "js_m_fa18_bombrack_x1"; // 7
sleep 0.75;
_F35 addMagazine "js_m_fa18_bombrack_x1"; // 8
sleep 0.75;

_F35 addMagazine "js_m_fa18_aim9x_x1"; // 9
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim9x_x1"; // 10
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; // 11
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; // 12
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; // 13
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; // 14
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; // 15
sleep 0.75;
_F35 addMagazine "js_m_fa18_aim120c_x1"; // 16
sleep 0.75;
_F35 addMagazine "js_m_fa18_Maverick_x1"; // 17 
sleep 0.75;
_F35 addMagazine "js_m_fa18_Maverick_x1"; // 18
sleep 0.75;
_F35 addMagazine "240Rnd_CMFlare_Chaff_Magazine";


//flares
_F35 addWeapon "Cannon_30mm_Plane_CAS_02_F"; 
_F35 addWeapon "js_w_fa18_aim120cLaucher"; 
_F35 addWeapon "js_w_fa18_aim9xLaucher"; 
_F35 addWeapon "js_w_fa18_MaverickLauncher"; 
_F35 addWeapon "js_w_fa18_GBU32BombLauncher"; 
_F35 addWeapon "CMFlareLauncher"; 




