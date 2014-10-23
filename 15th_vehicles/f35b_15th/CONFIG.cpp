#define private		0
#define protected	1
#define public		2

#define true		1
#define false		0

#define TEast		0
#define TWest		1
#define TGuerrila	2
#define TCivilian	3
#define TSideUnknown	4
#define TEnemy		5
#define TFriendly	6
#define TLogic		7




class CfgPatches 
{
	class JS_JC_F35
	{
		units[] = {"JS_JC_F35B"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Air_F","js_jc_fa18"};
	};
};

class IGUIBack;	// External class reference
class RscFrame;	// External class reference
class RscPicture;	// External class reference
class RscCombo;	// External class reference
class RscButtonMenu;	// External class reference
class RscMapControl;	// External class reference
class RscObject;	// External class reference
class RscText;	// External class reference
class RscHTML;	// External class reference
class RscTextCheckbox;	// External class reference
class RscEdit;	// External class reference

class F35_RscButtonMenu : RscButtonMenu {
	animTextureNormal = "\js_jc_fa18\UI\FA18_GUI_main_button_normal_ca.paa";
	animTextureDisabled = "\js_jc_fa18\UI\FA18_GUI_main_button_disabled_ca.paa";
	animTextureOver = "\js_jc_fa18\UI\FA18_GUI_main_button_over_ca.paa";
	animTextureFocused = "\js_jc_fa18\UI\FA18_GUI_main_button_focus_ca.paa";
	animTexturePressed = "\js_jc_fa18\UI\FA18_GUI_main_button_down_ca.paa";
	animTextureDefault = "\js_jc_fa18\UI\FA18_GUI_main_button_default_ca.paa";
	colorBackground[] = {0, 0, 0, 0.8};
	colorBackground2[] = {1, 1, 1, 0.5};
	color[] = {1, 1, 1, 1};
	color2[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
};

class F35_TARGETING_UI {
	idd = 3000;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['GPS_TGT_Display', (_this select 0)]";
	
	class controlsBackground {
		class F35_TARGETING_MAP : RscMapControl {
			idc = 1200;
			maxSatelliteAlpha = 0;
			x = "0.358265 * safezoneW + safezoneX";
			y = "0.259146 * safezoneH + safezoneY";
			w = "0.28211 * safezoneW";
			h = "0.464952 * safezoneH";
		};
	};
	
	class Controls {
		class F35_MFD_OVERLAY_LOADOUTS : RscPicture {
			idc = 1201;
			text = "\js_jc_fa18\UI\FA18_GUI_mfd_overlay.paa";
			x = "0.318894 * safezoneW + safezoneX";
			y = "0.211536 * safezoneH + safezoneY";
			w = "0.362204 * safezoneW";
			h = "0.579732 * safezoneH";
		};
		
		class F35_SET_TGT_BUTTON_1610 : F35_RscButtonMenu {
			idc = 1610;
			x = "0.330706 * safezoneW + safezoneX";
			y = "0.345964 * safezoneH + safezoneY";
			w = "0.0183724 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Set GPS/INS target position";
			action = "[] execVM""f35b_15th\scripts\TARGETING_SYSTEM\functions\FA18_GPS_TARGETING_SYS.sqf""";
		};
		
		class F35_CLEAR_TGT_BUTTON_1611 : F35_RscButtonMenu {
			idc = 1611;
			x = "0.330704 * safezoneW + safezoneX";
			y = "0.415981 * safezoneH + safezoneY";
			w = "0.0183724 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Clear current GPS/INS target";
			action = "call compile preprocessFileLineNumbers 'f35b_15th\scripts\TARGETING_SYSTEM\functions\FA18_GPS_TARGETING_CANCEL.sqf'";
		};
		
		class F35_CLOSE_DIALOG_BUTTON_1613 : F35_RscButtonMenu {
			idc = 1613;
			x = "0.574804 * safezoneW + safezoneX";
			y = "0.22554 * safezoneH + safezoneY";
			w = "0.0183724 * safezoneW";
			h = "0.0280066 * safezoneH";
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
		
		class F35_INFO_TXT_1 : RscText {
			idc = 5001;
			colorText[] = {0, 0, 0, 1};
			text = "SET TGT";
			x = "0.358265 * safezoneW + safezoneX";
			y = "0.348767 * safezoneH + safezoneY";
			w = "0.0551196 * safezoneW";
			h = "0.0224054 * safezoneH";
		};
		
		class F35_INFO_TXT_2 : RscText {
			idc = 5002;
			colorText[] = {0, 0, 0, 1};
			text = "CLEAR TGT";
			x = "0.358267 * safezoneW + safezoneX";
			y = "0.418782 * safezoneH + safezoneY";
			w = "0.0721808 * safezoneW";
			h = "0.0224054 * safezoneH";
		};
		
		class F35_INFO_TXT_3 : RscText {
			idc = 5003;
			colorText[] = {0, 0, 0, 1};
			text = CLOSE;
			x = "0.564305 * safezoneW + safezoneX";
			y = "0.264748 * safezoneH + safezoneY";
			w = "0.0446204 * safezoneW";
			h = "0.0224054 * safezoneH";
		};
		
		class F35_INFO_TXT_4 : RscText {
			idc = 5004;
			colorText[] = {0, 0, 0, 1};
			text = "GPS TGT NOT SET/ACTIVE";
			x = "0.41076 * safezoneW + safezoneX";
			y = "0.687652 * safezoneH + safezoneY";
			w = "0.169278 * safezoneW";
			h = "0.0196048 * safezoneH";
		};
	};
};

#include "CfgAnimations.hpp"

class Eventhandlers;		// External class reference

#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgSounds.hpp"

class CfgVehicles 
{


	class Plane;			// External class reference
	class PlaneWreck;		// External class reference 
	class thingX;			// External class reference
	class Motorcycle;		// External class reference
	class ArtilleryTarget;		// External class reference

	#include "Cfg_F35B.hpp"
	#include "Cfg_F35_MISC.hpp"


	
};






