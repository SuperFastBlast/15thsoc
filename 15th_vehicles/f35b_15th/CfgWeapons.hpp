class CfgWeapons 
{
	
	class CannonCore;			// External class reference
	class MissileLauncher;			// External class reference
	class RocketPods;			// External class reference
	class H_PilotHelmetFighter_B;		// External class reference
	class U_B_PilotCoveralls;		// External class reference
	class ItemInfo;				// External class reference 
	class UniformItem;			// External class reference
	

	class js_w_f35_gau12 : CannonCore 
	{
		scope = public;
		displayName = "GAU-12/A 25mm";
		displayNameMagazine = "GAU-12/A 25mm";
		shortNameMagazine = "GAU-12/A 25mm";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"js_m_f35_gau12"};
		holdsterAnimValue = 0.0;

		//locking system
		canLock = 2; 			//Determines if the weapon can lock onto targets, 0 = can not lock , 1 = can be targeted at a lower/cadett difficulty (Recruit + Regular) , 2 = can always lock 
		ballisticsComputer = 2;

		modes[] = {"manual", "close", "short", "medium", "far"};
		
		class GunParticles 
		{
			class Effect 
			{
				effectName = "MachineGun1";
				positionName = "nosegun";
				directionName = "nosegun_dir";
			};
		};
		
		class manual : CannonCore 
		{
			displayName = "M61A2 20mm";
			autoFire = true;
			sound[] = {"A3\Sounds_F\weapons\gatling\gatling1v1", db0, 1, 1000};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.05;
			dispersion = 0.0025;
			soundContinuous = 0;
			showToPlayer = true;
			burst = 1;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		
		class close : manual 
		{
			showToPlayer = false;
			burst = 15;
			aiRateOfFire = 0.25;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		
		class short : close 
		{
			burst = 10;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		
		class medium : close 
		{
			burst = 7;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		
		class far : close 
		{
			burst = 4;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	
	class js_w_f35_aim9xLaucher : MissileLauncher 
	{
		//locking
		canLock = 2; 			//Determines if the weapon can lock onto targets, 0 = can not lock , 1 = can be targeted at a lower/cadett difficulty (Recruit + Regular) , 2 = can always lock 
		weaponLockDelay = 1.0;		//Determines in seconds how long it takes before the gun reaches LOCKED after marking targets with TAB/RMB
		weaponLockSystem = 2; 		//Set the weapon's locking technology - determines which signature a CM system can notice. Can be multiple at the same time. 0 = None, 1 = CM_Lock_Visual, 2 = CM_Lock_IR , 4 = CM_Lock_Laser, 8 = CM_Lock_Radar
		cmImmunity = 1.0;		//Determines the probability of not getting distracting by a CM. Flares and chaffs are dropped in pairs, while smokes are single. 1=100% hit, 0= no hit probability.
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.316228, 1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.316228, 2.5};

		displayName = "AIM-9X Sidewinder";
		displayNameMagazine = "AIM-9X Sidewinder";
		shortNameMagazine = "AIM-9X";

		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";

		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.7;

		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_2", db1, 1.3, 1000};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", db0, 1.5, 700};
		weaponSoundEffect = "DefaultRifle";

		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] = {"js_m_f35_aim9x_inner_x1", "js_m_f35_aim9x_x1"};
		holdsterAnimValue = 1;
		textureType = "semi";
	};
	
	
	class js_w_f35_GBU12LGBLaucher : RocketPods 
	{
		canLock = 2;
		displayName = "GBU12 LGB";
		displayNameMagazine = "GBU12 LGB";
		shortNameMagazine = "GBU12 LGB";
		magazines[] = {"js_m_f35_GBU12_x1"};
		reloadTime = 0.1;
		magazineReloadTime = 0.5;
		aiRateOfFire = 5.0;	// delay between shots at given distance
		aiRateOfFireDistance = 500;
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		textureType = "fullAuto";
		missileLockCone = 180;
		weaponLockDelay = 1.0;
		holdsterAnimValue = 1;
	};
	
	
	class js_w_f35_master_arms_safe : RocketPods 
	{
		CanLock = 0;
		displayName = "MASTER ARM - SAFE";
		displayNameMagazine = "MASTER ARM - SAFE";
		shortNameMagazine = "MASTER ARM - SAFE";
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"FakeWeapon"};
		burst = 0;
		reloadTime = 0.01;
		magazineReloadTime = 0.1;


	};
	
	

	

	



};