private ["_heli","_ropes","_cut"];
_heli = _this select 0;
_ropes = _this select 1;
waitUntil {(!(alive _heli)) || (count (_heli getvariable ["currentRopes", []]) == 0)};
_cut = [_heli] call meu_fnc_cutRopes;
_cut;