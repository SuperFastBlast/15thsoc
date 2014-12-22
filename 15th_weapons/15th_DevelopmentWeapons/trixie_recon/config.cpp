class CfgPatches
{
	class Trixie_recon
	{
		requiredaddons[] = {"asdg_jointrails"};
		requiredversion = 1.24;
		units[] = {};
		weapons[] = {"trixie_m110","trixie_m40a3","trixie_m107","Trixie_MK12"};
		magazines[] = {"trixie_20x762_mag","Trixie_10x127_Mag","Trixie_5x762_Mag","Trixie_10x127_HE_Mag","Trixie_10x127_HEIAP_Mag","Trixie_30x556_Mk262_Mag"};
	};
};

class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
};

class CfgVehicles
{
	class NATO_Box_Base;
	class Trixie_Sniper_equipbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "Trixie's Sniper/Marksman Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrateWpns";
		maxload = 999999999;
		class TransportMagazines
		{
			class Trixie_20x762_Mag
			{
				magazine = "Trixie_20x762_Mag";
				count = 50;
			};
			class Trixie_5x762_Mag
			{
				magazine = "Trixie_5x762_Mag";
				count = 50;
			};
			class Trixie_10x127_HEIAP_Mag
			{
				magazine = "Trixie_10x127_HEIAP_Mag";
				count = 50;
			};
			class Trixie_30x556_Mk262_Mag
			{
				magazine = "Trixie_30x556_Mk262_Mag";
				count = 50;
			};
		};
		class TransportWeapons
		{
			class _xx_Trixie_M110
			{
				weapon = "Trixie_M110";
				count = 10;
			};
			class _xx_Trixie_M40A3
			{
				weapon = "Trixie_M40A3";
				count = 10;
			};
			class _xx_Trixie_M107
			{
				weapon = "Trixie_M107";
				count = 10;
			};
			class _xx_Trixie_MK12
			{
				weapon = "Trixie_MK12";
				count = 10;
			};
		};	
		class TransportItems
		{ 			class _xx_Trixie_Cyclone
			{
				name = "Trixie_Cyclone";
				count = 10;
			};
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_MuzzleSlot_556;
class ItemCore;
class ItemInfo;
class InventoryOpticsItem_Base_F;

class CfgWeapons
{
    class srifle_EBR_F;
    class mk20_base_F;
    class GM6_base_F;
    class muzzle_snds_B;
    class muzzle_snds_M;
	
	class Trixie_M110: srifle_EBR_F
	{
		scope = 2;
		author = "Trixie";
		displayname = "M110 SASS";
		descriptionshort = "M110 SASS <br/>Caliber: 7.62x51mm";
        class Library 
        {
		    libtextdesc = "The M110 Semi-Automatic Sniper System (or M110 SASS) is a semiautomatic sniper rifle used by US Army. This semiautomatic firing option is extremely highly priced by troops on the battlefield.";
	    };
        magazines[] = {"Trixie_20x762_Mag"};
        picture = "\Trixie_Recon\UI\m110ngblack.paa";
        model = "Trixie_Recon\trixie_m110_ng_black.p3d"; 
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		modes[] = {"Single","Single_Bipod"};       
		discretedistance[] = {100,200,300};
		discretedistanceinitindex = 0;
		reloadaction = "GestureReloadEBR";
		reloadmagazinesound[] = {"A3\sounds_f\weapons\reloads\new_ebr",0.630957,1,35};
		drySound[] = {"A3\sounds_f\weapons\Other\dry3",0.31622776,1,10};
		tmr_autorest_deployable = 1;
		hasbipod = 1;

