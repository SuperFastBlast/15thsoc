class CfgPatches
{
	class M1911
	{
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		weapons[] = {"M1911"};
		magazines[] = {};
	
	};
};
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class hgun_ACPC2_F;
	class M1911: hgun_ACPC2_F
	{
		scope = 2;
		displayname = "M1911";
		model = "\M1911\Colt1911.p3d";
		picture = "\M1911\acpc2_x_ca.paa";
		magazines[] = {"T2AAF_45ACP"};
		descriptionshort = "Pistol<br />Caliber: .45 ACP";
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1,30};
			closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",1.03514,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"\15th_MEU_Sounds\M1911_s1",0.562341,1,1000};
			begin2[] = {"\15th_MEU_Sounds\M1911_s2",0.562341,1,1000};
			soundBegin[] = {"begin1",0.4,"begin2",0.3};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.562341,1,600};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.562341,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		drySound[] = {"\15th_MEU_Sounds\M1911_dry",1,1,20};
		reloadMagazineSound[] = {"\15th_MEU_Sounds\M1911_reload",1,1,30};
		class WeaponSlotsInfo
		{
			mass = 30.5;
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
