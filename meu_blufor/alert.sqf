private["_veh", "_fnc_caws3"];
_veh = _this select 0;

_veh setVariable ["caws3", true, false];

_fnc_caws3 = {
	if ((player in (crew _this)) &&	_this getVariable "caws3") then
	{
		if (isEngineOn _this) then { true } else { false }
	} else {
		false
	}
};

functionName_incomingMissile = 
{
         private["_unit", "_ammo", "_whoFired"];
	_unit = _this select 0;
	_ammo = _this select 1;

	_whoFired = _this select 2;
 	_dirPlayer = getDir _unit;
	_dirEnemy = getDir _whoFired;
	_altPlayer = getPosAsl _unit select 2;
	_altEnemy = getPosAsl _whoFired select 2;
	if(_altPlayer - _altEnemy < 0)then{	
		if((_dirPlayer - _dirEnemy > -45 &&_dirPlayer - _dirEnemy < 45) || (_dirPlayer - _dirEnemy > 315 || _dirPlayer - _dirEnemy < -315))then{
			playSound ["Missile6H", true];
		};
		if((_dirPlayer - _dirEnemy > -315 &&_dirPlayer - _dirEnemy < -225) || (_dirPlayer - _dirEnemy > 45 &&_dirPlayer - _dirEnemy < 135))then{
			playSound ["Missile3H", true];
		};
		if((_dirPlayer - _dirEnemy > -225 &&_dirPlayer - _dirEnemy < -135) || (_dirPlayer - _dirEnemy > 135 &&_dirPlayer - _dirEnemy < 225))then{
			playSound ["Missile12H", true];
		};
		if((_dirPlayer - _dirEnemy > -135 &&_dirPlayer - _dirEnemy < -45) || (_dirPlayer - _dirEnemy > 225 &&_dirPlayer - _dirEnemy < 335))then{
			playSound ["Missile9H", true];
		};
	}else{	
        if(_altPlayer - _altEnemy > 0)then{						
		if((_dirPlayer - _dirEnemy > -45 &&_dirPlayer - _dirEnemy < 45) || (_dirPlayer - _dirEnemy > 315 || _dirPlayer - _dirEnemy < -315))then{
			playSound ["Missile6L", true];
		};
		if((_dirPlayer - _dirEnemy > -315 &&_dirPlayer - _dirEnemy < -225) || (_dirPlayer - _dirEnemy > 45 &&_dirPlayer - _dirEnemy < 135))then{
			playSound ["Missile3L", true];
		};
		if((_dirPlayer - _dirEnemy > -225 &&_dirPlayer - _dirEnemy < -135) || (_dirPlayer - _dirEnemy > 135 &&_dirPlayer - _dirEnemy < 225))then{
			playSound ["Missile12L", true];
		};
		if((_dirPlayer - _dirEnemy > -135 &&_dirPlayer - _dirEnemy < -45) || (_dirPlayer - _dirEnemy > 225 &&_dirPlayer - _dirEnemy < 335))then{
			playSound ["Missile9L", true];
		};
                };
	};
};


while { alive _veh } do {
	if (_veh call _fnc_caws3) exitWith {
        _incomingMissile = _veh addEventHandler ["incomingmissile", "_this call functionName_incomingMissile"];
        };
};
