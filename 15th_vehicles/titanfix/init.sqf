/* 
* Burnes M1A2 Init Script
* by Cpl Burnes
*
* fixes by Fight9
* Interior Lights by Lala14 & Tajin
*/

// defines
#define TAG 				m1

#define DEBUG(text1)		//systemChat text1;

#define QUOTE(var1)			#var1
#define DOUBLE(var1,var2)	##var1##_##var2
#define TRIPLE(var1,var2,var3)	##var1##_##var2##_##var3
#define GVAR(var1)			DOUBLES(TAG,var1)
#define QGVAR(var1)			QUOTE(GVAR(var1))
#define FUNC(var1)			TRIPLE(TAG,fnc,var1)
#define INC(var1)			var1 = var1 + 1
#define ADD(var1,var2)		var1 = var1 + var2
#define GETVAR(var1,def)	getVariable [QGVAR(var1),def]
#define SETVAR(var1,def)	setVariable [QGVAR(var1),def]
#define SETVARP(var1,def)	setVariable [QGVAR(var1),def,true]
#define GETVARQ(var1,def)	getVariable [var1,def]
#define SETVARPQ(var1,def)	setVariable [var1,def,true]
#define SEL(var1,index)		(var1 select index)
#define IL_c_red 			[255,0,0]
#define IL_att_soft			[0,10,10,10]
#define IL_intensity 		30
#define IL_position			[0, -2.4, -1]
#define IL_intensity_mult	0.2


// functions
FUNC(callSignAdd) = {
	// add 1 num to vic call sign
	private ["_t","_n","_s","_c","_v","_m"];
	_t = SEL(_this,0); // tank
	_n = SEL(_this,1); // num 1 or 2	
	_s = if (_n == 1) then [{ 7 },{ 8 }];
	_v = format ['m1_callSign%1Number',_n];
	_c = _t GETVARQ(_v,0);
	_c = if (_c == 0) then [{(round random 3) + 1},{_c}];
	_c = if (_c == 4) then [{ 1 },{ _c + 1 }];
	_t setObjectTextureGlobal [_s,(format ["\Burnes_M1A2\data\callsigns\1%1.paa",_c])];
	_t SETVARPQ(_v,_c);
	_m = 'FUNC(callSignAdd) : Sel:' + str _s + " Tex:" + str _c;
	DEBUG(_m);
	_s
};

FUNC(smokeScreen) = {
	// create smoke & action to remove
	private ["_t","_s1","_s2","_a","_m"];
	_t = SEL(_this,0);	// tank
	if (_t GETVAR(smoking,false)) exitWith {DEBUG("Smoke Already Deployed");false};
	_s1 = "SmokeShell" createVehicle position _t; 
	_s1 attachTo [_t,[1.4,-1.2,1.8]]; 
	_s2 = "SmokeShell" createVehicle position _t; 
	_s2 attachTo [_t,[-1.4,-1.2,1.8]];	
	_a = _t addAction [
		"<t color='#FF0000'>Smoke Screen OFF</t>",
		{
			{ deleteVehicle _x; } forEach SEL(_this,3);
			SEL(_this,0) removeAction SEL(_this,2);
			SEL(_this,0) SETVARP(smoking,false);
			DEBUG('FUNC(smokeScreen): Smokes Deleted');
		},
		[_s1,_s2],
		2
	];	
	_t SETVARP(smoking,true);
	_m = 'FUNC(smokeScreen) : Smokes: ' + str _s1 + " || " + str _s2;
	DEBUG(_m);
	_a
};

FUNC(interiorLights) = {
	// create light inside tank
	private ["_t","_f","_m"];
	_t = SEL(_this,0); // tank
	_f = SEL(_this,1); // mode: true = on, false = off
	_m = "";
	if _f then {
		// create lights
		private "_l";
		if !( _t GETVAR(lightsOn,false) ) then {
			_l = "#lightpoint" createVehicleLocal [0,0,0];
			//_l lightAttachObject [_t,IL_position];
			_l attachTo [_t,IL_position];
			_l setLightDayLight true;
			_l setLightColor IL_c_red;
			_l setLightAttenuation IL_att_soft;
			_l setLightIntensity (IL_intensity * IL_intensity_mult);
			_t SETVAR(theLights,[_l]);
			_m = "Light On: " + str _l;
			_t SETVAR(lightsOn,true);
		};
	} else {
		// delete lights
		private "_l";
		_t SETVAR(lightsOn,false);
		_l = _t GETVAR(theLights,[]);
		{ deleteVehicle _x } forEach _l;
		_m = "Light Off";
	};
	_m = 'FUNC(interiorLigts) :' + _m;
	DEBUG(_m);
	_f
};

// Tank Init
if (local _this) then {
	// set vehicle call signs
	_n = [_this,1] spawn FUNC(callSignAdd);
	_n = [_this,2] spawn FUNC(callSignAdd);
};

// addactions
_this addaction ["Show Ammo Count","\Burnes_M1A2\Burnes_ammoCount.sqf",[],1.5,true,true,"","_this in _target && _this != driver _target"];
_this addAction ["<t color='#FF0000'>Smoke Screen ON</t>",{ _this spawn FUNC(smokeScreen); },[],2,true,false,"",'_this in [commander _target] && !( _target GETVAR(smoking,false) )'];
_this addAction ["<t color='#33CC33'>CPS Thermal ON</t>",{ SEL(_this,0) setObjectTexture [6,"#(argb,512,512,1)r2t(rendertarget3,1.0)"]; },[],0,true,false,"","_this in [commander _target]"];
_this addAction ["<t color='#33CC33'>CPS Night-Vision ON</t>",{ SEL(_this,0) setObjectTexture [6,"#(argb,512,512,1)r2t(rendertarget300,1.0)"]; },[],0,true,false,"","_this in [commander _target]"];
_this addAction ["<t color='#33CC33'>CPS Colour ON</t>",{ SEL(_this,0) setObjectTexture [6,"#(argb,512,512,1)r2t(rendertarget3000,1.0)"]; },[],0,true,false,"","_this in [commander _target]"];
_this addAction ["<t color='#FFFF00'>Cycle Call Sign 1</t>",{ [SEL(_this,0),1] spawn FUNC(callSignAdd); },[],0,true,false,"","_this in [commander _target]"];
_this addAction ["<t color='#FFFF00'>Cycle Call Sign 2</t>",{ [SEL(_this,0),2] spawn FUNC(callSignAdd); },[],0,true,false,"","_this in [commander _target]"];
_this addAction ["Dump AGM Range Data","\Burnes_M1A2\Burnes_DumpRange.sqf",[],1,true,true,"","_this in [gunner _target]"];
_this addAction ["<t color='#FF0000'>Interior Light ON</t>",{ [SEL(_this,0),true] call FUNC(interiorLights); },[],0,true,true,"",'_this in _target && !( _target GETVAR(lightsOn,false) )'];
_this addAction ["<t color='#FF0000'>Interior Light OFF</t>",{ [SEL(_this,0),false] call FUNC(interiorLights); },[],0,true,true,"",'_this in _target && ( _target GETVAR(lightsOn,false) )'];

//_this addAction ["Open Hatch",{SEL(_this,0) animate ["InteriorHatch",1];},[],1.5,true,true,"","_this in [commander _target] && (_target animationPhase ""InteriorHatch"" == 0)"];
//_this addAction ["Close Hatch",{SEL(_this,0) animate ["InteriorHatch",0];},[],1.5,true,true,"","_this in [commander _target] && (_target animationPhase ""InteriorHatch"" == 1)"];


DEBUG("M1A2 Init Completed.")

true


