//script to animate and simulate afterburners on FA-18 
//to activate use "SeagullFastForward" key or useraction in action menu
//original authors: Gnat and lethal
//modified to for use on this addon by John_Spartan (with Gnat's permission)


private ["_MaxIntensity","_Boost","_Intensity","_looptime", "_plane"];

_MaxIntensity = 1;
_Boost = 0.6;
_Intensity = 0.4;
_maxspeed = 1650;
_plane = _this;
_fueldrag = 3500;

sleep 0.5;
_looptime = 0.1;
_runtime = 200;

//_FX_ab_l = "#particlesource" createVehicle (getpos _plane);
//_FX_ab_l setParticleClass "SU35_afterburner_FX";
//_FX_ab_l attachto [_plane,[0,0,0],"Exhausts_start_left"];

//_FX_ab_r = "#particlesource" createVehicle (getpos _plane);
//_FX_ab_r setParticleClass "SU35_afterburner_FX";
//_FX_ab_r attachto [_plane,[0,0,0],"Exhausts_start_right"];

while {(alive _plane) and (_plane animationphase "ab_switch" >= 0.1)} do {
if (isengineon _plane) then 
{
if (_Intensity < _MaxIntensity) then {_Intensity = _Intensity + 0.1*(15*_looptime)};
if ((speed _plane) < _maxspeed) then {_plane setVelocity [(velocity _plane select 0)+((vectordir _plane) select 0)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 1)+((vectordir _plane) select 1)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 2)+((vectordir _plane) select 2)*((_Boost*_Intensity/2)*(15*_looptime))]};
if (fuel _plane > 0) then {_plane setFuel ((fuel _plane)-((1/_fueldrag)*(3*_looptime)))};
} 
else {if (_Intensity > 0) then {_Intensity = _Intensity - 0.2*(15*_looptime)}};


sleep 0.05;
_runtime = _runtime - 1;
};

sleep 3;

//deleteVehicle _FX_ab_l;
//deleteVehicle _FX_ab_r;


