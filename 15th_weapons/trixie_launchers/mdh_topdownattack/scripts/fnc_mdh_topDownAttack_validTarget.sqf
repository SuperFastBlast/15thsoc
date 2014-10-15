///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// FUNCTION TO CHECK FOR VALID TARGET
///////////////////////////////////////////////////////////////////////////////////////////////////
fnc_mdh_topDownAttack_validTarget = {

	_target = _this select 1;
	if (isNull _target) exitWith {false};
	if (({_target isKindOf _x} count ["man","car","tank","ship","helicopter"] < 1)) exitWith {false};
	if (_target isKindOf "Animal") exitWith {false};
	if ((_target isKindOf "man") && {!alive _target}) exitWith {false};

	_weapon = _this select 2;
	_weaps = ["Trixie_Javelin","launch_I_Titan_short_F","launch_O_Titan_short_F","launch_Titan_short_F"];
	if (!(_weapon in _weaps)) exitWith {false};

	_unit = _this select 0;	
	_distance = _unit distance _target;
	if (_distance > 2500) exitWith {false};

	_go = false;
	if (mdh_topDownAttack_firemode_activated) then
	{
		if (!(_distance > 150)) then
		{
			_go = false
		}
		else
		{
			_go = true
		}
	}
	else
	{
		if (!(_distance > 10)) then
		{
			_go = false
		}
		else
		{
			_go = true
		}
	};
	if (!(_go)) exitWith {false};
	
	_typeair = _target isKindOf "helicopter";
	_targetspeed = 80;
	_targetheight = 120;
	if (_typeair) then
	{
		if
		(
			!(speed _target < _targetspeed)
			|| {!(getposATL _target select 2 < _targetheight)}
		)
		then
		{
			_go = false
		}
		else
		{
			_go = true
		};
	}
	else
	{
		_go = true
	};
	if (!(_go)) exitWith {false};

	true
};