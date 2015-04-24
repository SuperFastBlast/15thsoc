// 15th loadout manager 2
// fight9
// built on Riouken's framework


//#include "meu_ammoBoxes\script_macros.hpp"

// messages
#define MESSAGE_HEADER			(format ["<t color='%1' size='1.2' underline='1'>15TH LOADOUT MANAGER 2</t>",COLOR_MU_BG_HTML])

// googles/earbuds - gonna be defined in main script_macros
#ifndef ALLOWED_GOGGLES
	#define ALLOWED_GOGGLES		["G_B_Diving","AV_ESS_blk","AV_ESS_blk_clr","AV_ESS_tan","AV_ESS_tan_clr","AV_ESS_grn","AV_ESS_grn_clr","G_Aviator","G_Shades_Green","G_Shades_Red","G_Shades_Black","G_Shades_Blue","G_Lowprofile","G_Sport_BlackWhite","G_Sport_Blackyellow","G_Sport_Red","G_Sport_Blackred"]
#endif
#ifndef MEU_CLASS_EARBUDS
	#define MEU_CLASS_EARBUDS	"AGM_EarBuds"
	#define MEU_EARBUD_CHECK	player getVariable ["AGM_hasEarPlugsin", false]
#endif 


// Main Functions
#define FUNCTION_NAME 			meu_fnc_manager
#define GUI_VARIABLE			"meu_managerGUI"
#define CALL_FNC(SUB,PARAM) 	[SUB,PARAM] call FUNCTION_NAME
#define SPAWN_FNC(SUB,PARAM) 	[SUB,PARAM] spawn FUNCTION_NAME
#define STR_CALL_FUNC(SUB,PARAM) #[SUB,PARAM] call FUNCTION_NAME

// functions
#define ACTION_NAME 			format ["<img image='%1' /> 15th Loadout Manager",ICON_CRATE]//MU_BG_TEXT("15th Loadout Manager")
//#define BLUE_TEXT(A)			QUOTE(<t color='#85a2af'>A</t>)
#define MU_BG_TEXT(A)			(format ["<t color='%1'>%2</t>",COLOR_MU_BG_HTML,A])
#define WARN_TEXT(A)			(format ["<t color ='%1'>%2</t>",COLOR_WARNING_HTML,A])
#define ERROR_TEXT(A)			(format ["<t color ='%1'>%2</t>",COLOR_ERROR_HTML,A])
#define CTRL(CTRL)				(_display displayCtrl CTRL)
#define GUI_REFRESH(INDEX)		CALL_FNC("listSaved",[INDEX]);{ CALL_FNC(_x,[]) } forEach ["listGear","listDefault"];
#define QUOTE(A) 				#A
#define CHECK_TYPE(A,B)			typeName A == typeName B
#define ICON_HELPTIPS			"\A3\ui_f\data\map\markers\military\warning_CA.paa"
#define ICON_FAVORITE			"\A3\ui_f\data\map\GroupIcons\badge_gs.paa" //markers\military\flag_ca.paa" //start_CA.paa"
#define ICON_CRATE				"\A3\ui_f\data\map\VehicleIcons\iconcrate_ca.paa" 

// gui profile colors <-- TODO: Redo this better
#define COLOR_ERROR_HTML		(["IGUI","ERROR_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML
#define COLOR_WARNING_HTML		(["IGUI","WARNING_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML
#define COLOR_MU_BG_HTML		(["GUI","BCG_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML
#define COLOR_IG_BG_HTML		(["IGUI","BCG_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML

#define COLOR_ERROR_ARRAY		["IGUI","ERROR_RGB"] call bis_fnc_displaycolorget
#define COLOR_WARNING_ARRAY		["IGUI","WARNING_RGB"] call bis_fnc_displaycolorget
#define COLOR_MU_BG_ARRAY		["GUI","BCG_RGB"] call bis_fnc_displaycolorget
#define COLOR_IG_BG_ARRAY		["IGUI","BCG_RGB"] call bis_fnc_displaycolorget

#define COLOR_ERROR_CONFIG		{"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.69])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.75])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.5])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',0.8])"}
#define COLOR_WARNING_CONFIG	{"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.69])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.75])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"}
#define COLOR_MU_BG_CONFIG		{"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"}
#define COLOR_IG_BG_CONFIG		{"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"}

