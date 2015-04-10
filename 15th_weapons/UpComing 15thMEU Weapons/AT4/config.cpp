class CfgPatches
 {
	class AT4 {
		units[] = {};
		weapons[] = {"meu_AT4","meu_AT4_CS"};
		requiredVersion = 1.00;
		requiredAddons[] = {"A3_Weapons_F","inko_disposable_a3"};
	};
};
class CfgAmmo
{
	
	
	class RocketCore;
	class RocketBase: RocketCore{};
	
	class R_AT_HEAT: RocketBase
	{
		audiblefire = 16;
		cost = 500;
		model = "\AT4\M136_Rocket.p3d"; // \AT4\M136_ammo.p3d
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		fusedistance = 15;
		hit = 480;
		indirecthit = 12;
		indirecthitrange = 1.2;
		inittime = 0;
		maxspeed = 290;
		airfriction = 0.175;
		sideairfriction = 0.175;
		thrust = 0;
		thrusttime = 0;
		timetolive = 100;
		visiblefire = 28;
		whistledist = 2;
		dangerRadiusHit= -1;
		suppressionRadiusHit= 25;
		AGM_Backblast_Angle = 60; // angle of the backblast area
        AGM_Backblast_Range = 25; // maximum range of the backblast
        AGM_Backblast_Damage = 1; // maximum damage of the backblast
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
		class R_AT_CS: RocketBase
	{
		audiblefire = 16;
		cost = 500;
		model = "\AT4\M136_Rocket.p3d"; // \AT4\M136_ammo.p3d
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		fusedistance = 15;
		hit = 380;
		indirecthit = 12;
		indirecthitrange = 1.2;
		inittime = 0;
		maxspeed = 290;
		airfriction = 0.175;
		sideairfriction = 0.175;
		thrust = 0;
		thrusttime = 0;
		timetolive = 100;
		visiblefire = 28;
		whistledist = 2;
		dangerRadiusHit= -1;
		suppressionRadiusHit= 25;
		AGM_Backblast_Angle = 60;   // angle of the backblast area
        AGM_Backblast_Range = 0;   // maximum range of the backblast
        AGM_Backblast_Damage = 0; // maximum damage of the backblast
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
};

class CfgMagazines
{

	class RPG32_F;
	class AT4_HEAT: RPG32_F
	{
		descriptionshort = "Range: 300 m<br/>Type: HEAT (High Explosive Anti-Tank)<br/>Used in: AT-4";
		displayname = "AT-4 HEAT";
		displaynameshort = "HEAT";
		modelSpecial = "\AT4\m136_launcher_loaded.p3d";
		picture = "\AT4\Data\m_smaw_ca.paa"; 
		scope = 2;
		ammo = "R_AT_HEAT";
		reloadtime = 0.5;
		hit = 480;
		indirecthit = 30;
		indirecthitrange = 10;
		airfriction = 0.175;
		sideairfriction = 0.175;
		thrust = 0;// changed
		thrusttime = 0;
		timetolive = 10;
		maxspeed = 290;
		initspeed = 290; 
		selectionFireanim = "";
		mass = 1;
		allowedSlots[] = {701,801,901};
				
	};
	class AT4_CS: RPG32_F
	{
		descriptionshort = "Range: 300 m<br/>Type: HEAT (High Explosive Anti-Tank)<br/>Used in: AT-4";
		displayname = "AT-4 CS";
		displaynameshort = "CS";
		modelSpecial = "\AT4\m136_launcher_loaded.p3d";
		picture = "\AT4\Data\m_smaw_ca.paa"; 
		scope = 2;
		ammo = "R_AT_CS";
		reloadtime = 0.5;
		hit = 380;
		indirecthit = 30;
		indirecthitrange = 10;
		airfriction = 0.175;
		sideairfriction = 0.175;
		thrust = 0;// changed
		thrusttime = 0;
		timetolive = 10;
		maxspeed = 290;
		initspeed = 290; 
		selectionFireanim = "";
		mass = 1;
		allowedSlots[] = {701,801,901};
				
	};
	
	class AT4_HEAT_Used : AT4_HEAT
	{
		scope = 1;
		count = 0;
		type = 0;
		inko_disposable = 0;
		displayName = "AT4(Used)";
	};
	class AT4_CS_Used : AT4_CS
	{
		scope = 1;
		count = 0;
		type = 0;
		inko_disposable = 0;
		displayName = "AT4 CS(Used)";
	};
};
class CfgWeapons 
{
	class Launcher;
	class Launcher_Base_F: Launcher{};
	class Hamr2Collimator;
	class weaponslotsinfo;
	class meu_AT4: Launcher_Base_F
	{
		modelOptics = "-";
		scope = 2;
		simulation="LauncherX";
		displayName = "M136 AT-4";
		descriptionShort = "AT4 Rocket Launcher. Cannot be re-used.";
		model = "\AT4\m136_launcher.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\AT4\Data\Anim\m136.rtm"};
		magazines[] = {"AT4_HEAT"};
		visionMode[] = {"Normal"};
		recoil = "recoil_single_law";
		picture = "\AT4\Data\icon\w_m136_launcher_ca.paa";
		disposableweapon = 1;
		//weaponinfotype = "RscWeaponZeroing";
		reloadtime = 0.5;
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 250;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.8;
		maxRange = 500;
		maxRangeProbab = 0.1;
		canLock = LockNo;
		class WeaponSlotsInfo: WeaponSlotsInfo
        	{
            	mass = 148;
        	};
		weaponLockDelay = 3.0;
		lockAcquire = 0;
		magazineReloadTime = 0;
		AGM_Backblast_Angle = 60; // angle of the backblast area
        AGM_Backblast_Range = 10; // maximum range of the backblast
        AGM_Backblast_Damage = 2; // maximum damage of the backblast
		
		
		// Used for inko disposable
		inko_disposable = 1;
		inko_disposable_used = "AT4_Used";
		inko_disposable_tube = "AT4_Used_Tube";
		
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
			begin1[]={"AT4\sound\rocket1.wss",1.9952624,1,1000};
			soundBegin[]={"begin1",1};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.17782794,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1.0,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.56234133,1.5,700};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
		class OpticsModes 
		{
			class Hamr2Collimator : Hamr2Collimator
			{
				//discretedistance[] = {100, 200, 300, 400, 500};
				//discretedistanceinitindex = 1;
				distancezoommax = 300;
				distancezoommin = 300;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {""};
				opticszoominit = 0.75;
				opticszoommax = 1;
				opticszoommin = 0.375;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};

