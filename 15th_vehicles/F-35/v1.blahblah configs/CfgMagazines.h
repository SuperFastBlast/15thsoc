class CfgMagazines 
{	
	class 6Rnd_Missile_AGM_02_F;
    class 4Rnd_GAA_missiles;
    class 2Rnd_GBU12_LGB;
    class 2Rnd_Missile_AA_04_F;
    
	class CHO_F35B_Falchion_M : 2Rnd_Missile_AA_04_F {
		count = 1;
	};
	class CHO_F35B_GBU12_ext_M : 2Rnd_GBU12_LGB {
		count = 1;
	};
	class CHO_F35B_GBU12_int_M : 2Rnd_GBU12_LGB {
		count = 1;
	};
    class CHO_F35B_Macer_M : 6Rnd_Missile_AGM_02_F {
		count = 1;
        ammo = "CHO_F35B_Macer_A";
	};
	class CHO_F35B_Zephyr_ext_M : 4Rnd_GAA_missiles {
		count = 1;
	};
	class CHO_F35B_Zephyr_int_M : 4Rnd_GAA_missiles {
		count = 1;
		ammo = "CHO_F35B_Zephyr_int_A";
	};
};