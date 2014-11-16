class CfgPatches
{
	class 15_meu_mags
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {""};
		weapons[] = {""};
		magazines[] = {"30Rnd_M855A1_556x45_Stanag", "MEU_M433_40mm_HEDP_Shell", "200Rnd_M249_556x45_T_Stanag", "200Rnd_M249_556x45_Stanag", "100Rnd_M240_762x51_Stanag", "100Rnd_M240_762x51_T_Stanag", "T2AAF_45ACP", "M882_9mm", "Trixie_20x762_Mag", "Trixie_30x556_Mk262_Mag", "Trixie_5x762_Mag", "Trixie_10x127_HEIAP_Mag", "7Rnd_mas_12Gauge_Slug", "7Rnd_mas_12Gauge_Pellets"};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 1Rnd_HE_Grenade_shell;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 20Rnd_762x51_Mag;
	class 16Rnd_9x21_Mag;
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class 7Rnd_408_Mag;
	class 5Rnd_127x108_APDS_Mag;
	
	class MEU_M433_40mm_HEDP_Shell: 1Rnd_HE_Grenade_shell
	{
		scope = 2;
		Displayname = "M433 40mm HEDP";
		ammo = "G_M433_40mm_HEDP";
		mass = 5;
		descriptionshort = "Caliber: 40 mm<br />Rounds: 1<br />Used in: M203";
	};
		class 30Rnd_M855A1_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		ammo = "B_MEU_M855a1";
		count = 30;
		mass = 11.8;
		lastroundstracer = 3;
        descriptionshort = "M855A1<br />Caliber: 5.56x45 mm STANAG<br />Rounds: 30";
        displayname = "M855A1";
		picture = "\15th_MEU_MAGS\ui\m_30stanag_CA.paa";
	};
		class 30Rnd_M855A1_556x45_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		ammo = "B_MEU_M8556";
		mass = 11.8;
		count = 30;
		tracersevery = 1;
        	descriptionshort = "M856<br />Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30";
        	displayname = "M856";
		picture = "\15th_MEU_MAGS\ui\m_30stanag_red_CA.paa";
	};
		class 200Rnd_M249_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		mass = 56;
		ammo = "B_MEU_M855a1_M249";
		count = 200;
        	descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200<br />Used in: M249";
        	displayname = "M855A1 Linked";
		picture = "\15th_MEU_MAGS\ui\m_200LMG_ca.paa";
        	initspeed = 960;
        	lastroundstracer = 5;
		tracersevery = 5;
	};
		class 200Rnd_M249_556x45_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		mass = 56;
       	ammo = "B_MEU_M8556_M249";
		count = 200;
        descriptionshort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 200 Tracer<br />Used in: M249";
       	 displayname = "M856 Linked";
		picture = "\15th_MEU_MAGS\ui\m_200LMG_red_ca.paa";
       	 initspeed = 960;
       	 lastroundstracer = 4;
		tracersevery = 1;
	};
		class 100Rnd_M240_762x51_Stanag: 150Rnd_762x51_Box
	{
		scope = 2;
		mass = 33.8;
		ammo = "B_MEU_M80";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 100<br />Used in:M240";
		displayname = "M80 Linked";
        initspeed = 853;
        lastroundstracer = 3;
		tracersevery = 5;
	};
		class 100Rnd_M240_762x51_T_Stanag: 150Rnd_762x51_Box_Tracer
	{
		scope = 2;
		mass = 33.8;
		ammo = "B_M80_762x54_Ball_T";
		count = 100;
		descriptionshort = "Caliber: 7.62x51 mm STANAG Tracer<br />Rounds: 100<br />Used in:M240";
		displayname = "M62 Linked";
		tracersevery = 1;
	};
	class T2AAF_45ACP: 16Rnd_9x21_Mag
  	{
        scope = 2;
        mass = 2;
        ammo = "T2AAF_45ACP";
        count = 7;
        displayName = "T2AAF .45ACP";
        picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
        descriptionshort = "Caliber: .45ACP<br />Rounds: 8<br />Used in: M1911 ACP";
        initSpeed = 280;
    };
	class M882_9mm: 16Rnd_9x21_Mag
    	{
	    mass = 1;
        scope = 2;
        ammo = "M882_9mm";
        count = 15;
        displayName = "M882 9mm Mag";
        picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
        descriptionshort = "Caliber: 9x19 mm STANAG<br />Rounds: 15<br />Used in: Beretta M9";
        initSpeed = 390;
    };
	class 7Rnd_mas_12Gauge_Slug: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_12Gauge_Slug";
		count = 7;
		mass = 4;
		displayName = "12cal Slug M1014";
		picture = "\15th_MEU_MAGS\ui\m_12gauge_slugs_ca.paa";
		descriptionshort = "Caliber: 12 cal<br />Rounds: 7<br />Used in: M1014";
	};
	class 7Rnd_mas_12Gauge_Pellets: 16Rnd_9x21_Mag
	{
		ammo = "B_mas_12Gauge_Pellets";
		count = 7;
		mass = 4;
		displayName = "12cal Pellets M1014";
		picture = "\15th_MEU_MAGS\ui\m_12gauge_ca.paa";
		descriptionshort = "Caliber: 12 cal<br />Rounds: 7<br />Used in: M1014";
	};
	class Trixie_10x127_HEIAP_Mag: 5Rnd_127x108_APDS_Mag {
		scope = 2;
		author = "Trixie";
		count = 10;
		descriptionshort = "Caliber: 12.7x99mm HEIAP<br />Rounds: 10<br />Used in: Barret M107";
		displayname = "Raufoss Mk 211";
		ammo = "B_MEU_Mk211";
		picture = "\15th_MEU_MAGS\ui\50BMGx10_heiap_mag.paa";
		lastroundstracer = 0;
		tracersevery = 0;
		mass = 18;
	};
		class Trixie_5x762_Mag: 7Rnd_408_Mag {
		scope = 2;
		author = "Trixie";
		count = 5;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 5<br />Used in: M40A3";
		displayname = "M118LR";
		ammo = "B_MEU_M118LR_Ball_m40";
		picture = "\15th_MEU_MAGS\ui\5x762_mag.paa";
		lastroundstracer = 0;
		tracersevery = 0;
		mass = 3;
	};
	    class Trixie_30x556_Mk262_Mag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		ammo = "B_MEU_Mk262";
		count = 30;
		mass = 11.8;
		lastroundstracer = 3;
        descriptionshort = "Mk 262 77gr<br />Caliber: 5.56x45 mm STANAG<br />Rounds: 30";
        displayname = "Mk 262";
		picture = "\15th_MEU_MAGS\ui\m_30stanag_CA.paa";
	};
	class Trixie_20x762_Mag: 30Rnd_556x45_Stanag
    	{
        ammo = "B_MEU_M118LR_Ball";
	    scope = 2;
        count = 20;
        descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 20<br />Used in: M110";
        displayname = "M118LR";
        picture = "\15th_MEU_MAGS\ui\m_20hk417_ca.paa";
	    mass = 12;
    	};
	};
	