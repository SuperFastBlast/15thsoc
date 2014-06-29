_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
};

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("Gator Crew Chief Commander") + "</t>","\meu_ammoBoxes\gator\G_Crew_Chief.sqf"];   
_crate addAction ["<t color=""#DB3503"">" + ("Gator Crewman") + "</t>","\meu_ammoBoxes\gator\G_Crewman.sqf"]; 
