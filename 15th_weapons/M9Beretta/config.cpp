class CfgPatches
{
	class M9Beretta
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {"M9Beretta"};
		magazines[] = {};
	};
};
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class hgun_P07_F;
	class M9Beretta: hgun_P07_F
	{
		scope = 2;
		displayname = "M9 Beretta";
		model = "\M9Beretta\M9_Beretta.p3d";
		picture = "\M9Beretta\m9_x_ca.paa";
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
			begin1[] = {"\15th_MEU_Sounds\m9_s1",0.562341,1,700};
			begin2[] = {"\15th_MEU_Sounds\m9_s1",0.562341,1,700};
			soundBegin[] = {"begin1",0.33,"begin2",0.33};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\15th_MEU_Sounds\M9_dry",1,1,20};
		reloadMagazineSound[] = {"\15th_MEU_Sounds\M9R",1,1,30};
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
};