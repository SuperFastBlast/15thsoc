
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
	class arifle_MX_GL_F;
class CUP_arifle_M4A1_black: arifle_MX_F  //Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936; 	// (muzzlevelocity of my weapon)/(muzzle velocity of "baseweapon" for the calibre) = muzzleVelocityFactor
};
class CUP_arifle_M4A1_BUIS_GL: arifle_MX_GL_F // Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936;
};
class CUP_arifle_M4CAR_black: CUP_arifle_M4A1_black // Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936;
};
class CUP_arifle_M4CAR_BUIS_GL: CUP_arifle_M4A1_BUIS_GL // Needs to be 880 M/S
{
	muzzleVelocityFactor = 0.936;
};
class CUP_arifle_M16A4_Base: CUP_arifle_M4A1_black // Needs to be 948 m/s
{
	muzzleVelocityFactor = 1.025;
};
class CUP_arifle_M16A4_GL: CUP_arifle_M4A1_BUIS_GL // Needs to be 948 m/s
{
	muzzleVelocityFactor = 1.025;
};	
class ej_IARal_base: CUP_arifle_M4A1_black
{
	muzzleVelocityFactor = 0.946; // Needs to be 890 M/S
};
};