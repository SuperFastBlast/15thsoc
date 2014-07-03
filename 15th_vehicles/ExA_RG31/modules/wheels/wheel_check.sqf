_caller = _this select 0;

_cargolist = [_caller] call ACE_fnc_listCargo;

_count = 0;
{if (_x isKindOf "ACE_Spare_Tyre_HDAPC") then {_count = _count + 1}} forEach _cargolist;

switch (_count) do 
	{ 
	case 0: {_caller animate ["left_spare", 1]; _caller animate ["right_spare", 1];}; 
	case 1: {_caller animate ["left_spare", 1]; _caller animate ["right_spare", 0];};
	default {_caller animate ["left_spare", 0]; _caller animate ["right_spare", 0];};
	};

sleep 3;

if (!alive _caller) exitWith {_caller animate ["left_spare", 1]; _caller animate ["right_spare", 1];};

[_caller] execVm "\ExA_RG31\modules\wheels\wheel_check.sqf"