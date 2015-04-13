
class CfgPatches
{
	class CUP_Weapons_M16
	{
		units[] = {};
		weapons[] = {"CUP_muzzle_snds_M16","CUP_arifle_M16A4_Base","CUP_arifle_M16A4_GL","CUP_arifle_M4CAR_BUIS_GL","CUP_arifle_M4CAR_black","CUP_arifle_M4A1_BUIS_GL","CUP_arifle_M4A1_black","CUP_srifle_Mk12SPR"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
		magazines[] = {"MEU_FlareYellow_M203","MEU_FlareWhite_M203","MEU_FlareGreen_M203","MEU_FlareRed_M203","M433_40mm_HEDP_Shell","MEU_30Rnd_M855A1_556x45_Stanag","MEU_30Rnd_M855A1_556x45_T_Stanag","MEU_30x556_Mk262_Mag"};
	
	};
};
class CfgAmmo
{
	 class G_40mm_HE;
	 class B_556x45_Ball;
	 class B_556x45_Ball_Tracer_Red;
	class Flarecore;
	class MEUFlare: Flarecore
	{
		timeToLive = 120;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		intensity = 80000;
	};
	class MEU_F_40mm_White: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.5,0.5};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 50;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class MEU_F_40mm_Green: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.25,0.5,0.25,0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 50;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class MEU_F_40mm_Red: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.25,0.25,0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 50;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class MEU_F_40mm_Yellow: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.25,0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 50;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class B_MEU_M855a1: B_556x45_Ball
	{
		hit=8.4;
		airFriction = -0.0011336614; 
		caliber = 0.855;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed = 945;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=15;
		visibleFireTime=15;
		audibleFire=16;
		audibleFireTime=10;
		dangerRadiusBulletClose = 14;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 6;
	};
	class B_MEU_M8556: B_556x45_Ball_Tracer_Red
	{
		hit=8.4;
		airFriction = -0.0011336614; 
		typicalSpeed = 945;
		caliber = 0.855;
		deflecting=20;
		deflectingChance = 100;
		deflectingRandomness = 0.5;
		visibleFire=18;
		visibleFireTime=18;
		audibleFire=16;
		audibleFireTime=10;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
		dangerRadiusBulletClose = 14;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 6;
	};
	class B_MEU_Mk262: B_556x45_Ball
    {
	hit = 15.0454;
        typicalSpeed = 868.68;
        airFriction = -0.0010867938;
        caliber = 0.855;
        deflecting=20;
	deflectingChance = 100;
	deflectingRandomness = 0.5;
 	visibleFire=15;
	visibleFireTime=15;
	audibleFire=16;
	audibleFireTime=10;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		dangerRadiusBulletClose = 14;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 6;
    };
	class G_M433_40mm_HEDP: G_40mm_HE
    {
        hit = 170;
        indirectHit = 25;
        indirectHitRange = 5;
        caliber = 3;
        class CamShakeHit
        {
            power = 30;
            duration = "((round (30^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
};
class CfgMagazines
{
	class 1Rnd_HE_Grenade_shell;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class UGL_FlareWhite_F;
	class UGL_FlareGreen_F;
	class UGL_FlareRed_F;
	class UGL_FlareYellow_F;
	class MEU_FlareWhite_M203: UGL_FlareWhite_F
	{
		scope = 2;
		ammo = "MEU_F_40mm_White";
		displayName = "M583 Flare White";
	};
	class MEU_FlareGreen_M203: UGL_FlareGreen_F
	{
		scope = 2;
		ammo = "MEU_F_40mm_Green";
		displayName = "M661 Flare Green";
	};
	class MEU_FlareRed_M203: UGL_FlareRed_f
	{
		scope = 2;
		ammo = "MEU_F_40mm_Red";
		displayName = "M662 Flare Red";
	};
	class MEU_FlareYellow_M203: UGL_FlareYellow_F
	{
		scope = 2;
		ammo = "MEU_F_40mm_Yellow";
		displayName = "M695 Flare Yellow";
	};
	class M433_40mm_HEDP_Shell: 1Rnd_HE_Grenade_shell
	{
		scope = 2;
		Displayname = "M433 40mm HEDP";
		ammo = "G_M433_40mm_HEDP";
		mass = 5;
		descriptionshort = "Caliber: 40 mm<br />Rounds: 1<br />Used in: M203";
	};
	class MEU_30Rnd_M855A1_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		ammo = "B_MEU_M855a1";
		initSpeed = 945;
		count = 30;
		mass = 11.8;
		lastroundstracer = 3;
        	descriptionshort = "M855A1<br />Caliber: 5.56x45 mm STANAG<br />Rounds: 30";
        	displayname = "M855A1";
	};
	class MEU_30Rnd_M855A1_556x45_T_Stanag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope = 2;
		ammo = "B_MEU_M8556";
		initSpeed = 945;
		mass = 11.8;
		count = 30;
		tracersevery = 1;
        	descriptionshort = "M856<br />Caliber: 5.56x45 mm STANAG Tracer<br />Rounds: 30";
        	displayname = "M856";
		picture = "\a3\weapons_F\data\ui\m_30stanag_red_ca.paa";
	};
	    class MEU_30x556_Mk262_Mag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		ammo = "B_MEU_Mk262";
		initSpeed = 868.68;
		count = 30;
		mass = 11.8;
		lastroundstracer = 3;
        	descriptionshort = "Mk 262 77gr<br />Caliber: 5.56x45 mm STANAG<br />Rounds: 30";
        	displayname = "Mk 262";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class CUP_muzzle_snds_M16: ItemCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "M16 / M4 Silencer (black)";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_acca_snds_m4black.paa";
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_silencer_black.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1.1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
				typicalSpeed = 1.2;
				airFriction = 1.2;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.1;
	};
	class CUP_arifle_M16_Base: Rifle_Base_f
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		selectionFireAnim = "muzzleFlash";
		value = 8;
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M16\data\sfx\M16_Reload",1,1,35};
		magazines[] = {"MEU_30Rnd_M855A1_556x45_Stanag","MEU_30Rnd_M855A1_556x45_T_Stanag"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.25118864,1,5};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.31622776,1,10};
	   deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
           hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
           soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
	jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.70794576,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.70794576,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.25118864,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst = 0;
			reloadTime = 0.0799999;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			dispersion = 0.0007;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M16"};
			};
			mass = 71.4;
		};
		class M203: UGL_F
		{
			displayName = "M203";
			sounds[] = {"StandardSound"};
			class StandardSound
		{
   		weaponSoundEffect = "DefaultRifle";
   		begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
   		begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
   		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
			magazines[] = {"MEU_FlareYellow_M203","MEU_FlareWhite_M203","MEU_FlareGreen_M203","MEU_FlareRed_M203","M433_40mm_HEDP_Shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
		};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -1.025;
		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
	};
	class CUP_arifle_M16A4_Base: CUP_arifle_M16_Base
	{
		scope = 2;
		initSpeed = -1.025;
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_M16A4.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_M16A4_X_ca.paa";
		inertia = 0.5;
		dexterity = 1.5;
		displayName = "M16A4";
		class Library
		{
			libTextDesc = "M16. THE rifle";
		};
		descriptionShort = "M16A4";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class PointerSlot{};
			class CUP_PicatinnyTopMountM16: CUP_PicatinnyTopMount{};
			class CUP_PicatinnySideMountM16: CUP_PicatinnySideMount{};
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M16"};
			};
			mass = 71.4;
		};
	};
	class CUP_arifle_M16A4_GL: CUP_arifle_M16_Base
	{
		scope = 2;
		initSpeed = -1.025;
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_M16A4GL.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_M16A4GL_X_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","CUP\Weapons\CUP_Weapons_M16\data\anim\M16GL.rtm"};
		muzzles[] = {"this","M203"};
		displayName = "M16A4 M203";
		class Library
		{
			libTextDesc = "M16. THE rifle";
		};
		descriptionShort = "M16A4 M203";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class PointerSlot{};
			class CUP_PicatinnyTopMountM16: CUP_PicatinnyTopMount{};
			class CUP_PicatinnySideMountM16: CUP_PicatinnySideMount{};
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M16"};
			};
			mass = 100.5;
		};
		inertia = 0.6;
		dexterity = 1.4;
	};
	class CUP_arifle_M4_Base: CUP_arifle_M16A4_Base
	{
		scope = 0;
		initSpeed = -0.936;
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M16\data\sfx\Reload",1,1,35};
	jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.70794576,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.70794576,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.25118864,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst = 0;
			reloadtime = 0.0799999;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			dispersion = 0.0007;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M16"};
			};
			mass = 63;
		};
		class M203: UGL_F
		{
			displayName = "M203";
			sounds[] = {"StandardSound"};
			class StandardSound
		{
   		weaponSoundEffect = "DefaultRifle";
   		begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
   		begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
   		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
			magazines[] = {"MEU_FlareYellow_M203","MEU_FlareWhite_M203","MEU_FlareGreen_M203","MEU_FlareRed_M203","M433_40mm_HEDP_Shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
		};
		class Library
		{
			libTextDesc = "The Colt M4 is a shortened version of the M16";
		};
		descriptionShort = "M4";
		inertia = 0.4;
		dexterity = 1.6;
	};
	class CUP_arifle_M4A1_BUIS_Base: CUP_arifle_M4_Base
	{
		scope = 0;
		initSpeed = -0.936;
		class WeaponSlotsInfo
		{
			class CowsSlot{};
			class PointerSlot{};
			class CUP_PicatinnyTopMountM4: CUP_PicatinnyTopMount{};
			class CUP_PicatinnySideMountM4: CUP_PicatinnySideMount{};
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M16"};
			};
			mass = 63;
		};
		inertia = 0.4;
		dexterity = 1.6;
  		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
	};
	class CUP_arifle_M4CAR_BUIS_GL: CUP_arifle_M4A1_BUIS_Base
	{
		scope = 2;
		initSpeed = -0.936;
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_M4_black_GL.p3d";
		displayName = "M4 Carbine M203";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_M4GL_X_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","CUP\Weapons\CUP_Weapons_M16\data\anim\M16GL.rtm"};
		muzzles[] = {"this","M203"};
		class Library
		{
			libTextDesc = "M4A1";
		};
		descriptionShort = "M4 M203";
		inertia = 0.5;
		dexterity = 1.5;
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.25118864,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.25118864,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst = 0;
			reloadtime = 0.0799999;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			dispersion = 0.0007;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 93.9;
		};
	};
	class CUP_arifle_M4CAR_black: CUP_arifle_M4A1_BUIS_Base
	{
		scope = 2;
		initSpeed = -0.936;
		displayName = "M4 Carbine";
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_M4A1_BUIS_black.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_m4blk_X_ca.paa";
		inertia = 0.4;
		dexterity = 1.6;
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.25118864,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadtime = 0.0799999;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.25118864,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst = 0;
			reloadtime = 0.0799999;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilprone = "recoil_auto_primary_prone_3outof10";
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			dispersion = 0.0007;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 63;
		};
	};
	class CUP_arifle_M4A1_BUIS_GL: CUP_arifle_M4A1_BUIS_Base
	{
		scope = 2;
		initSpeed = -0.936;
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_M4_black_GL.p3d";
		displayName = "M4A1 M203";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_M4GL_X_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","CUP\Weapons\CUP_Weapons_M16\data\anim\M16GL.rtm"};
		muzzles[] = {"this","M203"};
		class Library
		{
			libTextDesc = "M4A1";
		};
		descriptionShort = "M14A1 M203";
		inertia = 0.5;
		dexterity = 1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 93.9;
		};
	};
	class CUP_arifle_M4A1_black: CUP_arifle_M4A1_BUIS_Base
	{
		scope = 2;
		initSpeed = -0.936;
		displayName = "M4A1";
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_M4A1_BUIS_black.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_m4blk_X_ca.paa";
		inertia = 0.4;
		dexterity = 1.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 63;
		};
	};
	class CUP_srifle_Mk12SPR: CUP_arifle_M4_Base
	{
		scope = 2;
		initSpeed = 868.68;
		displayName = "Mk 12 SPR";
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_Mk12.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_MK12_X_ca.paa";
		magazines[] = {"MEU_30Rnd_M855A1_556x45_Stanag","MEU_30Rnd_M855A1_556x45_T_Stanag","MEU_30x556_Mk262_Mag"};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M16\data\sfx\SPR_Reload",1,1,35};
		inertia = 0.7;
		dexterity = 1.3;
		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.25118864,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00045;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};
		class WeaponSlotsInfo
		{
			class CowsSlot{};
			class PointerSlot{};
			class CUP_PicatinnyTopMountMk12: CUP_PicatinnyTopMount{};
			class CUP_PicatinnySideMountMk12: CUP_PicatinnySideMount{};
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CUP_muzzle_snds_M16"};
			};
			mass = 75;
		};
		class Library
		{
			libTextDesc = "Mk12 Special Purpose Receiver";
		};
		descriptionShort = "Mk12 SPR";
	};
	};