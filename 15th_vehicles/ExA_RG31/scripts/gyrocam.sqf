disableSerialization;

exa_rg31_gyrovehicle = vehicle player;
exa_rg31_gyrocam = true;

waitUntil {!isNull (findDisplay 46)};
_displayEH_keydown = (findDisplay 46) displayAddEventHandler ["KeyDown",
"
	private['_handled'];
	_handled = false;
	_key = _this select 1;
	if (_key in (actionKeys 'HeliRudderRight')) then
	{
		_cur = exa_rg31_gyrovehicle animationPhase 'Gyrocam_1';
		_cur2 = exa_rg31_gyrovehicle animationPhase 'Gyrocam_2';
		if (_cur2 <= 0) then{
		exa_rg31_gyrovehicle animate ['Gyrocam_1', (_cur-0.2)];
		};
		if (_cur2 >= 0 && _cur >= 0) then{
			exa_rg31_gyrovehicle animate ['Gyrocam_2', (_cur2-0.2)];
		};
	};
	if (_key in (actionKeys 'HeliRudderLeft')) then
	{
		_cur = exa_rg31_gyrovehicle animationPhase 'Gyrocam_1';
		_cur2 = exa_rg31_gyrovehicle animationPhase 'Gyrocam_2';
		
		if (_cur < 5) then{
			exa_rg31_gyrovehicle animate ['Gyrocam_1', (_cur+0.2)];
		};
		
		if (_cur2 < 5 && _cur >= 5) then{
			exa_rg31_gyrovehicle animate ['Gyrocam_2', (_cur2+0.2)];
		};
	};
	_handled;
"];

waitUntil {not alive player or vehicle player == player or player != commander exa_rg31_gyrovehicle};
(finddisplay 46) displayremoveeventhandler ["keydown",_displayEH_keydown];
exa_rg31_gyrocam = false;
exa_rg31_gyrovehicle = null;