#define QUOTE(A) 				#A
#define MEU_VICLOADOUT(A) 		#[player,'\meu_ammoBoxes\vehicle\loadouts\##A##',false,true] call meu_fnc_vehicleLoadout
#define MEU_RED_NAME(TEXT) 		QUOTE(<t color='#FF0000'>TEXT</t>)
#define MEU_GREEN_NAME(TEXT) 	QUOTE(<t color='#99FF00'>TEXT</t>)


#define MEU_CLASS_WEAP(WEAPON,COUNT) 	class _xx_##WEAPON {weapon = #WEAPON; count = COUNT;}
#define MEU_CLASS_ITEM(ITEM,COUNT) 		class _xx_##ITEM {name = #ITEM; count = COUNT;}
#define MEU_CLASS_MAG(MAGAZINE,COUNT) 	class _xx_##MAGAZINE {magazine = #MAGAZINE; count = COUNT;}
#define MEU_CLASS_BAG(BAG,COUNT) 		class _xx_##BAG {backpack = #BAG; count = COUNT;}

#define MEU_CRATE_INFO(NAME) displayname = #NAME; \
		transportmaxmagazines = 9999; \
		transportmaxweapons = 9999; \
		transportMaxBackpacks = 9999; \
		transportMaxitems = 9999; \
		SLX_XEH_DISABLED = 0; \
		scope = 2; 
		
#define MEU_INIT_EVENT(STRING) 		class EventHandlers { init = STRING; };