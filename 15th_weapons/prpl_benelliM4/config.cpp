
class CfgPatches
{
	class prpl_benelliM4_wps
	{
		units[] = {};
		weapons[] = {"prpl_benelli"};
		requiredVersion = 0.3;
		requiredAddons[] = {"A3_Weapons_F"};
		version = "0.6";
	};
};

class CfgRecoils
{
	access = 1;
		
	super90_recoil[] = {
		0,0,0,
		0.04,0.08,0.04,
		0.04,0.04,0.02,
		0.04,0.02,0.01,
		0.04,0.01,0.005,
		0.04,0.005,0.002,
		0.04,-0.01,-0.004,
		0.04,-0.005,-0.02,
		0.04,0,0
	};
};

#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"


