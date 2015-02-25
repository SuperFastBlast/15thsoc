
class RscText{};
class RscEdit{};
class RscFrame{};
class RscButton{};
class AIRBURSTCFG
{
 idd = -1;
 movingenable = 0;
 onLoad = "uiNamespace setVariable[""AirburstConfigDialog"", _this select 0]";
 class ControlsBackground
 {
  class RscText_1000: RscText
  {
   idc = 1000;
   x = "0.324687 * safezoneW + safezoneX";
   y = "0.313 * safezoneH + safezoneY";
   w = "0.134062 * safezoneW";
   h = "0.1078 * safezoneH";
   colorText[] = {1,1,1,1};
   colorBackground[] = {0,0,0,0.5};
  };
  class RscText_1001: RscText
  {
   idc = 1001;
   text = "Airburst Config";
   x = "0.324687 * safezoneW + safezoneX";
   y = "0.28 * safezoneH + safezoneY";
   w = "0.134062 * safezoneW";
   h = "0.033 * safezoneH";
   colorText[] = {1,1,1,1};
   colorBackground[] = {0,0,0,0.9};
  };
  class RscFrame_1800: RscFrame
  {
   idc = 1800;
   x = "0.329844 * safezoneW + safezoneX";
   y = "0.368 * safezoneH + safezoneY";
   w = "0.12375 * safezoneW";
   h = "0.044 * safezoneH";
   sizeEx = "0.9 * GUI_GRID_H";
  };
  class RscText_1002: RscText
  {
   idc = 1002;
   text = "Value from 50 to 1500m;";
   x = "0.329844 * safezoneW + safezoneX";
   y = "0.368 * safezoneH + safezoneY";
   w = "0.128906 * safezoneW";
   h = "0.022 * safezoneH";
   colorBackground[] = {0,0,0,0};
   colorText[] = {1,1,1,1};
  };
  class RscText_1003: RscText
  {
   idc = 1003;
   x = "0.324687 * safezoneW + safezoneX";
   y = "0.4175 * safezoneH + safezoneY";
   w = "0.134062 * safezoneW";
   h = "0.011 * safezoneH";
   colorText[] = {1,1,1,1};
   colorBackground[] = {0,0,0,0.9};
  };
  class RscText_1004: RscText
  {
   idc = 1004;
   text = "leave empty for no Airburst";
   x = "0.329844 * safezoneW + safezoneX";
   y = "0.3878 * safezoneH + safezoneY";
   w = "0.128906 * safezoneW";
   h = "0.022 * safezoneH";
   colorText[] = {1,1,1,1};
   colorBackground[] = {0,0,0,0};
  };
 };
 class Controls
 {
  class RscEdit_1400: RscEdit
  {
   idc = 1400;
   x = "0.329844 * safezoneW + safezoneX";
   y = "0.324 * safezoneH + safezoneY";
   w = "0.0721875 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {1,1,1,1};
   colorActive[] = {1,1,1,1};
   colorText[] = {1,1,1,1};
  };
  class RscButton_1600: RscButton
  {
   idc = 1600;
   text = " APPLY";
   x = "0.407187 * safezoneW + safezoneX";
   y = "0.324 * safezoneH + safezoneY";
   w = "0.0464063 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "player setVariable ['AirburstRange', (ctrlText 1400)]; closeDialog 0";
  };
  class RscButton_1601: RscButton
  {
   idc = 1601;
   text = "ESC";
   x = "0.432968 * safezoneW + safezoneX";
   y = "0.28 * safezoneH + safezoneY";
   w = "0.020625 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "closeDialog 0;";
  };
 };
};
class FLARECFG
{
 idd = -1;
 movingenable = 0;
 onLoad = "uiNamespace setVariable[""FlareConfigDialog"", _this select 0]";
 class ControlsBackground
 {
  class RscText_2000: RscText
  {
   idc = 1000;
   x = "0.324687 * safezoneW + safezoneX";
   y = "0.313 * safezoneH + safezoneY";
   w = "0.134062 * safezoneW";
   h = "0.1078 * safezoneH";
   colorBackground[] = {0,0,0,0.5};
  };
  class RscText_2001: RscText
  {
   idc = 1001;
   text = "Flare Config";
   x = "0.324687 * safezoneW + safezoneX";
   y = "0.28 * safezoneH + safezoneY";
   w = "0.134062 * safezoneW";
   h = "0.033 * safezoneH";
   colorText[] = {1,1,1,1};
   colorBackground[] = {0,0,0,0.9};
  };
  class RscFrame_2800: RscFrame
  {
   idc = 1800;
   x = "0.329844 * safezoneW + safezoneX";
   y = "0.368 * safezoneH + safezoneY";
   w = "0.12375 * safezoneW";
   h = "0.044 * safezoneH";
  };
  class RscText_2002: RscText
  {
   idc = 1002;
   text = "Distance at which the flare";
   x = "0.329844 * safezoneW + safezoneX";
   y = "0.368 * safezoneH + safezoneY";
   w = "0.128906 * safezoneW";
   h = "0.022 * safezoneH";
   colorBackground[] = {0,0,0,0};
  };
  class RscText_2003: RscText
  {
   idc = 1003;
   x = "0.324687 * safezoneW + safezoneX";
   y = "0.4175 * safezoneH + safezoneY";
   w = "0.134062 * safezoneW";
   h = "0.011 * safezoneH";
   colorText[] = {1,1,1,1};
   colorBackground[] = {0,0,0,0.9};
  };
  class RscText_2004: RscText
  {
   idc = 1004;
   text = "should eject";
   x = "0.329844 * safezoneW + safezoneX";
   y = "0.3878 * safezoneH + safezoneY";
   w = "0.128906 * safezoneW";
   h = "0.022 * safezoneH";
   colorBackground[] = {0,0,0,0};
  };
 };
 class Controls
 {
  class RscButton_2600: RscButton
  {
   idc = 1600;
   text = "500";
   x = "0.329843 * safezoneW + safezoneX";
   y = "0.324 * safezoneH + safezoneY";
   w = "0.020625 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "player setVariable ['FlareRange', 500]; closeDialog 0";
  };
  class RscButton_2601: RscButton
  {
   idc = 1601;
   text = "ESC";
   x = "0.432968 * safezoneW + safezoneX";
   y = "0.28 * safezoneH + safezoneY";
   w = "0.020625 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "closeDialog 0;";
  };
  class RscButton_2602: RscButton
  {
   idc = 1602;
   text = "800";
   x = "0.355625 * safezoneW + safezoneX";
   y = "0.324 * safezoneH + safezoneY";
   w = "0.020625 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "player setVariable ['FlareRange', 800]; closeDialog 0";
  };
  class RscButton_2603: RscButton
  {
   idc = 1603;
   text = "1100";
   x = "0.381406 * safezoneW + safezoneX";
   y = "0.324 * safezoneH + safezoneY";
   w = "0.020625 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "player setVariable ['FlareRange', 1100]; closeDialog 0";
  };
  class RscButton_2604: RscButton
  {
   idc = 1604;
   text = "1400";
   x = "0.407187 * safezoneW + safezoneX";
   y = "0.324 * safezoneH + safezoneY";
   w = "0.020625 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "player setVariable ['FlareRange', 1400]; closeDialog 0";
  };
  class RscButton_2605: RscButton
  {
   idc = 1605;
   text = "1700";
   x = "0.432969 * safezoneW + safezoneX";
   y = "0.324 * safezoneH + safezoneY";
   w = "0.020625 * safezoneW";
   h = "0.033 * safezoneH";
   colorBackground[] = {0.1,0.7,0.9,0.5};
   colorActive[] = {0.1,0.7,0.9,0.5};
   action = "player setVariable ['FlareRange', 1700]; closeDialog 0";
  };
 };
};
class CfgPatches
{
 class tf47_m3maaws
 {
  units[] = {};
  weapons[] = {"tf47_m3maaws","tf47_beret","tf47_optic_m3maaws"};
  magazines[] = {"tf47_m3maaws_HEAT","tf47_m3maaws_HEDP","tf47_m3maaws_HE","tf47_m3maaws_SMOKE","tf47_m3maaws_ILLUM","tf47_m3maaws_AreaDefense"};
  requiredVersion = 0.1;
  requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Items","A3_Characters_F_BLUFOR","CBA_MAIN","A3_Data_F"};
  ammo[] = {"RocketBase","tf47_m3maaws_HEAT","tf47_m3maaws_HEDP","tf47_m3maaws_HE","tf47_m3maaws_HEAirburst","tf47_m3maaws_SMOKE","tf47_m3maaws_ILLUM","tf47_m3maaws_FakeShell","tf47_m3maaws_flare","tf47_m3maaws_AreaDefense","tf47_m3maaws_AreaDefense2"};
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
 class ItemCore;
 class HeadgearItem;
 class H_Beret_blk;
 class tf47_beret: H_Beret_blk
 {
  scope = 2;
  displayName = "TF47 Beret";
  picture = "\A3\characters_f_epb\BLUFOR\Data\UI\icon_h_beret02_ca.paa";
  model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"\tf47_launchers\m3maaws\data\tf47_beret.paa"};
  descriptionShort = "Super-Mega-Elite-Beret";
  class ItemInfo: HeadgearItem
  {
   mass = 3;
   uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
   allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
   modelSides[] = {6};
   armor = 1;
   passThrough = 1;
   hiddenSelections[] = {"camo"};
  };
 };
 class InventoryItem_Base_F;
 class InventoryMuzzleItem_Base_F;
 class InventoryOpticsItem_Base_F;
 class InventoryFlashLightItem_Base_F;
 class tf47_optic_m3maaws: ItemCore
 {
  author = "[TaskForce 47] BlackPixxel";
  _generalMacro = "tf47_optic_m3maaws";
  scope = 2;
  displayName = "M3 MAAWS sight";
  picture = "\tf47_launchers\m3maaws\UI\gear_scope_CA.paa";
  model = "tf47_launchers\m3maaws\optic_m3maaws.p3d";
  descriptionShort = "Optical Sight for the M3 MAAWS";
  weaponInfoType = "RscWeaponZeroing";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
   mass = 8;
   opticType = 1;
   optics = 1;
   modelOptics = "tf47_launchers\m3maaws\optic_m3maaws.p3d";
   class OpticsModes
   {
    class optic
    {
     distanceZoomMin = 100;
     distanceZoomMax = 900;
     opticsID = 1;
     opticType = 1;
     useModelOptics = 0;
     opticsZoomMin = 0.12;
     opticsZoomMax = 0.12;
     opticsZoomInit = 0.125;
     discreteDistance[] = {100,200,300,400,500,600,700,800,900};
     discreteDistanceInitIndex = 0;
     discreteDistanceCameraPoint[] = {"eye_1","eye_2","eye_3","eye_4","eye_5","eye_6","eye_7","eye_8","eye_9"};
     opticsFlare = 1;
     opticsDisablePeripherialVision = 0;
     cameraDir = "look2";
     visionMode[] = {};
     opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur5"};
    };
   };
  };
  inertia = 0.1;
 };
 class Launcher;
 class Launcher_Base_F: Launcher
 {
  class WeaponSlotsInfo;
 };
 class tf47_m3maaws: Launcher_Base_F
 {
  author = "[TaskForce 47] BlackPixxel";
  _generalMacro = "tf47_m3maaws";
  scope = 2;
  displayName = "M3 MAAWS";
  model = "tf47_launchers\m3maaws\m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_m3maaws_X_CA.paa";
  handAnim[] = {"OFP2_ManSkeleton","tf47_launchers\m3maaws\anim\handanim_m3maaws.rtm"};
  reloadAction = "ReloadRPG";
  modelOptics = "-";
  maxZeroing = 900;
  weaponInfoType = "RscWeaponZeroing";
  distanceZoomMin = 100;
  distanceZoomMax = 900;
  discreteDistance[] = {100,200,300,400,500,600,700,800,900};
  discreteDistanceCameraPoint[] = {"eye_1","eye_2","eye_3","eye_4","eye_5","eye_6","eye_7","eye_8","eye_9"};
  discreteDistanceInitIndex = 0;
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
    effectName = "m3maaws_backblast";
   };
  };
  magazines[] = {"tf47_m3maaws_HEAT","tf47_m3maaws_HEDP","tf47_m3maaws_HE","tf47_m3maaws_SMOKE","tf47_m3maaws_ILLUM"};
  sounds[] = {"StandardSound"};
  class BaseSoundModeType
  {
   weaponSoundEffect = "DefaultRifle";
  };
  class StandardSound: BaseSoundModeType
  {
   begin1[] = {"tf47_launchers\m3maaws\sound\MAAWS_s1.wss","db18",1,900};
   begin2[] = {"tf47_launchers\m3maaws\sound\MAAWS_s2.wss","db18",1,900};
   begin3[] = {"tf47_launchers\m3maaws\sound\MAAWS_s3.wss","db18",1,900};
   begin4[] = {"tf47_launchers\m3maaws\sound\MAAWS_s4.wss","db18",1,900};
   soundBegin[] = {"begin1",1,"begin2",1,"begin3",1,"begin4",1};
  };
  drySound[] = {"A3\sounds_f\weapons\other\dry6",0.4466836,1,20};
  reloadMagazineSound[] = {"tf47_launchers\m3maaws\sound\m3_reload.ogg",1.0,1,10};
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
  inertia = 0.4;
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
   allowedslots[] = {901};
   mass = 200;
   class CowsSlot
   {
    access = 1;
    compatibleitems[] = {"tf47_optic_m3maaws"};
    displayname = "Optics Slot";
    linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
    scope = 2;
   };
  };
  descriptionShort = "84mm Anti Tank Rifle";
  class Library
  {
   libTextDesc = "The Carl Gustav M3 is a very effective recoilles rifle produced by Saab";
  };
 };
};
class CfgMagazines
{
 class CA_LauncherMagazine;
 class tf47_m3maaws_HEAT: CA_LauncherMagazine
 {
  author = "[TaskForce 47] BlackPixxel";
  scope = 2;
  displayName = "FFV751 HEAT";
  model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
  initSpeed = 290;
  descriptionShort = "High Explosive Anti tank";
  displaynameshort = "751 HEAT";
  ammo = "tf47_m3maaws_HEAT";
  type = "2* 256";
  mass = 60;
 };
 class tf47_m3maaws_HEDP: CA_LauncherMagazine
 {
  author = "[TaskForce 47] BlackPixxel";
  scope = 2;
  displayName = "FFV502 HEDP";
  model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
  initSpeed = 230;
  descriptionShort = "High Explosive Dual Purpose";
  displaynameshort = "502 HEDP";
  ammo = "tf47_m3maaws_HEDP";
  type = "2* 256";
  mass = 45;
 };
 class tf47_m3maaws_HE: CA_LauncherMagazine
 {
  author = "[TaskForce 47] BlackPixxel";
  scope = 2;
  displayName = "FFV441 HE";
  model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
  initSpeed = 255;
  descriptionShort = "High Explosive";
  displaynameshort = "441 HE";
  ammo = "tf47_m3maaws_HE";
  type = "2* 256";
  mass = 40;
 };
 class tf47_m3maaws_SMOKE: CA_LauncherMagazine
 {
  author = "[TaskForce 47] BlackPixxel";
  scope = 2;
  displayName = "FFV469 SMOKE";
  model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
  initSpeed = 255;
  descriptionShort = "Smoke";
  displaynameshort = "469 SMOKE";
  ammo = "tf47_m3maaws_SMOKE";
  type = "2* 256";
  mass = 40;
 };
 class tf47_m3maaws_ILLUM: CA_LauncherMagazine
 {
  author = "[TaskForce 47] BlackPixxel";
  scope = 2;
  displayName = "FFV545 ILLUMINATION";
  model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
  initSpeed = 255;
  descriptionShort = "Ilumination Flare";
  displaynameshort = "545 ILLUMINATION";
  ammo = "tf47_m3maaws_ILLUM";
  type = "2* 256";
  mass = 40;
 };
 class tf47_m3maaws_AreaDefense: CA_LauncherMagazine
 {
  author = "[TaskForce 47] BlackPixxel";
  scope = 0;
  displayName = "ADM401 AREA DEFENSE";
  model = "tf47_launchers\m3maaws\mag_m3maaws.p3d";
  picture = "\tf47_launchers\m3maaws\UI\gear_small_CA.paa";
  initSpeed = 410;
  descriptionShort = "Area Defense Flechete Ammunition";
  displaynameshort = "401 AREA DEFENSE";
  ammo = "tf47_m3maaws_AreaDefense";
  type = "2* 256";
  mass = 40;
 };
};
class CfgAmmo
{
 class RocketCore;
 class ShellBase;
 class Grenade;
 class RocketBase: RocketCore{};
 class tf47_m3maaws_HEAT: RocketBase
 {
  explosive = 0.65;
  EffectFly = "ArtilleryTrails";
  soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_05","db30",1,1800};
  soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6","db25",1,400};
  model = "tf47_launchers\m3maaws\ammo_m3maaws.p3d";
  hit = 900;
  indirectHit = 45;
  indirectHitRange = 4.1;
  cost = 800;
  airFriction = 0.01;
  sideAirFriction = 0.0;
  maxSpeed = 290;
  initTime = 0;
  thrustTime = 0.1;
  thrust = 0.1;
  fuseDistance = 15;
  CraterEffects = "ATMissileCrater";
  explosionEffects = "ATMissileExplosion";
  effectsMissileInit = "";
  effectsMissile = "m3maaws_exhaust";
  simulationStep = 0.02;
  airLock = 0;
  irLock = 0;
  timeToLive = 25;
  maneuvrability = 0;
  allowAgainstInfantry = 0;
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
   power = 0.1;
   duration = 0.2;
   frequency = 8;
   distance = 1;
  };
 };
 class tf47_m3maaws_HEDP: RocketBase
 {
  explosive = 0.65;
  EffectFly = "ArtilleryTrails";
  soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04","db30",1,1800};
  soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6","db25",1,400};
  model = "tf47_launchers\m3maaws\ammo_m3maaws.p3d";
  hit = 350;
  indirectHit = 61;
  indirectHitRange = 5.1;
  cost = 500;
  airFriction = 0.01;
  sideAirFriction = 0.0;
  maxSpeed = 230;
  initTime = 0;
  thrustTime = 0.1;
  thrust = 0.1;
  fuseDistance = 15;
  CraterEffects = "ATMissileCrater";
  explosionEffects = "ATMissileExplosion";
  effectsMissileInit = "";
  effectsMissile = "m3maaws_exhaust";
  simulationStep = 0.02;
  airLock = 0;
  irLock = 0;
  timeToLive = 25;
  maneuvrability = 0;
  allowAgainstInfantry = 1;
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
   power = 0.1;
   duration = 0.2;
   frequency = 8;
   distance = 1;
  };
 };
 class tf47_m3maaws_HE: RocketBase
 {
  EffectFly = "ArtilleryTrails";
  soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01","db31",1,1800};
  soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6","db25",1,400};
  model = "tf47_launchers\m3maaws\ammo_m3maaws.p3d";
  hit = 75;
  indirectHit = 65;
  indirectHitRange = 11;
  cost = 300;
  airFriction = 0.01;
  sideAirFriction = 0.0;
  maxSpeed = 255;
  initTime = 0;
  thrustTime = 0.1;
  thrust = 0.1;
  fuseDistance = 15;
  CraterEffects = "ArtyShellCrater";
  explosionEffects = "MortarExplosion";
  effectsMissileInit = "";
  effectsMissile = "m3maaws_exhaust";
  simulationStep = 0.02;
  airLock = 0;
  irLock = 0;
  timeToLive = 25;
  maneuvrability = 0;
  allowAgainstInfantry = 1;
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
   power = 0.1;
   duration = 0.2;
   frequency = 8;
   distance = 1;
  };
 };
 class tf47_m3maaws_HEAirburst: Grenade
 {
  hit = 75;
  indirectHit = 60;
  indirectHitRange = 12;
  typicalSpeed = 100;
  explosive = 1;
  cost = 300;
  model = "\A3\Weapons_f\empty";
  airFriction = 0;
  timeToLive = 1;
  explosionTime = 0.001;
  soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01","db31",1,1800};
  soundFly[] = {"",1,1};
  soundEngine[] = {"",1,4};
  explosionEffects = "GrenadeExplosion";
 };
 class tf47_m3maaws_SMOKE: RocketBase
 {
  EffectFly = "ArtilleryTrails";
  soundHit[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",3.1622777,1,1800};
  soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6","db25",1,400};
  model = "tf47_launchers\m3maaws\ammo_m3maaws.p3d";
  hit = 30;
  indirectHit = 0;
  indirectHitRange = 2;
  cost = 300;
  airFriction = 0.01;
  sideAirFriction = 0.0;
  maxSpeed = 255;
  initTime = 0;
  thrustTime = 0.1;
  thrust = 0.1;
  fuseDistance = 0;
  CraterEffects = "ExploAmmoCrater";
  explosionEffects = "m3maaws_fakeparticle";
  effectsMissileInit = "";
  effectsMissile = "m3maaws_exhaust";
  simulationStep = 0.02;
  airLock = 0;
  irLock = 0;
  timeToLive = 25;
  maneuvrability = 0;
  allowAgainstInfantry = 0;
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
   power = 0.1;
   duration = 0.2;
   frequency = 8;
   distance = 1;
  };
 };
 class tf47_m3maaws_ILLUM: RocketBase
 {
  EffectFly = "ArtilleryTrails";
  soundHit[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",3.1622777,1,1800};
  soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6","db25",1,400};
  model = "tf47_launchers\m3maaws\ammo_m3maaws.p3d";
  hit = 30;
  indirectHit = 0;
  indirectHitRange = 2;
  cost = 300;
  airFriction = 0.01;
  sideAirFriction = 0.0;
  maxSpeed = 255;
  initTime = 0;
  thrustTime = 0.1;
  thrust = 0.1;
  fuseDistance = 0;
  CraterEffects = "ExploAmmoCrater";
  explosionEffects = "ExploAmmoExplosion";
  effectsMissileInit = "";
  effectsMissile = "m3maaws_exhaust";
  simulationStep = 0.02;
  airLock = 0;
  irLock = 0;
  timeToLive = 25;
  maneuvrability = 0;
  allowAgainstInfantry = 0;
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
   power = 0.1;
   duration = 0.2;
   frequency = 8;
   distance = 1;
  };
 };
 class SmokeShell;
 class tf47_m3maaws_FakeShell: SmokeShell
 {
  model = "\A3\Weapons_F\Ammo\UGL_Flare";
  explosionTime = 0;
  effectSmoke = "m3maaws_smoke";
 };
 class FlareBase;
 class tf47_m3maaws_flare: FlareBase
 {
  model = "\A3\Weapons_F\Ammo\UGL_Flare";
  lightColor[] = {0.5,0.5,0.5,0.5};
  useFlare = 1;
  deflecting = 30;
  smokeColor[] = {1,1,1,0.5};
  effectFlare = "CounterMeasureFlare";
  brightness = 15;
  size = 1;
  triggerTime = 0;
  triggerSpeedCoef = 1;
  timeToLive = 35;
  intensity = 5077777;
 };
 class tf47_m3maaws_AreaDefense: RocketBase
 {
  EffectFly = "ArtilleryTrails";
  soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01","db31",1,1800};
  soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6","db25",1,400};
  model = "tf47_launchers\m3maaws\ammo_m3maaws.p3d";
  hit = 1;
  indirectHit = 100;
  indirectHitRange = 100;
  cost = 300;
  airFriction = 0.01;
  sideAirFriction = 0.0;
  maxSpeed = 255;
  initTime = 0;
  thrustTime = 0.1;
  thrust = 0.1;
  fuseDistance = 15;
  CraterEffects = "ExploAmmoCrater";
  explosionEffects = "DirectionalMineExplosion";
  explosionAngle = 20;
  effectsMissileInit = "";
  effectsMissile = "m3maaws_exhaust";
  simulationStep = 0.02;
  airLock = 0;
  irLock = 0;
  timeToLive = 0;
  maneuvrability = 0;
  allowAgainstInfantry = 1;
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
   power = 0.1;
   duration = 0.2;
   frequency = 8;
   distance = 1;
  };
 };
 class BulletBase;
 class BulletCore;
 class tf47_m3maaws_AreaDefense2: BulletBase
 {
  simulation = "shotSpread";
  firespreadangle = 2;
  hit = 7;
  indirectHit = 0;
  indirectHitRange = 0;
  cartridge = "FxCartridge_65_caseless";
  cost = 2;
  typicalSpeed = 410;
  visibleFire = 4;
  audibleFire = 8;
  airFriction = -0.00715;
  caliber = 1;
  class CamShakeFire
  {
   power = 0.06;
   duration = 0.3;
   frequency = 15;
   distance = 5;
  };
  class CamShakePlayerFire
  {
   power = 2;
   duration = 0.1;
   frequency = 5;
  };
 };
};
class CfgCloudlets
{
 class Default;
 class Effect3: Default
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
  lifeTime = 3;
  moveVelocity[] = {"directionX * 1","directionY * 1","directionZ * 1"};
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
 class Effect5: Default
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
  lifeTime = 3;
  moveVelocity[] = {"directionX * 5","directionY * 5","directionZ * 5"};
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
 class Dust3: Default
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
  moveVelocity[] = {"0.2*directionX","0.2*directionY",0};
  rotationVelocity = 0;
  weight = 0.0533;
  volume = 0.04;
  rubbing = 0.3;
  size[] = {1,1};
  color[] = {{ 0.805,0.785,0.65,0.16 },{ 0.805,0.785,0.65,0.06 },{ 0.805,0.785,0.65,0.01 }};
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
 class BackFire: Default
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
  moveVelocity[] = {"directionX * 10","directionY * 10","directionZ * 10"};
  rotationVelocity = 1;
  weight = 1.275;
  volume = 1;
  rubbing = 0;
  size[] = {0.3,0.8};
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
  position[] = {"positionX + directionLocalX * 0.5","positionY + directionLocalY * 0.5","positionZ + directionLocalZ * 0.5"};
  positionVar[] = {0.08,0.08,0.08};
  MoveVelocityVar[] = {0.3,0.3,0.3};
  rotationVelocityVar = 20;
  sizeVar = 1.5;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class RocketBacksmokeRPGNT;
 class FrontSmoke: RocketBacksmokeRPGNT
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
 class CircleDust: Default
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
  lifeTime = 3;
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
 class m3maawsExhaustSmoke: Default
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
 class m3maawsExhaustSmokeRefract: Default
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
 class m3maawsExhaustSmokeRefract2: Default
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
 class m3maawsExhaustSmokeRefractMed: Default
 {
  interval = "0.001";
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
  particleFSNtieth = 16;
  particleFSIndex = 7;
  particleFSFrameCount = 48;
  particleFSLoop = 1;
  angleVar = 1;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 0.7;
  moveVelocity[] = {"0","0","0"};
  rotationVelocity = 1;
  weight = 1.2;
  volume = 1;
  rubbing = 0.1;
  size[] = {0.3,1.4};
  sizeCoef = 1;
  color[] = {{ 0.06,0.06,0.06,0.26 },{ 0.7,0.7,0.7,0.16 },{ 0.8,0.8,0.8,0.02 }};
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
  lifeTimeVar = 0.1;
  position[] = {"positionX","positionY","positionZ"};
  positionVar[] = {0.15,0,0.15};
  MoveVelocityVar[] = {0.15,0.15,0.15};
  rotationVelocityVar = 20;
  sizeVar = 0.05;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class m3maawsfakeparticle: Default
 {
  interval = "2";
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
  lifeTime = 0.01;
  moveVelocity[] = {0,0,0};
  rotationVelocity = 1;
  weight = 1;
  volume = 0.8;
  rubbing = 0.5;
  size[] = {1.5,3};
  color[] = {{ 0.3,0.3,0.3,0.0 },{ 1,1,1,0 }};
  animationSpeed[] = {1};
  randomDirectionPeriod = 0.1;
  randomDirectionIntensity = 0.1;
  onTimerScript = "";
  beforeDestroyScript = "\tf47_launchers\m3maaws\scripts\m3maaws_smoke.sqf";
  blockAIVisibility = 0;
  lifeTimeVar = 0.5;
  position[] = {"0","0","0.5"};
  positionVar[] = {0,0,0};
  MoveVelocityVar[] = {0,0,0};
  rotationVelocityVar = 20;
  sizeVar = 0.2;
  colorVar[] = {0,0,0,0};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
 class m3maawssmokeshell: Default
 {
  animationSpeedCoef = 2;
  colorCoef[] = {"colorR","colorG","colorB","colorA"};
  sizeCoef = 1;
  position[] = {0,0,0};
  interval = 0.02;
  circleRadius = 0;
  circleVelocity[] = {0,0,0};
  particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
  particleFSNtieth = 16;
  particleFSIndex = 7;
  particleFSFrameCount = 48;
  particleFSLoop = 1;
  angleVar = 0.1;
  animationName = "";
  particleType = "Billboard";
  timerPeriod = 1;
  lifeTime = 45;
  moveVelocity[] = {0.6,0.3,0.3};
  rotationVelocity = 1;
  weight = 1.2777;
  volume = 2;
  rubbing = 0.05;
  size[] = {0.1,2,9};
  color[] = {{ 0.6,0.6,0.6,0.2 },{ 0.6,0.6,0.6,0.05 },{ 0.6,0.6,0.6,0 }};
  animationSpeed[] = {1.5,0.5};
  randomDirectionPeriod = 1;
  randomDirectionIntensity = 0.25;
  onTimerScript = "";
  beforeDestroyScript = "";
  destroyOnWaterSurface = 1;
  destroyOnWaterSurfaceOffset = -0.6;
  lifeTimeVar = 2;
  positionVar[] = {0,0,0};
  MoveVelocityVar[] = {1.75,1.75,1.75};
  rotationVelocityVar = 20;
  sizeVar = 0.5;
  colorVar[] = {0,0,0,0.35};
  randomDirectionPeriodVar = 0;
  randomDirectionIntensityVar = 0;
 };
};
class m3maaws_fakeparticle
{
 class FiredLightSmall
 {
  simulation = "light";
  type = "FiredLightMed";
  position[] = {0,0,0};
  intensity = 0;
  interval = 1;
  lifeTime = 1;
 };
 class ExploAmmoFlash
 {
  simulation = "particles";
  type = "ExploAmmoFlash";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
  lifeTime = 1;
 };
 class ExploAmmoSmoke
 {
  simulation = "particles";
  type = "ExploAmmoSmoke";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
  lifeTime = 1;
 };
 class m3maawsfakeparticle
 {
  simulation = "particles";
  type = "m3maawsfakeparticle";
  interval = 1;
  intensity = 1;
  qualityLevel = -1;
 };
};
class m3maaws_smoke
{
 class SmokeShellWhite
 {
  simulation = "particles";
  type = "m3maawssmokeshell";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
 };
 class SmokeShellWhite2
 {
  simulation = "particles";
  type = "SmokeShellWhite2";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
 };
 class SmokeShellWhiteUW
 {
  simulation = "particles";
  type = "SmokeShellWhiteUW";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
 };
 class SmokeShellWhite2UW
 {
  simulation = "particles";
  type = "SmokeShellWhite2UW";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
 };
};
class m3maaws_exhaust
{
 class Light1
 {
  simulation = "light";
  type = "RocketLight";
  position[] = {0,0,0};
  intensity = 0.01;
  interval = 1;
  lifeTime = 1;
 };
 class m3maawsExhaustsEffectRefract01
 {
  simulation = "particles";
  type = "m3maawsExhaustSmokeRefract";
 };
 class m3maawsExhaustSmokeRefract
 {
  simulation = "particles";
  type = "m3maawsExhaustSmokeRefractMed";
  interval = 5;
  lifeTime = 2;
 };
};
class m3maaws_backblast
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
  type = "BackFire";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
  lifeTime = 0.05;
 };
 class CannonFiredFront
 {
  simulation = "particles";
  type = "FrontSmoke";
  position[] = {0,0,0.28};
  intensity = 1;
  interval = 1;
  lifeTime = 0.25;
 };
 class CannonFired2
 {
  simulation = "particles";
  type = "Effect5";
  position[] = {0,0,0};
  intensity = 1;
  interval = 1;
  lifeTime = 0.06;
 };
 class CannonFired3
 {
  simulation = "particles";
  type = "Effect3";
  position[] = {0,0,0};
  intensity = 2;
  interval = 1;
  lifeTime = 0.4;
  qualityLevel = 2;
 };
 class CannonFiredDust1
 {
  simulation = "particles";
  type = "CircleDust";
  position[] = {0,4,0};
  intensity = 2;
  interval = 1;
  lifeTime = 0.5;
 };
 class CannonFiredDust3
 {
  simulation = "particles";
  type = "Dust3";
  position[] = {0,0,0};
  intensity = 0.1;
  interval = 1;
  lifeTime = 0.25;
 };
 class m3maawsExhaustsEffectRefract02
 {
  simulation = "particles";
  type = "m3maawsExhaustSmokeRefract2";
  position[] = {0,0,-0.5};
  interval = 1;
  lifeTime = 0.8;
 };
};
class Extended_Fired_Eventhandlers
{
 class CAManBase
 {
  class tf47_m3maaws_Fired
  {
   onRespawn = 1;
   fired = "private ['_unit','_projectile','_vup1','_vup2','_vel1','_vel2','_velmag','_x1','_y1','_z1','_x2','_y2','_z2','_a','_b','_c','_pzero','_dir1','_nx','_ny','_nr','_nr2','_zero','_vorz']; _unit = _this select 0; if ((local _unit)&&(isPlayer _unit)) then { if((_this select 1 =='tf47_at4_heat') || (_this select 1 =='tf47_at4_hedp') || (_this select 1 =='tf47_at4_hp')) then{ _unit addSecondaryWeaponItem 'tf47_fakeitem_at4'; _this execVM '\tf47_launchers\m3maaws\scripts\tf47_disposableFired.sqf';}; if((_this select 1 =='tf47_m3maaws')) then{_weapon = _this select 1;_muzzle = currentMuzzle _unit;_projectile = _this select 5;_vup2 = vectorup _projectile;_dir1 = getdir _projectile;_vel1 = velocity _projectile;_vup1 = vectornormalized _vel1;_velmag = vectorMagnitude _vel1;_nr=0;_nr2=0;_nx=1;_ny=1;if ((_vel1 select 1)<0) then{_nr=90;_nx=-1;_nr2=90;if ((_vel1 select 0)<0) then{_ny=-1;_nx=-1;_nr2=-90;};};_x1 = _vup1 select 0;_y1 = _vup1 select 1;_z1 = _vup1 select 2;_a=asin((_vel1 select 2)/_velmag);_b=_nr+acos((_vel1 select 0)/sqrt((_vel1 select 0)^2+(_vel1 select 1)^2)); _c=asin(19.62*(currentzeroing player)/(_velmag^2))/4-asin(19.62*(currentzeroing player)/(290^2))/4;_x2 = cos(_b-_nr2)*cos(_a+_c)*_velmag*_ny; _y2 = sin(_b-_nr2)*cos(_a+_c)*_velmag*_ny*_nx;_z2=sin(_a+_c)*_velmag;_vel2 = [_x2,_y2,_z2];_projectile setVelocity _vel2; if (_this select 4 == 'tf47_m3maaws_HE') then { [_unit, _projectile] execVM '\tf47_launchers\m3maaws\scripts\m3maaws_airburst.sqf';};if (_this select 4 == 'tf47_m3maaws_ILLUM') then { [_unit, _projectile] execVM '\tf47_launchers\m3maaws\scripts\m3maaws_illum.sqf';};_projectile setdir (getdir _projectile); _vorz=-1; if (_vel2 select 2 > 0) then {_vorz=1;};[_projectile, _vorz*acos(_vup2 vectorCos [0,0,2])+_c,0] call BIS_fnc_setPitchBank; _projectile setPos getPos _projectile;};};";
  };
 };
};
class Extended_Init_Eventhandlers
{
 class CAManBase
 {
  class tf47_m3maaws_Init
  {
   onRespawn = 1;
   Init = "_unit = _this select 0; if (hasInterface) then { _this execVM '\tf47_launchers\m3maaws\scripts\m3maaws_init.sqf';};";
  };
 };
};
class Extended_Take_Eventhandlers
{
 class CAManBase
 {
  class tf47_m3maaws_Take
  {
   onRespawn = 1;
   Take = "_unit = _this select 0; if (hasInterface) then { _this execVM '\tf47_launchers\m3maaws\scripts\m3maaws_addaction.sqf';};";
  };
 };
};
class Extended_Put_Eventhandlers
{
 class CAManBase
 {
  class tf47_m3maaws_Put
  {
   onRespawn = 1;
   Put = "_unit = _this select 0; if (hasInterface) then { _this execVM '\tf47_launchers\m3maaws\scripts\m3maaws_addaction.sqf';};";
  };
 };
};
class Extended_InventoryOpened_Eventhandlers
{
 class CAManBase
 {
  class tf47_m3maaws_InventoryOpened
  {
   onRespawn = 1;
   InventoryOpened = "_unit = _this select 0; if (hasInterface) then { _this execVM '\tf47_launchers\m3maaws\scripts\tf47_inventoryOpened.sqf';};";
  };
 };
};
