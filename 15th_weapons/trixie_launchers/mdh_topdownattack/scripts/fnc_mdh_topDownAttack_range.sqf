///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

fnc_mdh_topDownAttack_range = {

_display = _this select 0;
_idc = -1;
_ctrl = _display displayCtrl _idc;
_target = cursortarget;

_noTarget =
{
	_ctrl = _this select 0;
	_ctrl ctrlSetText "Range: 0000";
	_ctrl ctrlCommit 0.1;
};

if (isNull _target) exitWith { [_ctrl] call _noTarget};
if (({_target isKindOf _x} count ["man","car","tank","ship","helicopter"] < 1)) exitWith { [_ctrl] call _noTarget};
if (_target isKindOf "Animal") exitWith { [_ctrl] call _noTarget};

_d = (round(player distance _target));
_ds = str _d;

_ctrl ctrlSetText
(
	'Range: ' +
	(
		if (_d > 9) then
		{
			if (_d > 99) then
			{
				if (_d > 999) then
				{
					if (_d > 9999) then
					{
						'0000'
					}
					else
					{
						_ds
					}
				}
				else
				{
					'0' + _ds
				}
			}
			else
			{
				'00' + _ds
			}
		}
		else
		{
			'000' + _ds
		}
	)
);

_ctrl ctrlCommit 0.1;
true
};