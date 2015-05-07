
#define VERSION_DATE	05.27.2015 // release date

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
			file = "meu_main\functions";
			class checkMods {};
		};
	};
};