caf_disposable_a3 = false;

caf_disposable_fired = compile preProcessFileLineNumbers "caf_m72a6\data\scripts\fired.sqf";

if !(isDedicated) then
{
	caf_disposable_throw = compile preProcessFileLineNumbers "caf_m72a6\data\scripts\throw.sqf";
	"caf_disp_throw" addPublicVariableEventHandler {[(_this select 1) select 0,(_this select 1) select 1] call caf_disposable_throw};
	caf_disposable_ammo_player = execVM "caf_m72a6\data\scripts\ammo_player.sqf";
};

caf_disposable_ammo_ai = execVM "caf_m72a6\data\scripts\ammo_ai.sqf";

caf_disposable_a3 = true;