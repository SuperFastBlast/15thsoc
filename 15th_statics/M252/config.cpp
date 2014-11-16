class CfgPatches
{
	class 15thMEU_M252
	{
		units[] = {"meu_M252"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Static_F"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class meu_M252: StaticMortar
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the weapon						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "$STR_A3_Armyinf";
		_generalMacro = "meu_M252";
		scope = 2;
		displayname = "M252 15thMEU";
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_meu_M252_Library0";
		};
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		picture = "\M252\data\ico\mortar_m251_CA.paa";
		icon = "\M252\data\map_ico\icomap_mortar_m251_CA.paa";
		cost = 200000;
		accuracy = 0.25;
		threat[] = {1,0.3,0.1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "Mortar_Gunner";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"mortar_82mm"};
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -35;
				maxCamElev = 35;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				cameraDir = "look";
				discreteDistance[] = {100,200,300,400,500,700,1000,1600,2000,2400,2800};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeArtillery";
				gunnerForceOptics = 1;
				body = "MainTurret";
                gun = "MainGun";
                memoryPointGunnerOptics = "gunnerview";
                animationSourceBody = "MainTurret";
                animationSourceGun = "MainGun";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal","NVG"};
				};
				minelev = -30;
				maxelev = 13;
				magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"};
			};
		};
		class Eventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class DestructionEffects
		{
			class Smoke
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};
		model = "\M252\81Mortar";
		artilleryScanner = 1;
		laserScanner = 1;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_M252_Gun_Bag","B_M252_Bipod_Bag"};
			displayName = "";
		};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};
		class B_M252_Gun_Bag: Bag_Base
	{
		displayName = "M252 Cannon";
		_generalMacro = "meu_M252";
		mass = 661.7;
				model = "\M252\bags\StaticX.p3d";
		picture = "\M252\bags\staticX_CA.paa";
		icon = "\M252\bags\mapIcon_backpack_CA.paa";
		faction = "BLU_F";
	};
		class B_M252_Bipod_Bag: Bag_Base
	{
		mass = 661.7;
		displayName = "M252 Base Plate";
		_generalMacro = "meu_M252";
		model = "\M252\bags\StaticY.p3d";
		picture = "\M252\bags\staticY_CA.paa";
		icon = "\M252\bags\mapIcon_backpack_CA.paa";
		faction = "BLU_F";
		class assembleInfo
		{
			displayName = "$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
			assembleTo = "meu_M252";
			base[] = {"M252_Gun_Bag"};
		};
	};
};
};