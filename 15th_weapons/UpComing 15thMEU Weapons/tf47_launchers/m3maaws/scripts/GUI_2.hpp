//#include "\tf47_launchers\m3maaws\scripts\defines.hpp"
//--- AIRBURSTCFG

class FLARECFG {
idd = -1;
movingenable = false;
onLoad = "uiNamespace setVariable[""FlareConfigDialog"", _this select 0]";

class ControlsBackground {
class RscText_2000: RscText
{
	idc = 1000;
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.1078 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};
class RscText_2001: RscText
{
	idc = 1001;
	text = "Flare Config"; //--- ToDo: Localize;
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.9};
};
class RscFrame_2800: RscFrame
{
	idc = 1800;
	x = 0.329844 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.044 * safezoneH;
//	sizeEx = 0.9 * GUI_GRID_H;
};
class RscText_2002: RscText
{
	idc = 1002;
	text = "Distance at which the flare"; //--- ToDo: Localize;
	x = 0.329844 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0};
//	sizeEx = 0.8 * GUI_GRID_H;
};
class RscText_2003: RscText
{
	idc = 1003;
	x = 0.324687 * safezoneW + safezoneX;
	y = 0.4175 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.011 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.9};
};
class RscText_2004: RscText
{
	idc = 1004;
	text = "should eject"; //--- ToDo: Localize;
	x = 0.329844 * safezoneW + safezoneX;
	y = 0.3878 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0};
//	sizeEx = 0.8 * GUI_GRID_H;
};
};

class Controls {
class RscButton_2600: RscButton
{
	idc = 1600;
	text = "500"; //--- ToDo: Localize;
	x = 0.329843 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.1,0.7,0.9,0.5};
	colorActive[] = {0.1,0.7,0.9,0.5};
	action = "player setVariable ['FlareRange', 500]; closeDialog 0";
};
class RscButton_2601: RscButton
{
	idc = 1601;
	text = "ESC"; //--- ToDo: Localize;
	x = 0.432968 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.1,0.7,0.9,0.5};
	colorActive[] = {0.1,0.7,0.9,0.5};
	action = "closeDialog 0;";
};
class RscButton_2602: RscButton
{
	idc = 1602;
	text = "800"; //--- ToDo: Localize;
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.1,0.7,0.9,0.5};
	colorActive[] = {0.1,0.7,0.9,0.5};
	action = "player setVariable ['FlareRange', 800]; closeDialog 0";
};
class RscButton_2603: RscButton
{
	idc = 1603;
	text = "1100"; //--- ToDo: Localize;
	x = 0.381406 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.1,0.7,0.9,0.5};
	colorActive[] = {0.1,0.7,0.9,0.5};
	action = "player setVariable ['FlareRange', 1100]; closeDialog 0";
};
class RscButton_2604: RscButton
{
	idc = 1604;
	text = "1400"; //--- ToDo: Localize;
	x = 0.407187 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.1,0.7,0.9,0.5};
	colorActive[] = {0.1,0.7,0.9,0.5};
	action = "player setVariable ['FlareRange', 1400]; closeDialog 0";
};
class RscButton_2605: RscButton
{
	idc = 1605;
	text = "1700"; //--- ToDo: Localize;
	x = 0.432969 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.1,0.7,0.9,0.5};
	colorActive[] = {0.1,0.7,0.9,0.5};
	action = "player setVariable ['FlareRange', 1700]; closeDialog 0";
};
};

};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by BlackPixxel, v1.063, #Tigali)
////////////////////////////////////////////////////////