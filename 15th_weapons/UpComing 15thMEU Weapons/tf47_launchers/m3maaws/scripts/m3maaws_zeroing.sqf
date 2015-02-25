private ["_unit","_projectile","_vup1","_vup2","_vel1","_vel2","_velmag","_x1","_y1","_z1","_x2","_y2","_z2","_a","_b","_c","_pzero","_dir1","_nx","_ny","_nr","_nr2"];

_unit = _this select 0;

if ((local _unit)&&(isPlayer _unit)&&(_this select 1 =="tf47_m3maaws")) then
{
_weapon = _this select 1;
_muzzle = currentMuzzle _unit;
_magName = format ["%1",currentMagazine _unit];

_projectile = _this select 5;
_vup2 = vectorup _projectile;
_dir1 = getdir _projectile;

_vel1 = velocity _projectile;
_vup1 = vectornormalized _vel1;

_velmag = vectorMagnitude _vel1;


_nr=0;
_nr2=0;
_nx=1;
_ny=1;

if ((_vel1 select 1)<0) then
{
	_nr=90;
	_nx=-1;

	_nr2=90;

	if ((_vel1 select 0)<0) then
	{
		_ny=-1;
		_nx=-1;
		_nr2=-90
	};
};

_x1 = _vup1 select 0;
_y1 = _vup1 select 1;
_z1 = _vup1 select 2;

_a=asin((_vel1 select 2)/_velmag);
_b=_nr+acos((_vel1 select 0)/sqrt((_vel1 select 0)^2+(_vel1 select 1)^2));	

_c=asin(19.62*(currentzeroing player)/(_velmag^2))/4;


_x2 = cos(_b-_nr2)*cos(_a+_c)*_velmag*_ny;							
_y2 = sin(_b-_nr2)*cos(_a+_c)*_velmag*_ny*_nx;						
_z2 = sin(_a+_c)*_velmag;

_vel2 = [_x2,_y2,_z2];

_projectile setVelocity _vel2;
_projectile setdir _dir1;
_projectile setVectorUp _vup2;
_projectile setPos getPos _projectile;
};
