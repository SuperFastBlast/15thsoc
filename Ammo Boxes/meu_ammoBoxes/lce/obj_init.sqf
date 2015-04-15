_crate = _this select 0;
_crate allowDamage false;

/* if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
	_crate addBackpackCargoGlobal ["MEF_Wood_Assault", 5];   
	_crate addBackpackCargoGlobal ["MEF_Wood_Kitbag", 5];
}; */

_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("LCE HQ") + "</t>","\meu_ammoBoxes\lce\lce_hq_loadout.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("LCE Combat Engineer") + "</t>","\meu_ammoBoxes\lce\lce_engineer.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("LCE EOD Team Lead") + "</t>","\meu_ammoBoxes\lce\eod_lead.sqf"];   
_crate addAction ["<t color=""#DB3503"">" + ("LCE EOD Technician") + "</t>","\meu_ammoBoxes\lce\eod_tech.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("LCE MP Team Lead") + "</t>","\meu_ammoBoxes\lce\lce_mp_lead.sqf"];   
_crate addAction ["<t color=""#DB3503"">" + ("LCE Military Policeman") + "</t>","\meu_ammoBoxes\lce\lce_policeman.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("LCE Supply Team lead") + "</t>","\meu_ammoBoxes\lce\lce_supply_lead.sqf"];   
_crate addAction ["<t color=""#DB3503"">" + ("LCE Supply Driver") + "</t>","\meu_ammoBoxes\lce\lce_supply_driver.sqf"];
