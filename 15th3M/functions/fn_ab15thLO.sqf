private ["_logic","_objs","_hq","_inf","_ace","_wep","_crew","_null"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_objs = [_this,1,[],[[]]] call BIS_fnc_param;

_hq = _logic getVariable ["LoadoutHQ",0];
_inf = _logic getVariable ["LoadoutInf",0];
_ace = _logic getVariable ["LoadoutAce",0];
_wep = _logic getVariable ["LoadoutWep",0];
_crew = _logic getVariable ["LoadoutCrew",0];

{
	if (_x iskindof "man") then {
		switch (_hq) do {		
			case 1: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_hq_loadout.sqf";}; // 
			case 2: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_rto_loadout.sqf";}; // 
			case 3: {_null = [_logic,_x] execVM "\meu_ammoBoxes\bas\corpsmanloadout.sqf";}; // 	
			default {};	
		};	
		switch (_inf) do {
			case 1: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_hq_loadout.sqf";}; // HQ
			case 2: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_squadLeader_lo.sqf";}; // Squad
			case 3: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_FT_loadout.sqf";}; // FTL
			case 4: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_rifle_loadout.sqf";}; //rifleman
			case 5: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_ar_loadout.sqf";}; // ar
			case 6: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_aar_loadout.sqf";}; // aar
			case 7: {_null = [_logic,_x] execVM "\meu_ammoBoxes\inf\meu_dm_loadout.sqf";}; // dm
			default {};		
		};	
		switch (_ace) do {		
			case 1: {_null = [_logic,_x] execVM "\meu_ammoBoxes\ace\A_Fixed_Pilot.sqf";}; // 
			case 2: {_null = [_logic,_x] execVM "\meu_ammoBoxes\ace\A_Rotary_Crew.sqf";}; // 
			case 3: {_null = [_logic,_x] execVM "\meu_ammoBoxes\ace\A_Rotary_Pilot.sqf";}; // 	
			default {};	
		};	
		switch (_wep) do {	
			case 1: {_null = [_logic,_x] execVM "\meu_ammoBoxes\wep\15th_MG_Squad_Leader.sqf";}; // 
			case 2: {_null = [_logic,_x] execVM "\meu_ammoBoxes\wep\15th_MG_Team_Leader.sqf";}; // 
			case 3: {_null = [_logic,_x] execVM "\meu_ammoBoxes\wep\15th_Machinegunner.sqf";}; //
			case 4: {_null = [_logic,_x] execVM "\meu_ammoBoxes\wep\15th_MG_Ammo_Man.sqf";}; //
			case 5: {_null = [_logic,_x] execVM "\meu_ammoBoxes\wep\15th_Assault_Squad_Leader.sqf";}; // 
			case 6: {_null = [_logic,_x] execVM "\meu_ammoBoxes\wep\15th_Assault_Team_Leader.sqf";}; //
			case 7: {_null = [_logic,_x] execVM "\meu_ammoBoxes\wep\15th_Assault_Ammoman.sqf";}; //
			default {};		
		};
		switch (_crew) do {	
			case 1: {_null = [_logic,_x] execVM "\meu_ammoBoxes\arty\A_Crew.sqf";}; // 
			case 2: {_null = [_logic,_x] execVM "\meu_ammoBoxes\arty\A_RTO.sqf";}; // 
			case 3: {_null = [_logic,_x] execVM "\meu_ammoBoxes\gator\G_Crew_Chief.sqf";}; //
			case 4: {_null = [_logic,_x] execVM "\meu_ammoBoxes\gator\G_Crewman.sqf";}; //
			case 5: {_null = [_logic,_x] execVM "\meu_ammoBoxes\titan\T_Commander.sqf";}; // 
			case 6: {_null = [_logic,_x] execVM "\meu_ammoBoxes\titan\T_Crewman.sqf";}; //
			default {};		
		};
	} else {
		diag_log format ["Loadout Module: One not synced to a 'man' unit: %1",_x];
	};
} foreach _objs;
diag_log format ["Loadout Module Initialized on: %1",_objs];
true;