		class WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 154;
			class MuzzleSlot
			{
				access = 1;
				compatibleitems[] = {"muzzle_snds_B","Trixie_Cyclone"};
				displayname = "Muzzle Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class asdg_FrontSideRail_rifles: asdg_FrontSideRail{};
			class asdg_OpticRail_rifles: asdg_OpticRail1913{};
			class asdg_OpticRail1913_long: asdg_OpticRail1913{};
		};

		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
			    closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\M110_S1",1.0,1,1200};
				begin2[] = {"trixie_recon\sound\M110_S2",1.0,1,1200};
				begin3[] = {"trixie_recon\sound\M110_S3",1.0,1,1200};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
            class SilencedSound: BaseSoundModeType
            {
               begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
               begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
               soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
			reloadTime = 0.2;
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
		class Single_Bipod: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
			    closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\M110_S1",1.0,1,1200};
				begin2[] = {"trixie_recon\sound\M110_S2",1.0,1,1200};
				begin3[] = {"trixie_recon\sound\M110_S3",1.0,1,1200};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
            class SilencedSound: BaseSoundModeType
            {
               begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
               begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
               soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
			reloadTime = 0.2;
		    dispersion = 0.0005;
		    minRange = 2;
		    minRangeProbab = 0.3;
		    midRange = 250;
		    midRangeProbab = 0.7;
		    maxRange = 500;
		  	maxRangeProbab = 0.05;
			recoil = "recoil_single_prone_ebr";
			recoilprone = "recoil_single_prone_ebr";
		};
	};
	class Trixie_MK12: mk20_base_F
	{
		scope = 2;
		author = "Trixie";
		displayname = "Mk12 Mod 0 SPR";
		descriptionshort = "Mk12 SPR <br/>Caliber: 5.56x45mm";
        class Library 
        {
		    libtextdesc = "This weapon, used by Special Forces snipers of both the US Army and US Navy, is a heavily modified precision version of the M4 Carbine. SPR initially stood for Special Purpose Receiver (an M4 SOPMOD accessory), but since the weapon became a complete system, this has been changed to Special Purpose Rifle.<br/>This type was classified by the Navy as the Mk 12 and the Army now also uses this designation.";
	    };
        magazines[] = {"Trixie_30x556_Mk262_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_M855A1_556x45_Stanag","30Rnd_M855A1_556x45_T_Stanag"};
        picture = "\Trixie_Recon\UI\MK12.paa";
        model = "Trixie_Recon\trixie_MK12.p3d"; 
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		modes[] = {"Single","Single_Bipod"};       
		discretedistance[] = {100,200,300};
		discretedistanceinitindex = 0;
		reloadaction = "GestureReloadEBR";
		drySound[] = {"A3\sounds_f\weapons\Other\dry3",0.31622776,1,10};
		reloadMagazineSound[] = {"trixie_recon\sound\M4Reload",1.0,1,10};
		tmr_autorest_deployable = 1;
		hasbipod = 1;

		class WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 100;
			class asdg_FrontSideRail_rifles: asdg_FrontSideRail{};
			class asdg_MuzzleSlot_rifles: asdg_MuzzleSlot_556{};
			class asdg_OpticRail_rifles: asdg_OpticRail1913{};
			class asdg_OpticRail1913_long: asdg_OpticRail1913{};
		};

		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
			    closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\sound1",1.0,1,1200};
				begin2[] = {"trixie_recon\sound\sound2",1.0,1,1200};
				begin3[] = {"trixie_recon\sound\sound3",1.0,1,1200};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			class SilencedSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\SF1",1.0,1,200};
				begin2[] = {"trixie_recon\sound\SF2",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.1;
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
		class Single_Bipod: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
			    closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\sound1",1.0,1,1200};
				begin2[] = {"trixie_recon\sound\sound2",1.0,1,1200};
				begin3[] = {"trixie_recon\sound\sound3",1.0,1,1200};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			class SilencedSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\SF1",1.0,1,200};
				begin2[] = {"trixie_recon\sound\SF2",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.1;
		    dispersion = 0.0005;
		    minRange = 2;
		    minRangeProbab = 0.3;
		    midRange = 250;
		    midRangeProbab = 0.7;
		    maxRange = 500;
		  	maxRangeProbab = 0.05;
			recoil = "recoil_single_prone_ebr";
			recoilprone = "recoil_single_prone_ebr";
		};
	};
	class Trixie_M40A3: srifle_EBR_F
	{
		scope = 2;
		author = "Trixie";
		displayname = "M40A5";
		descriptionshort = "USMC M40A5 <br/>Caliber: 7.62x51mm";
        class Library 
        {
		    libtextdesc = "The M40 rifle is a bolt-action sniper rifle used by the United States Marine Corps. Each M40 is built from a Remington 700 bolt-action rifle, and is modified by USMC armorers at Marine Corps Base Quantico, using components from a number of suppliers.";
	    };
        magazines[] = {"Trixie_5x762_Mag"};
        picture = "\Trixie_Recon\UI\m40a3ng.paa";
        model = "Trixie_Recon\trixie_m40a3_ng.p3d"; 
        handAnim[] = {"OFP2_ManSkeleton","\trixie_recon\anim\M24.rtm"};
		modes[] = {"Single","Single_Bipod"};       
		discretedistance[] = {100};
		discretedistanceinitindex = 0;
		reloadaction = "GestureReloadEBR";
		reloadmagazinesound[] = {"trixie_recon\sound\M24Reload", 0.501187, 1, 10};
		drySound[] = {"A3\sounds_f\weapons\Other\dry3",0.31622776,1,10};

