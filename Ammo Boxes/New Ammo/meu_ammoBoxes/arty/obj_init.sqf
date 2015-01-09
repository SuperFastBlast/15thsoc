_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];   
	_crate addBackpackCargoGlobal ["MEF_Wood_Kitbag", 5];
	_crate addBackpackCargoGlobal ["B_Mortar_01_support_F", 6];
	_crate addBackpackCargoGlobal ["B_Mortar_01_weapon_F", 6];
};

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("A_Crew") + "</t>","\meu_ammoBoxes\arty\A_Crew.sqf"];   
_crate addAction ["<t color=""#DB3503"">" + ("A_RTO") + "</t>","\meu_ammoBoxes\arty\A_RTO.sqf"]; 
