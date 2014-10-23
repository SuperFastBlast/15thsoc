class CfgAmmo 
{

	class MissileBase;		// External class reference
	class LaserBombCore;		// External class reference
	class BombCore;			// External class reference

	class js_a_f35_Aim9x : MissileBase 
	{
		//model
		model = "\js_jc_f35\stores\m_aim9x";
		proxyShape = "\js_jc_f35\stores\m_aim9x";

		//damage and manevurability
		hit = 200;
		indirectHit = 85;
		maxSpeed = 828;	// max speed on level road, km/h
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		
		//locking
		airLock = 2; 		//0 = lockGroundTT (air lock disabled), 1 = lockAirGroundTT (air and ground lock), 2 = lockAirTT (air only lock) 
		irLock = 0; 		//if irLock=1 then Can lock vehicle with irTarget=1/true.
		laserLock = 0; 		//if laserLock = 1 then Can lock onto LaserTarget object 
		nvLock = 0;  		//if nvLock = 1 then Can lock onto NVTarget object (ie NVG marker that infantry can throw a grenade)
		artilleryLock = 0; 	//if artilleryLock = 1 then Can lock onto ArtilleryTarget object 
		lockType = 0;		//0 = fireAndForgetLT (current system), 1 = keepLockedLT (not yet done), 2 = manualLT (manualy guided) 
		weaponLockSystem = 1 + 2 + 16 + 4 +8;

		//misc
		timeToLive = 40;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0;
		thrustTime = 5;
		thrust = 240;
		fuseDistance = 500;
		cost = 1500;
		whistleDist = 20;

		//explosion effect
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		
	};

	class js_a_f35_Aim9x_inner : MissileBase 
	{
		//model
		model = "\js_jc_f35\stores\m_aim9x";
		proxyShape = "\js_jc_f35\stores\m_aim9x";

		//damage and manevurability
		hit = 200;
		indirectHit = 85;
		maxSpeed = 828;	// max speed on level road, km/h
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		
		//locking
		airLock = 2; 		//0 = lockGroundTT (air lock disabled), 1 = lockAirGroundTT (air and ground lock), 2 = lockAirTT (air only lock) 
		irLock = 0; 		//if irLock=1 then Can lock vehicle with irTarget=1/true.
		laserLock = 0; 		//if laserLock = 1 then Can lock onto LaserTarget object 
		nvLock = 0;  		//if nvLock = 1 then Can lock onto NVTarget object (ie NVG marker that infantry can throw a grenade)
		artilleryLock = 0; 	//if artilleryLock = 1 then Can lock onto ArtilleryTarget object 
		lockType = 0;		//0 = fireAndForgetLT (current system), 1 = keepLockedLT (not yet done), 2 = manualLT (manualy guided) 
		weaponLockSystem = 1 + 2 + 16 + 4 +8;

		//misc
		timeToLive = 40;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0.8;
		thrustTime = 5;
		thrust = 240;
		fuseDistance = 500;
		cost = 1500;
		whistleDist = 20;

		//explosion effect
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		
	};


	class js_a_f35_GBU12_LGB : LaserBombCore 
	{

		//model
		model = "\js_jc_f35\stores\m_gbu12fly";
		proxyShape = "\js_jc_f35\stores\m_gbu12";

		//damage and manevurability
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		maneuvrability = 20;

		//locking
		airLock = 0; 		//0 = lockGroundTT (air lock disabled), 1 = lockAirGroundTT (air and ground lock), 2 = lockAirTT (air only lock) 
		irLock = 0; 		//if irLock=1 then Can lock vehicle with irTarget=1/true.
		laserLock = 1; 		//if laserLock = 1 then Can lock onto LaserTarget object 
		nvLock = 0;  		//if nvLock = 1 then Can lock onto NVTarget object (ie NVG marker that infantry can throw a grenade)
		artilleryLock = 0; 	//if artilleryLock = 1 then Can lock onto ArtilleryTarget object 
		lockType = 0;		//0 = fireAndForgetLT (current system), 1 = keepLockedLT (not yet done), 2 = manualLT (manualy guided) 
		
		//misc		
		trackOversteer = 1;
		trackLead = 0.95;
		explosionTime = 2;
		fuseDistance = 35;
		whistleDist = 24;

		//explosion effect
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 2400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 2400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 2400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 2400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 2400};
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
		explosionSoundEffect = "DefaultExplosion";
	};

	

	
};