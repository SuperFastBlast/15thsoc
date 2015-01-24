class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AV8B_Pilot = "AV8B_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	#define AnimPath \MEUAV8B\Data\Anim
	class States
	{
		class KIA_AV8B_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_AV8B_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class Crew;
		class AV8B_Pilot: Crew
		{
			file=AnimPath\AV8B_Pilot.rtm;
			interpolateTo[]={KIA_AV8B_Pilot,1};
		};
	};
	#undef AnimPath
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		AV8B_Pilot = "";
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class MEUAV8B
	{
		units[] = {"MEUAV8B2","MEUAV8BWreck"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
		magazines[] = {};
	};
};
class CfgAmmo
{
	class MissileBase;
	class B_25mm;
	class MEU_B_25mm: B_25mm
	{
		hit=75;
		indirectHit=10;
		indirectHitRange=2;
		cost=25;
		airLock=1;
		explosive=0.30000001;
		caliber=2.3299999;
		deflecting=0;
		deflectingChance = 0;
		deflectingRandomness = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 4;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
	};

	class MEU_Sidewinder_AA: MissileBase
	{
		model = "MEUAV8B\sidewinder_fly";
		proxyShape = "MEUAV8B\sidewinder_proxy";
		hit = 300;
		indirectHit = 85;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airLock = 1;
		irLock = 1;
		cost = 15000;
		maxSpeed = 828;
		timeToLive = 35;
		sideAirFriction = 0.2;
		trackOversteer = 1.0;
		trackLead = 1;
		initTime = 0.0;
		thrustTime = 5.0;
		thrust = 2900;
		fuseDistance = 500;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 20;
	};
};
class CfgMagazines
{
	class 300Rnd_25mm_shells;
	class MEU_300Rnd_25mm_shells_T: 300Rnd_25mm_shells
	{
		ammo = "MEU_B_25mm";
		tracersevery = 1;
		nvgOnly = 0;
	};
	class 2Rnd_GBU12_LGB;
	class 24Rnd_Missiles;
	class MEU_14Rnd_Rockets: 24Rnd_Missiles
	{
		count = 14;
	};
	class 6Rnd_Missile_AGM_02_F;
	class MEU_2Rnd_Missile_AGM_02_F: 6Rnd_Missile_AGM_02_F
	{
		count = 2;
	};
	class VehicleMagazine;
	class 2Rnd_Sidewinder_AV8B: VehicleMagazine
	{
		scope = 2;
		displayName = "SIDEWINDER";
		ammo = "M_Sidewinder_AA";
		count = 2;
		initSpeed = 0;
		maxLeadSpeed = 500;
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
};
class CfgWeapons
{
	class CannonCore;
	class gatling_25mm: CannonCore
	{
		class manual;
	};
	class MEU_gatling_25mm: gatling_25mm
	{
		magazines[] = {"MEU_300Rnd_25mm_shells_T"};
		class manual: manual
		{
			displayname = "GAU-12 Cannon 25mm";
		};
	};
	class Missile_AGM_02_Plane_CAS_01_F;
	class MEU_Maverick_F: Missile_AGM_02_Plane_CAS_01_F
	{
		magazines[] = {"MEU_2Rnd_Missile_AGM_02_F"};
		displayname = "AGM-65 Maverick";
	};
	class GBU12BombLauncher;
	class MEU_GBU12BombLauncher: GBU12BombLauncher
	{
		magazines[] = {"2Rnd_GBU12_LGB","2Rnd_GBU12_LGB_MI10"};
	};
	class rocketpods;
	class master_arms_safe: RocketPods
	{
		CanLock = 0;
		displayName = "MASTER ARM - SAFE";
		displayNameMagazine = "MASTER ARM - SAFE";
		shortNameMagazine = "MASTER ARM - SAFE";
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {};
		burst = 0;
		reloadTime = 0.01;
		magazineReloadTime = 0.1;
	};
	class missiles_DAR: rocketpods
	{
		class burst;
	};
	class MEU_FFAR_Smallpod: missiles_DAR
	{
		displayname = "LAU-68D/A Rocket Launcher";
		magazines[] = {"MEU_14Rnd_Rockets"};
		class burst: burst
		{
			displayname = "LAU-68D/A Rocket Launcher";
		};
	};
	class Missile_AA_04_Plane_CAS_01_F;
	class MissileLauncher;
	class SidewinderLaucher_AV8B: MissileLauncher
	{
		displayName = "AIM-9 SIDEWINDER";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_Sidewinder_AV8B"};
		cursor = "missile";
		cursorSize = 1;
		sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect  = "DefaultRifle";
			begin1[]={"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {Begin1,0.33};


			};
	};
	class missiles_Zephyr;
	class MEU_AMRAAM: missiles_Zephyr
	{
		displayname = "AMRAAM";
	};
};
class CfgVehicles
{
	class Plane;
	class PlaneWreck;
	class MEUAV8B2: Plane
	{
		scope = 2;
		crew = "B_Pilot_F";
		destrType = "DestructWreck";
		model = "\MEUav8b\av8b2";
		picture = "\MEUav8b\data\ui\av8b_CA.paa";
		Icon = "\MEUav8b\data\ui\icomap_AV8B_CA.paa";
		mapSize = 14;
		side = 1;
		faction = "BLU_F";
		displayName = "AV-8B Harrier II (CAS)";
		vehicleClass = "Air";
		author = "Chairborne";
		accuracy = 0.3;
		typicalCargo[] = {"B_Pilot_F"};
		simulation = "airplane";
		driverAction = "Cha_AV8B_Pilot";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 16;
		driverRightHandAnimName = "stick_pilot";
		dammageHalf[] = {"\MEUAV8B\data\ah1z_monitor_glass_ca.paa","\MEUAV8B\data\ah1z_monitor_glass_destr_co.paa"};
		dammageFull[] = {"\MEUAV8B\data\ah1z_monitor_glass_ca.paa","\MEUAV8B\data\ah1z_monitor_glass_destr_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"MEUav8b\data\av8b_glass.rvmat","MEUav8b\data\av8b_glass_damage.rvmat","MEUav8b\data\av8b_glass_damage.rvmat","MEUav8b\data\av8b_glass_in.rvmat","MEUav8b\data\av8b_glass_in_damage.rvmat","MEUav8b\data\av8b_glass_in_damage.rvmat","MEUav8b\data\av8b_int.rvmat","MEUav8b\data\av8b_int.rvmat","MEUav8b\data\av8b_int_destruct.rvmat","MEUav8b\data\av8b_ext.rvmat","MEUav8b\data\av8b_ext_damage.rvmat","MEUav8b\data\av8b_ext_destruct.rvmat"};
		};
		dustEffect = "HeliDust";
		waterEffect = "HeliWater";
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
		class Reflectors
		{
			class Left
			{
				position = "light_1_pos";
				direction = "light_1_dir";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.0085,0.0095,0.01};
				intensity = 100000;
				size = 1;
				innerAngle = 45;
				outerAngle = 90;
				coneFadeCoef = 5;
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 500;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 5;
					quadratic = 2;
					hardLimitStart = 400;
					hardLimitEnd = 500;
				};
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust_1_pos";
				direction = "nozzle_1_1";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_2
			{
				position = "Exhaust_2_pos";
				direction = "nozzle_1_2";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_3
			{
				position = "Exhaust_3_pos";
				direction = "nozzle_2_1";
				effect = "ExhaustsEffectJet";
			};
			class Exhaust_4
			{
				position = "Exhaust_4_pos";
				direction = "nozzle_2_2";
				effect = "ExhaustsEffectJet";
			};
		};
		class MFD
		{
			class HUD
			{
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0.07;
				borderRight = 0.07;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.485,0.4};
					pos10[] = {1.225,1.1};
				};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.485,0.4};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.4};
						pos10[] = {1.24,1.1};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.4};
						pos3[] = {0.722,0.4};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.61};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.4};
						pos10[] = {1.24,1.1};
						type = "horizon";
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					alpha = 0.4;
					color[] = {0,0.3,0.05};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						points[] = {{ "PlaneW",{ -0.08,0 },1 },{ "PlaneW",{ -0.03,0 },1 },{ "PlaneW",{ -0.015,0.0283784 },1 },{ "PlaneW",{ 0,0 },1 },{ "PlaneW",{ 0.015,0.0283784 },1 },{ "PlaneW",{ 0.03,0 },1 },{ "PlaneW",{ 0.08,0 },1 }};
					};
					class PlaneHeading
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						points[] = {{ "Velocity",{ 0,-0.0189189 },1 },{ "Velocity",{ 0.014,-0.0132432 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.0132432 },1 },{ "Velocity",{ 0,0.0189189 },1 },{ "Velocity",{ -0.014,0.0132432 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.0132432 },1 },{ "Velocity",{ 0,-0.0189189 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.0378378 },1 },{ "Velocity",{ 0,-0.0189189 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0,0.1};
						clipBR[] = {1,0};
						type = "line";
						points[] = {{ { 0.21,0.52 },1 },{ { 0.19,0.5 },1 },{ { 0.21,0.48 },1 },{  },{ { 0.18,0.2 },1 },{ { 0.18,0.85 },1 },{  },{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.82,0.2 },1 },{ { 0.82,0.85 },1 },{  },{ { 0.52,"0.08+0.01" },1 },{ { 0.5,"0.06+0.01" },1 },{ { 0.48,"0.08+0.01" },1 },{  },{ { 0.2,"0.055+0.01" },1 },{ { 0.8,"0.055+0.01" },1 },{  }};
					};
					class Horizont
					{
						clipTL[] = {0,0};
						clipBR[] = {1,1};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{ "Level0",{ -0.2,0 },1 },{ "Level0",{ -0.05,0 },1 },{  },{ "Level0",{ 0.05,0 },1 },{ "Level0",{ 0.2,0 },1 }};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0",{ -0.23,-0.025 },1};
								right[] = {"Level0",{ -0.13,-0.025 },1};
								down[] = {"Level0",{ -0.23,0.025 },1};
							};
							class VALM_2_0: VALM_1_0
							{
								align = "right";
								pos[] = {"Level0",{ 0.22,-0.025 },1};
								right[] = {"Level0",{ 0.32,-0.025 },1};
								down[] = {"Level0",{ 0.22,0.025 },1};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{ "LevelM5",{ -0.2,-0.03 },1 },{ "LevelM5",{ -0.2,0 },1 },{ "LevelM5",{ -0.15,0 },1 },{  },{ "LevelM5",{ -0.1,0 },1 },{ "LevelM5",{ -0.05,0 },1 },{  },{ "LevelM5",{ 0.05,0 },1 },{ "LevelM5",{ 0.1,0 },1 },{  },{ "LevelM5",{ 0.15,0 },1 },{ "LevelM5",{ 0.2,0 },1 },{ "LevelM5",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{ -0.23,-0.085 },1};
								right[] = {"LevelM5",{ -0.13,-0.085 },1};
								down[] = {"LevelM5",{ -0.23,-0.035 },1};
							};
							class VALM_2_5: VALM_1_5
							{
								align = "right";
								pos[] = {"LevelM5",{ 0.22,-0.085 },1};
								right[] = {"LevelM5",{ 0.32,-0.085 },1};
								down[] = {"LevelM5",{ 0.22,-0.035 },1};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{ "LevelP5",{ -0.2,0.03 },1 },{ "LevelP5",{ -0.2,0 },1 },{ "LevelP5",{ -0.05,0 },1 },{  },{ "LevelP5",{ 0.05,0 },1 },{ "LevelP5",{ 0.2,0 },1 },{ "LevelP5",{ 0.2,0.03 },1 }};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{ -0.23,0.035 },1};
								right[] = {"LevelP5",{ -0.13,0.035 },1};
								down[] = {"LevelP5",{ -0.23,0.085 },1};
							};
							class VALP_2_5: VALP_1_5
							{
								align = "right";
								pos[] = {"LevelP5",{ 0.22,0.035 },1};
								right[] = {"LevelP5",{ 0.32,0.035 },1};
								down[] = {"LevelP5",{ 0.22,0.085 },1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{ "LevelM10",{ -0.2,-0.03 },1 },{ "LevelM10",{ -0.2,0 },1 },{ "LevelM10",{ -0.15,0 },1 },{  },{ "LevelM10",{ -0.1,0 },1 },{ "LevelM10",{ -0.05,0 },1 },{  },{ "LevelM10",{ 0.05,0 },1 },{ "LevelM10",{ 0.1,0 },1 },{  },{ "LevelM10",{ 0.15,0 },1 },{ "LevelM10",{ 0.2,0 },1 },{ "LevelM10",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{ -0.23,-0.085 },1};
								right[] = {"LevelM10",{ -0.13,-0.085 },1};
								down[] = {"LevelM10",{ -0.23,-0.035 },1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{ 0.22,-0.085 },1};
								right[] = {"LevelM10",{ 0.32,-0.085 },1};
								down[] = {"LevelM10",{ 0.22,-0.035 },1};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{ "LevelP10",{ -0.2,0.03 },1 },{ "LevelP10",{ -0.2,0 },1 },{ "LevelP10",{ -0.05,0 },1 },{  },{ "LevelP10",{ 0.05,0 },1 },{ "LevelP10",{ 0.2,0 },1 },{ "LevelP10",{ 0.2,0.03 },1 }};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{ -0.23,0.035 },1};
								right[] = {"LevelP10",{ -0.13,0.035 },1};
								down[] = {"LevelP10",{ -0.23,0.085 },1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{ 0.22,0.035 },1};
								right[] = {"LevelP10",{ 0.32,0.035 },1};
								down[] = {"LevelP10",{ 0.22,0.085 },1};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{ "LevelM15",{ -0.2,-0.03 },1 },{ "LevelM15",{ -0.2,0 },1 },{ "LevelM15",{ -0.15,0 },1 },{  },{ "LevelM15",{ -0.1,0 },1 },{ "LevelM15",{ -0.05,0 },1 },{  },{ "LevelM15",{ 0.05,0 },1 },{ "LevelM15",{ 0.1,0 },1 },{  },{ "LevelM15",{ 0.15,0 },1 },{ "LevelM15",{ 0.2,0 },1 },{ "LevelM15",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{ -0.23,-0.085 },1};
								right[] = {"LevelM15",{ -0.13,-0.085 },1};
								down[] = {"LevelM15",{ -0.23,-0.035 },1};
							};
							class VALM_2_15: VALM_1_15
							{
								align = "right";
								pos[] = {"LevelM15",{ 0.22,-0.085 },1};
								right[] = {"LevelM15",{ 0.32,-0.085 },1};
								down[] = {"LevelM15",{ 0.22,-0.035 },1};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{ "LevelP15",{ -0.2,0.03 },1 },{ "LevelP15",{ -0.2,0 },1 },{ "LevelP15",{ -0.05,0 },1 },{  },{ "LevelP15",{ 0.05,0 },1 },{ "LevelP15",{ 0.2,0 },1 },{ "LevelP15",{ 0.2,0.03 },1 }};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{ -0.23,0.035 },1};
								right[] = {"LevelP15",{ -0.13,0.035 },1};
								down[] = {"LevelP15",{ -0.23,0.085 },1};
							};
							class VALP_2_15: VALP_1_15
							{
								align = "right";
								pos[] = {"LevelP15",{ 0.22,0.035 },1};
								right[] = {"LevelP15",{ 0.32,0.035 },1};
								down[] = {"LevelP15",{ 0.22,0.085 },1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{ "LevelM20",{ -0.2,-0.03 },1 },{ "LevelM20",{ -0.2,0 },1 },{ "LevelM20",{ -0.15,0 },1 },{  },{ "LevelM20",{ -0.1,0 },1 },{ "LevelM20",{ -0.05,0 },1 },{  },{ "LevelM20",{ 0.05,0 },1 },{ "LevelM20",{ 0.1,0 },1 },{  },{ "LevelM20",{ 0.15,0 },1 },{ "LevelM20",{ 0.2,0 },1 },{ "LevelM20",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{ -0.23,-0.085 },1};
								right[] = {"LevelM20",{ -0.13,-0.085 },1};
								down[] = {"LevelM20",{ -0.23,-0.035 },1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{ 0.22,-0.085 },1};
								right[] = {"LevelM20",{ 0.32,-0.085 },1};
								down[] = {"LevelM20",{ 0.22,-0.035 },1};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{ "LevelP20",{ -0.2,0.03 },1 },{ "LevelP20",{ -0.2,0 },1 },{ "LevelP20",{ -0.05,0 },1 },{  },{ "LevelP20",{ 0.05,0 },1 },{ "LevelP20",{ 0.2,0 },1 },{ "LevelP20",{ 0.2,0.03 },1 }};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{ -0.23,0.035 },1};
								right[] = {"LevelP20",{ -0.13,0.035 },1};
								down[] = {"LevelP20",{ -0.23,0.085 },1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{ 0.22,0.035 },1};
								right[] = {"LevelP20",{ 0.32,0.035 },1};
								down[] = {"LevelP20",{ 0.22,0.085 },1};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{ "LevelM25",{ -0.2,-0.03 },1 },{ "LevelM25",{ -0.2,0 },1 },{ "LevelM25",{ -0.15,0 },1 },{  },{ "LevelM25",{ -0.1,0 },1 },{ "LevelM25",{ -0.05,0 },1 },{  },{ "LevelM25",{ 0.05,0 },1 },{ "LevelM25",{ 0.1,0 },1 },{  },{ "LevelM25",{ 0.15,0 },1 },{ "LevelM25",{ 0.2,0 },1 },{ "LevelM25",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{ -0.23,-0.085 },1};
								right[] = {"LevelM25",{ -0.13,-0.085 },1};
								down[] = {"LevelM25",{ -0.23,-0.035 },1};
							};
							class VALM_2_25: VALM_1_25
							{
								align = "right";
								pos[] = {"LevelM25",{ 0.22,-0.085 },1};
								right[] = {"LevelM25",{ 0.32,-0.085 },1};
								down[] = {"LevelM25",{ 0.22,-0.035 },1};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{ "LevelP25",{ -0.2,0.03 },1 },{ "LevelP25",{ -0.2,0 },1 },{ "LevelP25",{ -0.05,0 },1 },{  },{ "LevelP25",{ 0.05,0 },1 },{ "LevelP25",{ 0.2,0 },1 },{ "LevelP25",{ 0.2,0.03 },1 }};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{ -0.23,0.035 },1};
								right[] = {"LevelP25",{ -0.13,0.035 },1};
								down[] = {"LevelP25",{ -0.23,0.085 },1};
							};
							class VALP_2_25: VALP_1_25
							{
								align = "right";
								pos[] = {"LevelP25",{ 0.22,0.035 },1};
								right[] = {"LevelP25",{ 0.32,0.035 },1};
								down[] = {"LevelP25",{ 0.22,0.085 },1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{ "LevelM30",{ -0.2,-0.03 },1 },{ "LevelM30",{ -0.2,0 },1 },{ "LevelM30",{ -0.15,0 },1 },{  },{ "LevelM30",{ -0.1,0 },1 },{ "LevelM30",{ -0.05,0 },1 },{  },{ "LevelM30",{ 0.05,0 },1 },{ "LevelM30",{ 0.1,0 },1 },{  },{ "LevelM30",{ 0.15,0 },1 },{ "LevelM30",{ 0.2,0 },1 },{ "LevelM30",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{ -0.23,-0.085 },1};
								right[] = {"LevelM30",{ -0.13,-0.085 },1};
								down[] = {"LevelM30",{ -0.23,-0.035 },1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{ 0.22,-0.085 },1};
								right[] = {"LevelM30",{ 0.32,-0.085 },1};
								down[] = {"LevelM30",{ 0.22,-0.035 },1};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{ "LevelP30",{ -0.2,0.03 },1 },{ "LevelP30",{ -0.2,0 },1 },{ "LevelP30",{ -0.05,0 },1 },{  },{ "LevelP30",{ 0.05,0 },1 },{ "LevelP30",{ 0.2,0 },1 },{ "LevelP30",{ 0.2,0.03 },1 }};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{ -0.23,0.035 },1};
								right[] = {"LevelP30",{ -0.13,0.035 },1};
								down[] = {"LevelP30",{ -0.23,0.085 },1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{ 0.22,0.035 },1};
								right[] = {"LevelP30",{ 0.32,0.035 },1};
								down[] = {"LevelP30",{ 0.22,0.085 },1};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{ "LevelM35",{ -0.2,-0.03 },1 },{ "LevelM35",{ -0.2,0 },1 },{ "LevelM35",{ -0.15,0 },1 },{  },{ "LevelM35",{ -0.1,0 },1 },{ "LevelM35",{ -0.05,0 },1 },{  },{ "LevelM35",{ 0.05,0 },1 },{ "LevelM35",{ 0.1,0 },1 },{  },{ "LevelM35",{ 0.15,0 },1 },{ "LevelM35",{ 0.2,0 },1 },{ "LevelM35",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{ -0.23,-0.085 },1};
								right[] = {"LevelM35",{ -0.13,-0.085 },1};
								down[] = {"LevelM35",{ -0.23,-0.035 },1};
							};
							class VALM_2_35: VALM_1_35
							{
								align = "right";
								pos[] = {"LevelM35",{ 0.22,-0.085 },1};
								right[] = {"LevelM35",{ 0.32,-0.085 },1};
								down[] = {"LevelM35",{ 0.22,-0.035 },1};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{ "LevelP35",{ -0.2,0.03 },1 },{ "LevelP35",{ -0.2,0 },1 },{ "LevelP35",{ -0.05,0 },1 },{  },{ "LevelP35",{ 0.05,0 },1 },{ "LevelP35",{ 0.2,0 },1 },{ "LevelP35",{ 0.2,0.03 },1 }};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{ -0.23,0.035 },1};
								right[] = {"LevelP35",{ -0.13,0.035 },1};
								down[] = {"LevelP35",{ -0.23,0.085 },1};
							};
							class VALP_2_35: VALP_1_35
							{
								align = "right";
								pos[] = {"LevelP35",{ 0.22,0.035 },1};
								right[] = {"LevelP35",{ 0.32,0.035 },1};
								down[] = {"LevelP35",{ 0.22,0.085 },1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{ "LevelM40",{ -0.2,-0.03 },1 },{ "LevelM40",{ -0.2,0 },1 },{ "LevelM40",{ -0.15,0 },1 },{  },{ "LevelM40",{ -0.1,0 },1 },{ "LevelM40",{ -0.05,0 },1 },{  },{ "LevelM40",{ 0.05,0 },1 },{ "LevelM40",{ 0.1,0 },1 },{  },{ "LevelM40",{ 0.15,0 },1 },{ "LevelM40",{ 0.2,0 },1 },{ "LevelM40",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{ -0.23,-0.085 },1};
								right[] = {"LevelM40",{ -0.13,-0.085 },1};
								down[] = {"LevelM40",{ -0.23,-0.035 },1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{ 0.22,-0.085 },1};
								right[] = {"LevelM40",{ 0.32,-0.085 },1};
								down[] = {"LevelM40",{ 0.22,-0.035 },1};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{ "LevelP40",{ -0.2,0.03 },1 },{ "LevelP40",{ -0.2,0 },1 },{ "LevelP40",{ -0.05,0 },1 },{  },{ "LevelP40",{ 0.05,0 },1 },{ "LevelP40",{ 0.2,0 },1 },{ "LevelP40",{ 0.2,0.03 },1 }};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{ -0.23,0.035 },1};
								right[] = {"LevelP40",{ -0.13,0.035 },1};
								down[] = {"LevelP40",{ -0.23,0.085 },1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{ 0.22,0.035 },1};
								right[] = {"LevelP40",{ 0.32,0.035 },1};
								down[] = {"LevelP40",{ 0.22,0.085 },1};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{ "LevelM45",{ -0.2,-0.03 },1 },{ "LevelM45",{ -0.2,0 },1 },{ "LevelM45",{ -0.15,0 },1 },{  },{ "LevelM45",{ -0.1,0 },1 },{ "LevelM45",{ -0.05,0 },1 },{  },{ "LevelM45",{ 0.05,0 },1 },{ "LevelM45",{ 0.1,0 },1 },{  },{ "LevelM45",{ 0.15,0 },1 },{ "LevelM45",{ 0.2,0 },1 },{ "LevelM45",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{ -0.23,-0.085 },1};
								right[] = {"LevelM45",{ -0.13,-0.085 },1};
								down[] = {"LevelM45",{ -0.23,-0.035 },1};
							};
							class VALM_2_45: VALM_1_45
							{
								align = "right";
								pos[] = {"LevelM45",{ 0.22,-0.085 },1};
								right[] = {"LevelM45",{ 0.32,-0.085 },1};
								down[] = {"LevelM45",{ 0.22,-0.035 },1};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{ "LevelP45",{ -0.2,0.03 },1 },{ "LevelP45",{ -0.2,0 },1 },{ "LevelP45",{ -0.05,0 },1 },{  },{ "LevelP45",{ 0.05,0 },1 },{ "LevelP45",{ 0.2,0 },1 },{ "LevelP45",{ 0.2,0.03 },1 }};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{ -0.23,0.035 },1};
								right[] = {"LevelP45",{ -0.13,0.035 },1};
								down[] = {"LevelP45",{ -0.23,0.085 },1};
							};
							class VALP_2_45: VALP_1_45
							{
								align = "right";
								pos[] = {"LevelP45",{ 0.22,0.035 },1};
								right[] = {"LevelP45",{ 0.32,0.035 },1};
								down[] = {"LevelP45",{ 0.22,0.085 },1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{ "LevelM50",{ -0.2,-0.03 },1 },{ "LevelM50",{ -0.2,0 },1 },{ "LevelM50",{ -0.15,0 },1 },{  },{ "LevelM50",{ -0.1,0 },1 },{ "LevelM50",{ -0.05,0 },1 },{  },{ "LevelM50",{ 0.05,0 },1 },{ "LevelM50",{ 0.1,0 },1 },{  },{ "LevelM50",{ 0.15,0 },1 },{ "LevelM50",{ 0.2,0 },1 },{ "LevelM50",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{ -0.23,-0.085 },1};
								right[] = {"LevelM50",{ -0.13,-0.085 },1};
								down[] = {"LevelM50",{ -0.23,-0.035 },1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{ 0.22,-0.085 },1};
								right[] = {"LevelM50",{ 0.32,-0.085 },1};
								down[] = {"LevelM50",{ 0.22,-0.035 },1};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{ "LevelP50",{ -0.2,0.03 },1 },{ "LevelP50",{ -0.2,0 },1 },{ "LevelP50",{ -0.05,0 },1 },{  },{ "LevelP50",{ 0.05,0 },1 },{ "LevelP50",{ 0.2,0 },1 },{ "LevelP50",{ 0.2,0.03 },1 }};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{ -0.23,0.035 },1};
								right[] = {"LevelP50",{ -0.13,0.035 },1};
								down[] = {"LevelP50",{ -0.23,0.085 },1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{ 0.22,0.035 },1};
								right[] = {"LevelP50",{ 0.32,0.035 },1};
								down[] = {"LevelP50",{ 0.22,0.085 },1};
							};
						};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.00945946 },1 },{ "WeaponAim",{ 0,-0.00945946 },1 },{  },{ "WeaponAim",{ 0,-0.0662162 },1 },{ "WeaponAim",{ 0.049,-0.0463514 },1 },{ "WeaponAim",{ 0.07,0 },1 },{ "WeaponAim",{ 0.049,0.0463514 },1 },{ "WeaponAim",{ 0,0.0662162 },1 },{ "WeaponAim",{ -0.049,0.0463514 },1 },{ "WeaponAim",{ -0.07,0 },1 },{ "WeaponAim",{ -0.049,-0.0463514 },1 },{ "WeaponAim",{ 0,-0.0662162 },1 },{  },{ "WeaponAim",{ 0,-0.132432 },1 },{ "WeaponAim",{ 0.07,-0.115216 },1 },{ "WeaponAim",{ 0.1218,-0.0662162 },1 },{ "WeaponAim",{ 0.14,0 },1 },{ "WeaponAim",{ 0.1218,0.0662162 },1 },{ "WeaponAim",{ 0.07,0.115216 },1 },{ "WeaponAim",{ 0,0.132432 },1 },{ "WeaponAim",{ -0.07,0.115216 },1 },{ "WeaponAim",{ -0.1218,0.0662162 },1 },{ "WeaponAim",{ -0.14,0 },1 },{ "WeaponAim",{ -0.1218,-0.0662162 },1 },{ "WeaponAim",{ -0.07,-0.115216 },1 },{ "WeaponAim",{ 0,-0.132432 },1 },{  },{ "WeaponAim",{ 0,-0.132432 },1 },{ "WeaponAim",{ 0,-0.151351 },1 },{  },{ "WeaponAim",{ -0.07,-0.11469 },1 },{ "WeaponAim",{ -0.08,-0.131074 },1 },{  },{ "WeaponAim",{ -0.121244,-0.0662162 },1 },{ "WeaponAim",{ -0.138564,-0.0756757 },1 },{  },{ "WeaponAim",{ -0.14,5.78881e-009 },1 },{ "WeaponAim",{ -0.16,6.61578e-009 },1 },{  },{ "WeaponAim",{ -0.121244,0.0662162 },1 },{ "WeaponAim",{ -0.138564,0.0756757 },1 },{  },{ "WeaponAim",{ -0.07,0.11469 },1 },{ "WeaponAim",{ -0.08,0.131074 },1 },{  },{ "WeaponAim",{ 1.22392e-008,0.132432 },1 },{ "WeaponAim",{ 1.39876e-008,0.151351 },1 },{  },{ "WeaponAim",{ 0.07,0.11469 },1 },{ "WeaponAim",{ 0.08,0.131074 },1 },{  },{ "WeaponAim",{ 0.121244,0.0662162 },1 },{ "WeaponAim",{ 0.138564,0.0756757 },1 },{  },{ "WeaponAim",{ 0.14,-1.57924e-009 },1 },{ "WeaponAim",{ 0.16,-1.80485e-009 },1 },{  },{ "WeaponAim",{ 0.121244,-0.0662162 },1 },{ "WeaponAim",{ 0.138564,-0.0756757 },1 },{  },{ "WeaponAim",{ 0.07,-0.11469 },1 },{ "WeaponAim",{ 0.08,-0.131074 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.0945946 },1 },{ "WeaponAim",{ 0.05,-0.0822973 },1 },{ "WeaponAim",{ 0.087,-0.0472973 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.0472973 },1 },{ "WeaponAim",{ 0.05,0.0822973 },1 },{ "WeaponAim",{ 0,0.0945946 },1 },{ "WeaponAim",{ -0.05,0.0822973 },1 },{ "WeaponAim",{ -0.087,0.0472973 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.0472973 },1 },{ "WeaponAim",{ -0.05,-0.0822973 },1 },{ "WeaponAim",{ 0,-0.0945946 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0,0 },1 },{ "Velocity",{ 0,0 },1 },{  },{ "Target",{ 0,-0.0662162 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0662162 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0662162 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.236486 },1 },{ "WeaponAim",{ 0.125,-0.205743 },1 },{ "WeaponAim",{ 0.2175,-0.118243 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.118243 },1 },{ "WeaponAim",{ 0.125,0.205743 },1 },{ "WeaponAim",{ 0,0.236486 },1 },{ "WeaponAim",{ -0.125,0.205743 },1 },{ "WeaponAim",{ -0.2175,0.118243 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.118243 },1 },{ "WeaponAim",{ -0.125,-0.205743 },1 },{ "WeaponAim",{ 0,-0.236486 },1 },{  },{ "Target",{ 0,-0.0662162 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0662162 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0662162 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.17027 },1 },{ "WeaponAim",{ 0.09,-0.148135 },1 },{ "WeaponAim",{ 0.1566,-0.0851351 },1 },{ "WeaponAim",{ 0.18,0 },1 },{ "WeaponAim",{ 0.1566,0.0851351 },1 },{ "WeaponAim",{ 0.09,0.148135 },1 },{ "WeaponAim",{ 0,0.17027 },1 },{ "WeaponAim",{ -0.09,0.148135 },1 },{ "WeaponAim",{ -0.1566,0.0851351 },1 },{ "WeaponAim",{ -0.18,0 },1 },{ "WeaponAim",{ -0.1566,-0.0851351 },1 },{ "WeaponAim",{ -0.09,-0.148135 },1 },{ "WeaponAim",{ 0,-0.17027 },1 },{  },{ "Target",{ 0,-0.0662162 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0662162 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0662162 },1 }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.00945946 },1 },{ "WeaponAim",{ 0,-0.00945946 },1 },{  },{ "WeaponAim",{ 0,-0.113514 },1 },{ "WeaponAim",{ 0.06,-0.0987568 },1 },{ "WeaponAim",{ 0.1044,-0.0567568 },1 },{ "WeaponAim",{ 0.12,0 },1 },{ "WeaponAim",{ 0.1044,0.0567568 },1 },{ "WeaponAim",{ 0.06,0.0987568 },1 },{ "WeaponAim",{ 0,0.113514 },1 },{ "WeaponAim",{ -0.06,0.0987568 },1 },{ "WeaponAim",{ -0.1044,0.0567568 },1 },{ "WeaponAim",{ -0.12,0 },1 },{ "WeaponAim",{ -0.1044,-0.0567568 },1 },{ "WeaponAim",{ -0.06,-0.0987568 },1 },{ "WeaponAim",{ 0,-0.113514 },1 },{  }};
						};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86,0.82};
						right[] = {0.94,0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class SpeedScale
					{
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06,"0.82-0.85+0.2"};
						right[] = {0.14,"0.82-0.85+0.2"};
						down[] = {0.06,"0.87-0.85+0.2"};
						lineXleft = "0.18 + 0.82 - 0.825";
						lineYright = "0.18 + 0.82 - 0.835";
						lineXleftMajor = "0.18 + 0.82 - 0.825";
						lineYrightMajor = "0.18 + 0.82 - 0.845";
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class Gear
					{
						condition = "ils";
						class text
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{ 0.84,0.88 },1};
							right[] = {{ 0.9,0.88 },1};
							down[] = {{ 0.84,0.92 },1};
						};
					};
					class Flaps
					{
						condition = "flaps";
						class text
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{ 0.84,0.93 },1};
							right[] = {{ 0.9,0.93 },1};
							down[] = {{ 0.84,0.97 },1};
						};
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ 0.16,0.88 },1};
						down[] = {{ 0.1,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.93 },1};
						right[] = {{ 0.16,0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class VspeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {{ 0.86,"0.52-0.4" },1};
						right[] = {{ 0.94,"0.52-0.4" },1};
						down[] = {{ 0.86,"0.57-0.4" },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {"0.21-0.01",0};
						right[] = {"0.29-0.01",0};
						down[] = {"0.21-0.01",0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = "18/9";
						StepSize = "(0.80- 0.2)/20";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0,0};
							clipBR[] = {1,1};
							class ILS
							{
								type = "line";
								points[] = {{ "ILS_W",{ -0.24,0 },1 },{ "ILS_W",{ 0.24,0 },1 },{  },{ "ILS_W",{ 0,0.0227027 },1 },{ "ILS_W",{ 0,-0.0227027 },1 },{  },{ "ILS_W",{ 0.12,0.0227027 },1 },{ "ILS_W",{ 0.12,-0.0227027 },1 },{  },{ "ILS_W",{ 0.24,0.0227027 },1 },{ "ILS_W",{ 0.24,-0.0227027 },1 },{  },{ "ILS_W",{ -0.12,0.0227027 },1 },{ "ILS_W",{ -0.12,-0.0227027 },1 },{  },{ "ILS_W",{ -0.24,0.0227027 },1 },{ "ILS_W",{ -0.24,-0.0227027 },1 },{  },{ "ILS_H",{ 0,-0.227027 },1 },{ "ILS_H",{ 0,0.227027 },1 },{  },{ "ILS_H",{ 0.024,0 },1 },{ "ILS_H",{ -0.024,0 },1 },{  },{ "ILS_H",{ 0.024,0.113514 },1 },{ "ILS_H",{ -0.024,0.113514 },1 },{  },{ "ILS_H",{ 0.024,0.227027 },1 },{ "ILS_H",{ -0.024,0.227027 },1 },{  },{ "ILS_H",{ 0.024,-0.113514 },1 },{ "ILS_H",{ -0.024,-0.113514 },1 },{  },{ "ILS_H",{ 0.024,-0.227027 },1 },{ "ILS_H",{ -0.024,-0.227027 },1 }};
							};
						};
					};
				};
			};
		};
		class RenderTargets
		{
			class NVCam
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.4;
				};
			};
		};
		maxSpeed = 1040;
		landingSpeed = 200;
		acceleration = 300;
		vtol = 1;
		aileronSensitivity = 0.8;
		elevatorSensitivity = 0.6;
		driveOnComponent[] = {"Wheel_1","Wheel_2","Wheel_3_1","Wheel_3_2"};
		envelope[] = {0.0,0.2,1.2,3.0,5.1,7.0,7.3,7,6.3,5.2,3.8,1.8,0.5,0};
		laserScanner = 1;
		irScanRangeMin = 500;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 2;
		armor = 60;
		damageResistance = 0.01246;
		cost = 20000000;
		weapons[] = {"master_arms_safe","MEU_gatling_25mm","MEU_GBU12BombLauncher","SidewinderLaucher_AV8B","MEU_Maverick_F","MEU_FFAR_Smallpod","CMFlareLauncher"};
		magazines[] = {"MEU_300Rnd_25mm_shells_T","2Rnd_GBU12_LGB;","2Rnd_Sidewinder_AV8B","MEU_2Rnd_Missile_AGM_02_F","MEU_14Rnd_Rockets","240Rnd_CMFlare_Chaff_Magazine"};
		insideSoundCoef = 0.2;
		fov = 0.5;
		gunAimDown = 0.07;
		type = 2;
		threat[] = {0.8,0.5,1};
		availableForSupportTypes[] = {"CAS_Bombing"};
		class AnimationSources
		{
			class VTOL
			{
				source = "user";
				animPeriod = 2.5;
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "Cha_gatling_25mm";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_AV8B2";
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Plane_Fighter_03\getin",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_start_int",1.0,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_start_ext",1.4125376,1.0,500};
		soundEngineOffInt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_stop_int",1.0,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_stop_ext",1.4125376,1.0,500};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.1,1.5};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up",0.7943282,1.0,150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down",0.7943282,1.0,150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.63095737,1.0,100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.63095737,1.0,100};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_ext",1.7782794,1.0,2100};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",1.9952624,1.2,2500};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",2.5118864,1.2,2800};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2.0,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise",0.56234133,1.0,150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_int",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_int",1.0,1.2};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_int",1.0,1.2};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise",0.5011872,1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};
	};
	class MEUAV8BWreck: PlaneWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\MEUav8b\AV8BWreck";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers{};
	};
};
