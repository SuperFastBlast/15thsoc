// made by moerderhoschi

waitUntil {sleep 0.1;!(isNull player)};
waitUntil {sleep 0.1;player==player};

if (!isMultiplayer) then
{
	[] spawn
	{
		player selectweapon secondaryweapon player;
		sleep 3;
		player switchCamera "gunner";
	};
};

mdh_topDownAttack_debug = 0;
mdh_topDownAttack_debug_pos = "";
mdh_topDownAttack_debug_vec = 0;
player addaction ["<t color ='#ff0000'>mdh_td_realtime</t>",{mdh_topDownAttack_debug = 0}];
player addaction ["<t color ='#ff0000'>mdh_td_Pcamera</t>",{mdh_topDownAttack_debug = 1}];
player addaction ["<t color ='#ff0000'>mdh_td_Fcamera</t>",{mdh_topDownAttack_debug = 2}];