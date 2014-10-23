//script to simulate ejection FX 
//created by John_Spartan


_F35= _this select 0;
_Ejection_Seat = _this select 1;
_Pilot = driver _Ejection_Seat;

_Ejection_Seat say3D "F35_ejection_sound";

_FX_light_source = "#lightpoint" createVehicle getpos _Ejection_Seat;
_FX_light_source  setLightBrightness 0.3;
_FX_light_source  setLightAmbient[0.8, 0.6, 0.2];
_FX_light_source  setLightColor[1, 0.5, 0.2];
_FX_light_source  lightAttachObject [_Ejection_Seat, [0,0,0]];

sleep 0.01;

deleteVehicle _FX_light_source;

_FX_smoke_source = "#particlesource" createVehicle (getpos _F35);
_FX_smoke_source setParticleClass "MLRSFired1L";
_FX_smoke_source attachto [_F35,[0,0,0],"actionarea"];

_FX_smoketrail_source = "#particlesource" createVehicle (getpos _Ejection_Seat);
_FX_smoketrail_source setParticleClass "MissileEffects1";
_FX_smoketrail_source attachto [_Ejection_Seat,[0,0,0],"FX_pos"];

sleep 0.2;
deleteVehicle _FX_smoke_source;
sleep 0.5;
deleteVehicle _FX_smoketrail_source;
Exit;
