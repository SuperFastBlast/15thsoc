/* 
fn_checkMods
fight9 

DESCRIPTION:
Check clients mod versions against servers
kick, warn, or ignore errors - report all to server RPT

Params:
_this select 0: STRING - "kick","warn", or "rpt" - OPTIONAL
_this select 1: ARRAY - CfgPatches classes to check - OPTIONAL
_this select 2: ARRAY - CfgPatches classes to blacklist - OPTIONAL

*/

#define DEFAULT_MODS_CHECK 	["cba_main","task_force_radio","meu_blufor","meu_opfor","meu_ammoBoxes"]
#define DEFAULT_MODS_NAMES 	["CBA","TFAR","15thMEU","15thOPFOR","15thAMMO"]
#define DEFAULT_BLACKLIST	["mcc_sandbox","Blastcore_VEP","TracersWAR","MRF_Rangefinder","JSRS2LITE_4Five45","JSRS2_4Five45","DragonFyre_4Five45","DragonFyre_LITE_4Five45","speedofsound_pure_4five"]

#define SCRIPT_NAME meu_fnc_checkMods
#define DUB(var1,var2)		##var1##_##var2
#define GVAR(var1)			DUB(SCRIPT_NAME,var1)
#define QUOTE(var1)			#var1


GVAR(Punish) = [_this,0,"warn",[""]] call BIS_fnc_param;
GVAR(Check) = [_this,1,DEFAULT_MODS_CHECK,[[]]] call BIS_fnc_param;
GVAR(Black) = [_this,2,DEFAULT_BLACKLIST,[[]]] call BIS_fnc_param;
GVAR(Debug) = false;

// list versions
_versions = [];
{
	private "_vers";
	_vers = call {
		private ["_ret","_v","_r"];
		_ret = "";
		if (isClass (configFile >> "CfgPatches" >> _x)) then {
			_v = getText (configFile >> "CfgPatches" >> _x >> "version");
			if (_v != "") exitWith {_ret = _v};
			_r = str (getNumber (configFile >> "CfgPatches" >> _x >> "requiredVersion"));
			if (_r != "") exitWith {_ret = _r};
		};
		_ret
	};
	_versions pushBack _vers;
} forEach GVAR(Check);

if isServer then {
	// broadcast to clients
	GVAR(data) = _versions;
	publicVariable QUOTE(GVAR(data));
	
	// debug
	if GVAR(Debug) then {systemChat 'SCRIPT_NAME ran on server!';systemChat str _versions;};
	
} else {
	// wait for variable and check against clients mods
	_versions spawn {
		private ["_errors","_black"];	
		// wait for data from server
		waitUntil { !isNil { GVAR(data) } };
	
		// check versions
		_errors = [];
		{
			private ["_local","_name"];
			_local = _this select _forEachIndex;
			_name = GVAR(Check) select _forEachIndex;
			if !(_x isEqualTo _local) then {_errors pushBack [_name,_x,_local];};
		} forEach GVAR(data);
		
		// check for blacklisted mods
		_black = [];
		{
			if (isClass (configFile >> "CfgPatches" >> _x)) then {
				_black pushback _x;
			};
		} forEach GVAR(Black);
		
		// if arrays > 1
		if (count _errors > 0 || count _black > 0) then {
			// wait for main display
			waitUntil { !isNull (findDisplay 46) };	
			
			// if warning / kicking
			if (GVAR(Punish) in ["warn","kick"]) then {
				private ["_textArray","_warning","_blackText","_cb"];
				
				// create array of errors
				_textArray = [];
				{
					private ["_text","_name","_vers"];
					_name = call {
						_i = DEFAULT_MODS_CHECK find (_x select 0);
						if (_i < 0) exitWith {_x select 0};
						DEFAULT_MODS_NAMES select _i
					};
					_vers = if ((_x select 2) != "") then [{_x select 2},{"N/A"}];
					_text = parseText format ["<t size='1'>%1 | Server: %2 | You: %3</t>",_name,(_x select 1),_vers];
					_textArray pushBack _text;
				} forEach _errors;
				
				// create string of blacklisted mods
				_blackText = "Blacklisted Mods:";
				_cb = count _blackText;
				{
					_blackText = format ["%1 | %2",_blackText,_x];
				} forEach _black;
				if (count _blackText > _cb) then {_textArray pushBack _blackText;};
				
				// Add warning of kick
				_warning = if (GVAR(Punish) ==  "kick") then {
					parseText "<t size='1' color='#ff0000'>You will be kicked - fix your mods before returning!</t>"
				} else { // just warn
					parseText "<t size='1' color='#ff0000'>You've been warned! Fix your mods!</t>"
				};
				_textArray pushBack _warning;
				
				// show cadet hint
				"WARNING: Mod Version(s) Incorrect!" hintC _textArray;
				
				// if kicking, add DEH
				if (GVAR(Punish) ==  "kick") then {
					// wait for acknowledgement, then kick
					_kick = findDisplay 72 displayAddEventHandler ["unload", {["LOSER",false,false] call BIS_fnc_endMission;}];
				};
			};
			
			// report to server RPT
			private "_rpt";
			_rpt = format ["[MEU] %1 HAS WRONG VERSION(S)",profileName];
			{ _rpt = format ["%1 | %2",_rpt,(_x select 0)]; } forEach _errors;
			{ _rpt = format ["%1 | %2",_rpt,_x]; } forEach _black;
			_null = [_rpt,"diag_log",false] call BIS_fnc_MP;
		};
		
		// debug
		if GVAR(Debug) then {systemChat 'SCRIPT_NAME ran on Client!';};
	};
};

true