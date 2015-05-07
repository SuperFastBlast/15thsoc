
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
			class airWarnings {ext = ".fsm";};
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
};