class CfgPatches
{
	class CAF_M72A6
	{
		units[] = {};
		weapons[] = {"caf_M72A6"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class CfgVehicles
{
	class Thing;
	class CAF_M72a6_USED_TUBE: Thing
	{
		scope = 1;
		side = -1;
		model = "caf_m72a6\caf_M72a6_launcher_loaded.p3d";
		icon = "";
		displayName = "";
		nameSound = "";
		destrType = "DestructNo";
		simulation = "thingx";
		mapSize = 0;
		accuracy = 0;
		armor = 5;
		weight = 200;
		airFriction2[] = {0.3,0.3,0.3};
		airFriction1[] = {0.3,0.3,0.3};
		airFriction0[] = {0.3,0.3,0.3};
	};
	class WeaponHolder_Single_F;
	class caf_M72A6: WeaponHolder_Single_F
	{
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyLauncher_Single.p3d";
		mapSize = 0.8;
		displayName = "M72 LAW";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class caf_M72A6
			{
				weapon = "caf_M72A6";
				count = 1;
			};
		};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgAmmo
{
	class R_PG32V_F;
	class R_60MM_HE;
	class RocketBase;
	class 60MM_ROCKET: RocketBase
	{
		hit = 300;
		indirectHit = 50;
		indirectHitRange = 5;
		cost = 300;
		airfriction = -0.0005;
		sideAirFriction = 0.05;
		maxSpeed = 120;
		initTime = 0;
		thrust = 2;
		thrusttime = 0.01;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		model = "\CAF_M72A6\firedRound.p3d";
		dangerRadiusHit= -1;
		suppressionRadiusHit= 25;

	};
};
class CfgMagazines
{
	class Default
	{
		caf_disposable = 0;
	};
	class CA_Magazine;
	class CA_LauncherMagazine;
	class RPG32_F;
	class 1Rnd_M72a6: CA_LauncherMagazine
	{
		allowedSlots[] = {701,801,901};
		caf_disposable = 1;
		displayName = "M72A6";
		scope = 2;
		count = 1;
		ammo = "60MM_ROCKET";
		picture = "\caf_m72a6\data\inv\60mm_rocket.paa";
		modelSpecial = "\CAF_m72a6\CAF_M72a6_launcher_loaded";
		model = "\CAF_m72a6\firedRound.p3d";
		initSpeed = 145;
		descriptionShort = "1Rnd M72a6";
		mass = 0;
	};
	class caf_m72a6_USED: 1Rnd_M72a6
	{
		scope = 1;
		count = 0;
		type = 0;
		CAF_disposable = 0;
		displayName = "M72A6 Used";
	};
};
class CfgWeapons
{
	class Default
	{
		caf_disposable = 0;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_RPG32_F;
	class caf_m72a6: Launcher
	{
		scope = 2;
		CAF_disposable = 1;
		CAF_disposable_used = "caf_m72a6_USED";
		CAF_disposable_tube = "CAF_M72a6_USED_TUBE";
		autoReload = "false";
		displayName = "M72A6";
		model = "\CAF_M72A6\CAF_M72a6_collapsed";
		modelSpecial = "\CAF_M72A6\CAF_M72a6_launcher_loaded";
		handAnim[] = {"OFP2_ManSkeleton","\CAF_m72a6\data\anim\bog_std_launcher.rtm"};
		modelOptics = "-";
		magazines[] = {"1Rnd_M72a6"};
		magazineReloadTime = 3;
		inertia = 0.9;
  		dexterity = 1.1;
		reloadMagazineSound[] = {"CAF_M72A6\data\sound\m72a6_load.ogg",0.00031622776,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.17782794,1,15};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CAF_M72A6\data\sound\m72a6Fire.ogg",1.9952624,1,1000};
			soundBegin[] = {"begin1",1};
		};
        	soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.56234133,1.5,700};
		picture = "\caf_m72a6\data\inv\m72a6.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		recoil = "launcherBase";
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;
		AGM_Backblast_Angle = 60; // angle of the backblast area
        AGM_Backblast_Range = 10; // maximum range of the backblast
        AGM_Backblast_Damage = 2; // maximum damage of the backblast
		class Library
		{
			libTextDesc = "M72A6 Short Range Anti Tank Weapon";
		};
		descriptionShort = "M72A6";
		class WeaponSlotsInfo
		{
			mass = 65;
		};
		class ItemInfo
		{
			priority = 3;
			RMBhint = "M72A6";
			onHoverText = "TODO M72A6 DSS";
		};
	};
	class caf_m72a6_USED: caf_m72a6
	{
		scope = 1;
		caf_disposable = 0;
		magazines[] = {"caf_m72a6_USED"};
		displayName = "M72A6 (USED)";
		model = "\caf_m72a6\caf_M72a6_launcher";
	};
};
class Extended_Fired_EventHandlers
{
	class Man
	{
		caf_disposable = "if ((local (_this select 0)) && (getNumber (configFile >> 'CfgWeapons' >> _this select 1 >> 'caf_disposable') == 1)) then { _this spawn caf_disposable_fired };";
	};
};
class Extended_PostInit_EventHandlers
{
	class caf_disposable
	{
		init = "call compile preProcessFileLineNumbers 'caf_m72a6\data\scripts\XEH_PostInit_Once.sqf'";
	};
};