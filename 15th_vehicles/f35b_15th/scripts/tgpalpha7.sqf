// // // // // // // // // // // // // // // // // // // // // // // // // // // // //
// Targeting Pod Script
// Version alpha 0.8.1
// Date: 2014.09.13
// Authors: Lala14, Tajin
// // // // // // // // // // // // // // // // // // // // // // // // // // // // //

// init line:
// null = [] execVM "tpgalpha8_1.sqf";
// to disable on specific vehicle place in the init of the vehicle this setVariable ["uavisalive","none"];
// to disable on specific units/players place in the init of the unit/player this setVariable ["uavadded","none"];

/*DEFINABLE*/
if (isNil "TGP_Visible") then {
TGP_Visible = 1; //Show the "Darter"
};
if (isNil "TGP_Debug") then {
TGP_Debug = 0; //Show where the "Darter" is being attached
};
if (isNil "TGP_Veh_Only") then {
TGP_Veh_Only = 0; //Only allow the crew to connect to the tgp. WORKINGish
};
if (isNil "TGP_Numbering") then {
TGP_Numbering = 1; //Set Numbering Format 0 = Original Way numbers don't get stored on vehicles 1 = Use the first number assigned to the vehicle every time 2 = Looks in the array to find the closest number to 0 that is not being used 3 = Random Select Should not bring the same number ever unless you've used 225 vehicle names during that period, also gets assigned to the vehicle
};
if (isNil "TGP_RPT_Debug") then {
TGP_RPT_Debug = 0; //Give you all kinds of information on who is executing stuff, what vehicle has turned on/off the TGP and when via RPT
};
if (isNil "TGP_Auto_Start") then {
TGP_Auto_Start = 0; //Start the mission with all TGP's turned on
};
if (isNil "TGP_TrippleFormat") then {
TGP_TrippleFormat = 0; //Show numbers with "001" or standard "1", useful when there is more than 9 planes on one side or using TGP_Numbering = 3
};
if (isNil "TGP_AutoConnect") then {
TGP_AutoConnect = 1; //0 = No/Off 1 = Automatically connect the player's AV Terminal to the TGP once TGP turned On 2 = Connect player's AV Terminal to TGP if not connected to another AV Device
};
if (isNil "TGP_Auto_Ai_On") then {
TGP_Auto_Ai_On = 1; //Automatically makes AI turn their TGP's on
};

/*Don't touch unless you know what your doing*/
if (isDedicated) exitWith {};

diag_log "TGP Loading";

waitUntil {!isNull player};

// config [["kindOf classnames"], [ ["position in modelspace"] ]]
if (isNil "TGP_config") then { TGP_config = [] };
TGP_config = TGP_config + [
	[["CHO_F35B_base"], [
		 [ [0,7,0] ]
	]],
	[["Plane_Fighter_03_base_F"], [
		 [ [4.4,-0.5,-1.3] ]
	]],
	[["Plane_CAS_01_base_F"], [
		 [ [7.5,0.3,0.05] ]
	]],
	[["Plane_CAS_02_base_F"], [
		 [ [0.64,0.2,-1.86] ]
	]],
	[["STI_A10A"], [
		 [ [7,-0.1,1.4] ]
	]],
	[["Peral_A10C"], [
		 [ [7,0,0.27] ]
	]],
	[["Heli_Light_01_armed_base_F"], [
		 [ [0,1,-0.81] ]
	]],
	[["Heli_Light_01_base_F"], [
		 [ [0,1,-0.8] ]
	]],
	[["Heli_Transport_01_base_F"], [
		 [ [0,5,-1.75] ]
	]],
	[["Heli_Attack_01_base_F"], [
		 [ [0, 4.3, -1.65] ]
	]],
	[["I_Heli_light_03_unarmed_base_F"], [
		 [ [0,5.7,-1.10] ]
	]],
	[["I_Heli_light_03_base_F"], [
		 [ [0,5.7,-0.92] ]
	]],
	[["Heli_light_02_base_F"], [
		 [ [0,4.7,-1.82] ]
	]],
	[["Heli_Attack_02_base_F"], [
		 [ [0,5.5,-1.63] ]
	]],
	[["UH1H_base"], [
		 [ [0,2.3,-1.82] ]
	]],
	[["UH1_base"], [
		 [ [0,0,-1.73] ]
	]],
	[["UH60_base"], [
		 [ [0,4,-2.20] ]
	]],
	[["CH_47F_base"], [
		 [ [0,-3.5,-3.55] ]
	]],
	[["AH64_base"], [
		 [ [0,5,-1.25] ]
	]],
	[["AH1_base"], [
		 [ [0,2.75,-1.54] ]
	]],
	[["Heli_Transport_02_base_F"], [
		 [ [0,0,-2.87] ]
	]],
	[["JS_JC_FA18E"], [
		 [ [-0.8,-0.67,-0.97] ]
	]],
	[["JS_JC_SU35"], [
		 [ [0,7,-0.4] ]
	]],
	[["IVORY_MIG29K_BASE"], [
		 [ [1.9,-2,0.78] ]
	]],
	[["IVORY_GR4_BASE"], [
		 [ [0,3,-1.14] ]
	]],
	[["IVORY_F15C_BASE"], [
		 [ [4,-3.5,-0.54] ]
	]],
	[["F16C"], [
		 [ [3.5,-0.6,1.835] ]
	]],
	[["A7"], [
		 [ [4.5,-2,-0.7] ]
	]],
	[["F4E"], [
		 [ [2.3,-0.9,1.2] ]
	]],
	[["M2000C"], [
		 [ [1,-0.1,1.4] ]
	]]
];
// The config-array can be modified at runtime. This also allows modulators to append their own settings without having to edit this script.

