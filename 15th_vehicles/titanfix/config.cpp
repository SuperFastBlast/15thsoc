/* 
* Burnes M1A2
* by Cpl Burnes
*
* fixes by Fight9
*/


class CfgPatches 
{
	class titanfix
	{
		requiredAddons[] = {"A3_Armor_F_Beta","Burnes_M1A2_Public"};
		units[] = {};
		weapons[] = {};
	};
};

class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Tank;
	class Tank_F;
	class Burnes_M1A2_base;
	class Burnes_M1A2_MEU_base;
	class Burnes_M1A1_MEU_01_Public: Burnes_M1A2_MEU_base
	{
		class EventHandlers: DefaultEventhandlers 
		{
			init = "(_this select 0) execVM ""\titanfix\init.sqf"";";
		};
		class UserActions {};
	};
	class Burnes_M1A1_MEU_02_Public: Burnes_M1A2_MEU_base
	{
		class EventHandlers: DefaultEventhandlers
		{
			init = "(_this select 0) execVM ""\titanfix\init.sqf"";";
		};
		class UserActions {};
	};
};