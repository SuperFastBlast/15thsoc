_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
	_crate addBackpackCargoGlobal ["B_AssaultPack_cbr", 5];   
	_crate addBackpackCargoGlobal ["B_Kitbag_cbr", 5];
	_crate addBackpackCargoGlobal ["B_Carryall_cbr", 15];    
};

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("MEU BAS Corpsman Loadout") + "</t>","\meu_ammoBoxes\bas\corpsmanloadout.sqf"];   
 