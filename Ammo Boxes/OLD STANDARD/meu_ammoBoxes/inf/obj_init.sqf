_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
	_crate addBackpackCargoGlobal ["tf_rt1523g_big", 7];
	_crate addBackpackCargoGlobal ["B_AssaultPack_cbr", 5];   
	_crate addBackpackCargoGlobal ["B_Kitbag_cbr", 5];    
	_crate addBackpackCargoGlobal ["B_UAV_01_backpack_F", 5];
};

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("MEU HQ Loadout") + "</t>","\meu_ammoBoxes\inf\meu_hq_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Squad Leader Loadout") + "</t>","\meu_ammoBoxes\inf\meu_squadLeader_lo.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Fire Team Leader Loadout") + "</t>","\meu_ammoBoxes\inf\meu_FT_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Rifleman Loadout") + "</t>","\meu_ammoBoxes\inf\meu_rifle_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Automatic Rifleman Loadout") + "</t>","\meu_ammoBoxes\inf\meu_ar_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Assistant AR Loadout") + "</t>","\meu_ammoBoxes\inf\meu_aar_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Automatic Rifleman Loadout (M27)") + "</t>","\meu_ammoBoxes\inf\meu_ar-iar_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Assistant AR Loadout (M27)") + "</t>","\meu_ammoBoxes\inf\meu_aar-iar_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("RTO Loadout") + "</t>","\meu_ammoBoxes\inf\meu_rto_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Designated Marksman Loadout") + "</t>","\meu_ammoBoxes\inf\meu_dm_loadout.sqf"];