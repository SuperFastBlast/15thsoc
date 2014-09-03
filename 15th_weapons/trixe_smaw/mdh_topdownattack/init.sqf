///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER V1.0
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
// 01.06.2014
//
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// ADDON INIT
///////////////////////////////////////////////////////////////////////////////////////////////////
if (isDedicated) exitWith {}; // IF NOT CLIENT EXIT
mdh_topDownAttack_firemode_activated = false;

///////////////////////////////////////////////////////////////////////////////////////////////////
// EXECUTE SCRIPTS AND LOAD FUNCTIONS
///////////////////////////////////////////////////////////////////////////////////////////////////
execVM "trixie_launchers\mdh_topDownAttack\scripts\fnc_mdh_topDownAttack_diary.sqf";

execVM "trixie_launchers\mdh_topDownAttack\scripts\mdh_topDownAttack_userconfig.sqf";

//execVM "trixie_launchers\mdh_topDownAttack\scripts\mdh_topDownAttack_debug.sqf";

execVM "trixie_launchers\mdh_topDownAttack\scripts\fnc_mdh_topDownAttack_range.sqf";

execVM "trixie_launchers\mdh_topDownAttack\scripts\fnc_mdh_topDownAttack_targetType.sqf";

execVM "trixie_launchers\mdh_topDownAttack\scripts\fnc_mdh_topDownAttack_validTarget.sqf";

execVM "trixie_launchers\mdh_topDownAttack\scripts\mdh_topDownAttack_gui.sqf";

execVM "trixie_launchers\mdh_topDownAttack\scripts\mdh_topDownAttack_dispEvh.sqf";

execVM "trixie_launchers\mdh_topDownAttack\scripts\fnc_mdh_topDownAttack_firedEvhCheck.sqf";

[] spawn {

sleep 1;
waitUntil {sleep 1;!isNil "fnc_mdh_topDownAttack_diary"};
waitUntil {sleep 1;!isNil "fnc_mdh_topDownAttack_firedEvh"};

// LOOP DIARY ENTRY AND FIRE EVENTHANDLE SO THAT THE FEATURE WORK WITH REVIVE SCRIPTS
/////////////////////////////////////////////////////////////////////////////////////
while {true} do
{
	sleep 1;
	call fnc_mdh_topDownAttack_diary;
	sleep 1;
	call fnc_mdh_topDownAttack_firedEvh;
	sleep 1;
};

};