
class CfgPatches
{
 class CUP_Weapons_RPG7
 {
  units[] = {};
  weapons[] = {"CUP_launch_RPG7V"};
  requiredVersion = 0.1;
  requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
  magazines[] = {"CUP_PG7V_M","CUP_OG7_M","CUP_PG7VL_M","CUP_PG7VR_M"};
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
		model = "\CUP\Weapons\CUP_Weapons_RPG7\PG7V\CUP_PG7V_fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_RPG7\PG7V\CUP_PG7V.p3d";
		cost = 20;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		airFriction = -0.096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 40;
		airLock = 1;
		allowAgainstInfantry = 1;
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
		model = "\CUP\Weapons\CUP_Weapons_RPG7\PG7VL\CUP_PG7VL_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_RPG7\PG7VL\CUP_PG7VL.p3d";
		cost = 200;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		airFriction = -0.096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 40;
		airLock = 1;
		allowAgainstInfantry = 1;
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
		model = "\CUP\Weapons\CUP_Weapons_RPG7\PG7VR\CUP_PG7VR_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_RPG7\PG7VR\CUP_PG7VR.p3d";
		cost = 300;
		initTime = 0.15;
		thrust = 165;
		thrustTime = 1;
		maxSpeed = 200;
		airFriction = -0.096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 40;
		airLock = 1;
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
		hit = 120; //was 140
		indirectHit = 30;
		indirectHitRange = 20;
		model = "\CUP\Weapons\CUP_Weapons_RPG7\OG7V\CUP_OG7V_Fly.p3d";
		proxyShape = "\CUP\Weapons\CUP_Weapons_RPG7\OG7V\CUP_OG7V.p3d";
		cost = 15;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		airFriction = -0.096;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 40;
		airLock = 1;
		allowAgainstInfantry = 1;
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
class CfgMagazines
{
 class CA_Magazine;
 class CA_LauncherMagazine;
 class CUP_PG7V_M: CA_LauncherMagazine
 {
  scope = 2;
  model = "\CUP\Weapons\CUP_Weapons_RPG7\PG7V\CUP_PG7V";
  modelSpecial = "\CUP\Weapons\CUP_Weapons_RPG7\CUP_rpg7_launcher_loaded";
  displayName = "PG-7V";
  ammo = "CUP_R_PG7V_AT";
  picture = "\CUP\Weapons\CUP_Weapons_RPG7\data\ui\m_pg7_ca.paa";
  initSpeed = 115;
  descriptionShort = "PG-7V";
  mass = 48;
 };
 class CUP_PG7VL_M: CA_LauncherMagazine
 {
  scope = 2;
  model = "\CUP\Weapons\CUP_Weapons_RPG7\PG7VL\CUP_PG7VL";
  modelSpecial = "\CUP\Weapons\CUP_Weapons_RPG7\CUP_rpg7L_launcher_loaded";
  displayName = "PG-7VL";
  ammo = "CUP_R_PG7VL_AT";
  picture = "\CUP\Weapons\CUP_Weapons_RPG7\data\ui\m_PG7VL_ca.paa";
  descriptionShort = "PG-7VL";
  mass = 57;
  initSpeed = 70;
 };
 class CUP_PG7VR_M: CA_LauncherMagazine
 {
  scope = 2;
  model = "\CUP\Weapons\CUP_Weapons_RPG7\PG7VR\CUP_PG7VR";
  modelSpecial = "\CUP\Weapons\CUP_Weapons_RPG7\CUP_rpg7VR_launcher_loaded";
  displayName = "PG-7VR";
  ammo = "CUP_R_PG7VR_AT";
  picture = "\CUP\Weapons\CUP_Weapons_RPG7\data\ui\M_PG7VR_ca.paa";
  initSpeed = 70;
  descriptionShort = "PC-7VR";
  type = "3 * 256";
  mass = 98;
 };
 class CUP_OG7_M: CA_LauncherMagazine
 {
  scope = 2;
  model = "\CUP\Weapons\CUP_Weapons_RPG7\OG7V\CUP_OG7V";
  modelSpecial = "\CUP\Weapons\CUP_Weapons_RPG7\CUP_rpg7o_launcher_loaded";
  displayName = "OG7";
  ammo = "CUP_R_OG7_AT";
  picture = "\CUP\Weapons\CUP_Weapons_RPG7\data\ui\M_OG7V_ca.paa";
  initSpeed = 115;
  descriptionShort = "OG-7";
  mass = 43;
 };
};
class CfgWeapons
{
 class Launcher;
 class Launcher_Base_F: Launcher
 {
  class WeaponSlotsInfo;
 };
 class CUP_launch_RPG7V: Launcher_Base_F
 {
  class GunParticles
  {
   class effect1
   {
    positionName = "konec hlavne";
    directionName = "usti hlavne";
    effectName = "RocketBackEffectsRPGNT";
   };
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
   mass = 153;
  };
  scope = 2;
  inertia = 1;
  displayName = "RPG-7V";
  AGM_Backblast_Angle = 45;
  AGM_Backblast_Range = 20;
  AGM_Backblast_Damage = 1;
  jsrs_soundeffect = "JSRS2_Distance_Effects_rpg";
  model = "\CUP\Weapons\CUP_Weapons_RPG7\CUP_rpg7_launcher.p3d";
  handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_RPG7\data\anim\RPG7.rtm"};
  modelOptics = "-";
  magazines[] = {"CUP_PG7V_M","CUP_PG7VL_M","CUP_PG7VR_M","CUP_OG7_M"};
  sounds[] = {"StandardSound"};
  class BaseSoundModeType
  {
   weaponSoundEffect = "DefaultRifle";
  };
  class StandardSound: BaseSoundModeType
  {
   begin1[] = {"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\RPG7V_s1",1.9952624,1,900};
   begin2[] = {"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\RPG7V_s2",1.9952624,1,900};
   begin3[] = {"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\RPG7V_s3",1.9952624,1,900};
   begin4[] = {"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\RPG7V_s4",1.9952624,1,900};
   soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
  };
  reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\Reload",1,1,35};
  drySound[] = {"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\Dry",2,1,35};
  soundFly[] = {"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\Fly","db25",1,500};
  weaponSoundEffect = "DefaultRifle";
  reloadAction = "ReloadRPG";
  picture = "\CUP\Weapons\CUP_Weapons_RPG7\data\ui\gear_rpg7_X_ca.paa";
  recoil = "recoil_single_law";
  magazineReloadTime = 4;
  aiRateOfFire = 10;
  aiRateOfFireDistance = 450;
  minRange = 10;
  midRange = 200;
  maxRange = 450;
  class Library
  {
   libTextDesc = "RPG-7V. 'nuff said";
  };
  descriptionShort = "Rocket Launcher";
 };
};
//};
