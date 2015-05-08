
#define VERSION_DATE	05.27.2015 // version

class CfgPatches
{
	class meu_blufor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		versionDesc = "meu_blufor";
		version = VERSION_DATE;
		author[] = {"15th Mod Team"};
	};
};

class CfgFunctions 
{
	class meu
	{
		class checks
		{
			file = "meu_blufor\functions";
			class checkMods {};
			class bitchinBetty {ext = ".fsm";};
		};
	};
};

class CfgSounds
{
	class meu_alititude
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\A10_VMU_Altitude.ogg", 3, 1 };
	};
	class meu_pullup
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\A10_VMU_Pullup.ogg", 3, 1 };
	};
};

class CfgVehicles
{
	// fixes stupid missing config data errors - caused by AGM-FCS
	class Van_01_transport_base_F;
	class Van_01_civil_transport_base_F: Van_01_transport_base_F {};
	
	// testing bitchinBetty via EventHandlers
	class I_Plane_Fighter_03_CAS_F;
	class meu_plane_bitchinBetty: I_Plane_Fighter_03_CAS_F
	{
		displayName = "Bitchin' Betty Text Plane";
		side = 1;
		faction = "BLU_F";
		hiddenSelectionsTextures[] = {"#(rgb,8,8,3)color(0,0,0,1)","#(rgb,8,8,3)color(0,0,0,1)"};
		typicalCargo[] = {"B_pilot_F"};
		class Eventhandlers
		{
			init = "if (!isNil {meu_fnc_bitchinBetty}) then {_this spawn meu_fnc_bitchinBetty;};";
		};
	};
};

