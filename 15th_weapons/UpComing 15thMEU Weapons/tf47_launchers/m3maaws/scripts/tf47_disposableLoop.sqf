//player addaction ["Airburst Cfg", "_this execVM '\tf47_launchers\m3maaws\scripts\m3maaws_airburstcfg.sqf'"];

(_this select 0) setVariable ["AirburstState", "x"];
(_this select 0) setVariable ["FlareState", "x"];


(_this select 0) setVariable ["AirburstRange", "70000"];
(_this select 0) setVariable ["FlareRange", "500"];

_unit = _this select 0;

while {true}
{

player removeMagazines "M16";
if (_this select 2 == 'tf47_at4_heat') then { 
_unit addMagazine 'tf47_at4_m_heat'; 
_this select 0 removeWeapon 'tf47_at4_heat'; 
_this select 0 addWeapon 'tf47_at4_heat'; 
this select 0 selectWeapon "tf47_at4_heat";
};

};