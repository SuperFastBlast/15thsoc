#define QUOTE(A) #A
#define MEU_VICLOADOUT(A) #[player,'\meu_ammoBoxes\vehicle\loadouts\##A##',false,true] call meu_fnc_vehicleLoadout
#define MEU_RED_NAME(TEXT) QUOTE(<t color='#FF0000'>TEXT</t>)
#define MEU_GREEN_NAME(TEXT) QUOTE(<t color='#99FF00'>TEXT</t>)

#define MEU_CLASS_WEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
  weapon = #WEAPON; \
  count = COUNT; \
}

#define MEU_CLASS_ITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
}

#define MEU_CLASS_MAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
  magazine = #MAGAZINE; \
  count = COUNT; \
}
