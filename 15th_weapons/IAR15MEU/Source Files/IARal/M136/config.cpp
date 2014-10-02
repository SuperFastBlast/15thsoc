class CfgPatches
{
	class ej_launch_m136
	{
		units[]={};
		weapons[]=
		{
			"ej_launch_m136"
		};
		requiredVersion=0.1;
		requiredAddons[]={
			"CBA_MAIN"
		};
	};
};
class CfgSettings 
{
	class CBA 
	{
		class Versioning 
		{
			class PREFIX 
			{
				class Dependencies 
				{
					CBA[] = {"cba_main", { 1,0,0 },"true"};
				};
			};
		};
	};
};
class CfgAmmo
{
	class R_PG32V_F;
	class M136Rocket: R_PG32V_F
	{
		hit=350;
		indirectHit=9;
		indirectHitRange=1;
		cost=4000;
		timeToLive=2;
		maneuvrability=0;
		simulationStep=0.0049999999;
		sideAirFriction=0.0050000001;
		maxSpeed=285;
		initTime=0.1;
		thrustTime=0.2;
		thrust=900;
		fuseDistance=30;
		CraterEffects="BombCrater";
		explosive=0.7;
		simulation="shotMissile";
		visibleFire=50;
		visibleFireTime=30;
		whistleDist=300;
		whistleOnFire=1;
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class M136Magazine: CA_LauncherMagazine
	{
		scope=2;
		displayName="M136 Rocket";
		ammo="M136Rocket";
		type="6 * WeaponSlotItem";
		modelSpecial="\IARal\m136\m136_launcher_loaded.p3d";
		picture="\IARal\data\UI\M136maginv.paa";
		initSpeed=285;
		descriptionShort="M136 Rocket";
		reloadAction="";
	};
};
class CfgWeapons
{
	class Launcher_Base_F;
	class ej_launch_m136: Launcher_Base_F
	{
		scope=2;
		displayName="AT-4 CS";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\IARal\data\Anim\AT4.rtm"
		};
		model="\IARal\m136\m136_launcher";
		modelOptics="-";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class CamShakePlayerFire
		{
			duration=1.5;
			frequency=50;
			power=55;
		};
		magazines[]= {"M136Magazine"};
		defaultMagazine="M136Magazine";
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"Iaral\sound\rocket1.wss",
				1.9952624,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		drySound[]=
		{
			"",
			9.9999997e-005,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\a3\sounds_f\weapons\Launcher\nlaw_final_2",
			0.00031622776,
			1,
			20
		};
		soundFly[]=
		{
			"\a3\sounds_f\weapons\Rockets\rocket_fly_2",
			10,
			1.8,
			300
		};
		picture="\IARal\data\UI\AT4CSinv.paa";
		recoil="launcherBase";
		aiRateOfFire=10;
		aiRateOfFireDistance=100;
		minRange=30;
		midRange=100;
		midRangeProbab=0.58;
		maxRange=500;
		weaponInfoType="RscWeaponEmpty";
		maxRangeProbab=0.04;
		backgroundReload=true;
		magazineReloadTime=0;
		showEmpty=true;
		class Library
		{
			libTextDesc="AT-4 CS";
		};
		descriptionShort="AT-4 CS";
	};
};
class Extended_PostInit_EventHandlers
{
	class ej_launch_m136
	{
		//clientInit = "'postinit' call BIS_fnc_log";
		clientInit="call compile preProcessFileLineNumbers '\iaral\init.sqf'";
		//serverInit = QUOTE(call COMPILE_FILE2(\cTab\server_init.sqf));
	};
};