Private ["_F35"];
_F35 = vehicle player;
_F35_PILOT = driver _F35;


deleteVehicle target;
deleteMarkerLocal "GPS_marker";
_F35 animate ["gps_targeting_switch",0];
_gps = _F35 animationPhase "gps_targeting_switch";

	hintsilent format["GPS %1",_gps];

(_ui displayCtrl 5004) ctrlSetText "GPS TGT NOT SET/ACTIVE";

onMapSingleClick "";
if ((player == _F35_PILOT)) then {titleText ["\n \n GPS/INS target is CLEARED, \n set the new GPS/INS target cordinates...", "PLAIN DOWN",1];};

Exit;