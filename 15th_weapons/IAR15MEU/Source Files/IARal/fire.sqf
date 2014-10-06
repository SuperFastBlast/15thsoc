_fatigue = getFatigue player;
player setFatigue (_fatigue + 0.3);

_base = 0.4;

_valueBlur = _base + _fatigue * 3.5;
_hndl = ppEffectCreate ["dynamicBlur", 505];
_hndl ppEffectEnable true;
_hndl ppEffectAdjust [_valueBlur];
_hndl ppEffectCommit 0;

_hndl = ppEffectCreate ["dynamicBlur", 505];
_hndl ppEffectEnable true;
_hndl ppEffectAdjust [0];
_hndl ppEffectCommit 5;