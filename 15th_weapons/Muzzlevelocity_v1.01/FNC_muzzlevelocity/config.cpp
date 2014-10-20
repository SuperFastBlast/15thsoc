class CfgPatches
{
	class FNC_muzzlevelocity
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"A3_Weapons_F","mas_weapons"};
	};
};

class Extended_PostInit_EventHandlers
{
	class FNC_muzzlesvelocity_fired
	{
		init = "fnc_muzzlevelocity_fired_preprocess = compile preProcessFileLineNumbers 'FNC_muzzlevelocity\s\fired.sqf'";
	};
};


class cfgWeapons 
{
	//M16A2 is the baseline for all weapons that fire 5.56x45, muzzlevel 930 m/s
	class arifle_MX_F;
	class arifle_mas_hk416;
	class M4Car203: arifle_mas_hk416
	{
		muzzleVelocityFactor = 0.965;//880 m/s
	};
	class M4Car: arifle_mas_hk416
	{
		muzzleVelocityFactor = 0.565; //930 m/s
	};
	class arifle_mas_m16: arifle_mas_hk416 
	{
		muzzleVelocityFactor = 2.0; //832 m/s
	};
	class arifle_mas_m16_gl: arifle_mas_hk416 
	{
		muzzleVelocityFactor = 1.067; //832 m/s
	};
	class arifle_mas_m4: arifle_mas_hk416 
	{
		muzzleVelocityFactor = 0.965; //832 m/s
	};
	class arifle_mas_m4_gl: arifle_mas_hk416 
	{
		muzzleVelocityFactor = 0.965; //832 m/s
	};
};
class cfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 30Rnd_M_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		initSpeed = 930;
    };
};