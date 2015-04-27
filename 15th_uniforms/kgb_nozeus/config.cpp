
class CfgPatches
{
	class kgb_nozeus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Data_F_Curator"};
		magazines[] = {};
		ammo[] = {};
	};
};
class cfgNonAiVehicles
{
	class Bird;
	class Eagle_F: Bird
	{
		model = "\A3\Weapons_F\empty.p3d";
		singSound[] = {};
		canBeShot = 0;
		minHeight = 60;
		avgHeight = 70;
		maxHeight = 80;
		minSPeed = 5;
		maxSpeed = 25;
		acceleration = 5;
		turning = 0.5;
	};
};
