/*
Key words for some of my short hand on notes
Orig. = original
----------------------------------------------------


List to add:
Work on turrets
FFV
Add Physx
Add cTab compatibility
Add LR radios
Add inventory

Add crewed version
Add sounds




*/
////////////stiff under this goes in cfgvehicles
				//Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_sov_CA.paa"; grab these later
		//Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_sov_CA.paa";
		//driverAction = "HMMWV_Driver_EP1";
		//cargoAction[] = {"HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1","HMMWV_Cargo03_EP1","HMMWV_Cargo04_EP1"};
		/*
		put sounds in, around this area
		*/
		//crew = "US_Delta_Force_EP1"; //Recon guys?
		//typicalCargo[] = {"US_Delta_Force_EP1","US_Delta_Force_EP1","US_Delta_Force_EP1"};//reconguys?
		/* FIND OUT WHAT RECON WANTS IN THE BASE LOADOUT OF THE VEHICLE
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		*/
		////end the CfgVeh add

class CfgPatches
{
	class meu_recon_vehicles
	{
		units[]				 = {"meu_GMVS"};
		weapons[]			 = {};
		requiredVersion		 = 0.1;
		requiredAddons[]	 = {"A3_Air_F"};
	};
};

class WeaponCloudsMGun;
class turrets;
class mainTurret;
class AnimationSources;

class CfgVehicles {

	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car_f: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
	};
	class MRAP_02_base_F : Car_f{};
	class HMMWV_base: MRAP_02_base_F
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 200;
		transportMaxBackpacks = 5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.15;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.15;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.15;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.15;
			};
			class HitFuel
			{
				armor = 0.14;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1;
			};
		};
	};//end base

		class meu_GMVS : HMMWV_base {
		scope = 2;
		transportSoldier = 4;
		vehicleClass = "Car";
		transportMaxBackpacks = 7;
		model = "GMVS\M998A2_sov";
		displayname = "GMVS";
		armor = 40;
		damageResistance = 0.00581;
		threat[] = {1,0.3,0.3};
		side = TWest;
		selectionfireanim = "zasleh";
		faction = BLU_F;
		selectionClan = "";

		#include "physx.hpp" // seperating files to keep the config clean
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"GMG_40mm"};
				magazines[] = {"200Rnd_40mm_G_belt", "96Rnd_40mm_G_belt", "64Rnd_40mm_G_belt", "32Rnd_40mm_G_belt"};//magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"}; // prob need to check weapon defs on this
				soundServo[] = {"",0.01,1.0,10};//\Ca\sounds\Vehicles\Servos\turret-1 orgi. 
				gunnerAction = ""; //HMMWV_Gunner03_EP1 orig.
				selectionfireanim = "zasleh";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				commanding = 0;
				primaryGunner = 0;
				body = "MainTurret";
				gun = "MainGun";
				memoryPointGunnerOptics = "gunnerview";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				outgunnermayfire = 1;
				primaryObserver = 0;
				LODTurnedOut = 1000;
				LODTurnedIn = 1000;
			};
			class SideTurret: MainTurret
			{
				gunnerName = "Front Gun";
				weapons[] = {"m240_veh"}; // check definitions for this
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"}; // check definitions for this
				soundServo[] = {"",0.0001,1.1}; // \ca\wheeled\Data\Sound\servo3 orgi.
				gunnerAction = "HMMWV_Gunner02_EP1";
				gunnerRightHandAnimName = "OtocHlaven_2";
				gunnerLeftHandAnimName = "OtocHlaven_2";
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				proxyIndex = 2;
				minElev = -18;
				maxElev = 20;
				minTurn = -65;
				maxTurn = 35;
				gunBeg = "usti hlavne_2";
				gunEnd = "konec hlavne_2";
				body = "SideTurret";
				gun = "SideGun";
				memoryPointGunnerOptics = "gunnerview_2";
				animationSourceBody = "SideTurret";
				animationSourceGun = "SideGun";
				LODTurnedOut = 1200;
				LODTurnedIn = 1200;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "m240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "m240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "m240_veh";
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] = {"GMVS\data\hmmwv_body_1.rvmat","GMVS\data\hmmwv_body_1_damage.rvmat","GMVS\data\hmmwv_body_1_destruct.rvmat","GMVS\data\hmmwv_glass.rvmat", "GMVS\data\hmmwv_glass_damage.rvmat","GMVS\data\hmmwv_glass_destruct.rvmat","GMVS\data\hmmwv_hood.rvmat","GMVS\data\hmmwv_hood_damage.rvmat","GMVS\data\hmmwv_hood_destruct.rvmat","GMVS\data\hmmwv_parts_1.rvmat","GMVS\data\hmmwv_parts_1_damage.rvmat","GMVS\data\hmmwv_parts_1_destruct.rvmat","GMVS\data\hmmwv_regular_1.rvmat","GMVS\data\hmmwv_regular_1_damage.rvmat","GMVS\data\hmmwv_regular_1_destruct.rvmat","GMVS\data\default.rvmat","GMVS\data\default.rvmat","GMVS\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1","camo2"};
		HiddenSelectionsTextures[] = {"GMVS\data\hmmwv_body_canvas_co.paa","GMVS\data\hmmwv_hood_canvas_co.paa","GMVS\data\hmmwv_regular_1_co.paa"};


		}; //end GMVS

}; //endCfgVehicles

