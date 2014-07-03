class DefaultEventhandlers;

class CfgPatches
{
	class NamN_MaxxPro_V
	{
		units[]				= {"MaxPro_Crows"};
		weapons[]			= {};
		requiredVersion		= 0.1;
		requiredAddons[]	= {"A3_Soft_F"};
	};
};

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;


class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
	    class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitLFWheel;
			class HitLF2Wheel;

			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;

			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};	
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class MaxxPro_base_V: Car_F
	{
		class AnimationSources;
		class EventHandlers;
	};
	class MaxPro_Base: MaxxPro_base_V
	{ 
		nameSound = "veh_vehicle_MRAP_s";
		author = "Mr.Namman";
		model 	= "NamN_MaxxPro\MaxxPro";  /// simple path to model
		picture	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon in command bar
		Icon	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// icon in map	
		simulation = CarX; //physX simulation
		displayName = "Maxx Pro "; /// displayed in Editor
		
		hiddenSelections[] = {"camo1"}; ///we want to allow changing of colours
		
		terrainCoef 	= 6.5; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 2.5; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has
		
		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 32; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle
		
		transportMaxBackpacks 	= 3; /// just some backpacks fit the trunk by default
		transportSoldier 		= 3; /// number of cargo except driver
		
		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "HMG_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "HMG_M2";
			};
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "HMG_M2";
			};
			class muzzle_hide_MG
			{
				source = "reload";
				weapon = "HMG_M2";
			};
		};
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"HMG_M2"};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				minElev = -10;
				maxElev = 40;
				soundServo[] = {"A3\sounds_f\dummysound",1e-006,1.0};
				gunnerAction = "gunner_standup01";
				gunnerCompartments = "Compartment2";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				optics = 0;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				class ViewOptics: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics{};
			};
		};
		class HitPoints : HitPoints
		{
			class HitLFWheel:HitLFWheel	{armor=0.125; passThrough=0;}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel:HitLF2Wheel{armor=0.125; passThrough=0;};

			class HitRFWheel:HitRFWheel	{armor=0.125; passThrough=0;};
			class HitRF2Wheel:HitRF2Wheel{armor=0.125; passThrough=0;}; 

			class HitFuel 			{armor=0.50; material=-1; name="fueltank"; visual=""; passThrough=0.2;}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine 		{armor=0.50; material=-1; name="engine"; visual=""; passThrough=0.2;};
			class HitBody: HitBody 	{name = "body"; visual="camo1"; passThrough=1;}; /// all damage to the hull is aFRLied to total damage

			class HitGlass1:HitGlass1 {armor=0.25;}; /// it is pretty easy to puncture the glass but not so easy to remove it
			class HitGlass2:HitGlass2 {armor=0.25;};
			class HitGlass3:HitGlass3 {armor=0.25;};
			class HitGlass4:HitGlass4 {armor=0.25;};
		};
	
		driverAction 		= driver_offroad01; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 		= {passenger_low01, passenger_generic01_leanleft, passenger_generic01_foldhands}; /// the same of all the crew
		getInAction 		= GetInLow; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case
		
		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "pip.hpp"		/// PiPs are in a separate file to make this one simple
		#include "physx.hpp"	/// PhysX settings are in a separate file to make this one simple
		
		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL"; 
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR"; 
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL"; 
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR"; 
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL"; 
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR"; 
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL"; 
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR"; 		

		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[]={};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat", 		/// material mapped in model
				"A3\data_f\Glass_veh_damage.rvmat", 	/// changes to this one once damage of the part reaches 0.5
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes to this one once damage of the part reaches 1

				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat",
			};
		};
		
			
		
		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 	= "exhaust";  		/// name of initial memory point
				direction 	= "exhaust_dir";	/// name of memory point for exhaust direction
				effect 		= "ExhaustsEffect";	/// what particle effect is it going to use
			};
			class Exhaust2
			{
				position 	= "exhaust2_pos";
				direction 	= "exhaust2_dir";
				effect 		= "ExhaustsEffect";
			};				
		};		
		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};		
			class LightCarHeadL02:LightCarHeadL01
			{
				position 	= "LightCarHeadL02";
				direction 	= "LightCarHeadL02_end";
				FlareSize 	= 0.5;						/// side bulbs aren't that strong
			};
			class LightCarHeadR01:LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class LightCarHeadR02:LightCarHeadR01
			{
				position 	= "LightCarHeadR02";
				direction 	= "LightCarHeadR02_end";
				FlareSize 	= 0.5;
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}}; /// aggregating reflectors helps the engine a lot
		/// it might be even good to aggregate all lights into one source as it is done for most of the cars
	};
	
	class MaxPro_Crows: MaxPro_Base /// some class that is going to be visible in editor
	{	
		scope	= 2; 			/// makes the car visible in editor
		crew = "B_Soldier_F"; 	/// we need someone to fit into the car
		side	= 1; 			/// BluFor - Car - side
		author = "Mr.Namman";
		faction = "BLU_F";	/// and with BluFor faction
		displayName = "MaxxPro CROWS";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "muzzle";
				gunEnd = "chamber";
				weapons[] = {"HMG_127"};
				magazines[] = {"200Rnd_127x99_mag_Tracer_Green","200Rnd_127x99_mag_Tracer_Green"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				gunnerAction = "gunner_MRAP_01";
				viewGunnerInExternal = 1;
				hideWeaponsGunner = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				memoryPointGunnerOptics = "PIP0_dir";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				usePip = 1;
				minElev = -25;
				maxElev = 60;
				LODTurnedIn = 1000;
				class ViewOptics: RCWSOptics{};
				class ViewGunner: ViewOptics
				{
					initAngleX = -45;
					minAngleX = -55;
					maxAngleX = -20;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
				gunnerDoor = "";
			};
		};
		class RenderTargets
		{
			class Gunner_display
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 2;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class Driver_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
			};
		};
		
		
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Data\placeholder_co.paa"};	 /// we could use any texture to cover the car
	};	
	class MaxPro_M2: MaxPro_Base /// some class that is going to be visible in editor //(CageM2)//
	{	
		scope	= 2; 			/// makes the car visible in editor
		crew = "B_Soldier_F"; 	/// we need someone to fit into the car
		side	= 1; 			/// BluFor - Car - side
		author = "Mr.Namman";
		faction = "BLU_F";	/// and with BluFor faction
		displayName = "MaxxPro M2";
		model 	= "NamN_MaxxPro\MaxxProt";  /// simple path to model
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"HMG_M2"};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				minElev = -10;
				maxElev = 40;
				soundServo[] = {"A3\sounds_f\dummysound",1e-006,1.0};
				gunnerAction = "gunner_standup01";
				gunnerCompartments = "Compartment2";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				optics = 0;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				class ViewOptics: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics{};
			};
		};
		
		
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Data\placeholder_co.paa"};	 /// we could use any texture to cover the car
	};	
	class MaxPro_M134: MaxPro_Base /// some class that is going to be visible in editor
	{	
		scope	= 2; 			/// makes the car visible in editor
		crew = "B_Soldier_F"; 	/// we need someone to fit into the car
		side	= 1; 			/// BluFor - Car - side
		author = "Mr.Namman";
		faction = "BLU_F";	/// and with BluFor faction
		displayName = "MaxxPro MiniGun";
		model 	= "NamN_MaxxPro\MaxxProt2";  /// simple path to model
		
		
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Data\placeholder_co.paa"};	 /// we could use any texture to cover the car
	};	
};
