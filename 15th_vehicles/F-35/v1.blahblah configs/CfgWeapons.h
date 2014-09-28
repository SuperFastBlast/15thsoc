class CfgWeapons 
{	
	/*class CannonCore;
	class gatling_25mm: CannonCore {class manual;};*/
	class Missile_AGM_02_Plane_CAS_01_F;
    class missiles_Zephyr;
    class Missile_AA_04_Plane_CAS_01_F; 
    class Bomb_04_Plane_CAS_01_F;
    
    /*class CHO_F35B_gun: gatling_25mm
	{
		displayName = "GAU-22/A 25 mm";
		class manual: manual
		{
			displayName = "GAU-22/A 25 mm";
		};
	};*/
	
	class CHO_F35B_Falchion_W : Missile_AA_04_Plane_CAS_01_F {
        magazines[] = {CHO_F35B_Falchion_M};  
    };
    class CHO_F35B_gbu12_W : Bomb_04_Plane_CAS_01_F {
        autoFire = 0;
		magazines[] = {CHO_F35B_GBU12_ext_M,CHO_F35B_GBU12_int_M};
	};
	class CHO_F35B_Macer_W : Missile_AGM_02_Plane_CAS_01_F {
		magazines[] = {CHO_F35B_Macer_M};
		magazineReloadTime = 0;
	};
    class CHO_F35B_Zephyr_W : missiles_Zephyr {
        magazines[] = {CHO_F35B_Zephyr_ext_M,CHO_F35B_Zephyr_int_M};
    };
};