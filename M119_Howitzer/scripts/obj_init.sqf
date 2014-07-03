//waitUntil {time > 0};
private ["_m119"];

_m119 = _this select 0;

_m119 addAction ["Push Weapon","_this call meu_fnc_m119_push;"];

_m119 addAction ["Tow M119","_this call meu_fnc_m119_attachTow;",[],1,false,false,"","(count (nearestObjects [_target, ['Car_F'], 10]) > 0);"];

