#define true	1
#define false	0

class CfgPatches {
	class tmr_disposable {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {A3_Weapons_F, A3_UI_F};
		version = 0.1;
		author[] = {"Taosenai"};
		authorUrl = "http://www.ryanschultz.org/tmr/";
	};
};

class CfgMods {
	class ej_disposable {
		dir = "ej_disposable";
		name = "TMR: Disposable Launchers";
		picture = "";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "http://www.ryanschultz.org/tmr/";
	};
};

class Extended_PostInit_EventHandlers {
	class ej_disposable {
		clientInit = "call compile preProcessFileLineNumbers '\IARal\ej_disposable\init.sqf'";
	};
};

class Extended_FiredBIS_EventHandlers {
	class CAManBase {
		class ej_disposable {
			clientFiredBIS = "_this call tmr_disposable_fnc_firedEH";
		};
	};
};

class CfgMagazines {
	class CA_LauncherMagazine;
	class R_PG32V_F;
	class TMR_DisposableDummy : R_PG32V_F {
		scope = 1;
		
		displayname = "Empty";
		displaynameshort = "Empty";
		descriptionshort = "Empty";
		
		count = 0;
	};
};

class CfgWeapons {
	class Launcher_Base_F;

	class launch_NLAW_F : Launcher_Base_F {
		ej_disposable = 1;
		ej_disposableUsed = "ej_launch_m136_used";
	};

	class ej_launch_m136 : launch_NLAW_F {
		tmr_disposable = 1;
		tmr_disposableUsed = "ej_launch_m136_used";
	};

	class ej_launch_m136_used : ej_launch_m136 {
		descriptionshort = "Empty launcher tube";
		displayname = "M136 AT4 CS (used)";

		magazines[] = {"TMR_DisposableDummy"};
	};
};