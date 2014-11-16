class CfgPatches
{
	class 15_meu_ammo
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {""};
		weapons[] = {""};
		magazines[] = {""};
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
		cartridge = "FxCartridge_slug";
		caliber = 0.8;
		indirectHit = 0;
        indirectHitRange = 0;
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
};

	