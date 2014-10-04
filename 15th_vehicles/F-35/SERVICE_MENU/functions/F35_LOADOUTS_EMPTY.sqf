	If (!Local Player) ExitWith {};
    	Private ["_F35"];
    	_F35 = vehicle player; 

	fa18_dynamic_loadoutscript = _F35 execvm "js_jc_fa18\scripts\LOADOUTS\FA18_empty_loadout.sqf";
	closeDialog 0;