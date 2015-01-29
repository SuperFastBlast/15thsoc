_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
	_crate addBackpackCargoGlobal ["tf_rt1523g_big", 5];
	_crate addBackpackCargoGlobal ["B_AssaultPack_cbr", 10];
	_crate addBackpackCargoGlobal ["B_AssaultPack_blk", 10];
	_crate addBackpackCargoGlobal ["B_Carryall_cbr", 10];
	_crate addBackpackCargoGlobal ["B_UAV_01_backpack_F", 5];
	_crate addBackpackCargoGlobal ["B_Parachute", 25];
};
_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("Add Goggles") + "</t>","\meu_ammoBoxes\recon\meu_goggles.sqf"];