//Handling cockpit switch animations for any helicopter that has these actions - not ideal solution!

waitUntil {!(isNull player)};

if (!(player getVariable ["HSim_cockpitEHs", false])) then 
{
	player setVariable ["HSim_cockpitEHs", true];

	player call BIS_fnc_genericSentenceInit;

	//TODO: make function(s)?
	private ["_switchCode"];
	_switchCode = 
	{
		switch (_this select 2) do 
		{
			case 12: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_lightsLDGOn');
			};
			case 13: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_lightsLDGOff');
			};
			case 63: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_gearDown');
			};
			case 64: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_gearUp');
			};
			case 114: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_lightsACOn');
			};
			case 115: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_lightsACOff');
			};
		};
	};
	
	private ["_switchCodeRTD"];
	_switchCodeRTD = 
	{
		switch (_this select 2) do 
		{
			case 0: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_enginesOn');
			};
			case 1: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_enginesOff');
			};
			case 6: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_batteriesOn');
			};
			case 7: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_batteriesOff');
			};
			case 8: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_APUOn');
			};
			case 9: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_APUOff');
			};
			case 10: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_RotorBrakeOn');
			};
			case 11: 
			{
				[1, _this select 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_RotorBrakeOff');
			};
			case 12: 
			{
				[1, _this select 1, 0, _this select 0] call (uiNamespace getVariable 'BIS_fnc_StarterOn1');
			};
			case 13: 
			{
				[1, _this select 1, 0, _this select 0] call (uiNamespace getVariable 'BIS_fnc_StarterOff1');
			};
			case 14: 
			{
				[1, _this select 1, 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_StarterOn1');
			};
			case 15: 
			{
				[1, _this select 1, 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_StarterOff1');
			};
			case 16: 
			{
				[1, _this select 1, 2, _this select 0] call (uiNamespace getVariable 'BIS_fnc_StarterOn1');
			};
			case 17: 
			{
				[1, _this select 1, 2, _this select 0] call (uiNamespace getVariable 'BIS_fnc_StarterOff1');
			};
			case 18: 
			{
				[1, _this select 1, 0, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleOff1');
			};
			case 19: 
			{
				[1, _this select 1, 0, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleIdle1');
			};
			case 20: 
			{
				[1, _this select 1, 0, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleFull1');
			};
			case 21: 
			{
				[1, _this select 1, 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleOff1');
			};
			case 22: 
			{
				[1, _this select 1, 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleIdle1');
			};
			case 23: 
			{
				[1, _this select 1, 1, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleFull1');
			};
			case 24: 
			{
				[1, _this select 1, 2, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleOff1');
			};
			case 25: 
			{
				[1, _this select 1, 2, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleIdle1');
			};
			case 26: 
			{
				[1, _this select 1, 2, _this select 0] call (uiNamespace getVariable 'BIS_fnc_ThrottleFull1');
			};
			case 27: 
			{
				[1, _this select 1, 2, _this select 0] call (uiNamespace getVariable 'BIS_fnc_WheelBrakeOn');
			};
			case 28: 
			{
				[1, _this select 1, 2, _this select 0] call (uiNamespace getVariable 'BIS_fnc_WheelBrakeOff');
			};
		};
	};
	
	addMissionEventHandler ["SelectedActionPerformed", _switchCode];
	addMissionEventHandler ["SelectedRotorLibActionPerformed", _switchCodeRTD];
};

//Control default position of some switches
//Start music systems in case of starting "Flying"
if ((isEngineOn _this) && (((position _this) select 2) > 10)) then 
{
	if ([2, _this] call BIS_fnc_radioATCOn) then {[3, _this] call BIS_fnc_radioATCOn};
	if ([2, _this] call BIS_fnc_radioMusicNext) then {[3, _this] call BIS_fnc_radioMusicNext};
	
	_this animate ["BatteriesSwitch_On", 1];
	_this animate ["WheelBrakeSwitch_On", 1];
	_this animate ["LightsACSwitch_On", 1];
} 
else 
{
	_this animate ["WheelBrakeSwitch_On", 1];
	_this animate ["GearSwitch_On", 1];
};

//Stop automated procedures when controls are switched
_this addEventHandler ["ControlsShifted", {[_this select 0, "", false] call BIS_fnc_helicopterStopProcedure}];

true