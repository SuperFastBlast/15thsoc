class CfgPatches
{
	class 15_meu_MAGS
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {};
		magazines[] = {"30Rnd_M855A1_556x45_Stanag", "MEU_M433_40mm_HEDP_Shell", "200Rnd_M249_556x45_T_Stanag", "200Rnd_M249_556x45_Stanag", "100Rnd_M240_762x51_Stanag", "100Rnd_M240_762x51_T_Stanag", "T2AAF_45ACP", "M882_9mm", "Trixie_20x762_Mag", "Trixie_30x556_Mk262_Mag", "Trixie_5x762_Mag", "Trixie_10x127_HEIAP_Mag", "7Rnd_mas_12Gauge_Slug", "7Rnd_mas_12Gauge_Pellets"};
	};
};
class CfgAmmo
{
     class BulletBase;
	 class G_40mm_HE;
	 class B_556x45_Ball;
	 class B_556x45_Ball_Tracer_Red;
	 class B_9x21_Ball;
	 class B_762x51_Ball;
	 class B_762x51_Tracer_Red;
	 class B_127x108_Ball;
	 class B_12Gauge_Slug;
	 class B_12Gauge_Pellets;
	 
	 class B_MEU_M80: B_762x51_Ball
	{
		hit=12; // millimeters of armor penned
		typicalSpeed=853; // muzzle velocity
		caliber=1.05; // penetration value 1 is 7.62
		airFriction = -0.00125;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		deflecting=20; // deflection angle
		deflectingChance = 100; // % chance of deflect
		deflectingRandomness = 0.5; // How shot reacts to surface bump
		visibleFire=5; // how well AI can see rounds
		visibleFireTime=5; //how long can see
		audibleFire=10; // how much can AI hear 
		audibleFireTime=10; //how long can hear
	};
	class B_MEU_M60: B_762x51_Tracer_Red 
	{
		hit=12;
		typicalSpeed=853;
		caliber=1.05;
		airFriction = -0.00125;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=5;
		visibleFireTime=5;
		audibleFire=10;
		audibleFireTime=10;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class B_MEU_M855a1: B_556x45_Ball
	{
		hit=8.4;
		airFriction = -0.0011336614;
		caliber = 0.855;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
	};
	class B_MEU_M8556: B_556x45_Ball_Tracer_Red
	{
		hit=8.4;
		airFriction = -0.0011336614;
		caliber = 0.855;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class B_MEU_M855a1_SAW: B_556x45_Ball 
	{
		hit=8.4;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
	};
	class B_MEU_M8556_SAW: B_556x45_Ball_Tracer_Red 
	{
		hit=8.4;
		typicalSpeed=960;
		caliber = 0.855;
		airFriction = -0.0011336614;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=3;
		visibleFireTime=3;
		audibleFire=7;
		audibleFireTime=7;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
	class B_MEU_M882_9mm: B_9x21_Ball
   	 {
   	    hit = 9;
        cartridge = "FxCartridge_65_caseless";
        cost = 100;
        typicalSpeed = 390;
        airFriction = -0.0014;
        caliber = 1.7;
        deflecting = 45;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 1;
        visibleFire = 3;
        audibleFire = 5;
    };
	class B_MEU_T2AAF_45ACP: B_9x21_Ball
    	{
    	hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_65_caseless";
        caliber = 2.6;
        deflecting = 45;
        visibleFire = 5;
        audibleFire = 9;
        cost = 100;
        typicalSpeed = 280;
        airFriction = -0.0018;
   };
	class B_MEU_12Gauge_Slug: B_12Gauge_Slug
	{
		hit = 30;
		visibleFire = 1;	// how much is visible when this weapon is fired
		audibleFire = 1;
		visibleFireTime = 2;
		cartridge = "FxCartridge_slug";
		cost = 1;
		tracerColor[] = {1, 0.05, 0.05, 1};
		tracerColorR[] = {1, 0.05, 0.05, 1};
		caliber = 0.5;
		airFriction = -0.0014;
		cartridge = "FxCartridge_slug";
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	class B_MEU_12Gauge_Pellets: B_12Gauge_Pellets
	{
		hit = 10;
		airFriction = -0.0014;
		cartridge = "FxCartridge_slug";
		caliber = 0.5;
		indirectHit = 0;
        	indirectHitRange = 0;
		visibleFire = 1;	// how much is visible when this weapon is fired
		audibleFire = 1;
		visibleFireTime = 2;
		cost = 1;
		tracerColor[] = {1, 0.05, 0.05, 1};
		tracerColorR[] = {1, 0.05, 0.05, 1};
		class CamShakeFire
		{
			power = 3;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	class B_MEU_Mk262: B_556x45_Ball
    {
	hit = 15.0454;
        typicalSpeed = 868.68;
        airFriction = -0.0010867938;
        caliber = 0.855;
        deflecting = 16;
        visibleFire = 2.5;
        audibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
	class B_MEU_M118LR_Ball: B_762x51_Ball
   	{
        hit=15;
        typicalSpeed=783;
        caliber=1.05;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
        visibleFire=3;
        visibleFireTime=3;
        audibleFire=7;
        audibleFireTime=7;
    };
	class B_MEU_M118LR_Ball_m40: B_762x51_Ball
   	{
        hit=17;
        typicalSpeed=868;
        caliber=1.5;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
        visibleFire=3;
        visibleFireTime=3;
        audibleFire=7;
        audibleFireTime=7;
    };
	class B_MEU_Mk211: B_127x108_Ball
	{
		hit = 150;
		indirecthit = 20;
	    indirecthitrange = 0.2;
		caliber = 50;
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
	class G_MEU_M433_HEDP: G_40mm_HE
    {
        hit = 170;
        indirectHit = 25;
        indirectHitRange = 5;
        caliber = 3;
        class CamShakeHit
        {
            power = 30;
            duration = "((round (30^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
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
		scope = 2;
		ammo = "B_mas_12Gauge_Slug";
		count = 7;
		mass = 4;
		initspeed=415;
		displayName = "12cal Slug M1014";
		picture = "\A3\Weapons_F\Data\ui\m_12gauge_slugs_ca.paa";
		reloadaction="GestureReloadM4SSAS";
		descriptionshort = "Caliber: 12 cal<br />Rounds: 7<br />Used in: M1014";
	};
	class 7Rnd_mas_12Gauge_Pellets: 16Rnd_9x21_Mag
	{
		scope = 2;
		ammo = "B_mas_12Gauge_Pellets";
		count = 7;
		mass = 4;
		initspeed=395;
		displayName = "12cal Pellets M1014";
		picture = "\A3\Weapons_F\Data\ui\m_12gauge_ca.paa";
		reloadaction="GestureReloadM4SSAS";
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
	};
	};
	