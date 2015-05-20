
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
			class amphibious {};
		};
	};
};

class CfgSounds
{	//-- TODO: Macro these --//
	class meu_alititude
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Altitude.ogg", 2, 1 };
	};
	class meu_pullup
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Pullup.ogg", 2, 1 };
	};
	class meu_missile12H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile12H.ogg", 2, 1 };
	};
	class meu_missile12L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile12L.ogg", 2, 1 };
	};
	class meu_missile1H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile1H.ogg", 2, 1 };
	};
	class meu_missile1L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile1L.ogg", 2, 1 };
	};
	class meu_missile2H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile2H.ogg", 2, 1 };
	};
	class meu_missile2L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile2L.ogg", 2, 1 };
	};
	class meu_missile3H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile3H.ogg", 2, 1 };
	};
	class meu_missile3L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile3L.ogg", 2, 1 };
	};
	class meu_missile4H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile4H.ogg", 2, 1 };
	};
	class meu_missile4L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile4L.ogg", 2, 1 };
	};
	class meu_missile5H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile5H.ogg", 2, 1 };
	};
	class meu_missile5L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile5L.ogg", 2, 1 };
	};
	class meu_missile3H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile3H.ogg", 2, 1 };
	};
	class meu_missile6L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile6L.ogg", 2, 1 };
	};
	class meu_missile7H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile7H.ogg", 2, 1 };
	};
	class meu_missile7L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile7L.ogg", 2, 1 };
	};
	class meu_missile8H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile8H.ogg", 2, 1 };
	};
	class meu_missile8L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile8L.ogg", 2, 1 };
	};
	class meu_missile9H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile9H.ogg", 2, 1 };
	};
	class meu_missile9L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile9L.ogg", 2, 1 };
	};
	class meu_missile3H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile3H.ogg", 2, 1 };
	};
	class meu_missile10L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile10L.ogg", 2, 1 };
	};
	class meu_missile11H
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile11H.ogg", 2, 1 };
	};
	class meu_missile11L
	{
		titles[] = {};
		sound[] = { "meu_blufor\sounds\Missile11L.ogg", 2, 1 };
	};
};

class DefaultEventHandlers;
class CfgVehicles
{
	//-- fixes stupid missing config data errors - caused by AGM-FCS --//
	class Van_01_transport_base_F;
	class Van_01_civil_transport_base_F: Van_01_transport_base_F {};
		
	//-- inheriting AAVB to update it - had issues repacking mod :( --//
	#include "configs\aavb.hpp"
	
	//-- test plane for bitchinBetty via EventHandlers --//
	class I_Plane_Fighter_03_CAS_F;
	class meu_plane_bitchinBetty: I_Plane_Fighter_03_CAS_F
	{
		displayName = "Bitchin' Betty Test Plane";
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

