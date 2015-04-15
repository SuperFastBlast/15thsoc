_crate = _this select 0;
_crate allowDamage false;

/* if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 10];
	_crate addBackpackCargoGlobal ["MEF_Wood_Assault", 5];   
	_crate addBackpackCargoGlobal ["MEF_Wood_Kitbag", 5];
	_crate addBackpackCargoGlobal ["B_UAV_01_backpack_F", 5];
}; */

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder AAR Loadout") + "</t>","\meu_ammoBoxes\lar\meu_laraar_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder AR Loadout") + "</t>","\meu_ammoBoxes\lar\meu_larar_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder Commander Loadout") + "</t>","\meu_ammoBoxes\lar\meu_larcom_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder Crew Loadout") + "</t>","\meu_ammoBoxes\lar\meu_larcrew_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder HQ Loadout") + "</t>","\meu_ammoBoxes\lar\meu_larhq_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder Rifleman Loadout") + "</t>","\meu_ammoBoxes\lar\meu_larrifle_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder RTO Loadout") + "</t>","\meu_ammoBoxes\lar\meu_larrto_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Marauder Team Leader Loadout") + "</t>","\meu_ammoBoxes\lar\meu_lartl_loadout.sqf"];