class cfgWeapons
{
	class Default;
	class Mgun;
	class Mguncore;
	class m240_veh: Mgun
	{
		class GunClouds{};
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1.0,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1.0,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1.0,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1.0,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1.0,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1.0,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1.0,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1.0,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1",1.0,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2",1.0,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3",1.0,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4",1.0,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "M240B";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
		canLock = "LockNo";
		modes[] = {"manual","close","short","medium","far"};
		ballisticsComputer = 2;
		magazineReloadTime = 4;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne_2";
				directionName = "konec hlavne_2";
				effectName = "MachineGunCloud";
			};
		};
		class Manual: Mgun
		{
			displayName = "M240B";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"",1.0,1,1200}; //replace sound \mas_cars\hmmwv\sounds\mk48_s1
				begin2[] = {"",1.0,1,1200}; //replace sound \mas_cars\hmmwv\sounds\mk48_s2
				begin3[] = {"",1.0,1,1200}; //replace sound \mas_cars\hmmwv\sounds\mk48_s3
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			reloadTime = 0.075;
			dispersion = 0.00125;
			showToPlayer = 1;
			soundContinuous = 0;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			};
			class close: Manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: Manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: medium
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		jsrs_soundeffect = ""; //replace JSRS2_Distance_Effects_PK
	};
};//end cfgWeapons

class CfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore{};
	class B_762x51_Ball;
	class B_762x51_Tracer_Red;
	class 100Rnd_762x51_M240: B_762x51_Ball
	{
		hit = 12;
	};
	class G_40mm_HE;
	class 200Rnd_40mm_G_belt: G_40mm_HE
	{
		caliber = 1.5;
		hit = 8;
		indirecthit = 10;
		indirecthitrange = 5.5;
		whistledist = 5.5;
	};
	class 96Rnd_40mm_G_belt: G_40mm_HE
	{
		caliber = 1.5;
		hit = 8;
		indirecthit = 10;
		indirecthitrange = 5.5;
		whistledist = 5.5;
	};
	class 64Rnd_40mm_G_belt: G_40mm_HE
	{
		caliber = 1.5;
		hit = 8;
		indirecthit = 10;
		indirecthitrange = 5.5;
		whistledist = 5.5;
	};
	class 32Rnd_40mm_G_belt: G_40mm_HE
	{
		caliber = 1.5;
		hit = 8;
		indirecthit = 10;
		indirecthitrange = 5.5;
		whistledist = 5.5;
	};
};

class cfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class VehicleMagazine: CA_Magazine{};
	class 150Rnd_762x51_Box;
	class 100Rnd_762x51_M240: 150Rnd_762x51_Box
	{
		ammo = "100Rnd_762x51_M240";
		count = 100;
		displayname = "100rnd 7.62mm Box";
		mass = 30;
	};
	class 200Rnd_40mm_G_belt: VehicleMagazine
	{
		scope = 2;
		displayName = "High Explosive";
		ammo = "200Rnd_40mm_G_belt";
		count = 200;
		initSpeed = 185;
		maxLeadSpeed = 100;
		nameSound = "grenadelauncher";
	};
	class 96Rnd_40mm_G_belt: VehicleMagazine
	{
		scope = 2;
		displayName = "High Explosive";
		ammo = "200Rnd_40mm_G_belt";
		count = 96;
		initSpeed = 185;
		maxLeadSpeed = 100;
		nameSound = "grenadelauncher";
	};
	class 64Rnd_40mm_G_belt: VehicleMagazine
	{
		scope = 2;
		displayName = "High Explosive";
		ammo = "200Rnd_40mm_G_belt";
		count = 64;
		initSpeed = 185;
		maxLeadSpeed = 100;
		nameSound = "grenadelauncher";
	};
	class 32Rnd_40mm_G_belt: VehicleMagazine
	{
		scope = 2;
		displayName = "High Explosive";
		ammo = "200Rnd_40mm_G_belt";
		count = 32;
		initSpeed = 185;
		maxLeadSpeed = 100;
		nameSound = "grenadelauncher";
	};
}; // end cfgMagazines
	
