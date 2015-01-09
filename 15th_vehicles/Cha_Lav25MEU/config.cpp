
class CfgPatches
{
	class Cha_LAV25MEU
	{
		units[] = {"Cha_LAV25","Cha_LAV25_HQ","Cha_LAV25A2","Cha_Des1_LAV25","Cha_Des1_LAV25_HQ","Cha_Des1_LAV25A2","Cha_Win1_LAV25","Cha_Win1_LAV25A2","Cha_Win1_LAV25_HQ"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_SOFT_F"};
		magazines[] = {"Cha_200rnd_762x51_Belt_M240","Cha_2000rnd_762x51_Belt_M240","Cha_210Rnd_25mm_HEI_T"};
		ammo[] = {"Cha_25mm_HE_Tracer_Red","Cha_25mm_APFSDS_Tracer_Red"};
	};
};
class CfgAmmo
{
	class B_30mm_HE_Tracer_red;
	class Cha_25mm_HE_Tracer_Red: B_30mm_HE_Tracer_red{};
	class B_30mm_APFSDS_Tracer_Red;
	class Cha_25mm_APFSDS_Tracer_Red: B_30mm_APFSDS_Tracer_Red{};
};
class CfgMagazines
{
	class 200rnd_762x51_Belt_Red;
	class Cha_200rnd_762x51_Belt_M240: 200rnd_762x51_Belt_Red
	{
		scope = 2;
		displayName = "M240 200Rnd Belt";
	};
	class 2000rnd_762x51_Belt_Red;
	class Cha_2000rnd_762x51_Belt_M240: 2000rnd_762x51_Belt_Red
	{
		scope = 2;
		displayName = "M240 2000Rnd Belt";
	};
	class 250Rnd_30mm_HE_shells;
	class Cha_210Rnd_25mm_HEI_T: 250Rnd_30mm_HE_shells
	{
		scope = 2;
		ammo = "Cha_25mm_HE_Tracer_Red";
		initSpeed = 1100;
		count = 210;
		displayName = "HEI-T";
		displayNameShort = "HEI-T";
	};
	class 250Rnd_30mm_APDS_shells;
	class Cha_210Rnd_25mm_APFSDS_T: 250Rnd_30mm_APDS_shells
	{
		count = 210;
		initSpeed = 1100;
		ammo = "Cha_25mm_APFSDS_Tracer_Red";
		displayName = "APFSDS-T";
		displayNameShort = "APFSDS-T";
	};
};
class Mode_SemiAuto;
class Single;
class Mode_Burst: Mode_SemiAuto{};
class Mode_FullAuto: Mode_SemiAuto{};
class cfgWeapons
{
	class LMG_Coax;
	class Cha_M240_Coax: LMG_Coax
	{
		displayName = "M240 7.62 Coax";
		magazines[] = {"Cha_200rnd_762x51_Belt_M240","Cha_2000rnd_762x51_Belt_M240"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Konec hlavne2";
				directionName = "Usti hlavne2";
			};
		};
	};
	class Cha_M240_Pintle: Cha_M240_Coax
	{
		autoReload = 0;
		displayName = "M240 7.62 Pintle Mount";
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne";
			};
		};
	};
	class Cha_M240_Pintle_2: Cha_M240_Coax
	{
		autoReload = 0;
		displayName = "M240 7.62 Pintle Mount";
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne3";
				directionName = "Usti hlavne3";
			};
		};
		muzzlePos = "usti hlavne3";
		muzzleEnd = "konec hlavne3";
	};
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE;
		class AP;
	};
	class Cha_M242_25mm_autocannon: autocannon_30mm_CTWS
	{
		displayName = "M242 Bushmaster";
		magazines[] = {"Cha_210Rnd_25mm_HEI_T","Cha_210Rnd_25mm_APFSDS_T"};
		muzzles[] = {"AP","HE"};
		class HE: HE
		{
			displayName = "M242 Bushmaster";
			magazines[] = {"Cha_210Rnd_25mm_HEI_T"};
			displayNameShort = "HEI-T";
		};
		class AP: AP
		{
			displayName = "M242 Bushmaster";
			magazines[] = {"Cha_210Rnd_25mm_APFSDS_T"};
			displayNameShort = "APFSDS-T";
		};
	};
};
class RCWSOptics;
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
	};
	class Wheeled_APC_F: Car_F
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class AnimationSources;
		class EventHandlers;
	};
	class Cha_LAV25_Base: Wheeled_APC_F
	{
		scope = 0;
		model = "\Cha\Cha_LAV25\LAV25";
		attenuationEffectType = "TankAttenuation";
		class Library
		{
			libTextDesc = "$STR_LIB_LAV25";
		};
		vehicleClass = "Cha_wl1";
		picture = "\Cha\Cha_Lav25\Data\UI\Picture_LAV25_CA.paa";
		Icon = "\Cha\Cha_Lav25\Data\UI\Icon_LAV25_CA.paa";
		mapSize = 7;
		radarType = 8;
		canFloat = 1;
		waterangulardampingcoef = 5.0;
		waterresistance = 5;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.1;
		waterLinearDampingCoefX = 2.5;
		waterLinearDampingCoefY = 1.5;
		engineShiftY = 1.05;
		armorLights = 0.1;
		armorStructural = 12;
		fuelCapacity = 300;
		unitInfoType = "RscUnitInfoTank";
		hideProxyInCombat = 1;
		threat[] = {0.5,0.5,0.5};
		armor = 200;
		damageResistance = 0.02432;
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "zbytek";
				visual = "zbytek";
				minimalHit = 0.4;
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.5;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Cha\Cha_LAV25\Data\lavalfa.rvmat","Cha\Cha_LAV25\Data\lavalfa_damage.rvmat","Cha\Cha_LAV25\Data\lavalfa_destruct.rvmat","Cha\Cha_LAV25\Data\lavbody.rvmat","Cha\Cha_LAV25\Data\lavbody_damage.rvmat","Cha\Cha_LAV25\Data\lavbody_destruct.rvmat","Cha\Cha_LAV25\Data\lavbody2.rvmat","Cha\Cha_LAV25\Data\lavbody2_damage.rvmat","Cha\Cha_LAV25\Data\lavbody2_destruct.rvmat","Cha\Cha_LAV25\Data\lav_glass_green.rvmat","Cha\Cha_LAV25\Data\lav_glass_green_damage.rvmat","Cha\Cha_LAV25\Data\lav_glass_green_destruct.rvmat","Cha\Cha_LAV25\Data\lav_glass_red.rvmat","Cha\Cha_LAV25\Data\lav_glass_red_damage.rvmat","Cha\Cha_LAV25\Data\lav_glass_red_destruct.rvmat","Cha\Cha_LAV25\Data\lav_hq.rvmat","Cha\Cha_LAV25\Data\lav_hq_damage.rvmat","Cha\Cha_LAV25\Data\lav_hq_destruct.rvmat","Cha\Cha_LAV25\Data\lav_int_0.rvmat","Cha\Cha_LAV25\Data\lav_int_0_damage.rvmat","Cha\Cha_LAV25\Data\lav_int_0_destruct.rvmat","Cha\Cha_LAV25\Data\lav_int_1.rvmat","Cha\Cha_LAV25\Data\lav_int_1_damage.rvmat","Cha\Cha_LAV25\Data\lav_int_1_destruct.rvmat","Cha\Cha_LAV25\Data\lav_int_2.rvmat","Cha\Cha_LAV25\Data\lav_int_2_damage.rvmat","Cha\Cha_LAV25\Data\lav_int_2_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","clan","clan_sign"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\lavbody_co.paa","\Cha\Cha_LAV25\data\lavbody2_co.paa","",""};
		insideSoundCoef = 0.9;
		soundGear[] = {"","db-85",1};
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out","db0",1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out","db0",1,50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start","db0",1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start","db0",1.0,300};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop","db0",1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop","db0",1.0,300};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08","db-3",1,150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09","db-3",1,150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10","db-3",1,150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11","db-3",1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,150};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,150};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,150};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,150};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,150};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,150};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03","db0",1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03","db0",1.0,350};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",0.35481337,1,200};
				frequency = "0.95 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",0.39810717,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",0.4466836,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",0.5011872,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",0.56234133,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",0.63095737,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",0.70794576,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",0.56234133,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",0.63095737,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",0.63095737,1,230};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",0.70794576,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",0.70794576,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",1.0,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",1.1220185,1,400};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.63095737,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.5848932,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		waterLeakiness = 2.5;
		turnCoef = 4.0;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.4;
		enableGPS = 1;
		commanderCanSee = 31;
		gunnerCanSee = 31;
		drivercansee = 31;
		forceHideDriver = 0;
		gunnerHasFlares = 1;
		weapons[] = {"TruckHorn3"};
		magazines[] = {};
		driverForceOptics = 1;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointdriverOptics = "driverview";
		class ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = "+30";
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = "+100";
			initFov = 0.466;
			minFov = 0.466;
			maxFov = 0.466;
		};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = "+85";
			initAngleY = 20;
			minAngleY = -150;
			maxAngleY = "+150";
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Cha_M242_25mm_autocannon","Cha_M240_Coax"};
				magazines[] = {"Cha_210Rnd_25mm_HEI_T","Cha_210Rnd_25mm_APFSDS_T","Cha_2000rnd_762x51_Belt_M240"};
				soundServo[] = {"A3\sounds_f\dummysound","db-35",1.0,15};
				minElev = -8;
				maxElev = "+50";
				initElev = 0;
				minTurn = -360;
				maxTurn = "+360";
				initTurn = 0;
				gunnerAction = "LAV25_Gunner_out";
				gunnerInAction = "LAV25_Gunner";
				forceHideGunner = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponRangeZeroing";
				gunnerOutOpticsModel = "";
				memoryPointGun = "machinegun";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				particlesdir = "muzzle_1";
				particlespos = "chamber_1";
				missileBeg = "muzzle_1";
				missileEnd = "chamber_1";
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				gunnerForceOptics = 1;
				outGunnerMayFire = 0;
				startEngine = 1;
				primaryGunner = 4;
				stabilizedInAxes = 3;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI","NVG"};
					thermalMode[] = {2,3};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.2;
					minFov = 0.05;
					maxFov = 0.2;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov = 0.234;
						minFov = 0.234;
						maxFov = 0.234;
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Gunner_01_wide_F";
					};
					class Narrow: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Gunner_01_narrow_F";
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "otocvez";
						visual = "otocvez";
						passThrough = 1;
					};
				};
				selectionFireAnim = "zasleh_1";
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = "+85";
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = "+150";
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_POSITION_COMMANDER";
						primaryGunner = 0;
						primaryObserver = 1;
						gunnerOpticsShowCursor = 0;
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						soundServo[] = {"","db-50",1.0};
						startEngine = 0;
						gunBeg = "";
						gunEnd = "";
						minElev = -4;
						maxElev = "+20";
						initElev = 0;
						minTurn = -360;
						maxTurn = "+360";
						initTurn = 0;
						commanding = 2;
						viewGunnerInExternal = 0;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos driver";
						memoryPointsGetInGunnerDir = "pos driver dir";
						class ViewGunner
						{
							initAngleX = 5;
							minAngleX = -65;
							maxAngleX = "+85";
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = "+150";
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics
						{
							visionMode[] = {"Normal","NVG","TI"};
							thermalMode[] = {2,3};
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = "+30";
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = "+100";
							initFov = 0.3;
							minFov = 0.025;
							maxFov = 0.3;
						};
						gunnerInAction = "LAV25_Commander";
						gunnerAction = "LAV25_Commander_out";
						outGunnerMayFire = 1;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						stabilizedInAxes = 3;
					};
				};
			};
		};
		crew = "B_crew_F";
		transportSoldier = 6;
		typicalCargo[] = {"B_crew_F","B_crew_F","B_crew_F"};
		DriverAction = "LAV25_Driver_OUT";
		driverInAction = "LAV25_Driver_OUT";
		cargoAction[] = {"passenger_apc_narrow_generic02","passenger_apc_narrow_generic01","passenger_apc_narrow_generic03","passenger_apc_generic03","passenger_apc_generic02","passenger_generic01_foldhands","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02"};
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;
		transportAmmo = 100;
		supplyRadius = 1.7;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 90;
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				coneFadeCoef = 10;
				dayLight = 0;
				flareSize = 1;
				innerAngle = 100;
				intensity = 1000;
				outerAngle = 140;
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.5;
				useFlare = 1;
				class Attenuation
				{
					constant = 0;
					hardLimitEnd = 60;
					hardLimitStart = 30;
					linear = 0;
					quadratic = 0.25;
					start = 1.0;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffect";
			};
			class Exhaust2: Exhaust1
			{
				position = "vyfuk2 start";
				direction = "vyfuk2 konec";
			};
		};
		simulation = "carX";
		maxSpeed = 100;
		wheelCircumference = 3.277;
		dampersBumpCoef = 5;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 35.0;
		changeGearMinEffectivity[] = {0.5,0.15,0.97,0.97,0.97,0.97,0.97,0.985};
		switchTime = 0.1;
		latency = 1.4;
		enginePower = 295;
		maxOmega = 245;
		peakTorque = 2217;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{ 0,0 },{ "(1600/2640)","(2650/2850)" },{ "(1800/2640)","(2800/2850)" },{ "(1900/2640)","(2850/2850)" },{ "(2000/2640)","(2800/2850)" },{ "(2200/2640)","(2750/2850)" },{ "(2400/2640)","(2600/2850)" },{ "(2640/2640)","(2350/2850)" }};
		class wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 100;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 15000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = 0.2;
				sprungMass = 1600;
				springStrength = 80000;
				springDamperRate = 18000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		thrustDelay = 0.35;
		brakeIdleSpeed = 1.78;
		idleRpm = 280;
		redRpm = 2500;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",3.43,"D2",2.01,"D3",1.42,"D4",1,"D5",0.83,"D6",0.59};
			TransmissionRatios[] = {"High",8};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		class AnimationSources: AnimationSources
		{
			class front_panel_anim
			{
				source = "user";
				animperiod = 2;
				initPhase = 0;
			};
			class recoil_source
			{
				source = "reload";
				weapon = "autocannon_40mm_CTWS";
			};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitLF2Wheel
			{
				source = "Hit";
				hitpoint = "HitLBWheel";
				raw = 1;
			};
			class HitLMWheel
			{
				source = "Hit";
				hitpoint = "HitLMWheel";
				raw = 1;
			};
			class HitLBWheel
			{
				source = "Hit";
				hitpoint = "HitLF2Wheel";
				raw = 1;
			};
			class HitRFWheel
			{
				source = "Hit";
				hitpoint = "HitRFWheel";
				raw = 1;
			};
			class HitRF2Wheel
			{
				source = "Hit";
				hitpoint = "HitRBWheel";
				raw = 1;
			};
			class HitRMWheel
			{
				source = "Hit";
				hitpoint = "HitRMWheel";
				raw = 1;
			};
			class HitRBWheel
			{
				source = "Hit";
				hitpoint = "HitRF2Wheel";
				raw = 1;
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			init = "_this execVM ""\cha\cha_lav25\scripts\init.sqf""";
		};
	};
	class Cha_LAV25: Cha_LAV25_Base
	{
		scope = 2;
		side = 1;
		faction = "Cha_LAR";
		displayName = "LAV-25A1";
		author = "Chairborne";
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "Cha_M242_25mm_autocannon";
			};
		};
		AGM_FCSEnabled = 1;
	};
	class Cha_LAV25A2: Cha_LAV25
	{
		scope = 2;
		side = 1;
		model = "\Cha\Cha_LAV25\lav25a2";
		faction = "Cha_LAR";
		displayName = "LAV-25A2";
		author = "Chairborne";
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "Cha_M242_25mm_autocannon";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "Cha_M240_Pintle_2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "Cha_M240_Pintle_2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "Cha_M240_Pintle_2";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"Cha_M240_Pintle_2","SmokeLauncher"};
						magazines[] = {"Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","SmokeLauncherMag"};
						minTurn = -90;
						maxTurn = 90;
						minElev = -20;
						maxElev = 50;
						memoryPointGunnerOutOptics = "comgunview";
						gunnerOutOpticsModel = "\Cha\Cha_Lav25\proxies\optika_empty";
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						body = "ComTurret";
						gun = "ComGun";
					};
				};
			};
		};
		AGM_FCSEnabled = 1;
	};
	class Cha_LAV25_HQ: Cha_LAV25
	{
		scope = 2;
		model = "\Cha\Cha_LAV25\lav_hq";
		displayName = "LAV-C2";
		author = "Chairborne";
		picture = "\Cha\Cha_LAV25\data\UI\Picture_LAV25_CA.paa";
		Icon = "\Cha\Cha_LAV25\data\UI\Icon_lav25_hq_CA.paa";
		hideProxyInCombat = 1;
		enableManualFire = 0;
		class Library
		{
			libTextDesc = "$STR_LIB_LAV25_HQ";
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"Cha_M240_Pintle","SmokeLauncher"};
				magazines[] = {"Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","Cha_200rnd_762x51_Belt_M240","SmokeLauncherMag"};
				class Turrets{};
				LODTurnedOut = 1000;
				LODTurnedIn = 1000;
				startEngine = 0;
				gunnerOutOpticsModel = "\Cha\Cha_Lav25\proxies\optika_empty";
				gunnerAction = "LAV25_Gunner2";
				gunnerInAction = "LAV25_Gunner2";
				memoryPointGun = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				particlesdir = "usti hlavne";
				particlespos = "konec hlavne";
				missileBeg = "usti hlavne";
				missileEnd = "konec hlavne";
				memoryPointGunnerOutOptics = "gunnerview";
				gunnerName = "$STR_POSITION_COMMANDER";
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				canHideGunner = 0;
				castGunnerShadow = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				minTurn = -90;
				maxTurn = 90;
				minElev = -17.188736;
				maxElev = 34.377472;
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 1;
				stabilizedInAxes = 0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Antena1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Antena2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Antena3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "Cha_M240_Pintle";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "Cha_M240_Pintle";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "Cha_M240_Pintle";
			};
		};
		class UserActions
		{
			class ExtendAnt
			{
				displayName = "Extend Antenna";
				position = "driverview";
				showWindow = 0;
				radius = 8;
				priority = 5;
				condition = "(player == commander this) AND (this animationPhase ""antena1"" == 0);";
				statement = "ext = [this,7] execvm ""Cha\Cha_Lav25\scripts\ext_ant.sqf""";
				onlyforplayer = 1;
			};
			class RetractAnt
			{
				displayName = "Retract Antenna";
				position = "driverview";
				showWindow = 0;
				radius = 8;
				priority = 5;
				condition = "(player == commander this) AND (this animationPhase ""antena1"" > 1);;";
				statement = "ret = [this,0] execvm ""Cha\Cha_Lav25\scripts\ext_ant.sqf""";
				onlyforplayer = 1;
			};
		};
		transportSoldier = 0;
		typicalCargo[] = {};
		threat[] = {0.5,0.0,0.2};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\lavbody_co.paa","\Cha\Cha_LAV25\data\lavbody2_co.paa","\Cha\Cha_LAV25\data\lav_hq_co.paa"};
	};
	class Cha_Des1_LAV25: Cha_LAV25
	{
		scope = 2;
		side = 1;
		faction = "Cha_LAR";
		vehicleClass = "Cha_Des1";
		displayName = "LAV-25A1";
		author = "Chairborne/Hogthar";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\users\hog_des_lavbody_co.paa","\Cha\Cha_LAV25\data\users\hog_des_lavbody2_co.paa"};
	};
	class Cha_Des1_LAV25A2: Cha_LAV25A2
	{
		scope = 2;
		side = 1;
		faction = "Cha_LAR";
		vehicleClass = "Cha_Des1";
		displayName = "LAV-25A2";
		author = "Chairborne/Hogthar";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\users\hog_des_lavbody_co.paa","\Cha\Cha_LAV25\data\users\hog_des_lavbody2_co.paa"};
	};
	class Cha_Des1_LAV25_HQ: Cha_LAV25_HQ
	{
		scope = 2;
		side = 1;
		faction = "Cha_LAR";
		vehicleClass = "Cha_Des1";
		displayName = "LAV-C2";
		author = "Chairborne/Hogthar";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\users\hog_des_lavbody_co.paa","\Cha\Cha_LAV25\data\users\hog_des_lavbody2_co.paa","\Cha\Cha_LAV25\data\users\hog_des_lav_hq_co.paa"};
	};
	class Cha_Win1_LAV25: Cha_LAV25
	{
		scope = 2;
		side = 1;
		faction = "Cha_LAR";
		vehicleClass = "Cha_Win1";
		displayName = "LAV-25A1";
		author = "Chairborne/Hogthar";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\users\hog_win_lavbody_co.paa","\Cha\Cha_LAV25\data\users\hog_win_lavbody2_co.paa"};
	};
	class Cha_Win1_LAV25A2: Cha_LAV25A2
	{
		scope = 2;
		side = 1;
		faction = "Cha_LAR";
		vehicleClass = "Cha_Win1";
		displayName = "LAV-25A2";
		author = "Chairborne/Hogthar";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\users\hog_win_lavbody_co.paa","\Cha\Cha_LAV25\data\users\hog_win_lavbody2_co.paa"};
	};
	class Cha_Win1_LAV25_HQ: Cha_LAV25_HQ
	{
		scope = 2;
		side = 1;
		faction = "Cha_LAR";
		vehicleClass = "Cha_Win1";
		displayName = "LAV-C2";
		author = "Chairborne/Hogthar";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Cha\Cha_LAV25\data\users\hog_win_lavbody_co.paa","\Cha\Cha_LAV25\data\users\hog_win_lavbody2_co.paa","\Cha\Cha_LAV25\data\users\hog_win_lav_hq_co.paa"};
	};
};
