
class CfgPatches
{
	class CUP_Weapons_M240
	{
		units[] = {};
		weapons[] = {"CUP_lmg_M240"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_100Rnd_M240_762x51","MEU_100Rnd_M240_762x51_T"};	
};
};
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class CUP_Weapon_lmg_M240: WeaponHolder_Single_F
	{
		author = "CUP";
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
		mapSize = 0.8;
		displayName = "M240";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class CUP_lmg_M240
			{
				weapon = "CUP_lmg_M240";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MEU_100Rnd_M240_762x51
			{
				magazine = "MEU_100Rnd_M240_762x51";
				count = 1;
			};
		};
	};
};
class CfgAmmo
{
	 class B_762x51_Ball;
	 class B_762x51_Tracer_Red;
	 class B_MEU_M80: B_762x51_Ball
	{
		hit=12; // millimeters of armor penned
		initSpeed = 853;
		typicalSpeed=853; // muzzle velocity
		caliber=1.05; // penetration value 1 is 7.62
		airFriction = -0.00125;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		deflecting=20; // deflection angle
		deflectingChance = 100; // % chance of deflect
		deflectingRandomness = 0.5; // How shot reacts to surface bump
		visibleFire=20; // how well AI can see rounds
		visibleFireTime=20; //how long can see
		audibleFire=16; // how much can AI hear 
		audibleFireTime=15; //how long can hear
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 18;
		suppressionRadiusHit= 7;
		suppressionRadiusBulletClose= 13;
	};
	class B_MEU_M62: B_762x51_Tracer_Red 
	{
		hit=12;
		initSpeed = 853;
		typicalSpeed=853;
		caliber=1.05;
		airFriction = -0.00125;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=20;
		visibleFireTime=20;
		audibleFire=16;
		audibleFireTime=15;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 18;
		suppressionRadiusHit= 6;
		suppressionRadiusBulletClose= 10;
	};
};
class CfgMagazines
{
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class MEU_100Rnd_M240_762x51: 150Rnd_762x51_Box
	{
		scope = 2;
		mass = 33.8;
		ammo = "B_MEU_M80";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm <br />Rounds: 100<br />Used in:M240";
		displayname = "M80 Linked";
        	initspeed = 853;
        	lastroundstracer = 3;
		tracersevery = 5;
	};
	class MEU_100Rnd_M240_762x51_T: 150Rnd_762x51_Box_Tracer
	{
		scope = 2;
		mass = 33.8;
		ammo = "B_MEU_M62";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm Tracer<br />Rounds: 100<br />Used in:M240";
		displayname = "M62 Linked";
		initspeed = 853;
		tracersevery = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_lmg_M240: Rifle_Long_Base_F
	{
scope = 2;
		initSpeed = 853;
		selectionFireAnim = "muzzleFlash";
		model = "\CUP\Weapons\CUP_Weapons_M240\CUP_M240.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_M240_X_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = "M240";
		class Library
		{
			libTextDesc = "M240";
		};
	jsrs_soundeffect = "JSRS2_Distance_Effects_M240";
	   deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
           hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
           soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.015;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 1;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		descriptionShort = "M240";
		discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1400};
		discreteDistanceInitIndex = 2;
		cursor = "mg";
		cursorAim = "EmptyCursor";
		inertia = 0.8;
		dexterity = 1.2;
		maxRecoilSway = 0.003;
  		swayDecaySpeed = 1.25;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 242;
			class CUP_PicatinnyTopMountM240: CUP_PicatinnyTopMount{};
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
		};
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			recoil = "recoil_auto_primary_5outof10";
			recoilprone = "recoil_auto_primary_prone_2outof10";
			dispersion = 0.00101;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
    closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_01",0.446684,1,10};
    closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_02",0.446684,1,10};
    soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_01",1.25893,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_02",1.25893,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_03",1.25893,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25};
			class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			reloadtime = 0.0866666;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M240\data\sfx\Reload",1,1,35};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10};
		magazines[] = {"MEU_100Rnd_M240_762x51","MEU_100Rnd_M240_762x51_T"};
		reloadAction = "GestureReloadM200";
		magazineReloadTime = 6;
	};
	};