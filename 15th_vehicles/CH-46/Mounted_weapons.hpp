//-Ch46 mounted weapons Definitions -\\

	class cfgAmmo 
	{
		class B_762x51_Ball;
	};
	
	class CfgMagzines 
{
	class VehicleMagazine;
	class 100Rnd_762x51_M240: VehicleMagazine
	{
		scope = 1;
		displayName = "100rnd_M240";
		count=100;
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound="mgun";
		descriptionShort = "100RND_M240";
	};
};

	class CfgWeapons
{	
	class Mgun;
	class M240_veh: MGun
	{
		scope = 1;
		displayName = "M240";
		soundContinuous = false;
		aiDispersionCoefY=21; // 7
		aiDispersionCoefX=21;
		magazines[] = {"100Rnd_762x51_M240"};
		magazineReloadTime=3;
		canLock = 0;

		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
            displayName = "M240";
            autoFire = 1;
			reloadTime = 0.075;
	        dispersion=0.0012;

			showToPlayer = true;
            burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=1;minRangeProbab=0.01;
			midRange=2;midRangeProbab=0.01;
			maxRange=3;maxRangeProbab=0.01;
		}
		class close: manual
		{
            showToPlayer = false;
            soundBurst = false;
            burst = 10; //Rg 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;minRangeProbab=0.05;
			midRange=100;midRangeProbab=0.58;
			maxRange=200;maxRangeProbab=0.04;
		};
		class short: close
		{
			burst = 8; //Rg 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300; //Rg 200;
			minRange=50;minRangeProbab=0.05;
			midRange=200;midRangeProbab=0.58; //Rg 100;
			maxRange=400;maxRangeProbab=0.04; //Rg 200;
		};
		class medium: close
		{
			burst = 4; //Rg 8;
			aiRateOfFire = 3; //Rg 4;
			aiRateOfFireDistance = 600; //Rg 400;
			minRange=300;minRangeProbab=0.05;
			midRange=400;midRangeProbab=0.58; //Rg 300;
			maxRange=600;maxRangeProbab=0.04; //Rg 400;
		};
		class far: close
		{
			burst = 5; //Rg 7;
			aiRateOfFire = 5; //Rg 7;
			aiRateOfFireDistance = 1000; //Rg 600;
			minRange=500;minRangeProbab=0.05;
			midRange=600;midRangeProbab=0.4; //Rg 500;
			maxRange=800;maxRangeProbab=0.01; //Rg 600;
		};
	};
	class M240_veh_2:M240_veh {};
};	