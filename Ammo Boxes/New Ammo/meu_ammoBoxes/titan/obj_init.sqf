_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
};

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("Titan Commander") + "</t>","\meu_ammoBoxes\titan\T_Commander.sqf"];   
_crate addAction ["<t color=""#DB3503"">" + ("Titan Crewman") + "</t>","\meu_ammoBoxes\titan\T_Crewman.sqf"]; 
