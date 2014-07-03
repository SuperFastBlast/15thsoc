private ["_unit","_dest","_pos","_pole","_run","_count","_distance","_cancel","_image","_icon"];

_pole = _this select 0;
_unit = _this select 1;
_obj = (_this select 3) select 0;
call compile format ["_dest = %1;",_obj];
_distance = (_this select 3) select 1;
_cancel = format ["Move %1m away to cancel",_distance];
_count = 10;
_run = true;
_pos = getPos _dest;
if (_pos select 0 == 0 || _pos select 1 == 0) exitWith {hint "Something went wrong. Position not found."};
if (!(_dest in vehicles)) then {
	_pos = getPos _dest;
	_unit setPos [(_pos select 0)-4, (_pos select 1)-4, _pos select 2];
} else {	
	_image = (getText (configfile >> "CfgVehicles" >> typeOf _dest >> "picture"));
	_icon = "\a3\Missions_F_Curator\data\img\iconMPTypeSectorControl_ca.paa";
	if (!(_dest iskindOf "air")) then {
		if (abs (speed _dest) < 0.5) then {
			_pos = getPos _dest;
			_unit setPos [(_pos select 0)-4, (_pos select 1)-4, _pos select 2];
		} else {
			if (_dest emptyPositions "cargo" != 0) exitWith {_unit moveInCargo _dest}; // attempt to place in cargo
			while {_run && (_unit distance _pole) < _distance} do {
				hintSilent composeText [
//				_string = composeText [
					parseText format ["<img size='3' image='%1' />",_image], 
					linebreak, linebreak,
					format ["%1 is currently in motion",_dest getVariable "name"],
					linebreak, "Please Wait...", linebreak,
					parseText format ["Current speed is:<t color=""#FF0000""> %1 km/h</t>",floor (speed _dest)],
					linebreak, linebreak,
					parseText format ["<img size='2' image='%1' />",_icon],
					linebreak, _cancel
				];
//				[_string,-1,-1,1,0] spawn BIS_fnc_dynamicText;
				sleep 0.5;
				if (abs (speed _dest) < 0.5) then {
					_count = 10;
					while {_count > 0 && abs (speed _dest) < 0.5 && (_unit distance _pole) < _distance} do {
						_count = _count - 1;
						hintSilent composeText [
							parseText format ["<img size='3' image='%1' />",_image], 
							linebreak, linebreak,
							format ["%1 has stopped",_dest getVariable "name"],
							linebreak, "Please Wait...", linebreak,
							parseText format ["Teleporting in:<t color=""#99FF00""> %1 seconds</t>",_count],
							linebreak, linebreak,
							parseText format ["<img size='2' image='%1' />",_icon], 
							linebreak, _cancel
						];
						sleep 1;
					};
					if (abs (speed _dest) < 0.5 && (_unit distance _pole) < _distance) then {
						_run = false;
					};
				};
			};
			if (_unit distance _pole < _distance) then {
				_pos = getPos _dest;
				_unit setPos [(_pos select 0)-4, (_pos select 1)-4, _pos select 2];
				hintSilent "";
			} else {
				hintSilent "";
			};
		};	
	} else {
		if ((getPos _dest) select 2 < 2) then {
			_pos = getPos _dest;
			_unit setPos [(_pos select 0)-4, (_pos select 1)-4, _pos select 2];
		} else {
			if (_dest emptyPositions "cargo" != 0) exitWith {_unit moveInCargo _dest}; // attempt to place in cargo
			while {_run && (_unit distance _pole) < _distance} do {
				hintSilent composeText [
					parseText format ["<img size='3' image='%1' />",_image], 
					linebreak, linebreak,
					format ["%1 is currently in motion",_dest getVariable "name"],
					linebreak, "Please Wait...", linebreak,
					parseText format ["Current height is: <t color='#FF0000'>%1m</t>",floor ((getPos _dest) select 2)],
					linebreak, linebreak, 
					parseText format ["<img size='2' image='%1' />",_icon], 
					linebreak, _cancel
				];
				sleep 0.5;
				if ((getPos _dest) select 2 < 2) then {
					_count = 10;
					while {_count > 0 && abs (speed _dest) < 0.5 && (_unit distance _pole) < _distance} do {
						_count = _count - 1;
						hintSilent composeText [
							parseText format ["<img size='3' image='%1' />",_image], 
							linebreak, linebreak,
							format ["%1 has landed",_dest getVariable "name"],
							linebreak, "Please Wait...", linebreak,
							parseText format ["Teleporting in: <t color='#99FF00'>%1 seconds</t>",_count],
							linebreak, linebreak,
							parseText format ["<img size='2' image='%1' />",_icon], 
							linebreak, _cancel
						];
						sleep 1;
					};
					if ((getPos _dest) select 2 < 2 && (_unit distance _pole) < _distance) then {
						_run = false;
					};
				};
			};
			if (_unit distance _pole < _distance) then {
				_pos = getPos _dest;
				_unit setPos [(_pos select 0)-4, (_pos select 1)-4, _pos select 2];
				hintSilent "";
			} else {
				hintSilent "";
			};
		};	
	};
};
true;