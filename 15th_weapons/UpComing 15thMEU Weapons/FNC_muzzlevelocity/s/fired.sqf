private ["_speed", "_bullet", "_muzzlefact", "_dir"];

_bullet = _this select 5;
_speed = (speed _bullet)/3.6;
_muzzlefact = getNumber (configFile >> "cfgWeapons" >> (_this select 1) >> "muzzleVelocityFactor");

//Only riflebullets are handled
if ((_speed > 100) and (_muzzlefact != 1) and (_muzzlefact > 0)) then
{
	_dir = vectorDir _bullet;
	_speed = _muzzlefact * _speed;
	_bullet setVelocity [(_dir select 0)*_speed, (_dir select 1)*_speed, (_dir select 2)*_speed];
};