class CfgPatches
{
	class CAF_M72A6
	{
		units[] = {};
		weapons[] = {"M72A6"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
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
		hit = 250;
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
		drySound[]=
		{
		"",
		0.0001,
		1,
		10
		};
		reloadMagazineSound[] =
		{
		"CAF_M72A6\data\sound\m72a6_load.ogg",
		0.00031622776,
		1,
		20
		};
		soundFly[] = 
		{
		"\a3\sounds_f\weapons\Rockets\rocket_fly_2",
		10,
		1.8,
		300
		};
		picture = "\caf_m72a6\data\inv\m72a6.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		recoil = "launcherBase";
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;
		class Library
		{
			libTextDesc = "M72A6 Short Range Anti Tank Weapon";
		};
		descriptionShort = "M72A6";
		class WeaponSlotsInfo
		{
			mass = 100;
			allowedSlots[] = {901};
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
	class ReammoBox_F;
	class Can_M72_Base: ReammoBox_F
	{
		scope = 0;
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"\caf_m72a6\data\tex\AmmoBox_m72a6_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	};
	class CAF_M72A6_AMMO: Can_M72_Base
	{
		scope = 2;
		displayName = "M72A6 CRATE";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon = "iconCrateLarge";
		transportMaxWeapons = 40;
		transportMaxMagazines = 200;
		class TransportMagazines
		{
			class _xx_1Rnd_M72a6
			{
				weapon = "1Rnd_M72a6";
				count = 40;
			};
		};
		class TransportItems{};
		accuracy = 1000;
	};
};