
class CfgPatches
{
	class CUP_Weapons_Ammunition
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
	};
};
class CfgAmmo
{
	class rocketbase;
	class CUP_R_PG7V_AT: RocketBase
	{
		initSpeed = 115;
		hit = 416;
		indirectHit = 40;
		indirectHitRange = 4;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7V\CUP_PG7V_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7V\CUP_PG7V.p3d";
		cost = 100;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		airFriction = -0.0096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 4;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_PG7VL_AT: RocketBase
	{
		initSpeed = 115;
		hit = 640;
		indirectHit = 20;
		indirectHitRange = 2;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VL\CUP_PG7VL_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VL\CUP_PG7VL.p3d";
		cost = 200;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		airFriction = -0.0096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_PG7VR_AT: RocketBase
	{
		initSpeed = 70;
		hit = 1000;
		indirectHit = 40;
		indirectHitRange = 4;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VR\CUP_PG7VR_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VR\CUP_PG7VR.p3d";
		cost = 300;
		initTime = 0.15;
		thrust = 165;
		thrustTime = 1;
		maxSpeed = 200;
		airFriction = -0.0096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 4;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class CUP_R_OG7_AT: RocketBase
	{
		initSpeed = 115;
		hit = 140;
		indirectHit = 40;
		indirectHitRange = 20;
		model = "\CUP\Weapons\CUP_Weapons_Ammunition\OG7V\CUP_OG7V_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\OG7V\CUP_OG7V.p3d";
		cost = 100;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		airFriction = -0.0096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 24;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};