		class GunParticles {
			class effect1 {
				positionName = "konec hlavne"; // Correct
				directionName = "usti hlavne"; // Correct
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	
	class AT4_Used: Launcher_Base_F
	{
		scope = 1;
		descriptionShort = "AT4 Rocket Launcher. Cannot be re-used.";
		displayName = "AT4(Used)";
		picture = "\AT4\Data\icon\w_m136_launcher_ca.paa";
		inko_disposable = 0;
		magazines[] = {"AT4_HEAT_Used"};
		model = "\AT4\m136_launcher.p3d";	
	};
	class meu_AT4_CS: Launcher_Base_F
	{
		modelOptics = "-";
		scope = 2;
		simulation="LauncherX";
		displayName = "M136 AT-4 CS";
		descriptionShort = "AT4 Rocket Launcher. Cannot be re-used.";
		model = "\AT4\m136_launcher.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\AT4\Data\Anim\m136.rtm"};
		magazines[] = {"AT4_CS"};
		visionMode[] = {"Normal"};
		recoil = "recoil_single_law";
		picture = "\AT4\Data\icon\w_m136_launcher_ca.paa";
		disposableweapon = 1;
		//weaponinfotype = "RscWeaponZeroing";
		reloadtime = 0.5;
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 250;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.8;
		maxRange = 500;
		maxRangeProbab = 0.1;
		canLock = LockNo;
		class WeaponSlotsInfo: WeaponSlotsInfo
        	{
            	mass = 173;
        	};
		weaponLockDelay = 3.0;
		lockAcquire = 0;
		magazineReloadTime = 0;
			
		// Used for inko disposable
		inko_disposable = 1;
		inko_disposable_used = "AT4_CS_Used";
		inko_disposable_tube = "AT4_CS_Used_Tube";
		
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
			begin1[]={"AT4\sound\rocket1.wss",1.9952624,1,1000};
			soundBegin[]={"begin1",1};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.17782794,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1.0,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.56234133,1.5,700};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
		class OpticsModes 
		{
			class Hamr2Collimator : Hamr2Collimator
			{
				//discretedistance[] = {100, 200, 300, 400, 500};
				//discretedistanceinitindex = 1;
				distancezoommax = 300;
				distancezoommin = 300;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {""};
				opticszoominit = 0.75;
				opticszoommax = 1;
				opticszoommin = 0.375;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};

		class GunParticles {
			class effect1 {
				positionName = "konec hlavne"; // Correct
				directionName = "usti hlavne"; // Correct
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	
	class AT4_CS_Used: Launcher_Base_F
	{
		scope = 1;
		descriptionShort = "AT4 Rocket Launcher. Cannot be re-used.";
		displayName = "AT4 CS(Used)";
		picture = "\AT4\Data\icon\w_m136_launcher_ca.paa";
		inko_disposable = 0;
		magazines[] = {"AT4_CS_Used"};
		model = "\AT4\m136_launcher.p3d";
	
	};
};
class cfgVehicles
{

		class WeaponHolder_Single_F;
	class meu_AT4: WeaponHolder_Single_F
	{
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyLauncher_Single.p3d";
		mapSize = 0.8;
		displayName = "AT4";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class meu_AT4
			{
				weapon = "meu_AT4";
				count = 1;
			};
		};
	};
	class meu_AT4_CS: WeaponHolder_Single_F
	{
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyLauncher_Single.p3d";
		mapSize = 0.8;
		displayName = "AT4 CS";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class meu_AT4_CS
			{
				weapon = "meu_AT4_CS";
				count = 1;
			};
		};
	};
	class Thing;
	class AT4_Used_Tube : Thing
	{
		scope = 1;
		side = -1;
		model = "\AT4\m136_launcher.p3d";
		icon = "";
		displayName = "";
		nameSound = "";
		destrType = "DestructNo";
		mapSize = 0;
		accuracy = 0;
		armor = 5;
		weight = 420;
		airFriction2[] = {50,25,15};
		airFriction1[] = {50,25,15};
		airFriction0[] = {50,25,15};
		airrotation = 1;
	};
		class AT4_CS_Used_Tube : Thing
	{
		scope = 1;
		side = -1;
		model = "\AT4\m136_launcher.p3d";
		icon = "";
		displayName = "";
		nameSound = "";
		destrType = "DestructNo";
		mapSize = 0;
		accuracy = 0;
		armor = 5;
		weight = 420;
		airFriction2[] = {50,25,15};
		airFriction1[] = {50,25,15};
		airFriction0[] = {50,25,15};
		airrotation = 1;
	};
};