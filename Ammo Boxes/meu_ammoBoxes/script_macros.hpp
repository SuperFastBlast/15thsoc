

#define MEU_ADDON_ROOT			"\meu_ammoBoxes\"

#define QUOTE(A) 				#A

// transport cargo classes
#define MEU_CLASS_WEAP(WEAPON,COUNT) 	class _xx_##WEAPON {weapon = #WEAPON; count = COUNT;}
#define MEU_CLASS_ITEM(ITEM,COUNT) 		class _xx_##ITEM {name = #ITEM; count = COUNT;}
#define MEU_CLASS_MAG(MAGAZINE,COUNT) 	class _xx_##MAGAZINE {magazine = #MAGAZINE; count = COUNT;}
#define MEU_CLASS_BAG(BAG,COUNT) 		class _xx_##BAG {backpack = #BAG; count = COUNT;}

// basic box info
#define MEU_CRATE_INFO(NAME) displayname = #NAME; \
		transportmaxmagazines = 9999; \
		transportmaxweapons = 9999; \
		transportMaxBackpacks = 9999; \
		transportMaxitems = 9999; \
		scope = 2;  \
		MEU_INIT_EVENT("_this call meu_fnc_crate;")

// eventhander		
#define MEU_INIT_EVENT(STRING) 		class EventHandlers { init = STRING; };

// vehicle crate
#define MEU_VIC_INFO(NAME)		displayname = #NAME; \
		transportAmmo = 0; \
		scope = 2; \
		supplyRadius = 0; \
		MEU_INIT_EVENT("_this call meu_fnc_crate;")
		
#define MEU_VIC_FUNCTION(FILE) 	#[player,call compile preprocessFileLineNumbers (MEU_ADDON_ROOT + #FILE),false,true] call meu_fnc_vehicleLoadout
#define MEU_RED_NAME(TEXT) 		QUOTE(<t color='#FF0000'>TEXT</t>)
#define MEU_GREEN_NAME(TEXT) 	QUOTE(<t color='#99FF00'>TEXT</t>)

#define MEU_VIC_LOADOUT(CLASS,TEXT,FILE)	class CLASS##: clearCargo { \
				displayName = MEU_RED_NAME(TEXT); \
				statement = MEU_VIC_FUNCTION(FILE); \
				};
				
#define MEU_VIC_LOADOUT_CLEAR	class clearCargo { \
				userActionID = 50; \
				displayName = MEU_GREEN_NAME(Clear Cargo); \
				displayNameDefault = ""; \
				position = "mph_axis"; \
				radius = 10; \
				animPeriod = 2; \
				onlyForplayer = 1; \
				condition = "(alive this) && (driver (vehicle player) == player) && (vehicle player in vehicles)"; \
				statement = "[player,[],true,true] call meu_fnc_vehicleLoadout;"; \
			};