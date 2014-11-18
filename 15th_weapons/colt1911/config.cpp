#include "\ca\weapons_E\basicdefines.hpp"
class CfgPatches
{
	class CAWeapons_E_Colt1911
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons_Colt1911"};
	};
};
class CfgWeapons
{
	class M9;
	class Colt1911: M9
	{
		model="ca\weapons_E\colt1911\Colt1911";
		
		htMin = 1;
    htMax = 300;
    afMax = 0;
    mfMax = 0;
    mFact = 1;
    tBody = 100;
	};
};