// vars
TGP_Uavs = [];
TGP_UavNo = ['TGP_0'];
TGP_CounterBLU = [0];
TGP_CounterOPF = [0];
TGP_CounterIND = [0];
TGP_varname = "uavisalive";
TGP_text_ON = "<t color='#FF0000'>Turn the Target Pod On</t>";
TGP_text_OFF = "<t color='#FF0000'>Turn the Target Pod Off</t>";
TGP_text_Use = "<t color='#FF0000'>Use Targeting Pod</t>";
TGP_action = -1;
TGP_Loaded = false;

// functions
TGP_fnc_inList = {
	_found = false;
	_index = -1;
	{
		_types = _x select 0;
		{
			if (_this isKindOf _x) exitWith { _found = true; };
		} forEach _types;
		if _found exitWith {_index = _forEachIndex;};
	} forEach TGP_config;
	_index
};

TGP_fnc_Uav_Death = {
_vehs = _this select 0;
	(_vehs getVariable "TGP") addEventHandler ["Killed", {
		_uav = _this select 0;
		_killer = _this select 1;
		_veh = attachedTo _uav;
		_olduavname = vehicleVarName _uav;
		_tgpvar = (_veh getVariable TGP_varname);
		_unit = uavControl _uav select 0;
		_controlledunit = uavControl _uav select 1;
		_unit connectTerminalToUav objNull;
		if ( _controlledunit != "") then {
			_uav action ["BackFromUAV",_unit];
		};
		if (alive _killer) then {
			if (side _killer != sideEnemy) then {
				if (TGP_RPT_Debug == 1) then { diag_log format ["%1 adding to rating 1400",_killer];};
				_killer addRating 1400;
			};
		};
		if (_tgpvar) then {
			TGP_Uavs = TGP_Uavs - [_uav];
		};
		if (alive _veh) then {
			_veh setVariable [TGP_varname,false,true];
			if (TGP_RPT_Debug == 1) then { diag_log format ["%1 - %2 TGP was Destroyed, Recreating ...",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
			deleteVehicle _uav;
			[_veh,_olduavname] spawn {
				_veh = _this select 0;
				_olduavname = _this select 1;
				[_veh] spawn TGP_fnc_Do_Start;

				(_veh) spawn { _newuavname = vehicleVarName (_this getVariable "TGP"); TGP_UavNo = TGP_UavNo - [_newuavname]; };

				if (TGP_RPT_Debug == 1) then { diag_log format ["%1 - %2 TGP Created",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};

				[_veh,_olduavname] spawn {
					_veh = _this select 0;
					_olduavname = _this select 1;
					_tgp = (_veh getVariable "TGP");
					if (TGP_RPT_Debug == 1) then { diag_log format ["%1 changed name to %2",_tgp,_olduavname]; };
					_tgp setVehicleVarName _olduavname;
					_tgp setName _olduavname;
				};
			};
		} else {
		if (TGP_RPT_Debug == 1) then { diag_log format ["%1 - %2 Vehicle Destroyed, Leaving TGP dead",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
		};
		if (_tgpvar) then {
			if (_unit in (crew _veh)) then {
				[_unit] spawn {
					_unit = _this select 0;
					sleep 0.01;
					[_unit] spawn TGP_fnc_Do_Stuff;
				};
			} else {
				[_veh,_unit,_controlledunit] spawn {
					_veh = _this select 0;
					_unit = _this select 1;
					_controlledunit = _this select 2;
					sleep 0.01;
					[_veh] spawn TGP_fnc_Do_Stuff;
					waitUntil { (!isNull gunner (_veh getVariable "TGP")) };
					_unit connectTerminalToUav (_veh getVariable "TGP");
					if (_controlledunit != "") then {
						_switchtouavaction = format ["SwitchToUAV%1",_controlledunit];
						_unit action [_switchtouavaction, (_veh getVariable "TGP")];
					};
				};
			};
		};
	}];

	[(_vehs getVariable "TGP")] spawn {
		_uav = _this select 0;
		while {!isNil {_uav} } do {
			if (isNull (attachedTo _uav)) then {
				if (TGP_RPT_Debug == 1) then { diag_log format ["%1 - %2 Parent Was Destroyed/Disappeared Deleting TGP",_uav,getText (configFile >> 'cfgVehicles' >> typeOf _uav >> 'displayName')]; };
				deleteVehicle _uav;
			};
			sleep 2;
		};
	};
};

TGP_fnc_Veh_Only = {
	_veh = vehicle (_this select 0);
	_ison = _veh getVariable [TGP_varname,false];

	if (_ison) then {
		_veh setVariable[TGP_varname,false,true];
	} else {
		_veh setVariable[TGP_varname,true,true];
	};
};

TGP_fnc_Select_Veh_Only = {
	if (TGP_Veh_Only == 0) then {
		[(_this select 0)] spawn TGP_fnc_Do_Stuff;
	};

	if (TGP_Veh_Only == 1) then {
		[(_this select 0)] spawn TGP_fnc_Veh_Only;
	};
};

TGP_fnc_Conditions = {
	_unit = _this select 0;
	_veh = _this select 1;

	_return = (_veh getVariable [TGP_varname,false] isEqualTo true && _veh call TGP_fnc_inList > -1 && (driver _veh == _unit OR gunner _veh == _unit OR commander _veh == _unit OR _veh turretUnit [0] == _unit));

	if (TGP_Veh_Only == 1) then { [_unit] call TGP_fnc_Do_Stuff; };

	_return;
};

TGP_fnc_Conditions2 = {
	_unit = _this select 0;
	_veh = _this select 1;

	_return = (_veh getVariable [TGP_varname,false] isEqualTo false && _veh call TGP_fnc_inList > -1 && (driver _veh == _unit OR gunner _veh == _unit OR commander _veh == _unit OR _veh turretUnit [0] == _unit));

	if (TGP_Veh_Only == 1) then { [_unit] call TGP_fnc_Do_Stuff; };

	_return;
};

TGP_fnc_CountInList = {
	_number = _this select 0;
	_tocount = _this select 1;

	_index = 'nil';

	if (_number in _tocount) then { _index = _number; };

	_index
};

TGP_fnc_CheckSide = {
	_vehicle = _this select 0;
	_side = _this select 1;
	_sideveh = getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "faction");

	_index = false;

	if (_sideveh isEqualto _side) then { _index = true; };

	_index;
};

TGP_fnc_NumberCorrections = {
	_unit = _this select 0;
	_veh = vehicle _unit;

	if ( (!isPlayer _unit) OR (side _unit == sideEnemy) )  then {
		_unit = (_veh getVariable "TGP");
	};

	if (side _unit == west) then {
		if (TGP_Numbering == 0) then {
		CorrectNumber = count TGP_CounterBLU;
		TGP_CounterBLU = TGP_CounterBLU + [CorrectNumber];
		};
		if (TGP_Numbering == 1) then {
			if (isNil {_veh getVariable "TGP_StorageBLU"}) then {
			_veh setVariable ["TGP_StorageBLU",count TGP_CounterBLU,true];
			CorrectNumber = (_veh getVariable "TGP_StorageBLU");
			TGP_CounterBLU = TGP_CounterBLU + [CorrectNumber];
			} else {
			CorrectNumber = (_veh getVariable "TGP_StorageBLU");
			};
		};
		if (TGP_Numbering == 2) then {
			for [{_x=1},{_x<=count TGP_CounterBLU},{_x=_x+1}] do
			{
				if (_x in TGP_CounterBLU isEqualTo false) then { CorrectNumber = _x; };
			};
			TGP_CounterBLU = TGP_CounterBLU + [CorrectNumber];
		};
		if (TGP_Numbering == 3) then {
			if (isNil {_veh getVariable "TGP_StorageBLU"}) then {
			_veh setVariable ["TGP_StorageBLU",floor (random 226),true];
			if ((_veh getVariable "TGP_StorageBLU") in TGP_CounterBLU) then {
					_veh setVariable ["TGP_StorageBLU",nil,true];
					[_unit] call TGP_fnc_NumberCorrections;
				} else {
					CorrectNumber = (_veh getVariable "TGP_StorageBLU");
					TGP_CounterBLU = TGP_CounterBLU + [CorrectNumber];
				};
			} else {
				CorrectNumber = (_veh getVariable "TGP_StorageBLU");
			};
		};
	};
	if (side _unit == east) then {
		if (TGP_Numbering == 0) then {
		CorrectNumber = count TGP_CounterOPF;
		TGP_CounterOPF = TGP_CounterOPF + [CorrectNumber];
		};
		if (TGP_Numbering == 1) then {
			if (isNil {_veh getVariable "TGP_StorageOPF"}) then {
			_veh setVariable ["TGP_StorageOPF",count TGP_CounterOPF,true];
			CorrectNumber = (_veh getVariable "TGP_StorageOPF");
			TGP_CounterOPF = TGP_CounterOPF + [CorrectNumber];
			} else {
			CorrectNumber = (_veh getVariable "TGP_StorageOPF");
			};
		};
		if (TGP_Numbering == 2) then {
			for [{_x=1},{_x<=count TGP_CounterOPF},{_x=_x+1}] do
			{
				if (_x in TGP_CounterOPF isEqualTo false) then { CorrectNumber = _x; };
			};
			TGP_CounterOPF = TGP_CounterOPF + [CorrectNumber];
		};
		if (TGP_Numbering == 3) then {
			if (isNil {_veh getVariable "TGP_StorageOPF"}) then {
			_veh setVariable ["TGP_StorageOPF",floor (random 226),true];
			if ((_veh getVariable "TGP_StorageOPF") in TGP_CounterOPF) then {
					_veh setVariable ["TGP_StorageOPF",nil,true];
					[_unit] call TGP_fnc_NumberCorrections;
				} else {
					CorrectNumber = (_veh getVariable "TGP_StorageOPF");
					TGP_CounterOPF = TGP_CounterOPF + [CorrectNumber];
				};
			} else {
				CorrectNumber = (_veh getVariable "TGP_StorageOPF");
			};
		};
	};
	if (side _unit == resistance) then {
		if (TGP_Numbering == 0) then {
		CorrectNumber = count TGP_CounterIND;
		TGP_CounterIND = TGP_CounterIND + [CorrectNumber];
		};
		if (TGP_Numbering == 1) then {
			if (isNil {_veh getVariable "TGP_StorageIND"}) then {
			_veh setVariable ["TGP_StorageIND",count TGP_CounterIND,true];
			CorrectNumber = (_veh getVariable "TGP_StorageIND");
			TGP_CounterIND = TGP_CounterIND + [CorrectNumber];
			} else {
			CorrectNumber = (_veh getVariable "TGP_StorageIND");
			};
		};
		if (TGP_Numbering == 2) then {
			for [{_x=1},{_x<=count TGP_CounterIND},{_x=_x+1}] do
			{
				if (_x in TGP_CounterIND isEqualTo false) then { CorrectNumber = _x; };
			};
			TGP_CounterIND = TGP_CounterIND + [CorrectNumber];
		};
		if (TGP_Numbering == 3) then {
			if (isNil {_veh getVariable "TGP_StorageIND"}) then {
			_veh setVariable ["TGP_StorageIND",floor (random 226),true];
			if ((_veh getVariable "TGP_StorageIND") in TGP_CounterIND) then {
					_veh setVariable ["TGP_StorageIND",nil,true];
					[_unit] call TGP_fnc_NumberCorrections;
				} else {
					CorrectNumber = (_veh getVariable "TGP_StorageIND");
					TGP_CounterIND = TGP_CounterIND + [CorrectNumber];
				};
			} else {
				CorrectNumber = (_veh getVariable "TGP_StorageIND");
			};
		};
	};
	if (TGP_TrippleFormat == 1) then {
		if (CorrectNumber < 10) exitWith {
			CorrectNumber = format ['00%1',CorrectNumber];
		};
		if ((CorrectNumber > 9) && (CorrectNumber < 100)) exitWith {
			CorrectNumber = format ['0%1',CorrectNumber];
		};
	};
};

TGP_fnc_Do_Stuff = {
_unit = _this select 0;
_veh = vehicle _unit;
_i = _veh call TGP_fnc_inList;
_sideveh = getText (configFile >> "CfgVehicles" >> typeOf _veh >> "faction");
_ison = _veh getVariable [TGP_varname,false];

if (TGP_Veh_Only == 0) then {
	if (_ison isEqualTo true) then {
		_veh setVariable[TGP_varname,false,true];
	} else {
		_veh setVariable[TGP_varname,true,true];
	};
};

if (TGP_Veh_Only == 0) then {
	if (_i > -1) then {
		if (_ison isEqualto false) then {
			if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP Turned On",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
					_tgps = (TGP_config select _i) select 1;
						{
							if ((side _unit == west) && (TGP_Veh_Only == 0)) then {
								if !([(_veh getVariable "TGP"),"BLU_F"] call TGP_fnc_CheckSide) then {
									_uavname = vehicleVarName (_veh getVariable "TGP");
									if (isNil _uavname) then {
										_tgpname = format ["TGP_%1",count TGP_UavNo];
										_uavname = _tgpname;
										TGP_UavNo = TGP_UavNo + [_tgpname];
									};
									TGP_Uavs = TGP_Uavs - [ (_veh getVariable "TGP") ];
									deleteVehicle (_veh getVariable "TGP");
									_tgp = 'B_UAV_02_F' createVehicle [0,0,0];
									_tgp setVehicleVarName _uavname;
									_tgp setName _uavname;
									_veh setVariable ["TGP",_tgp,true];
									if (TGP_Visible == 0) then { _tgp hideObjectGlobal true };
									_tgp attachTo [_veh,(_x select 0)];
									if (TGP_Debug == 1) then { _veh vehicleChat "Changing vehicle to Blu AR-2"; _veh vehicleChat format ['TGP attachto %1',[getText (configFile >> "cfgVehicles" >> typeOf _veh >> "displayName"),(_x select 0)]]; };
									if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 - %4 TGP Changed sides to %3",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName'),side _unit,_uavname];};
									[_veh] spawn TGP_fnc_Uav_Death;
									};
								};
							if ((side _unit == east) && (TGP_Veh_Only == 0)) then {
								if !([(_veh getVariable "TGP"),"OPF_F"] call TGP_fnc_CheckSide) then {
									_uavname = vehicleVarName (_veh getVariable "TGP");
									if (isNil _uavname) then {
										_tgpname = format ["TGP_%1",count TGP_UavNo];
										_uavname = _tgpname;
										TGP_UavNo = TGP_UavNo + [_tgpname];
									};
									deleteVehicle (_veh getVariable "TGP");
									_tgp = 'O_UAV_01_F' createVehicle [0,0,0];
									_tgp setVehicleVarName _uavname;
									_tgp setName _uavname;
									_veh setVariable ["TGP",_tgp,true];
									if (TGP_Visible == 0) then { _tgp hideObjectGlobal true };
									_tgp attachTo [_veh,(_x select 0)];
									if (TGP_Debug == 1) then { _veh vehicleChat "Changing vehicle to Opf AR-2"; _veh vehicleChat format ['TGP attachTo %1',[getText (configFile >> "cfgVehicles" >> typeOf _veh >> "displayName"),(_x select 0)]]; };
									if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 - %4 TGP Changed sides to %3",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName'),side _unit,_uavname];};
									[_veh] spawn TGP_fnc_Uav_Death;
									};
								};
							if ((side _unit == resistance) && (TGP_Veh_Only == 0)) then {
								if !([(_veh getVariable "TGP"),"IND_F"] call TGP_fnc_CheckSide) then {
									_uavname = vehicleVarName (_veh getVariable "TGP");
									if (isNil _uavname) then {
										_tgpname = format ["TGP_%1",count TGP_UavNo];
										_uavname = _tgpname;
										TGP_UavNo = TGP_UavNo + [_tgpname];
									};
									TGP_Uavs = TGP_Uavs - [ (_veh getVariable "TGP") ];
									deleteVehicle (_veh getVariable "TGP");
									_tgp = 'I_UAV_01_F' createVehicle [0,0,0];
									_tgp setVehicleVarName _uavname;
									_tgp setName _uavname;
									_veh setVariable ["TGP",_tgp,true];
									if (TGP_Visible == 0) then { _tgp hideObjectGlobal true };
									_tgp attachTo [_veh,(_x select 0)];
									if (TGP_Debug == 1) then { _veh vehicleChat "Changing vehicle to Indep AR-2"; _veh vehicleChat format ['TGP attachTo %1',[getText (configFile >> "cfgVehicles" >> typeOf _veh >> "displayName"),(_x select 0)]]; };
									if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 - %4 TGP Changed sides to %3",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName'),side _unit,_uavname];};
									[_veh] spawn TGP_fnc_Uav_Death;
									};
								};
							if (_veh getVariable TGP_varname isEqualTo true OR _veh getVariable TGP_varname isEqualTo false) then {
							createVehicleCrew (_veh getVariable "TGP");
								if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP Units created",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
								_drivertodelete = (driver (_veh getVariable "TGP"));
								_drivertodelete setPos [0,0,0]; //eject the driver
								deleteVehicle _drivertodelete;
							};
							if !((_veh getVariable "TGP") in TGP_Uavs) then { TGP_Uavs = TGP_Uavs + [ (_veh getVariable "TGP") ];};
							if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP Driver removed",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
							[_unit] call TGP_fnc_NumberCorrections;
							if (TGP_Veh_Only == 0) then {
								_TGP_GroupID = format ['%2-%1 Targeting Pod',getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName'),CorrectNumber];
								[[(group (_veh getVariable "TGP")),[_TGP_GroupID]],'TGP_fnc_SetGroupID',true,true] spawn BIS_FNC_MP;
								if !( ("B_UavTerminal" in assignedItems _unit) OR ("O_UavTerminal" in assignedItems _unit) OR ("I_UavTerminal" in assignedItems _unit) ) then {
									hint format ["No AV Terminal Assigned\nYour TGP Name:\n%1",_TGP_GroupID];
								};
							};
							if (isPlayer _unit) then {_unit disableAI "AUTOTARGET";};
							if ( (("B_UavTerminal" in assignedItems _unit) OR ("O_UavTerminal" in assignedItems _unit) OR ("I_UavTerminal" in assignedItems _unit)) && (TGP_AutoConnect > 0) ) then {
								if (TGP_AutoConnect == 1) then {
									_unit connectTerminalToUav (_veh getVariable "TGP");
								};
								if ((TGP_AutoConnect == 2) && (isNull getConnectedUav _unit) && (isPlayer _unit)) then {
									_unit connectTerminalToUav (_veh getVariable "TGP");
								};

								if (TGP_Debug == 1) then {
									[_veh] spawn {
										_veh = _this select 0;
										sleep 0.1;
										hint format ["You Are Now Connected To %1\nTGP Name: %2",group (_veh getVariable "TGP"),(_veh getVariable "TGP")];
									};
								};
								if (TGP_RPT_Debug == 1) then {diag_log format ["%1 Connected To TGP %2 - %3",profileName,group (_veh getVariable "TGP"),(_veh getVariable "TGP")];};
							};
						} forEach _tgps;
					};
			if (_ison isEqualTo true) then {
				if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP Turned Off",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
				if (TGP_Numbering == 2) then {
					if (side _unit == west) then {
						TGP_CounterBLU = TGP_CounterBLU - [ (_veh getVariable "TGP_StorageBLU") ];
					};

					if (side _unit == east) then {
						TGP_CounterOPF = TGP_CounterOPF - [ (_veh getVariable "TGP_StorageOPF") ];
					};
					if (side _unit == resistance) then {
						TGP_CounterIND = TGP_CounterIND - [ (_veh getVariable "TGP_StorageIND") ];
					};
				};
				if (getConnectedUav _unit == (_veh getVariable "TGP")) then {
					_unit connectTerminalToUav objNull;
				};
				deleteVehicle (gunner (_veh getVariable "TGP"));
				if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP gunner removed",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
				TGP_Uavs = TGP_Uavs - [(_veh getVariable "TGP")];
				if (isPlayer _unit) then {_unit enableAI "AUTOTARGET";};
			};
		};
	};
	if (TGP_Veh_Only == 1) then {
		_unit = _this select 0;
		_veh = vehicle _unit;
		if (_veh != _unit) then {
		_tgps = (TGP_config select _i) select 1;
		_i = _veh call TGP_fnc_inList;
		_ison = _veh getVariable [TGP_varname,false];
			if (_i > -1) then {
				if (_ison) then {
					if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP Turned On",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
					if (count TGP_Uavs == 0) then {
						{
							if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP creating TGP for %3",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName'),name _unit];};
							if ((side _unit == west) && (TGP_Veh_Only == 1)) then {
									_tgp = 'B_UAV_02_F' createVehicleLocal [0,0,0];
									_veh setVariable ["TGP",_tgp,true];
									if (TGP_Visible == 0) then { _tgp hideObject true };
									_tgp attachto [_veh,(_x select 0)];
									createVehicleCrew _tgp;
									(group _tgp) setGroupId ["Targeting Pod"];
									_drivertodelete = (driver _tgp);
									_drivertodelete setPos [0,0,0]; //eject the driver
									deleteVehicle _drivertodelete;
									TGP_Uavs = TGP_Uavs + [ _tgp ];
							};
							if ((side _unit == east) && (TGP_Veh_Only == 1)) then {
									_tgp = 'O_UAV_01_F' createVehicleLocal [0,0,0];
									_veh setVariable ["TGP",_tgp,true];
									if (TGP_Visible == 0) then { _tgp hideObject true };
									_tgp attachto [_veh,(_x select 0)];
									createVehicleCrew _tgp;
									(group _tgp) setGroupId ["Targeting Pod"];
									_drivertodelete = (driver _tgp);
									_drivertodelete setPos [0,0,0]; //eject the driver
									deleteVehicle _drivertodelete;
									TGP_Uavs = TGP_Uavs + [ _tgp ];
							};
							if ((side _unit == resistance) && (TGP_Veh_Only == 1)) then {
									_tgp = 'I_UAV_01_F' createVehicleLocal [0,0,0];
									_veh setVariable ["TGP",_tgp,true];
									if (TGP_Visible == 0) then { _tgp hideObject true };
									_tgp attachto [_veh,(_x select 0)];
									createVehicleCrew _tgp;
									(group _tgp) setGroupId ["Targeting Pod"];
									_drivertodelete = (driver _tgp);
									_drivertodelete setPos [0,0,0]; //eject the driver
									deleteVehicle _drivertodelete;
									TGP_Uavs = TGP_Uavs + [ _tgp ];
							};
							if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP Units created",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
						}forEach _tgps;
					};
				} else {
				if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP Turned Off deleting ...",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
					{
						TGP_Uavs = TGP_Uavs - [ _x ];
						if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP deleting TGP for %3 because it is off",attachedTo _x,getText (configFile >> 'cfgVehicles' >> typeOf (attachedTo _x) >> 'displayName'),name _unit];};
						deleteVehicle _x;
					}forEach TGP_Uavs;
				};
			};
		} else {
			{
				TGP_Uavs = TGP_Uavs - [ _x ];
				if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP deleting TGP for %3 because he is not in a vehicle",attachedTo _x,getText (configFile >> 'cfgVehicles' >> typeOf (attachedTo _x) >> 'displayName'),name _unit];};
				deleteVehicle _x;
			}forEach TGP_Uavs;
		};
	};
};

TGP_fnc_Do_Start = {
_unit = _this select 0;
_veh = vehicle _unit;

_i = _veh call TGP_fnc_InList;
_tgps = (TGP_config select _i) select 1;
_sideveh = getText (configFile >> "CfgVehicles" >> typeOf _veh >> "faction");

	{
		if (_sideveh isEqualTo "BLU_F") then {
			_tgp = 'B_UAV_02_F' createVehicle [0,0,0];
			_veh setVariable ["TGP",_tgp,true];
		};
		if (_sideveh isEqualTo "OPF_F") then {
			_tgp = 'O_UAV_01_F' createVehicle [0,0,0];
			_veh setVariable ["TGP",_tgp,true];
		};
		if ( (_sideveh isEqualTo "IND_F") OR (_sideveh isEqualTo "Hellas") ) then {
			_tgp = 'I_UAV_01_F' createVehicle [0,0,0];
			_veh setVariable ["TGP",_tgp,true];
		};
		if (TGP_Visible == 0) then { (_veh getVariable "TGP") hideObjectGlobal true };
		(_veh getVariable "TGP") attachTo [_veh,(_x select 0)];
	}forEach _tgps;
	_tgpname = format ["TGP_%1",count TGP_UavNo];
	(_veh getVariable "TGP") setVehicleVarName _tgpname;
	(_veh getVariable "TGP") setName _tgpname;
	TGP_UavNo = TGP_UavNo + [_tgpname];
	TGP_Uavs = TGP_Uavs + [ (_veh getVariable "TGP") ];

	[_veh] spawn TGP_fnc_Uav_Death;
};

TGP_fnc_addAction = {
if (isNil {player getVariable "uavadded"} ) then {
	player setVariable ["uavadded",true,true];
		_tgpon = player addAction [TGP_text_ON,{[(_this select 0)] spawn TGP_fnc_Select_Veh_Only},"",-99,false,true,"",'[_this,_target] call TGP_fnc_Conditions2'];
		_tgpuse = player addAction [TGP_text_Use,{(_this select 0) action ["SwitchToUAVGunner", (vehicle (_this select 0) getVariable "TGP")]; (_this select 0) disableAI "AUTOTARGET";},"",-99,false,true,"User7",'_target getVariable [TGP_varname,false] isEqualTo true  && _target call TGP_fnc_inList > -1 && (uavControl (_target getVariable ''TGP'') select 1 != ''GUNNER'')'];
		_tgpoff = player addAction [TGP_text_Off,{[(_this select 0)] spawn TGP_fnc_Select_Veh_Only},"",-99,false,true,"",'[_this,_target] call TGP_fnc_Conditions'];
		if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP Actions Added",player];};
	};
};

TGP_fnc_SetGroupID = {
private ["_group","_id"];
_group = _this select 0;
_id = _this select 1;

_group setGroupId _id;
};

/*[] spawn {
	while {true} do {
	if (TGP_RPT_Debug == 1) then {diag_log "====TGP Vehicles====";};
		{ if ( (_x call TGP_fnc_inList > -1) && ( isNil {_x getVariable "TGP"} ) &&  (TGP_Veh_Only == 0) && ( isNil {_x getVariable TGP_varname} OR {_x getVariable "uavisalive" isEqualTo 'display'} ) ) then {
				[_x] spawn TGP_fnc_Do_Start;
				if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 - created TGP",_x,getText (configFile >> 'cfgVehicles' >> typeOf _x >> 'displayName')];};
			};
		}forEach vehicles;
	if (TGP_RPT_Debug == 1) then {diag_log "====TGP Units====";};
		{ if ( isNil {_x getVariable "uavadded"} && (isPlayer _x) ) then {
			[_x] spawn TGP_fnc_addAction;
			if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP Action Executed",_x];};
			if (isNil {_x getVariable "tgprespawn"}) then {
				_x addEventHandler ["Respawn", {
					(_this select 0) setVariable ["uavadded",nil,true];
					if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - Respawn - variable removed",(_this select 0)];};
					}];
				_x setVariable ["tgprespawn","addded",true];
			};
			if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP Respawn Variable Added",_x];};
			};
		}forEach allUnits;
		if (TGP_Auto_Ai_On == 1) then {
			{
				if ((vehicle _x != _x) && ((vehicle _x) call TGP_fnc_inList > -1)) then {
					_veh = vehicle _x;
					if (isNil { _veh getVariable "uavadded"} && !(isPlayer _x)) then {
						_veh setVariable ["uavadded",true,true];
						[(driver _veh)] spawn TGP_fnc_Do_Stuff;
						if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP - AI Start - variable added",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
						if (!isNull commander _veh) then {
							(commander _veh) enableAI "AUTOTARGET";
							if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - AI enableAI AUTOTARGET",commander _veh];};
						};
						if (!isNull driver _veh) then {
							(driver _veh) enableAI "AUTOTARGET";
							if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - AI enableAI AUTOTARGET",driver _veh];};
						};
						if (!isNull gunner _veh) then {
							(gunner _veh) enableAI "AUTOTARGET";
							if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - AI enableAI AUTOTARGET",gunner _veh];};
						};
					};
				};
			} forEach allUnits;
		};
	if (TGP_RPT_Debug == 1) then {diag_log "====Other====";};
	sleep 2;
	if (TGP_RPT_Debug == 1) then {diag_log format ["TGP - Time Since Start %1 Seconds",time];};
	};
};*/

Lala_fnc_TGPadd = {
	_isthisfistlaunch = _this select 0;
	_currentcountveh = count vehicles;
	waitUntil {(count vehicles != _currentcountveh) OR _isthisfistlaunch};
	{ if ( (_x call TGP_fnc_inList > -1) && ( isNil {_x getVariable "TGP"} ) &&  (TGP_Veh_Only == 0) && ( isNil {_x getVariable TGP_varname} OR {_x getVariable "uavisalive" isEqualTo 'display'} ) ) then {
			[_x] spawn TGP_fnc_Do_Start;
			if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 - created TGP",_x,getText (configFile >> 'cfgVehicles' >> typeOf _x >> 'displayName')];};
		};
	}forEach vehicles;

	if (TGP_Auto_Ai_On == 1) then {
		{
			if ((vehicle _x != _x) && ((vehicle _x) call TGP_fnc_inList > -1)) then {
				_veh = vehicle _x;
				if (isNil { _veh getVariable "uavadded"} && !(isPlayer _x)) then {
					_veh setVariable ["uavadded",true,true];
					[(driver _veh)] spawn TGP_fnc_Do_Stuff;
					if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 TGP - AI Start - variable added",_veh,getText (configFile >> 'cfgVehicles' >> typeOf _veh >> 'displayName')];};
					if (!isNull commander _veh) then {
						(commander _veh) enableAI "AUTOTARGET";
						if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - AI enableAI AUTOTARGET",commander _veh];};
					};
					if (!isNull driver _veh) then {
						(driver _veh) enableAI "AUTOTARGET";
						if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - AI enableAI AUTOTARGET",driver _veh];};
					};
					if (!isNull gunner _veh) then {
						(gunner _veh) enableAI "AUTOTARGET";
						if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - AI enableAI AUTOTARGET",gunner _veh];};
					};
				};
			};
		} forEach allUnits;
	};

	if (TGP_Debug == 1) then {systemChat "TGP_Debug - A Vehicle was Added/Removed";};

	if (TGP_RPT_Debug == 1) then {diag_log format ["TGP - Time Since Start %1 Seconds",time];};
	[false] spawn Lala_fnc_TGPadd;
};

[] spawn TGP_fnc_addAction;
if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP Action Executed",name player];};
if (isNil {player getVariable "tgprespawn"}) then {
	player addEventHandler ["Respawn", {
		(_this select 0) setVariable ["uavadded",nil,true];
		[] spawn TGP_fnc_addAction;
		if (TGP_RPT_Debug == 1) then {diag_log format ["%1 TGP - Respawn - variable removed",name (_this select 0)];};
		}];
	player setVariable ["tgprespawn","addded",true];
};

[true] call Lala_fnc_TGPadd;

if (TGP_Auto_Start == 1) then {
	sleep 0.1;
	systemChat "TGP Loading";
	{ if ( (_x call TGP_fnc_inList > -1) && ( !isNil {_x getVariable "TGP"} ) &&  (TGP_Veh_Only == 0)) then {
			[_x] spawn TGP_fnc_Do_Stuff;
			if (TGP_RPT_Debug == 1) then {diag_log format ["%1 - %2 - Auto-Started TGP",_x,getText (configFile >> 'cfgVehicles' >> typeOf _x >> 'displayName')];};
		};
	}forEach vehicles;
};

TGP_Loaded = true;

if (TGP_RPT_Debug == 1) then {diag_log format ["It took TGP %1 seconds to load",time];};
diag_log "TGP Loaded";
systemChat "TGP Loaded";