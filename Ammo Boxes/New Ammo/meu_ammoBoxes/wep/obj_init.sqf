_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
	_crate addBackpackCargoGlobal ["tf_rt1523g_big", 7];
	_crate addBackpackCargoGlobal ["MEF_Wood_Assault", 5];   
	_crate addBackpackCargoGlobal ["MEF_Wood_Kitbag", 5];   
	_crate addBackpackCargoGlobal ["B_UAV_01_backpack_F", 5];
};

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("MG Squad Leader Loadout") + "</t>","\meu_ammoBoxes\wep\15th_MG_Squad_Leader.sqf"];   
_crate addAction ["<t color=""#DB3503"">" + ("MG Team Leader Loadout") + "</t>","\meu_ammoBoxes\wep\15th_MG_Team_Leader.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("MG Gunner Loadout") + "</t>","\meu_ammoBoxes\wep\15th_Machinegunner.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("MG Ammo Man Loadout") + "</t>","\meu_ammoBoxes\wep\15th_MG_Ammo_Man.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Assault Squad Leader Loadout") + "</t>","\meu_ammoBoxes\wep\15th_Assault_Squad_Leader.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Assault Team Leader Loadout") + "</t>","\meu_ammoBoxes\wep\15th_Assault_Team_Leader.sqf"];    
_crate addAction ["<t color=""#DB3503"">" + ("Assault Ammoman Loadout") + "</t>","\meu_ammoBoxes\wep\15th_Assault_Ammoman.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("MEU HQ Loadout") + "</t>","\meu_ammoBoxes\inf\meu_hq_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("RTO Loadout") + "</t>","\meu_ammoBoxes\inf\meu_rto_loadout.sqf"]; 