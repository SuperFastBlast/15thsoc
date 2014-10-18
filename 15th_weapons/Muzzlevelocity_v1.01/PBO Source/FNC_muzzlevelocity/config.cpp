#include "\userconfig\fnc_muzzlevelocity\fnc_muzzlevelocity_config.hpp"

class CfgPatches
{
	class FNC_muzzlevelocity
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		#ifdef FNC_MUZZLEVELOCITY_31STMEU
		requiredAddons[] = {"CAWeapons","CAWeapons2","Extended_EventHandlers","NWD_ScopeFix"};
		#else
		requiredAddons[] = {"CAWeapons","CAWeapons2","Extended_EventHandlers"};
		#endif
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
		#ifdef FNC_MUZZLEVELOCITY_PLAYERONLY
		//Affects only the player
		fnc_muzzlevelocity_man_fired = "if ((_this select 0) == player and ((_this select 5) isKindOf 'BulletBase')) then {_this call fnc_muzzlevelocity_fired_preprocess;}";
		#else
		//Affects all local units
		fnc_muzzlevelocity_man_fired = "if (local (_this select 0) and ((_this select 5) isKindOf 'BulletBase')) then {_this call fnc_muzzlevelocity_fired_preprocess;}";
		#endif
	};
};

class cfgWeapons 
{
	class Rifle;
	//M16A2 is the baseline for all weapons that fire 5.56x45, muzzlevel 930 m/s
	class M16_base;
	class M4A1: M16_base
	{
		muzzleVelocityFactor = 0.946;//880 m/s
	};
	class M4SPR: M4A1
	{
		muzzleVelocityFactor = 1; //930 m/s
	};
	class G36C: Rifle 
	{
		muzzleVelocityFactor = 0.895; //832 m/s
	};
	class MG36: G36C
	{
		muzzleVelocityFactor = 0.989; //920 m/s
	};
	class G36a: Rifle
	{
		muzzleVelocityFactor = 0.989; //920 m/s
	};
	class G36K: G36a
	{
		muzzleVelocityFactor = 0.914; //850 m/s
	};
	class m8_base: Rifle
	{
		muzzleVelocityFactor = 0.870; //809 m/s
	};
	class m8_compact: m8_base
	{
		muzzleVelocityFactor = 0.787;//732 m/s
	};
	class m8_sharpshooter: m8_base
	{
		muzzleVelocityFactor = 0.967;//899 m/s
	};
	class M249: Rifle
	{
		muzzleVelocityFactor = 0.984;//915 m/s
	};
	//End of 5.56x45
	
	//M240 is the baseline for all machineguns firing 7.62x51, muzzlevel 900 m/s
	class M240;
	class Mk_48: M240
	{
		muzzleVelocityFactor = 0.930; //837 m/s, a guess based on M240
	};
	//End of 7.62x51 machineguns
	
	//AK_base(Ak74 and AK107) is the baseline for all weapons firing 5.45x39, muzzlevel 900 m/s
	class AK_BASE;
	class AKS_BASE;
	class AK_74;
	class RPK_74: AK_74
	{
		muzzleVelocityFactor = 1.067;//960 m/s
	};
	class AKS_74_U: AKS_BASE
	{
		muzzleVelocityFactor = 0.794;//715 m/s
	};
	class AKS_74_UN_kobra: AKS_BASE
	{
		muzzleVelocityFactor = 0.794;//715 m/s
	};
	//End of 5.45x39
	
	//Ak-47 is the baseline for all weapons firing 7.62x39, muzzlevel 710 m/s
	class AK_47_M;
	//End of 7.62x39
	
	//PK is the baseline for all PK/PKM machineguns, muzzlevel 850 m/s
	class PK;
	class Pecheneg: PK
	{
		muzzleVelocityFactor = 1.031;// 876 m/s
	};
	//End of PK-machineguns
	
	//Include for custom weapons
	#include "\userconfig\fnc_muzzlevelocity\fnc_muzzlevelocity_weapons.hpp"
};

class cfgMagazines
{
	class CA_Magazine;
	class 100Rnd_556x45_BetaCMag: CA_Magazine
	{
		initSpeed = 930;
	};
	class 200Rnd_556x45_M249: CA_Magazine
	{
		initSpeed = 930;
	};
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_G36: 30Rnd_556x45_Stanag
	{
		initSpeed = 930;
	};
	class 75Rnd_545x39_RPK: CA_Magazine
	{
		initSpeed = 900;
	};
};