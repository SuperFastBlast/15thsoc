	If (!Local Player) ExitWith {};
    	Private ["_F35"];
    	_F35 = vehicle player; 

	fa18_dynamic_loadoutscript = [_FA18, "gatling_25mm", "CHO_F35B_Zephyr_W","CHO_F35B_Zephyr_W","CHO_F35B_Zephyr_W","CHO_F35B_Falchion_W","CHO_F35B_Falchion_W","CHO_F35B_Falchion_W", "CHO_F35B_Falchion_W"] execvm "cho_f35b\scripts\LOADOUTS\F35_dynamic_loadouts.sqf";
	closeDialog 0;