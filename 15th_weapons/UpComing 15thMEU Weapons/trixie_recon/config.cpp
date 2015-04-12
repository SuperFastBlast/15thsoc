class CfgPatches
{
	class Trixie_recon
	{
		requiredaddons[] = {"a3_weapons_f"};
		requiredversion = 1.24;
		units[] = {};
		weapons[] = {"Trixie_Cyclone","MEU_m40a5"};
		magazines[] = {"MEU_5x762_Mag"};
	};
};
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class MEU_m40a5: WeaponHolder_Single_F
	{
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
		mapSize = 0.4;
		displayName = "M40A5";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class MEU_m40a5
			{
				weapon = "MEU_m40a5";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MEU_5x762_Mag
			{
				magazine = "MEU_5x762_Mag";
				count = 1;
			};
		};
	};
	class Trixie_Cyclone: WeaponHolder_Single_F
	{
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyItem.p3d";
		mapSize = 0.4;
		displayName = "Trixie Cyclone";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class Trixie_Cyclone
			{
				name = "Trixie_Cyclone";
				count = 1;
			};
		};
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
};
class Mode_SemiAuto;
class Mode_FullAuto;
class asdg_MuzzleSlot_556;
class ItemCore;
class ItemInfo;
class InventoryOpticsItem_Base_F;

class CfgWeapons
{
    class srifle_EBR_F;
    class muzzle_snds_B;
    class muzzle_snds_M;
	class MEU_M40A5: srifle_EBR_F
	{
		scope = 2;
		initSpeed = 868;
		author = "Trixie";
		displayname = "M40A5";
		descriptionshort = "USMC M40A5 <br/>Caliber: 7.62x51mm";
        class Library 
        {
		    libtextdesc = "The M40 rifle is a bolt-action sniper rifle used by the United States Marine Corps. Each M40 is built from a Remington 700 bolt-action rifle, and is modified by USMC armorers at Marine Corps Base Quantico, using components from a number of suppliers.";
	    };
        magazines[] = {"MEU_5x762_Mag"};
        picture = "Trixie_Recon\UI\m40a3ng.paa";
        model = "Trixie_Recon\trixie_m40a3_ng.p3d"; 
        handAnim[] = {"OFP2_ManSkeleton","\trixie_recon\anim\M24.rtm"};
        inertia = 0.5;
        dexterity = 1.5;
	jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
	maxRecoilSway = 0.03;
  	swayDecaySpeed = 1.25;
	   deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
           hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
           soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.011;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		modes[] = {"Single"};       
		discretedistance[] = {100};
		discretedistanceinitindex = 0;
		reloadaction = "GestureReloadEBR";
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_dry",0.251189,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Safety",0.251189,1,5};
		reloadmagazinesound[] = {"trixie_recon\sound\M24Reload", 0.501187, 1, 10};
		class WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 170;
			class MuzzleSlot
			{
				access = 1;
				compatibleitems[] = {"Trixie_Cyclone"};
				displayname = "Muzzle Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.06,0.4};
				iconScale = 0.15;
				linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class asdg_FrontSideRail_rifles: asdg_FrontSideRail{};
			class asdg_OpticRail_rifles: asdg_OpticRail1913{};
			class asdg_OpticRail1913_long: asdg_OpticRail1913{};
			class asdg_UnderSlot;
			
			class cowslot
			{
				access = 1;
				compatibleItems[] = {};
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.52,0.36};
				iconScale = 0.15;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			class BaseSoundModeType
			{
    			closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
    			closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
    			soundClosure[] = {"closure1",0.5,"closure2",0.5};
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_01",2.81838,1,1200};
			    begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_02",2.81838,1,1200};
			    begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_03",2.81838,1,1200};
			    soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
	        class SilencedSound: BaseSoundModeType
            {
       begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_short_06_01",1,1,400};
    begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",1,1,400};
    begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",1,1,400};
    soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 1.5;
		    dispersion = 0.0005;
		    minRange = 2;
		    minRangeProbab = 0.3;
		    midRange = 250;
		    midRangeProbab = 0.7;
			maxRange = 500;
		  	maxRangeProbab = 0.05;
			recoil = "recoil_single_ebr";
			recoilprone = "recoil_single_prone_ebr";
		};
		};
	class Trixie_Cyclone: muzzle_snds_B
	{
		scope = 2;
		mass = 6;
		author = "Trixie";
		displayName = "AAC Cyclone";
		picture = "\trixie_recon\UI\cyclone.paa";
		model = "\trixie_recon\silencer_01.p3d";
		class Library
		{
			libtextdesc = "Extraordinary sound and recoil reduction are two of the instant benefits of the CYCLONE silencer. Durability is maximized by fully CNC automated fusion welding of every high-temperature aerospace alloy component used in its construction- making 100% suppressed fire possible. The back-pressure lowering design of the silencer aids in shooter comfort, reduces weapon fouling, and minimizes cyclic rate increase.";
		};
	};
};
class CfgAmmo
{
	class B_762x51_Ball;
	class M118LR_Ball_m40: B_762x51_Ball
   	{
        hit=17;
	initSpeed = 868;
        typicalSpeed=868;
        caliber=1.5;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
        visibleFire=15;
        visibleFireTime=15;
        audibleFire=16;
        audibleFireTime=10;
		dangerRadiusHit= -1;
		dangerRadiusBulletClose= 20;
		suppressionRadiusHit= 15;
		suppressionRadiusBulletClose= 15;
    };
};
class CfgMagazines {
	
	class 7Rnd_408_Mag;
	class MEU_5x762_Mag: 7Rnd_408_Mag {
		scope = 2;
		count = 5;
		initSpeed = 868;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 5<br />Used in: M40A3";
		displayname = "M118LR";
		ammo = "M118LR_Ball_m40";
		picture = "\Trixie_recon\UI\5x762_mag.paa";
		selectionFireAnim = "zasleh";
		lastroundstracer = 0;
		tracersevery = 0;
		mass = 3;
	};
};