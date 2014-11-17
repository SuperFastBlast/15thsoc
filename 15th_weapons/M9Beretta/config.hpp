class CfgPatches
{
	class M9Beretta
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {"M882_9mm"};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class hgun_P07_F;
	class M9Beretta: hgun_P07_F
	{
		scope = 2;
		displayname = "M9 Beretta";
		model = "\M9Beretta\M9_Beretta.p3d";
		picture = ;
		magazines[] = {"M882_9mm"};
		descriptionshort = "M9 Beretta<br />Caliber: 9x21 mm";
		class Library
		{
			libtextdesc = "The Beretta M9, formally Pistol, Semiautomatic, 9mm, M9, is a 9×19mm Parabellum pistol of the United States military adopted in 1985. It is essentially a military specification Beretta 92F, later the 92FS. The M9 won a competition in the 1980s to replace the M1911A1 as the primary sidearm of the U.S. military, beating many other contenders. It officially entered service in 1990.";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.03514,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\M9Beretta\sounds\m9_s1",0.562341,1,700};
			soundBegin[] = {"begin1",0.33};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\mas_us_rifle\sounds\usp_dry",1,1,20};
		reloadMagazineSound[] = {"\mas_us_rifle\sounds2\M9R.wss",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 25;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_MRD","optic_Yorris"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_L"};
			};
		};
	};
class CfgAmmo
{
class B_9x21_Ball;
	class M882_9mm: B_9x21_Ball
   	 {
   	hit = 9;
        cartridge = "FxCartridge_65_caseless";
        cost = 100;
        typicalSpeed = 390;
        airFriction = -0.0014;
        caliber = 1.7;
        deflecting = 45;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 1;
        visibleFire = 3;
        audibleFire = 5;
    };
};
class CfgMagazines
{
class 16Rnd_9x21_Mag;
	class M882_9mm: 16Rnd_9x21_Mag
    	{
	mass = 1;
        scope = 2;
        ammo = "M882_9mm";
        count = 15;
        displayName = "M882 9mm Mag";
        picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
        descriptionshort = "Caliber: 9x19 mm STANAG<br />Rounds: 15<br />Used in: Beretta M9";
        initSpeed = 390;
    	};