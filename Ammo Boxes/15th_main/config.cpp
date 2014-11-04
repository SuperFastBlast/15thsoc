// 15thMEU(SOC) mod pack for Arma 3
// http://www.15thmeu.net/


#define PREFIX meu_main
#define COMPONENT main
#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 0
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define REQUIRED_VERSION 1.0
#include "\15th_main\script_macros_common.hpp"


class CfgPatches
{
	class PREFIX  // meu
		{
			units[] = {};
			weapons[] = {};
			requiredVersion = REQUIRED_VERSION;
			requiredAddons[] = {"CBA_MAIN"};
			versionDesc = "15thMEU(SOC) Mod Pack";
			versionAct = "";
			VERSION_CONFIG;
			author[] = {"15thMEU(SOC) Mod Team"};
			authorUrl = "http://www.15thmeu.net/";
		};
};

class CfgSettings 
{
	class CBA 
	{
		class Versioning 
		{
			class PREFIX 
			{
				class Dependencies 
				{
					CBA[] = {"cba_main", { 1,0,0 },"true"};
				};
			};
		};
	};
};

class CfgMods {
	class PREFIX {
		dir = "@15thMEU";
		name = "15thMEU(SOC) Mod Pack";
		picture = "";
		hidePicture = "True";
		hideName = "True";
		actionName = "Website";
		action = "http://www.15thmeu.net/";
		description = "";
	};
};
class Extended_PostInit_EventHandlers
{
	class PREFIX
	{
		clientInit = QUOTE(call COMPILE_FILE2(\15th_main\player_init.sqf));

		//serverInit = QUOTE(call COMPILE_FILE2(\15th_main\server_init.sqf));
	};
};



class CfgWeapons
{
	
};

class CfgNotifications
{
	

};




class CfgVehicles
{

	
};


#include <\15th_main\lomgr\meu_gui_parents.hpp>

#include <\15th_main\lomgr\loadoutmgr_gui.hpp>



