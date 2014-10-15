///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

fnc_mdh_topDownAttack_targetType = {

_display = _this select 0;
_idc = -1;
_ctrl = _display displayCtrl _idc;
_target = cursortarget;

_noTarget =
{
	_ctrl = _this select 0;
	_ctrl ctrlSetText "TargetType: NoTarget";
	_ctrl ctrlCommit 0.1;
};

if (isNull _target) exitWith { [_ctrl] call _noTarget};
if (({_target isKindOf _x} count ["man","car","tank","ship","helicopter"] < 1)) exitWith { [_ctrl] call _noTarget};
if (_target isKindOf "Animal") exitWith { [_ctrl] call _noTarget};

_title = "TargetType: ";
_text = "";

if (_target isKindOf "helicopter") then
{
	_text = "Helo"
}
else
{
	if (_target isKindOf "ship") then
	{
		_text = "Ship"
	}
	else
	{
		if (_target isKindOf "tank") then
		{
			_text = "Armored"
		}
		else
		{
			if (_target isKindOf "car") then
			{
				_text = "Car"
			}
			else
			{
				if (_target isKindOf "man") then
				{
					_text = "Infantry"
				}
				else
				{
					_text = "Unknown"
				};
			};
		};
	};
};

_ctrl ctrlSetText _title + _text;
_ctrl ctrlCommit 0.1;
true
};