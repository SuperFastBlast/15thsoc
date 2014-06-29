// 15th Loadout Manager
// Written by Riouken aka Oliver

#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)


class meu_loadoutmgr_dlg {
	idd = 12487531;
	movingEnable = true;
	onLoad = "uiNamespace setVariable ['meu_loadoutmgr_dlg', (_this select 0)];_nop = [] call meu_fnc_LoMgrGuiOnload;";
	objects[] = {};
	class controlsBackground {

			class background: MEU_IGUIBack
			{
				idc = 2200;
				x = -3.5 * GUI_GRID_W + GUI_GRID_X;
				y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 47.5 * GUI_GRID_W;
				h = 19.5 * GUI_GRID_H;
			};

			class frame: MEU_RscFrame
			{
				idc = 1800;
				text = "15th Loadout Manager"; //--- ToDo: Localize;
				x = -3 * GUI_GRID_W + GUI_GRID_X;
				y = 3 * GUI_GRID_H + GUI_GRID_Y;
				w = 46.5079 * GUI_GRID_W;
				h = 18.5873 * GUI_GRID_H;
			};				
			
	};


	class controls {

			class saveBox: MEU_RscEdit
			{
				idc = 1401;
				text = "Type here to name loadout"; //--- ToDo: Localize;
				x = -2 * GUI_GRID_W + GUI_GRID_X;
				y = 4 * GUI_GRID_H + GUI_GRID_Y;
				w = 13.5 * GUI_GRID_W;
				h = 1.5 * GUI_GRID_H;
				tooltip = "Type here to name loadout";
			};
			class loLIst: MEU_RscListbox
			{
				idc = 1500;
				x = -1.88 * GUI_GRID_W + GUI_GRID_X;
				y = 5.95 * GUI_GRID_H + GUI_GRID_Y;
				w = 13.2619 * GUI_GRID_W;
				h = 14.996 * GUI_GRID_H;
			};
			class saveBtn: meu_RscButton
			{
				idc = 2400;
				text = "Save"; //--- ToDo: Localize;
				x = 12.8 * GUI_GRID_W + GUI_GRID_X;
				y = 4.01 * GUI_GRID_H + GUI_GRID_Y;
				w = 7 * GUI_GRID_W;
				h = 1.5 * GUI_GRID_H;
				action = "_nop = [] call meu_fnc_saveLoadout;";
				tooltip = "Save current loadout";
			};
			class loadBtn: meu_RscButton
			{
				idc = 2401;
				text = "Load"; //--- ToDo: Localize;
				x = 12.73 * GUI_GRID_W + GUI_GRID_X;
				y = 6.61 * GUI_GRID_H + GUI_GRID_Y;
				w = 7 * GUI_GRID_W;
				h = 3.5 * GUI_GRID_H;
				action = "_nop = [] call meu_fnc_loadLoadout";
				tooltip = "Load the selected loadout";
			};
			class deleteBtn: meu_RscButton
			{
				idc = 2402;
				text = "Delete"; //--- ToDo: Localize;
				x = 12.61 * GUI_GRID_W + GUI_GRID_X;
				y = 19.18 * GUI_GRID_H + GUI_GRID_Y;
				w = 7 * GUI_GRID_W;
				h = 1.5 * GUI_GRID_H;
				action = "_nop = [] call meu_fnc_deleteLoadout";
				tooltip = "Delete the selected loadout!";
			};
			class curgearList: MEU_RscListbox
			{
				idc = 1501;
				x = 20.96 * GUI_GRID_W + GUI_GRID_X;
				y = 5.38 * GUI_GRID_H + GUI_GRID_Y;
				w = 21.5238 * GUI_GRID_W;
				h = 15.6667 * GUI_GRID_H;
				tooltip = "Your current gear on your person.";
			};
			class gearTxt: MEU_RscText
			{
				idc = 1000;
				text = "Current Gear"; //--- ToDo: Localize;
				x = 28.25 * GUI_GRID_W + GUI_GRID_X;
				y = 3.45 * GUI_GRID_H + GUI_GRID_Y;
				w = 6.5 * GUI_GRID_W;
				h = 1.5 * GUI_GRID_H;
			};
			class exitBtn: meu_RscButton
			{
				idc = 2403;
				text = "Exit"; //--- ToDo: Localize;
				x = 36.91 * GUI_GRID_W + GUI_GRID_X;
				y = 22.4 * GUI_GRID_H + GUI_GRID_Y;
				w = 7 * GUI_GRID_W;
				h = 1.5 * GUI_GRID_H;
				action = "closeDialog 0;";
				tooltip = "Close Loadout Manager";
			};

			/*
			class RscCheckbox_2500: MEU_RscCheckbox
			{
				idc = 2500;
				x = 12.8 * GUI_GRID_W + GUI_GRID_X;
				y = 11.47 * GUI_GRID_H + GUI_GRID_Y;
				w = 7 * GUI_GRID_W;
				h = 1.5 * GUI_GRID_H;
				strings[] = 
				{
					"Respawn with - No"
				};
				checked_strings[] = 
				{
					"Respawn with - Yes"
				};
			};
			*/
	};
	
};

