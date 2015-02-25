
class CfgPatches
{
 class tf47_at4
 {
  units[] = {};
  weapons[] = {"tf47_at4_HEAT","tf47_at4_HE","tf47_at4_HP","tf47_at4_tube","tf47_at4_HEDP"};
  magazines[] = {"tf47_at4_m_HEAT","tf47_at4_m_HEDP","tf47_at_m_HP","tf47_at4_m_HP"};
  requiredVersion = 0.1;
  requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Items","A3_Characters_F_BLUFOR","CBA_MAIN","A3_Data_F"};
  ammo[] = {"RocketBase","tf47_at4_m_HEAT","tf47_at4_m_HEDP","tf47_at4_m_HP"};
 };
 class Disable_XEH_Logging
 {
  units[] = {};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {"CBA_MAIN"};
 };
};
class CfgWeapons
{
 class InventoryItem_Base_F;
 class InventoryMuzzleItem_Base_F;
 class InventoryOpticsItem_Base_F;
 class InventoryFlashLightItem_Base_F;
 class ItemCore;
 class ItemInfo;
 class muzzle_snds_H;
 class tf47_fakeitem_at4: muzzle_snds_H
 {
  author = "[TaskForce 47] BlackPixxel";
  _generalMacro = "tf47_fakeitem_at4";
  displayName = "DON'T TAKE THIS ONE";
  picture = "\tf47_launchers\at4\UI\gear_fakeitem_ca.paa";
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  class ItemInfo: ItemInfo
  {
   class MagazineCoef
   {
    initSpeed = 1;
   };
   class AmmoCoef
   {
    hit = 1;
    typicalSpeed = 1;
    airFriction = 1;
    visibleFire = 0.5;
    audibleFire = 0.3;
    visibleFireTime = 0.5;
    audibleFireTime = 0.5;
    cost = 1;
   };
   soundTypeIndex = 1;
   muzzleEnd = "zaslehPoint";
   alternativeFire = "Zasleh2";
   class MuzzleCoef
   {
    dispersionCoef = "0.8f";
    artilleryDispersionCoef = "1.0f";
    fireLightCoef = "0.1f";
    recoilCoef = "1.0f";
    recoilProneCoef = "1.0f";
    minRangeCoef = "1.0f";
    minRangeProbabCoef = "1.0f";
    midRangeCoef = "1.0f";
    midRangeProbabCoef = "1.0f";
    maxRangeCoef = "1.0f";
    maxRangeProbabCoef = "1.0f";
   };
  };
  inertia = 0.1;
 };
 class Launcher;
 class Launcher_Base_F: Launcher
 {
  class WeaponSlotsInfo;
 };
 class tf47_at4_heat: Launcher_Base_F
 {
  author = "[TaskForce 47] BlackPixxel";
  _generalMacro = "tf47_m3maaws";
  scope = 2;
  displayName = "M136 AT4 HEAT CS";
  model = "tf47_launchers\at4\at4.p3d";
  picture = "\tf47_launchers\at4\UI\gear_at4_x_ca.paa";
  handAnim[] = {"OFP2_ManSkeleton","tf47_launchers\at4\anim\handanim_at4.rtm"};
  reloadAction = "prepareAT4";
  modelOptics = "-";
  maxZeroing = 400;
  weaponInfoType = "RscWeaponZeroing";
  distanceZoomMin = 50;
  distanceZoomMax = 400;
  discreteDistance[] = {50,100,150,200,250,300,350,400};
  discreteDistanceCameraPoint[] = {"eye_1","eye_2","eye_3","eye_4","eye_5","eye_6","eye_7","eye_8"};
  discreteDistanceInitIndex = 0;
  memorypointcamera = "eye";
  cameraDir = "look";
  optics = 1;
  opticsdisableperipherialvision = 0.67;
  opticsflare = 0;
  opticsid = 0;
  opticsppeffects[] = {};
  opticszoominit = 0.75;
  opticszoommin = 0.34;
  opticszoommax = 1.1;
  class GunParticles
  {
   class effect1
   {
    positionName = "BackBlast2";
    directionName = "BackBlast1";
    effectName = "at4_backblast";
   };
  };
  magazines[] = {"tf47_at4_m_HEAT"};
  sounds[] = {"StandardSound"};
  class BaseSoundModeType
  {
   weaponSoundEffect = "DefaultRifle";
  };
  class StandardSound: BaseSoundModeType
  {
   begin1[] = {"tf47_launchers\at4\sound\M136_s1.wss","db18",1,900};
   begin2[] = {"tf47_launchers\at4\sound\M136_s2.wss","db18",1,900};
   begin3[] = {"tf47_launchers\at4\sound\M136_s3.wss","db18",1,900};
   begin4[] = {"tf47_launchers\at4\sound\M136_s4.wss","db18",1,900};
   soundBegin[] = {"begin1",1,"begin2",1,"begin3",1,"begin4",1};
  };
  drySound[] = {"A3\sounds_f\weapons\other\dry6",0.4466836,1,20};
  reloadMagazineSound[] = {"tf47_launchers\at4\sound\at4prep.ogg",1.0,1,10};
  soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.31622776,1.5,900};
  recoil = "recoil_auto_ebr";
  aiRateOfFire = 7.0;
  aiRateOfFireDistance = 600;
  minRange = 10;
  minRangeProbab = 0.8;
  midRange = 400;
  midRangeProbab = 0.8;
  maxRange = 900;
  maxRangeProbab = 0.5;
  canLock = 0;
  weaponLockDelay = 3.0;
  lockAcquire = 0;
  inertia = 0.5;
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
   allowedslots[] = {901};
   mass = 174;
   class MuzzleSlot
   {
    access = 1;
    compatibleitems[] = {"tf47_fakeitem_at4"};
    displayname = "Muzzle Slot";
    linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
    scope = 1;
   };
  };
  descriptionShort = "84mm Anti Tank Rifle";
  class Library
  {
   libTextDesc = "Placeholder";
  };
  AGM_Backblast_Angle = 50;
  AGM_Backblast_Range = 1.5;
  AGM_Backblast_Damage = 0.5;
 };
 class tf47_at4_HEDP: tf47_at4_heat
 {
  magazines[] = {"tf47_at4_m_HEDP"};
  displayName = "M136 AT4 HEDP";
 };
 class tf47_at4_HP: tf47_at4_heat
 {
  magazines[] = {"tf47_at4_m_HP"};
  displayName = "M136 AT4";
 };
 class tf47_at4_tube: tf47_at4_heat
 {
  magazines[] = {};
  displayName = "empty M136 AT4";
  model = "tf47_launchers\at4\at4_used.p3d";
 };
};
class CfgMagazines
{
 class CA_LauncherMagazine;
 class tf47_at4_m_HEAT: CA_LauncherMagazine
 {
  author = "[TaskForce 47] BlackPixxel";
  scope = 1;
  displayName = "HEAT";
  model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
  initSpeed = 290;
  descriptionShort = "High Explosive Anti tank";
  displaynameshort = "HEAT";
  ammo = "tf47_at4_m_HEAT";
  type = 256;
  mass = 0;
  allowedSlots[] = {801,701,901};
 };
 class tf47_at4_m_HEDP: tf47_at4_m_HEAT
 {
  displayName = "HEDP";
  descriptionShort = "High Explosive Dual Purpose";
  displaynameshort = "HEDP";
  ammo = "tf47_at4_m_HEDP";
 };
 class tf47_at4_m_HP: tf47_at4_m_HEAT
 {
  displayName = "HP";
  descriptionShort = "High Penetration";
  displaynameshort = "HP";
  ammo = "tf47_at4_m_HP";
 };
};
class CfgAmmo
{
 class default;
 class RocketCore;
 class ShellBase;
 class Grenade;
 class BulletBase;
 class RocketBase: RocketCore{};
 class tf47_at4_m_HEAT: RocketBase
 {
  explosive = 0.65;
  EffectFly = "ArtilleryTrails";
  soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_05","db30",1,1800};
  soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6","db25",1,400};
  model = "tf47_launchers\at4\at4_rocket.p3d";
  hit = 380;
  indirectHit = 12;
  indirectHitRange = 1;
  cost = 800;
  airFriction = 0.01;
  sideAirFriction = 0.0;
  maxSpeed = 290;
  initTime = 0;
  thrustTime = 0.1;
  thrust = 0.1;
  fuseDistance = 15;
  CraterEffects = "ATMissileCrater";
  explosionEffects = "GrenadeExplosion";
  effectsMissileInit = "";
  effectsMissile = "m3maaws_exhaust";
  simulationStep = 0.02;
  airLock = 0;
  irLock = 0;
  timeToLive = 25;
  maneuvrability = 0;
  allowAgainstInfantry = 0;
	AGM_Backblast_Angle = 60; // angle of the backblast area
        AGM_Backblast_Range = 0; // maximum range of the backblast
        AGM_Backblast_Damage = 0; // maximum damage of the backblast
  class CamShakeExplode
  {
   power = "(55*0.2)";
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
   power = 0.3;
   duration = 0.2;
   frequency = 8;
   distance = 1;
  };
 };
 class tf47_at4_m_HEDP: tf47_at4_m_HEAT
 {
  hit = 435;
  indirectHit = 55;
  indirectHitRange = 4.9;
  CraterEffects = "ATMissileCrater";
  explosionEffects = "ATMissileExplosion";
  explosive = 0.65;
	AGM_Backblast_Angle = 60;   // angle of the backblast area
        AGM_Backblast_Range = 25;   // maximum range of the backblast
        AGM_Backblast_Damage = 1; // maximum damage of the backblast
 };
 class tf47_at4_m_HP: tf47_at4_m_HEAT
 {
  hit = 480;
  indirectHit = 20;
  indirectHitRange = 2;
  CraterEffects = "ExploAmmoCrater";
  explosionEffects = "ExploAmmoExplosion";
	AGM_Backblast_Angle = 60;   // angle of the backblast area
        AGM_Backblast_Range = 25;   // maximum range of the backblast
        AGM_Backblast_Damage = 1; // maximum damage of the backblast
 };
};
class CfgMovesBasic
{
 class DefaultDie;
 class ManActions
 {
  prepareAT4 = "prepareAT4";
 };
 class Actions
 {
  class NoActions: ManActions
  {
   prepareAT4[] = {"prepareAT4","Gesture"};
  };
 };
};
class CfgGesturesMale
{
 class Default;
 class States
 {
  class prepareAT4: Default
  {
   file = "\tf47_launchers\at4\anim\handanim_at4prep.rtm";
   mask = "launcher";
   speed = 0.4;
   looped = 0;
   headBobStrength = 0.2;
   headBobMode = 2;
   rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
   leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
  };
 };
};
class CfgCloudlets
{
 class Default;
 class at4Effect3: Default
 {
  interval = 0.01;
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 12;
  particleFSFrameCount = 8;
  particleFSLoop = 0;
  angleVar = 1;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 1.5;
  moveVelocity[] = {"directionX * 0.2","directionY * 0.2","directionZ * 0.2"};
  rotationVelocity = 1;
  weight = 0.1285;
  volume = 0.1;
  rubbing = 0.01;
  size[] = {0.25,1,10};
  sizeCoef = "1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
  color[] = {{ 0.8,0.8,0.8,0.2 },{ 0.8,0.8,0.8,0.15 },{ 0.8,0.8,0.8,0.025 },{ 0.8,0.8,0.8,0.005 }};
  colorCoef[] = {1,1,1,"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"};
  animationSpeed[] = {2,1};
  animationSpeedCoef = 1;
  randomDirectionPeriod = 0.1;
  randomDirectionIntensity = 0.2;
  onTimerScript = "";
  beforeDestroyScript = "";
  blockAIVisibility = 0;
  destroyOnWaterSurface = 1;
  destroyOnWaterSurfaceOffset = -0.1;
  lifeTimeVar = 0.5;
  position[] = {"positionX","positionY","positionZ"};
  positionVar[] = {0.05,0.05,0.05};
  MoveVelocityVar[] = {0.05,0.05,0.05};
  rotationVelocityVar = 20;
  sizeVar = 0.1;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class at4Effect5: Default
 {
  interval = 0.01;
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 12;
  particleFSFrameCount = 8;
  particleFSLoop = 0;
  angleVar = 1;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 1.2;
  moveVelocity[] = {"directionX * 2","directionY * 2","directionZ * 2"};
  rotationVelocity = 1;
  weight = 0.1285;
  volume = 0.1;
  rubbing = 0.01;
  size[] = {0.25,1,10};
  sizeCoef = "1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
  color[] = {{ 0.8,0.8,0.8,0.2 },{ 0.8,0.8,0.8,0.15 },{ 0.8,0.8,0.8,0.025 },{ 0.8,0.8,0.8,0.005 }};
  colorCoef[] = {1,1,1,"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"};
  animationSpeed[] = {2,1};
  animationSpeedCoef = 1;
  randomDirectionPeriod = 0.5;
  randomDirectionIntensity = 0.25;
  onTimerScript = "";
  beforeDestroyScript = "";
  blockAIVisibility = 0;
  destroyOnWaterSurface = 1;
  destroyOnWaterSurfaceOffset = -0.1;
  lifeTimeVar = 0.5;
  position[] = {"positionX","positionY","positionZ"};
  positionVar[] = {0.05,0.05,0.05};
  MoveVelocityVar[] = {0.05,0.05,0.05};
  rotationVelocityVar = 20;
  sizeVar = 0.1;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class at4Dust3: Default
 {
  interval = "0.002 * isWaterSurface";
  circleRadius = 0;
  circleVelocity[] = {0,-0.2,0};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 12;
  particleFSFrameCount = 13;
  particleFSLoop = 0;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 1;
  moveVelocity[] = {"0.1*directionX","0.1*directionY",0};
  rotationVelocity = 0;
  weight = 0.0533;
  volume = 0.04;
  rubbing = 0.3;
  size[] = {1,1};
  color[] = {{ 0.805,0.785,0.65,0.08 },{ 0.805,0.785,0.65,0.03 },{ 0.805,0.785,0.65,0.001 }};
  animationSpeed[] = {1000};
  randomDirectionPeriod = 0.1;
  randomDirectionIntensity = 0.25;
  onTimerScript = "";
  beforeDestroyScript = "";
  lifeTimeVar = 2;
  positionVar[] = {1,0.5,1};
  MoveVelocityVar[] = {1,0.5,1};
  rotationVelocityVar = 30;
  sizeCoef = 1;
  colorCoef[] = {1,1,1,0.75};
  animationSpeedCoef = 1;
  position[] = {"positionX + (directionLocalX * 3)","positionY + (directionLocalY * 3)","positionZ + (directionLocalZ * 3)"};
  sizeVar = 0.5;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class at4BackFire: Default
 {
  interval = 0.003;
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 3;
  particleFSFrameCount = 1;
  particleFSLoop = 0;
  angleVar = 0.5;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 0.08;
  moveVelocity[] = {"directionX * 0.2","directionY * 0.2","directionZ * 0.2"};
  rotationVelocity = 1;
  weight = 1.275;
  volume = 1;
  rubbing = 0;
  size[] = {0.05,0.15};
  sizeCoef = 1;
  color[] = {{ 0.4,0.4,0.4,-2 },{ 0.4,0.4,0.4,-1 },{ 0.4,0.4,0.4,-0.6 },{ 0.4,0.4,0.4,-0.4 },{ 0.4,0.4,0.4,0 }};
  colorCoef[] = {1,1,1,1};
  animationSpeed[] = {1000};
  animationSpeedCoef = 1;
  randomDirectionPeriod = 1;
  randomDirectionIntensity = 0;
  onTimerScript = "";
  beforeDestroyScript = "";
  blockAIVisibility = 0;
  lifeTimeVar = 0.1;
  position[] = {"positionX + directionLocalX * 0.05","positionY + directionLocalY * 0.05","positionZ + directionLocalZ * 0.05"};
  positionVar[] = {0.08,0.08,0.08};
  MoveVelocityVar[] = {0.1,0.1,0.1};
  rotationVelocityVar = 20;
  sizeVar = 1.5;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class RocketBacksmokeRPGNT;
 class at4FrontSmoke: RocketBacksmokeRPGNT
 {
  interval = 0.01;
  lifeTime = 1.5;
  moveVelocity[] = {"- directionX * 0.8","- directionY * 0.8","- directionZ * 0.8"};
  rotationVelocity = 1;
  weight = 0.1275;
  volume = 0.1;
  rubbing = 0.4;
  size[] = {0.2,0.8,1.2,1.4,1.53};
  sizeCoef = 1;
  colorCoef[] = {0.65,0.65,0.65,0.18};
  animationSpeed[] = {5};
  animationSpeedCoef = 1;
  randomDirectionPeriod = 0.3;
  randomDirectionIntensity = 0.04;
  onTimerScript = "";
  beforeDestroyScript = "";
  lifeTimeVar = 0.8;
  position[] = {"positionX - directionLocalX * 0.9","positionY - directionLocalY * 0.9","positionZ - directionLocalZ * 0.9"};
  positionVar[] = {0.1,0.1,0.1};
  MoveVelocityVar[] = {0.2,0.2,0.2};
  rotationVelocityVar = 20;
  sizeVar = 0.15;
 };
 class at4CircleDust: Default
 {
  interval = "0.005 * isWaterSurface";
  circleRadius = 0.01;
  circleVelocity[] = {0.15,0,0.15};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 12;
  particleFSFrameCount = 13;
  particleFSLoop = 0;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 1;
  moveVelocity[] = {0,0.1,0};
  rotationVelocity = 0;
  weight = 0.053;
  volume = 0.04;
  rubbing = 0.02;
  size[] = {1.5,2.5};
  color[] = {{ 0.205,0.185,0.15,0.2 },{ 0.205,0.185,0.15,0.14 },{ 0.205,0.185,0.15,0.01 }};
  animationSpeed[] = {1000};
  randomDirectionPeriod = 0.1;
  randomDirectionIntensity = 0.05;
  onTimerScript = "";
  beforeDestroyScript = "";
  lifeTimeVar = 0.3;
  positionVar[] = {1,1,1};
  MoveVelocityVar[] = {0.1,0.1,0.1};
  rotationVelocityVar = 20;
  sizeCoef = 1;
  colorCoef[] = {1,1,1,1};
  animationSpeedCoef = 1;
  sizeVar = 0.3;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class at4ExhaustSmoke: Default
 {
  interval = "0.0012";
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  angleVar = 1;
  particleFSLoop = 0;
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 12;
  particleFSFrameCount = 8;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 1.1;
  moveVelocity[] = {0,0,0};
  rotationVelocity = 1;
  weight = 1;
  volume = 0.8;
  rubbing = 0.5;
  size[] = {1.5,3};
  color[] = {{ 0.3,0.3,0.3,0.05 },{ 1,1,1,0 }};
  animationSpeed[] = {1};
  randomDirectionPeriod = 0.1;
  randomDirectionIntensity = 0.1;
  onTimerScript = "";
  beforeDestroyScript = "";
  blockAIVisibility = 0;
  lifeTimeVar = 0.5;
  positionVar[] = {0.3,0.3,0.3};
  MoveVelocityVar[] = {0.4,0.4,0.4};
  rotationVelocityVar = 20;
  sizeVar = 0.2;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class at4ExhaustSmokeRefract: Default
 {
  interval = 0.001;
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  angleVar = 1;
  particleFSLoop = 0;
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 12;
  particleFSFrameCount = 8;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 2;
  moveVelocity[] = {0,0,0};
  rotationVelocity = 1;
  weight = 1;
  volume = 0.8;
  rubbing = 0.5;
  size[] = {1,2,2.8};
  color[] = {{ 0.3,0.3,0.3,0.03 },{ 0.4,0.4,0.4,0.02 },{ 0.5,0.5,0.5,0.01 }};
  animationSpeed[] = {5};
  randomDirectionPeriod = 0.1;
  randomDirectionIntensity = 0.1;
  onTimerScript = "";
  beforeDestroyScript = "";
  blockAIVisibility = 0;
  lifeTimeVar = 0.2;
  positionVar[] = {0.3,0.3,0.3};
  MoveVelocityVar[] = {0.4,0.4,0.4};
  rotationVelocityVar = 20;
  sizeVar = 0.15;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class at4ExhaustSmokeRefract2: Default
 {
  interval = "0.001";
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
  particleFSNtieth = 1;
  particleFSIndex = 0;
  particleFSFrameCount = 1;
  particleFSLoop = 0;
  angleVar = 1;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 0.5;
  moveVelocity[] = {"0.7","0.7","0.7"};
  rotationVelocity = 1;
  weight = 1.1;
  volume = 1.5;
  rubbing = 0.1;
  size[] = {0.3,1};
  sizeCoef = 1;
  color[] = {{ 0.06,0.06,0.06,0.8 },{ 0.3,0.3,0.3,0.6 },{ 0.3,0.3,0.3,0.1 }};
  colorCoef[] = {1,1,1,1};
  animationSpeed[] = {2,1};
  animationSpeedCoef = 1;
  randomDirectionPeriod = 0.1;
  randomDirectionIntensity = 0.05;
  onTimerScript = "";
  beforeDestroyScript = "";
  blockAIVisibility = 0;
  destroyOnWaterSurface = 1;
  destroyOnWaterSurfaceOffset = -0.1;
  lifeTimeVar = 0;
  position[] = {"positionX + directionLocalX * 0.5","positionY + directionLocalY * 0.5","positionZ + directionLocalZ * 0.5"};
  positionVar[] = {0.3,0.3,0.3};
  MoveVelocityVar[] = {0.35,0.35,0.35};
  rotationVelocityVar = 20;
  sizeVar = 0.05;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
};
class at4_backblast
{
 class Light1
 {
  simulation = "light";
  type = "FiredLightCannon";
  position[] = {0,0,0};
  intensity = 1;
  interval = 0.05;
  lifeTime = 0.12;
 };
 class CannonFired1
 {
  simulation = "particles";
  type = "at4BackFire";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
  lifeTime = 0.05;
 };
 class CannonFiredFront
 {
  simulation = "particles";
  type = "at4FrontSmoke";
  position[] = {0,0,0.28};
  intensity = 1;
  interval = 1;
  lifeTime = 0.25;
 };
 class CannonFired2
 {
  simulation = "particles";
  type = "at4Effect5";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
  lifeTime = 0.06;
 };
 class CannonFired3
 {
  simulation = "particles";
  type = "at4Effect3";
  position[] = {0,0,0};
  intensity = 2;
  interval = 1;
  lifeTime = 0.4;
  qualityLevel = 2;
 };
 class CannonFiredDust1
 {
  simulation = "particles";
  type = "at4CircleDust";
  position[] = {0,4,0};
  intensity = 2;
  interval = 1;
  lifeTime = 0.5;
 };
 class m3maawsExhaustsEffectRefract02
 {
  simulation = "particles";
  type = "at4ExhaustSmokeRefract2";
  position[] = {0,0,-0.5};
  interval = 1;
  lifeTime = 0.8;
 };
};
