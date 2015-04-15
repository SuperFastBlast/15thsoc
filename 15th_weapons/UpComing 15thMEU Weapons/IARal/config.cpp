class CfgPatches
{
	class ej_IARal
	{
		requiredaddons[]={"a3_weapons_f"};
		requiredversion=1.24;
		units[]={};
		weapons[]=
		{
			"ej_IAR30"
		};
		magazines[]=
		{};
	author[]={"EricJ"};
	};
};
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class ej_IAR30: WeaponHolder_Single_F
	{
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
		mapSize = 0.8;
		displayName = "M27 IAR";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class ej_IAR30
			{
				weapon = "ej_IAR30";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
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
class SlotInfo;
class asdg_MuzzleSlot_556;
class asdg_UnderSlot;
class CfgWeapons
{
    class Rifle_Base_F;
	class ej_IAR30: Rifle_Base_F
	{
		picture="\IARal\data\UI\iar30inv_x_ca.paa";
		scope=2;
		displayname="M27 IAR";
		reloadAction="GestureReloadSMG_02";
	jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
           deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
           hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
           soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		descriptionshort="M27 IAR<br />Caliber: 5.56";
		maxZeroing = 1000;
		discretedistance[]={100,200,300,400,500,600,700,800};
		discretedistanceinitindex=2;
		dispersion=9.9999997e-005;
		dexterity=1.8;
		inertia = 0.5;
		initSpeed = -0.946;
		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
		distancezoommax=300;
		distancezoommin=300;
		optics=0;
		opticsdisableperipherialvision=0.67000002;
		opticsflare=0;
		opticsid=0;
		opticsppeffects[]={};
		opticszoominit=0.75;
		opticszoommax=1.1;
		opticszoommin=0.375;
		reloadTime=0.096000001;
		weaponinfotype="RscWeaponZeroing";
		weaponpoolavailable=1;
		weaponsoundeffect="";
		weight=0;
		class Library
		{
			libtextdesc="M27 IAR";
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\IARal\data\Anim\SCAR.rtm"
		};
		maxrange=300;
		maxrangeprobab=0.2;
		midrange=225;
		midrangeprobab=0.69999999;
		minrange=2;
		minrangeprobab=0.30000001;
		recoil = "recoil_mk20";
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Dry",0.251189,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Safety",0.112202,1,5};
		reloadMagazineSound[] = {"\IARal\M4R.wss",1,1,30};
		magazines[] = {"MEU_30Rnd_M855A1_556x45_Stanag","MEU_30Rnd_M855A1_556x45_T_Stanag","30Rnd_556x45_Stanag"};
		model="\IARal\ej_IAR30.p3d";
		modes[]={"Single","FullAuto"};
		muzzles[]={"this"};
		selectionfireanim="muzzleflash";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass = 63;
			class MuzzleSlot
			{
				access = 1;
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","Trixie_Cyclone"};
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
    			closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_01",0.398107,1,30};
    			closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_02",0.398107,1,30};
    			soundClosure[] = {"closure1",0.5,"closure2",0.5};
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_01",2.51189,1,1200};
			    begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_02",2.51189,1,1200};
			    begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_03",2.51189,1,1200};
			    soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			    class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
	        class SilencedSound: BaseSoundModeType
            {
       begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1,1,300};
    begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1,1,300};
    begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1,1,300};
    soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
	class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=0.096000001;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
				};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
    			closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_01",0.398107,1,30};
    			closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_02",0.398107,1,30};
    			soundClosure[] = {"closure1",0.5,"closure2",0.5};
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_01",2.51189,1,1200};
			    begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_02",2.51189,1,1200};
			    begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_03",2.51189,1,1200};
			    soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
	        class SilencedSound: BaseSoundModeType
            {
       begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_01",1,1,300};
    begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_02",1,1,300};
    begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_03",1,1,300};
    soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
	class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=0.096000001;
			recoil = "recoil_single_primary_4outof10";
			recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
				};
			};
		};
		class GunClouds
		{
			access=0;
			cloudletaccy=0;
			cloudletalpha=0.30000001;
			cloudletanimperiod=1;
			cloudletcolor[]={1,1,1,0};
			cloudletduration=0.050000001;
			cloudletfadein=0;
			cloudletfadeout=0.1;
			cloudletgrowup=0.050000001;
			cloudletmaxyspeed=100;
			cloudletminyspeed=-100;
			cloudletshape="cloudletClouds";
			cloudletsize=1;
			deltat=0;
			initt=0;
			interval=-0.02;
			size=0.30000001;
			sourcesize=0.02;
			timetolive=0;
			class Table
			{
				class T0
				{
					color[]={1,1,1,0};
					maxt=0;
				};
			};
		};
