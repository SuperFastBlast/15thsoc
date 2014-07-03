//Speed limit for Gyrocam

_vcl = _this select 0;

if(!(_vcl isKindOf "ExA_RG31_M2_GC")) exitWith{};

while {alive _vcl} do {
	If (speed _vcl > 60 && _vcl animationPhase 'Gyrocam_1' > 0) then {

		_vcl animate ['Gyrocam_2', 0];
		_vcl animate ['Gyrocam_1', 0];
	};
};