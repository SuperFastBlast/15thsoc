
class CfgPatches
{
 class CUP_Weapons_Strela_2
 {
  units[] = {};
  weapons[] = {"CUP_launch_9K32Strela"};
  requiredVersion = 0.1;
  requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
  magazines[] = {"CUP_Strela_2_M"};
 };
};
class CfgAmmo
{
 class M_Titan_AA;
 class CUP_M_9K32_Strela_2_AA: M_Titan_AA
 {
  model = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla_fly.p3d";
  proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla.p3d";
  hit = 66;
  indirectHit = 50;
  indirectHitRange = 8;
  maneuvrability = 5;
  simulationStep = 0.002;
  trackOversteer = 0.75;
  trackLead = 1;
  airLock = 1;
  irLock = 1;
  cost = 7500;
  maxSpeed = 470;
  initTime = 0.3;
  sideAirFriction = 0.162;
  thrustTime = 2.5;
  thrust = 232;
  fuseDistance = 120;
  timeToLive = 17;
  whistleDist = 16;
  weaponLockSystem = "16 + 2";
  cmImmunity = 0.8;
 };
};
class CfgMagazines
{
class Titan_AA;
 class CUP_Strela_2_M: Titan_AA
 {
  scope = 2;
  count = 1;
  displayName = "9K32 Strela-2";
  displayNameShort = "AA";
  ammo = "CUP_M_9K32_Strela_2_AA";
  type = "6 * 256";
  picture = "\CUP\Weapons\CUP_Weapons_Strela_2\data\ui\m_igla_ca.paa";
  model = "\CUP\Weapons\CUP_Weapons_Ammunition\9K38_Igla\CUP_9K38_Igla";
  initSpeed = 40;
  maxLeadSpeed = 320;
  descriptionShort = "Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
  mass = 219;
  maxThrowHoldTime = 2;
  maxThrowIntensityCoef = 1.4;
  minThrowIntensityCoef = 0.3;
  simulation = "ProxyMagazines";
 };
};
class CfgWeapons
{
 class Launcher;
 class Launcher_Base_F: Launcher
 {
  class WeaponSlotsInfo;
 };
 class CUP_launch_9K32Strela: Launcher_Base_F
 {
  scope = 2;
  displayName = "Strela-2 9K32";
  model = "\CUP\Weapons\CUP_Weapons_Strela_2\strela_launcher";
  nameSound = "aalauncher";
  modelOptics = "-";
  magazines[] = {"CUP_Strela_2_M"};
  cameraDir = "";
  cursorAim = "\a3\weapons_f\data\clear_empty";
  cursor = "missile";
  cursorSize = 1;
  reloadAction = "ReloadRPG";
  sounds[] = {"StandardSound"};
  class BaseSoundModeType
  {
   weaponSoundEffect = "DefaultRifle";
  };
  class StandardSound: BaseSoundModeType
  {
   begin1[] = {"CUP\Weapons\CUP_Weapons_Strela_2\data\sfx\Strela_s1",10,1,1200};
   begin2[] = {"CUP\Weapons\CUP_Weapons_Strela_2\data\sfx\Strela_s2",10,1,1200};
   begin3[] = {"CUP\Weapons\CUP_Weapons_Strela_2\data\sfx\Strela_s3",10,1,1200};
   begin4[] = {"CUP\Weapons\CUP_Weapons_Strela_2\data\sfx\Strela_s4",10,1,1200};
   soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
  };
  reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_Strela_2\data\sfx\Reload",1,1,35};
  drySound[] = {"CUP\Weapons\CUP_Weapons_Strela_2\data\sfx\Dry",1,1,35};
  soundFly[] = {"CUP\Weapons\CUP_Weapons_Strela_2\data\sfx\Fly","db40",1.5,700};
  lockingTargetSound[] = {"\CUP\Weapons\CUP_Weapons_Javelin\data\sfx\locking_target",0.31622776,1};
  lockedTargetSound[] = {"\CUP\Weapons\CUP_Weapons_Javelin\data\sfx\locked_target",0.31622776,2.5};
  value = 20;
  canLock = 2;
  recoil = "recoil_single_titan";
  minRange = 10;
  minRangeProbab = 0.3;
  midRange = 2500;
  midRangeProbab = 0.8;
  maxRange = 4800;
  maxRangeProbab = 0.1;
  aiRateOfFire = 5;
  aiRateOfFireDistance = 2500;
  weaponLockDelay = 3;
  weaponLockSystem = 1;
  cmImmunity = 0.9;
  lockAcquire = 0;
  class OpticsModes
  {
   class Ironsight
   {
    opticsid = 1;
    usemodeloptics = 0;
    distancezoommax = 300;
    distancezoommin = 300;
    memorypointcamera = "eye";
    opticsdisableperipherialvision = 0;
    opticsflare = 0;
    opticsppeffects[] = {};
    opticszoominit = 0.75;
    opticszoommax = 1;
    opticszoommin = 0.375;
    visionmode[] = {};
   };
  };
  handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_Strela_2\data\Anim\Strela.rtm"};
  picture = "\CUP\Weapons\CUP_Weapons_Strela_2\data\ui\gear_9k32_ca.paa";
  class Library
  {
   libTextDesc = "The 9K32 Strela-2 (NATO name SA-7 Grail) is a man-portable,shoulder-fired surface-to-air missile (SAM) with passive infrared homing guidance,similar to the US Army Stinger.<br/>The 9K32 is a tail-chase missile dependent on the operator's ability to lock it onto the heat source of low-flying jets and helicopters.";
  };
  descriptionShort = "Surface-to-air missile launcher <br/>Guided";
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
   mass = 103;
  };
 };
};

