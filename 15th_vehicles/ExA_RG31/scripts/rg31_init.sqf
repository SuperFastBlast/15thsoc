exa_rg31_gyrocam = false;

private ["_vcl"];
_vcl = _this select 0;
[_vcl] execVM "\exa_rg31\scripts\id.sqf";
if (!isServer) exitWith {};
[_vcl] execVM "\exa_rg31\scripts\antennas.sqf";
[_vcl] execVM "\exa_rg31\scripts\speed.sqf";