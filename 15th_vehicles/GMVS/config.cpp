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
	class HMMWV_base: Car_f
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
	};

		class meu_GMVS {
		scope = 2;
		transportSoldier = 4;
		vehicleClass = "Car";
		transportMaxBackpacks = 7;
		model = "GMVS\M998A2_sov";
		displayname = "GMVS";
		simulation = "Car";
		armor = 40;
		damageResistance = 0.00581;
		threat[] = {1,0.3,0.3};
		side = TWest;
		faction = BLU_F;
		//Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_sov_CA.paa"; grab these later
		//Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_sov_CA.paa";
		//driverAction = "HMMWV_Driver_EP1";
		//cargoAction[] = {"HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1","HMMWV_Cargo03_EP1","HMMWV_Cargo04_EP1"};
		/*
		put sounds in, around this area
		*/

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"MK19"};
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
				gunnerAction = "HMMWV_Gunner03_EP1";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				LODTurnedOut = 1000;
				LODTurnedIn = 1000;
			};
			class SideTurret: MainTurret
			{
				gunnerName = "$STR_POSITION_FRONTGUNNER";
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
				gunnerAction = "HMMWV_Gunner02_EP1";
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
				weapon = "M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh";
			};
		};
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
		class Damage
		{
			tex[] = {};
			mat[] = {"GMVS\data\hmmwv_body_1.rvmat","GMVS\data\hmmwv_body_1_damage.rvmat","GMVS\HMMWV\data\hmmwv_body_1_destruct.rvmat","GMVS\HMMWV\data\hmmwv_glass.rvmat", "GMVS\data\hmmwv_glass_damage.rvmat","GMVS\data\hmmwv_glass_destruct.rvmat","GMVS\data\hmmwv_hood.rvmat","GMVS\data\hmmwv_hood_damage.rvmat","GMVS\data\hmmwv_hood_destruct.rvmat","GMVS\data\hmmwv_parts_1.rvmat","GMVS\data\hmmwv_parts_1_damage.rvmat","GMVS\data\hmmwv_parts_1_destruct.rvmat","GMVS\data\hmmwv_regular_1.rvmat","GMVS\data\hmmwv_regular_1_damage.rvmat","GMVS\data\hmmwv_regular_1_destruct.rvmat","GMVS\data\default.rvmat","GMVS\data\default.rvmat","GMVS\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1","camo2"};
		HiddenSelectionsTextures[] = {"GMVS\data\hmmwv_body_canvas_co.paa","GMVS\data\hmmwv_hood_canvas_co.paa","GMVS\data\hmmwv_regular_1_co.paa"};


		}; //end GMVS

}; //endCfgVehicles