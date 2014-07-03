// By SSG - Cuel, 2012-11-30
// Purpose: MP Synchronized object textures on ExA's RG-31.

private ["_vcl"];
_vcl = _this select 0;

if (isServer) then
{
	if (_vcl getVariable ["exa_objt",-1] < 0) then 
	{
		// server sets an integer on the vehicle and broadcasts it
		private ["_rnd"];
		_rnd = ceil (random 20);	
		_vcl setVariable ["exa_objt",_rnd,true];
	};
};

// dedicated servers can't see the texture.
if (isDedicated) exitWith {};

private ["_wait","_nr"];
_wait = time + 10;
// wait until the integer has been set (or the time span is larger than 10 seconds so we don't wait forever)

waitUntil {((_vcl getVariable ["exa_objt",-1]) > 0) || (time > _wait)};
_nr = _vcl getVariable ["exa_objt",-1];

// set the object texture based on the integer.
switch (_nr) do
{
	case 1 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_01_ca.paa"]};
	case 2 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_02_ca.paa"]};
	case 3 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_03_ca.paa"]};
	case 4 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_04_ca.paa"]};
	case 5 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_05_ca.paa"]};

	case 6 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_06_ca.paa"]};
	case 7 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_07_ca.paa"]};
	case 8 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_08_ca.paa"]};
	case 9 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_09_ca.paa"]};
	case 10 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_10_ca.paa"]};

	case 11 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_11_ca.paa"]};
	case 12 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_12_ca.paa"]};
	case 13 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_13_ca.paa"]};
	case 14 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_14_ca.paa"]};
	case 15 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_15_ca.paa"]};

	case 16 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_16_ca.paa"]};
	case 17 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_17_ca.paa"]};
	case 18 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_18_ca.paa"]};
	case 19 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_19_ca.paa"]};
	case 20 : {_vcl setobjecttexture [3,"\exa_rg31\data\id\id_serial_20_ca.paa"]};
	default {diag_log format ["ExA: Failed to set object texture on vehicle. (Number returned was :%1",_nr];};
};