///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// DISPLAYEVENTHANDLER TO DETECT IF TAB WAS PRESSED TO SWITCH FIREMODE
///////////////////////////////////////////////////////////////////////////////////////////////////
waitUntil {sleep 0.1; !isNull player}; // WAIT UNTIL PLAYER IS INITIALIZED
waitUntil {sleep 0.1; player == player}; // WAIT UNTIL PLAYER IS INITIALIZED
waitUntil {sleep 0.1; !(isnull findDisplay 46)}; // WAIT UNTIL DISPLAY IS INITIALIZED

if (!isNil "mdh_topDownAttack_firemodeswitch_evh") exitWith {};

fnc_mdh_topDownAttack_keyPressed = {

	_key = _this select 1;
	_shift = (toLower str (_this select 2));
	_ctrl = (toLower str (_this select 3));
	_alt = (toLower str (_this select 4));

	_cfgKey = MDH_TOPDOWNATTACK_KEY_K;
	_cfgShift = (toLower str (MDH_TOPDOWNATTACK_KEY_S));
	_cfgCtrl = (toLower str (MDH_TOPDOWNATTACK_KEY_C));
	_cfgAlt = (toLower str (MDH_TOPDOWNATTACK_KEY_A));

	_weaps = ['Trixie_Javelin','launch_I_Titan_short_F','launch_O_Titan_short_F','launch_Titan_short_F'];
	if
	(
		_key == _cfgKey
		&& {_shift == _cfgShift}
		&& {_ctrl == _cfgCtrl}
		&& {_alt == _cfgAlt}
		&& {vehicle player == player}
		&& {currentweapon player in _weaps}
		&& {cameraView == 'gunner'}
	)
	then
	{
		if (mdh_topDownAttack_firemode_activated) then
		{
			mdh_topDownAttack_firemode_activated = false
		}
		else
		{
			mdh_topDownAttack_firemode_activated = true
		}
	}
};

mdh_topDownAttack_firemodeswitch_evh = (findDisplay 46) displayAddEventhandler ["keydown","_this call fnc_mdh_topDownAttack_keyPressed;"];
