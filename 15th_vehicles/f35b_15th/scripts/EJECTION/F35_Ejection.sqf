_F35 = _this;	
_Pilot = driver _F35;

if ((!isengineon _F35)) ExitWith {};
if (_F35 animationphase "eject_switch" > 0.01) ExitWith {};
_F35 animate ["eject_switch",1];

_F35 animate ["r_canopy_hide",1];
_F35 animate ["ejection_seat_hide",1];
_Canopy = "JS_JC_F35_canopy" createvehicle [0,0,1000];
_Canopy attachTo [_F35,[0.0,0.-0.72,0.6],"actionarea"];
_Ejection_Seat = "JS_JC_F35ejection_seat" createvehicle [0,0,1000];
_Ejection_Seat attachTo [_F35,[0.0,0.01,0.48],"actionarea"];

sleep 0.1;

_eject_pitch_bank = _F35 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_F35 = vectordir _F35;
_velocity_F35 = velocity _F35;
_eject_boost = 15;
_eject_pos=_F35 modeltoworld (_F35 selectionposition "eject_pos");
_eject_dirpos=_F35 modeltoworld (_F35 selectionposition "eject_canopy_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_F35_new=velocity _F35;
_eject_dirpos=_F35 modeltoworld (_F35 selectionposition "eject_dir");
detach _Canopy;
_Canopy setpos _eject_dirpos;
[_Canopy, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Canopy setvelocity [(_eject_velocity select 0) + (_velocity_F35_new select 0),(_eject_velocity select 1) + (_velocity_F35_new select 1),(_eject_velocity select 2) + (_velocity_F35_new select 2)];

sleep 0.5;

_Pilot action ["eject", _F35];
WaitUntil {vehicle _Pilot != _F35};
_Pilot moveindriver _Ejection_Seat;
WaitUntil {vehicle _Pilot == _Ejection_Seat};
_Ejection_Seat lock 2;

_eject_pitch_bank = _F35 call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_vector_F35 = vectordir _F35;
_velocity_F35 = velocity _F35;
_eject_boost = 35;
_eject_pos=_F35 modeltoworld (_F35 selectionposition "eject_pos");
_eject_dirpos=_F35 modeltoworld (_F35 selectionposition "eject_dir");
_eject_dirpos=[(_eject_dirpos select 0) - (_eject_pos select 0),(_eject_dirpos select 1) - (_eject_pos select 1),(_eject_dirpos select 2) - (_eject_pos select 2)];
_div=abs(_eject_dirpos select 0)+abs(_eject_dirpos select 1)+abs(_eject_dirpos select 2);
_eject_velocity=[(_eject_dirpos select 0)/_div*_eject_boost,(_eject_dirpos select 1)/_div*_eject_boost,(_eject_dirpos select 2)/_div*_eject_boost];
_velocity_F35_new=velocity _F35;
_eject_dirpos=_F35 modeltoworld (_F35 selectionposition "eject_dir");
[_F35, _Ejection_Seat] execVM "\js_jc_F35\scripts\FX\F35_FX_ejection.sqf";
detach _Ejection_Seat;
_Ejection_Seat setpos _eject_dirpos;
[_Ejection_Seat, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Ejection_Seat setvelocity [(_eject_velocity select 0) + (_velocity_F35_new select 0),(_eject_velocity select 1) + (_velocity_F35_new select 1),(_eject_velocity select 2) + (_velocity_F35_new select 2)];

sleep 1.0;

while {(alive _Pilot)} do 
{
	_PosEjection_Seat = getpos _Ejection_Seat;
	If ((_PosEjection_Seat select 2) <= 300) exitWith {};
	sleep 0.5;
			
};

_Ejection_Seat lock 0;
_eject_pitch_bank = _Ejection_Seat call BIS_fnc_getPitchBank;
_eject_pitch = _eject_pitch_bank select 0;
_eject_bank = _eject_pitch_bank select 1;
_Ejection_Seat setvelocity [0,0,0];
_Pilot action ["eject", _Ejection_Seat];
WaitUntil {vehicle _Pilot != _Ejection_Seat};

_Parachute = "Steerable_Parachute_F" createvehicle getpos _Pilot;
_Parachute setdir (getdir _Pilot);
_Parachute setpos  (getpos _Pilot);
[_Parachute, _eject_pitch, _eject_bank] call BIS_fnc_setPitchBank;
_Pilot moveindriver _Parachute;
_F35 animate ["auxtank_switch",0];
_F35 setfuel 0;
_Ejection_Seat lock 2;
_F35 lock 2;


sleep 10;

WaitUntil {((getpos _Ejection_Seat) select 2) <=5};
sleep 5;
deletevehicle _Canopy;
deletevehicle _Ejection_Seat;



Exit;
	