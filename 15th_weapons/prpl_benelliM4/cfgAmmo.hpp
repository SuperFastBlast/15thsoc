class CfgAmmo
{
	class B_12Gauge_Slug;
	class B_12Gauge_Pellets;
	class 15th_B_12Gauge_Pellets: B_12Gauge_Pellets  
	{
		hit = 10;
		visibleFire = 1;	// how much is visible when this weapon is fired
		audibleFire = 1;
		visibleFireTime = 2;
		cost = 1;
		tracerColor[] = {1, 0.05, 0.05, 1};
		tracerColorR[] = {1, 0.05, 0.05, 1};
		caliber = 0.5;
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
	class 15th_B_12Gauge_Slug : B_12Gauge_Slug  
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
};