		class WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 170;
			class MuzzleSlot
			{
				access = 1;
				compatibleitems[] = {"muzzle_snds_B","Trixie_Cyclone"};
				displayname = "Muzzle Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class asdg_FrontSideRail_rifles: asdg_FrontSideRail{};
			class asdg_OpticRail_rifles: asdg_OpticRail1913{};
			class asdg_OpticRail1913_long: asdg_OpticRail1913{};
		};

		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
			    closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\M24_s1", 1.58489, 1, 1200};
			    soundbegin[] = {"begin1", 1};
			};
	        class SilencedSound: BaseSoundModeType
            {
               begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
               begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
               soundBegin[] = {"begin1",0.5,"begin2",0.5};
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
		class Single_Bipod: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1.2,30};
			    closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.1220185,1,30};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"trixie_recon\sound\M24_s1", 1.58489, 1, 1200};
			    soundbegin[] = {"begin1", 1};
			};
	        class SilencedSound: BaseSoundModeType
            {
               begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
               begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
               soundBegin[] = {"begin1",0.5,"begin2",0.5};
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
	class Trixie_M107: GM6_base_F
	{
		scope = 2;
		author = "Trixie";
		displayname = "M107";
		descriptionshort = "Barret M107 <br/>Caliber: 12.7×99mm";
        class Library 
        {
		    libtextdesc = "The M107 is a long-range, semi-automatic sniper rifle, manufactured by Barrett Firearms Manufacturing. It is highly prized for its manageable recoil.<br/>The M107 uses 12.7x99mm cartridges and its effective range is around 1.800 m.";
	    };
        magazines[] = {"Trixie_10x127_HEIAP_Mag"};
        picture = "\Trixie_Recon\UI\m107.paa";
        model = "Trixie_Recon\trixie_m107_black.p3d"; 
        handAnim[] = {"OFP2_ManSkeleton","\trixie_recon\anim\M107b.rtm"};
		modes[] = {"Single","Single_Bipod"};       
		discretedistance[] = {100,200,300};
		discretedistanceinitindex = 0;
		reloadaction = "GestureReloadLRR";
		reloadmagazinesound[] = {"trixie_recon\sound\M107Reload", 0.501187, 1, 10};
		drySound[] = {"A3\Sounds_F\weapons\GM6Lynx\GM6_lynx_dry",0.56234133,1,15};

		class WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 325;
			class MuzzleSlot
			{
				access = 1;
				compatibleitems[] = {};
				displayname = "Muzzle Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class asdg_FrontSideRail_rifles: asdg_FrontSideRail{};
			class asdg_OpticRail_rifles: asdg_OpticRail1913{};
			class asdg_OpticRail1913_long: asdg_OpticRail1913{};
		};

		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx_gm6a",0.39810717,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx_gm6b",0.39810717,1,40};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1c",1.0,1,1200};
				begin2[] = {"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1d",1.0,1,1200};
			    soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
 			{
			    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 1;
		    dispersion = 0.0005;
		    minRange = 2;
		    minRangeProbab = 0.3;
		    midRange = 250;
		    midRangeProbab = 0.7;
		    maxRange = 500;
		  	maxRangeProbab = 0.05;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
		};
		class Single_Bipod: Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
			
