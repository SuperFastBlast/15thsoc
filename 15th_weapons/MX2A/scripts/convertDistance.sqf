/*
BWA3 script, by commy2
this code is property of the ArmA 3 Bundeswehr modification
ask us nicely at http://www.bwmod.de/ if you want to re-use any of this script
we don't support changed code based on this work
*/

_number = _this;

_number = round _number;
_isNegative = if (_number < 0) then {true} else {false};
_number = abs _number;

if (_number >= 10000) exitWith {
	[
		"\MX2A\rsc\d-.paa",
		"\MX2A\rsc\d-.paa",
		"\MX2A\rsc\d-.paa",
		"\MX2A\rsc\d-.paa"
	]
};

_digit1 = floor (_number / 1000);
_digit2 = floor (_number / 100) - _digit1 * 10;
_digit3 = floor (_number / 10) - _digit1 * 100 - _digit2 * 10;
_digit4 = _number mod 10;

if (_isNegative) then {
	if (_digit1 == 0) then {
		if (_digit2 == 0) then {
			if (_digit3 == 0) then {
				_digit1 = "";
				_digit2 = "";
				_digit3 = "\MX2A\rsc\d-.paa";
				_digit4 = format["\MX2A\rsc\d%1.paa", _digit4];
			} else {
				_digit1 = "";
				_digit2 = "\MX2A\rsc\d-.paa";
				_digit3 = format["\MX2A\rsc\d%1.paa", _digit3];
				_digit4 = format["\MX2A\rsc\d%1.paa", _digit4];
			};
		} else {
			_digit1 = "\MX2A\rsc\d-.paa";
			_digit2 = format["\MX2A\rsc\d%1.paa", _digit2];
			_digit3 = format["\MX2A\rsc\d%1.paa", _digit3];
			_digit4 = format["\MX2A\rsc\d%1.paa", _digit4];
		};
	} else {
		_digit1 = "\MX2A\rsc\d-.paa";
		_digit2 = "\MX2A\rsc\d-.paa";
		_digit3 = "\MX2A\rsc\d-.paa";
		_digit4 = "\MX2A\rsc\d-.paa";
	};
} else {
	if (_digit1 == 0) then {
		if (_digit2 == 0) then {
			if (_digit3 == 0) then {
				_digit1 = "";
				_digit2 = "";
				_digit3 = "";
				_digit4 = format["\MX2A\rsc\d%1.paa", _digit4];
			} else {
				_digit1 = "";
				_digit2 = "";
				_digit3 = format["\MX2A\rsc\d%1.paa", _digit3];
				_digit4 = format["\MX2A\rsc\d%1.paa", _digit4];
			};
		} else {
			_digit1 = "";
			_digit2 = format["\MX2A\rsc\d%1.paa", _digit2];
			_digit3 = format["\MX2A\rsc\d%1.paa", _digit3];
			_digit4 = format["\MX2A\rsc\d%1.paa", _digit4];
		};
	} else {
		_digit1 = format["\MX2A\rsc\d%1.paa", _digit1];
		_digit2 = format["\MX2A\rsc\d%1.paa", _digit2];
		_digit3 = format["\MX2A\rsc\d%1.paa", _digit3];
		_digit4 = format["\MX2A\rsc\d%1.paa", _digit4];
	};
};

[_digit1, _digit2, _digit3, _digit4]
