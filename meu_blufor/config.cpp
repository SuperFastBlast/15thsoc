
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
			class incomingMissile {};
		};
	};
};

class CfgSounds
{

	#define SOUNDPATH(FILE) __EVAL("meu_blufor\sounds\" + FILE)
	#define CLASSSOUND(CLASSNAME,PATH,NUM1,NUM2) \
		class CLASSNAME { \
			titles[] = {}; \
			sound[] = { SOUNDPATH(PATH), NUM1, NUM2 }; \
		};
	#define SOUNDVOLUME 4
	
	CLASSSOUND(meu_altitude,"Altitude.ogg",1,1)
	CLASSSOUND(meu_pullup,"Pullup.ogg",1,1)
	CLASSSOUND(meu_missile1H,"Missile1H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile1L,"Missile1L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile2H,"Missile2H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile2L,"Missile2L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile3H,"Missile3H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile3L,"Missile3L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile4H,"Missile4H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile4L,"Missile4L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile5H,"Missile5H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile5L,"Missile5L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile6H,"Missile6H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile6L,"Missile6L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile7H,"Missile7H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile7L,"Missile7L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile8H,"Missile8H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile8L,"Missile8L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile9H,"Missile9H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile9L,"Missile9L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile10H,"Missile10H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile10L,"Missile10L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile11H,"Missile11H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile11L,"Missile11L.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile12H,"Missile12H.ogg",SOUNDVOLUME,1)
	CLASSSOUND(meu_missile12L,"Missile12L.ogg",SOUNDVOLUME,1)
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
		soundIncommingMissile[] = {"",0.1,1.5};
	};

};

