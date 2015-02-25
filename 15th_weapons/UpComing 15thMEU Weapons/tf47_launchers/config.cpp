////////////////////////////////////////////////////////////////////

class CfgPatches
{
 class my_addon_classname
 {
  units[] = {"tf47_launcherbox"};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {"A3_Weapons_F"};
  magazines[] = {};
  ammo[] = {};
 };
};
class CfgVehicles
{
 class ReammoBox;
 class ThingX;
 class ReammoBox_F;
 class NATO_Box_Base;
 class tf47_launcherbox: NATO_Box_Base
 {
  mapSize = 1.81;
  author = "[TaskForce 47] BlackPixxel";
  _generalMacro = "tf47_launcherbox";
  scope = 2;
  model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
  icon = "iconCrateWpns";
  transportMaxWeapons = 80;
  transportMaxMagazines = 120;
  displayName = "TF47 Launcher Box";
  class TransportItems
  {
   class a
   {
    name = "tf47_m3maaws";
    count = 5;
   };
   class b
   {
    name = "tf47_optic_m3maaws";
    count = 5;
   };
   class c
   {
    name = "tf47_m3maaws_heat";
    count = 20;
   };
   class d
   {
    name = "tf47_m3maaws_hedp";
    count = 20;
   };
   class e
   {
    name = "tf47_m3maaws_he";
    count = 20;
   };
   class f
   {
    name = "tf47_m3maaws_smoke";
    count = 20;
   };
   class g
   {
    name = "tf47_m3maaws_illum";
    count = 20;
   };
   class h
   {
    name = "tf47_at4_heat";
    count = 20;
   };
   class i
   {
    name = "tf47_at4_hedp";
    count = 20;
   };
   class j
   {
    name = "tf47_at4_hp";
    count = 20;
   };
  };
 };
};