// controls
#define MEU_CTRL_GEARTREE		15040
#define MEU_CTRL_SAVEDLIST		15041
#define MEU_CTRL_DEFAULTLIST	15042
#define MEU_CTRL_HELPTIP		15020
#define MEU_CTRL_FAVORITE		15021
#define MEU_CTRL_PREVTREE		15030
#define MEU_CTRL_PREVBG			15031
#define MEU_CTRL_PREVCLOSE		15032
#define MEU_CTRL_PREVTEXT		15033
#define MEU_CTRL_BUTTONLOAD		15050
#define MEU_CTRL_BUTTONDELETE	15051
#define MEU_CTRL_BUTTONDEFAULT	15052
#define MEU_CTRL_BUTTONSAVE		15053
#define MEU_CTRL_BUTTONCLOSE	15054
#define MEU_CTRL_SAVEBG			15060
#define MEU_CTRL_SAVEEDIT		15061
#define MEU_CTRL_SAVESAVE		15062
#define MEU_CTRL_SAVECANCEL		15063
#define MEU_CTRL_SAVETEXT		15064
#define MEU_CTRL_SAVECLEAR		15065
#define MEU_CTRL_SAVERENAME		15066

// groups
#define MEU_SAVE_GROUP 			[MEU_CTRL_SAVEBG,MEU_CTRL_SAVEEDIT,MEU_CTRL_SAVESAVE,MEU_CTRL_SAVECANCEL,MEU_CTRL_SAVETEXT,MEU_CTRL_SAVECLEAR,MEU_CTRL_SAVERENAME]
#define MEU_DISABLE_GROUP		[MEU_CTRL_GEARTREE,MEU_CTRL_SAVEDLIST,MEU_CTRL_DEFAULTLIST,MEU_CTRL_BUTTONSAVE,MEU_CTRL_BUTTONDEFAULT,MEU_CTRL_BUTTONDELETE,MEU_CTRL_BUTTONLOAD,MEU_CTRL_PREVTREE,MEU_CTRL_PREVBG,MEU_CTRL_PREVCLOSE,MEU_CTRL_PREVTEXT]
#define MEU_PREV_GROUP			[MEU_CTRL_PREVTREE,MEU_CTRL_PREVBG,MEU_CTRL_PREVCLOSE,MEU_CTRL_PREVTEXT]

// loading gear checks
#define TFAR_CHECK					isClass (configfile >> "CfgPatches" >> "task_force_radio")
#define GEAR(IND)					(_gear select IND)
#define ADD_RESTRICT(IND)			_restricted pushBack (_gear select IND)
#define ADD_RESTRICT_X(ITEM)		_restricted pushBack ITEM
#define CHECK_STRING(IND)			(_gear select IND != "")
#define CHECK_STRING_X(ITEM)		(ITEM != "")
#define CHECK_COUNT(IND)			(count GEAR(IND) > 0) 
#define CHECK_BOX(IND)				(!_checking || {(_gear select IND) in _boxGear})
#define CHECK_BOX_X(ITEM)			(!_checking || {ITEM in _boxGear})
#define CHECK_IS_RADIO				("ItemRadio" in _parents && {!_checking || "ItemRadio" in _boxGear})
#define GET_PARENT(ITEM)			private ["_class","_parent"];_class = [ITEM] call BIS_fnc_classWeapon;_parents = [_class,true] call BIS_fnc_returnParents;

#define ADD_STRING(IND,SCRIPT) 		if CHECK_STRING(IND) then { \
										if CHECK_BOX(IND) then { \
											player SCRIPT GEAR(IND); \
										} else { \
											ADD_RESTRICT(IND) \
										}; \
									};
									
#define ADD_ITEMS(IND,SCRIPT)		if CHECK_COUNT(IND) then { \
										{ \
											if CHECK_STRING_X(_x) then { \
												if CHECK_BOX_X(_x) then { \
													player SCRIPT _x; \
												} else { \
													ADD_RESTRICT_X(_x); \
												}; \
											}; \
										} forEach GEAR(IND); \
									};
									
#define ADD_TO_OUTFIT(IND,SCRIPT)	if CHECK_COUNT(IND) then { \
										{ \
											GET_PARENT(_x); \
											if CHECK_IS_RADIO then { \
												player SCRIPT "ItemRadio"; \
											} else { \
												if CHECK_BOX_X(_x) then { \
													player SCRIPT _x; \
												} else { \
													ADD_RESTRICT_X(_x); \
												}; \
											}; \
										} forEach GEAR(IND); \
									};

// tooltip tips used randomly
#define MEU_HELP_TIPS			[ \
			"TIP: Double Click On A Saved Loadout To See The Items", \
			"TIP: The White X Denotes Gear That Is Not In The Box", \
			"TIP: You Can Quick Save By Holding CTRL When Clicking Save", \
			"TIP: Rename A Loadout By Holding CTRL And Double Clicking On It", \
			"CREDIT: The Original 15th Loadout Manager Was Created By Riouken", \
			"CREATORS: You Can Unlock The Box Restrictions With A Simple Variable", \
			"COLORS: The Colors Of The Manager Change With Your Arma Settings", \
			"UPDATE: Loaded Magazines And Batteries Are Now Saved", \
			"TIP: Take An Extra Laser Designator Battery To Save The Loaded One", \
			"TIP: The Group Icons Mark Favorite Loadouts (SHIFT + Double Click)", \
			"TIP: You Can Delete Saved Loadouts With The DEL Key" \
		]

