
class cfgpatches
{
	class 15thRealDemo
	{
		units[] = {"15threaldemo_ammobox"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_Explosives","AGM_Explosives"};
	};
};
class CfgVehicles
{
	class AGM_Explosives_Place;
	class c4Demo: AGM_Explosives_Place
	{
		displayName = "C4 Demo";
		model = "\A3\Weapons_F\explosives\c4_charge_small_d";
	};
	class M183Demo: AGM_Explosives_Place
	{
		displayName = "M183 Demo";
		model = "\15threaldemo\satchel.p3d";
	};
	class NATO_Box_Base;
	class 15threaldemo_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "Ammobox [15thRealDemo]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		author = "";
		class TransportMagazines
		{
			class _xx_M183
			{
				magazine = "M183";
				count = 50;
			};
			class _xx_C4
			{
				magazine = "C4";
				count = 50;
			};
		};
	};
};
class CfgAmmo
{
	class PipeBombBase;
	class satcharge: PipeBombBase
	{
		hit = 8000;
		indirectHit = 8000;
		indirectHitRange = 32;
		defaultMagazine = "M183";
		soundHit[] = {"A3\sounds_f\weapons\Mines\mine_debris_7",3.981072,1,1500};
		mineInconspicuousness = 40;
		AGM_Explosive = "satcharge_Scripted";
		soundActivation[] = {"",0,0,0};
		soundDeactivation[] = {"",0,0,0};
	};
	class satcharge_Scripted: satcharge
	{
		triggerWhenDestroyed = 1;
	};
	class c4charge: PipeBombBase
	{
		hit = 800;
		indirectHit = 800;
		indirectHitRange = 8;
		defaultMagazine = "C4";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2",3.162278,1,1500};
		mineInconspicuousness = 50;
		AGM_Explosive = "c4charge_Scripted";
		soundActivation[] = {"",0,0,0};
		soundDeactivation[] = {"",0,0,0};
	};
	class c4charge_Scripted: c4charge
	{
		triggerWhenDestroyed = 1;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class M183: CA_Magazine
	{		
		AGM_Placeable = 1;
		useAction = 0;
		AGM_SetupObject = "m183demo";
		AGM_DelayTime = 1;
		class AGM_Triggers
		{
			AGM_Triggers[] = {"Timer","Command"};
			class Timer
			{
				FuseTime = 0.5;
			};
			class Command
			{
				FuseTime = 0.5;
				MaxDistance = 200;
			};
		};
		scope = 2;
		displayName = "M183";
		ammo = "satcharge";
		mass = 200;
	};
	class C4: M183
	{
		AGM_SetupObject = "c4demo";
		model = "\A3\Weapons_F\Explosives\IED_land_small_d";
		scope = 2;
		displayName = "C4";
		mass = 12.4;
		ammo = "c4charge";
	};
};

