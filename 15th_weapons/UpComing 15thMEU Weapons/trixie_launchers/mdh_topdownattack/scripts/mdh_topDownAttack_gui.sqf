///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// CHECKLOOP TO SET THE RIGHT ICONS AND SOUNDS IN THE TITAN OVERLAY
///////////////////////////////////////////////////////////////////////////////////////////////////
waitUntil {sleep 0.1; !isNull player}; // WAIT UNTIL PLAYER IS INITIALIZED
waitUntil {sleep 0.1; player == player}; // WAIT UNTIL PLAYER IS INITIALIZED
waitUntil {sleep 0.1; !(isnull findDisplay 46)}; // WAIT UNTIL DISPLAY IS INITIALIZED

mdh_topDownAttack_lock_counter = 0;
mdh_topDownAttack_lock_counterExtra = 0;
mdh_topDownAttack_lockTime = 3;
_weaps = ["Trixie_Javelin","launch_I_Titan_short_F","launch_O_Titan_short_F","launch_Titan_short_F"];
_sleep = 0.01;

// DEBUG
////////
/*
[] spawn {
	sleep 2;
	while {true} do
	{
		player globalChat ("extra  : " + str round mdh_topDownAttack_lock_counterExtra);
		player globalChat ("time+ex: " + str (mdh_topDownAttack_lock_counterExtra + mdh_topDownAttack_lockTime));
		player globalChat ("time   : " + str round time);
		player globalChat ("counter: " + str round mdh_topDownAttack_lock_counter);
		player globalChat ("test   : " + str ((mdh_topDownAttack_lock_counterExtra + mdh_topDownAttack_lockTime) < time));
		player globalChat ":::::::::";
		sleep 0.1;
	};
};
*/

[_weaps, _sleep] spawn {

_weaps = _this select 0;
_sleep = _this select 1;

// LOOP FOR ICONS
/////////////////
while {true} do
{
	if
	(
		(vehicle player == player)
		&& {currentweapon player in _weaps}
		&& {cameraView == "gunner"}
	)
	then
	{
		("mdh_layer_name_mdh_topDownAttack_rsc_range" call BIS_fnc_rscLayer) cutRsc ["mdh_topDownAttack_rsc_range","PLAIN"]; //show
		//("mdh_layer_name_mdh_topDownAttack_rsc_targetType" call BIS_fnc_rscLayer) cutRsc ["mdh_topDownAttack_rsc_targetType","PLAIN"]; //show
		if (mdh_topDownAttack_firemode_activated) then
		{
			("mdh_layer_name_mdh_topDownAttack_rsc_dir" call BIS_fnc_rscLayer) cutRsc ["mdh_topDownAttack_rsc_dir","PLAIN"]; //show
			("mdh_layer_name_mdh_topDownAttack_rsc_top" call BIS_fnc_rscLayer) cutRsc ["mdh_topDownAttack_rsc_top","PLAIN"]; //show
		}
		else
		{
			("mdh_layer_name_mdh_topDownAttack_rsc_top" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
			("mdh_layer_name_mdh_topDownAttack_rsc_dir" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		};

		if
		(
			(player ammo currentweapon player) > 0

			// CHECK WITH FUNCTION FOR VALID TARGET
			///////////////////////////////////////
			&& { [player, cursortarget, currentweapon player] call fnc_mdh_topDownAttack_validtarget }
		)
		then
		{
			if (mdh_topDownAttack_lock_counter < mdh_topDownAttack_lockTime) then
			{
				("mdh_layer_name_mdh_topDownAttack_rsc_seek" call BIS_fnc_rscLayer) cutRsc ["mdh_topDownAttack_rsc_seek","PLAIN"]; //show
				("mdh_layer_name_mdh_topDownAttack_rsc_missile" call BIS_fnc_rscLayer) cutRsc ["mdh_topDownAttack_rsc_missile","PLAIN"]; //show
			}
			else
			{
				("mdh_layer_name_mdh_topDownAttack_rsc_seek" call BIS_fnc_rscLayer) cutRsc ["mdh_topDownAttack_rsc_seek","PLAIN"]; //show
				("mdh_layer_name_mdh_topDownAttack_rsc_missile" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
			};

			mdh_topDownAttack_lock_counter = mdh_topDownAttack_lock_counter + _sleep;
			if (mdh_topDownAttack_lock_counterExtra == 0) then
			{
				mdh_topDownAttack_lock_counterExtra = round time
			}
			else
			{
				if ((mdh_topDownAttack_lock_counterExtra + mdh_topDownAttack_lockTime) < time) then
				{
					mdh_topDownAttack_lock_counter = mdh_topDownAttack_lockTime
				};
			};
		}
		else
		{
			("mdh_layer_name_mdh_topDownAttack_rsc_seek" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
			("mdh_layer_name_mdh_topDownAttack_rsc_missile" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
			mdh_topDownAttack_lock_counter = 0;
			mdh_topDownAttack_lock_counterExtra = 0;
		};
	}
	else
	{
		("mdh_layer_name_mdh_topDownAttack_rsc_dir" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		("mdh_layer_name_mdh_topDownAttack_rsc_top" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		("mdh_layer_name_mdh_topDownAttack_rsc_seek" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		("mdh_layer_name_mdh_topDownAttack_rsc_missile" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		("mdh_layer_name_mdh_topDownAttack_rsc_range" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		//("mdh_layer_name_mdh_topDownAttack_rsc_targetType" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		mdh_topDownAttack_lock_counter = 0;
		mdh_topDownAttack_lock_counterExtra = 0;
	};

	sleep _sleep;
};

};

[_weaps] spawn {

_weaps = _this select 0;

// LOOP FOR SOUNDS
//////////////////
while {true} do
{
	if
	(
		(vehicle player == player)
		&& {currentweapon player in _weaps}
		&& {cameraView == "gunner"}
	)
	then
	{
		if
		(
			(player ammo currentweapon player) > 0

			// CHECK WITH FUNCTION FOR VALID TARGET
			///////////////////////////////////////
			&& { [player, cursortarget, currentweapon player] call fnc_mdh_topDownAttack_validtarget }
		)
		then
		{
			if (mdh_topDownAttack_lock_counter < mdh_topDownAttack_lockTime) then
			{
				playSound "mdh_topDownAttack_locking";
			}
			else
			{
				playSound "mdh_topDownAttack_locked";
			};
		};
	};

	if (mdh_topDownAttack_lock_counter < mdh_topDownAttack_lockTime) then
	{
		sleep 0.09;
	}
	else
	{
		sleep 0.035;
	};
};

};