_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
	_crate addBackpackCargoGlobal ["MEF_Wood_Assault", 5];   
	_crate addBackpackCargoGlobal ["MEF_Wood_Kitbag", 5];
	_crate addBackpackCargoGlobal ["MEF_Wood_Carryall", 15];    
};

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("MEU BAS Corpsman Loadout") + "</t>","\meu_ammoBoxes\bas\corpsmanloadout.sqf"];   
 