			class BaseSoundModeType
			{
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx_gm6a",0.39810717,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx_gm6b",0.39810717,1,40};
		    	soundClosure[] = {"closure1",0.5,"closure2",0.5};
		    	weaponSoundEffect = "DefaultRifle";
 			};
 			class StandardSound: BaseSoundModeType
 			{
			    begin1[] = {"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1c",1.0,1,1200};
				begin2[] = {"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1d",1.0,1,1200};
			    soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
 			{
			    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 1;
		    dispersion = 0.0005;
		    minRange = 2;
		    minRangeProbab = 0.3;
		    midRange = 250;
		    midRangeProbab = 0.7;
		    maxRange = 500;
		  	maxRangeProbab = 0.05;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
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
	class B_408_Ball;
	class B_127x108_Ball;
	class B_556x45_Ball;

    class Trixie_556_Mk262_Ball: B_556x45_Ball
    {
	    hit = 15.0454;
        typicalSpeed = 868.68;
        airFriction = -0.0010867938;
        caliber = 0.855;
        deflecting = 16;
        visibleFire = 2.5;
        audibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };    
	class M118LR_Ball: B_762x51_Ball
   	{
        hit=15;
        typicalSpeed=783;
        caliber=1.05;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
        visibleFire=3;
        visibleFireTime=3;
        audibleFire=7;
        audibleFireTime=7;
    };
	class M118LR_Ball_m40: B_762x51_Ball
   	{
        hit=17;
        typicalSpeed=868;
        caliber=1.5;
        deflecting=20;
        deflectingChance = 100;
        deflectingRandomness = 0.5;
        visibleFire=3;
        visibleFireTime=3;
        audibleFire=7;
        audibleFireTime=7;
    };
	class Trixie_127_HEIAP_Ball: B_127x108_Ball
	{
		hit = 150;
		indirecthit = 20;
	    indirecthitrange = 0.2;
		caliber = 50;
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
};

class CfgMagazines {
	
	class 7Rnd_408_Mag;
	class 5Rnd_127x108_APDS_Mag;
	class 5Rnd_127x108_Mag;
	class 20Rnd_762x51_Mag;
	class 30Rnd_556x45_Stanag;
    
    class Trixie_30x556_Mk262_Mag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		ammo = "Trixie_556_Mk262_Ball";
		count = 30;
		mass = 11.8;
		lastroundstracer = 3;
        	descriptionshort = "Mk 262 77gr<br />Caliber: 5.56x45 mm STANAG<br />Rounds: 30";
        	displayname = "Mk 262";
		picture = "\Trixie_Recon\UI\m_30stanag_CA.paa";
	};
	class Trixie_20x762_Mag: 30Rnd_556x45_Stanag
    	{
        ammo = "M118LR_Ball";
	    scope = 2;
        count = 20;
        descriptionshort = "Caliber: 7.62x51 mm STANAG<br />Rounds: 20<br />Used in: M110";
        displayname = "M118LR";
        picture = "\Trixie_recon\UI\m_20hk417_ca.paa";
	    mass = 12;
    	};
	class Trixie_5x762_Mag: 7Rnd_408_Mag {
		scope = 2;
		author = "Trixie";
		count = 5;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 5<br />Used in: M40A3";
		displayname = "M118LR";
		ammo = "M118LR_Ball_m40";
		picture = "\Trixie_recon\UI\5x762_mag.paa";
		lastroundstracer = 0;
		tracersevery = 0;
		mass = 3;
	};
	class Trixie_10x127_HEIAP_Mag: 5Rnd_127x108_APDS_Mag {
		scope = 2;
		author = "Trixie";
		count = 10;
		descriptionshort = "Caliber: 12.7x99mm HEIAP<br />Rounds: 10<br />Used in: Barret M107";
		displayname = "Raufoss Mk 211";
		ammo = "B_127x108_APDS";
		picture = "\Trixie_recon\UI\50BMGx10_heiap_mag.paa";
		lastroundstracer = 0;
		tracersevery = 0;
		mass = 18;
	};
};