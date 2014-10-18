
enum 
{
	destructengine=2,
	destructdefault=6,
	destructwreck=7,
	destructtree=3,
	destructtent=4,
	stabilizedinaxisx=1,
	stabilizedinaxesxyz=4,
	stabilizedinaxisy=2,
	stabilizedinaxesboth=3,
	destructno=0,
	stabilizedinaxesnone=0,
	destructman=5,
	destructbuilding=1
};

class CfgPatches
{
	class FNC_muzzlevelocity
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {};
	};
};

class Extended_PostInit_EventHandlers
{
	class FNC_muzzlesvelocity_fired
	{
		init = "fnc_muzzlevelocity_fired_preprocess = compile preProcessFileLineNumbers 'FNC_muzzlevelocity\s\fired.sqf'";
	};
};

class Extended_Fired_EventHandlers
{
	class CAManBase
	{
		fnc_muzzlevelocity_man_fired = "if ((_this select 0) == player and ((_this select 5) isKindOf 'BulletBase')) then {_this call fnc_muzzlevelocity_fired_preprocess;}";
	};
};

class cfgWeapons 
{
	class Rifle;
	class arifle_MX_F;
	class arifle_mas_hk416: arifle_MX_F
	{
		muzzleVelocityFactor = 0.990;
	};
class arifle_mas_m4: arifle_mas_hk416  //Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936; 	// (muzzlevelocity of my weapon)/(muzzle velocity of "baseweapon" for the calibre) = muzzleVelocityFactor
};
class arifle_mas_m4_gl: arifle_mas_m4 // Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936;
};
class M4Car: arifle_mas_m4 // Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936;
};
class M4203: arifle_mas_m4_gl // Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936;
};
class arifle_mas_m16: arifle_mas_hk416 // Needs to be 948 m/s
{
	muzzleVelocityFactor = 1.025;
};
class arifle_mas_m16_gl: arifle_mas_m16 // Needs to be 948 m/s
{
	muzzleVelocityFactor = 1.025;
};	
class ej_IARal_base: arifle_mas_hk416
{
	muzzleVelocityFactor = 0.946; // Needs to be 890 M/S
};
};