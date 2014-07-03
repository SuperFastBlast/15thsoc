// aerialSim.sqf
// © FEBRUARY 2011 - norrin

_vcl = _this select 0;
_constant = 2000;

while {alive _vcl} do
{	
	while {(isEngineOn _vcl) && canMove _vcl} do
	{	
		_speed = speed _vcl;
		while {_speed > 0} do
		{
			_speed = speed _vcl;
			_cL = _constant/ (1 + (random 0.12)); 
			_cR = _constant/ (1 + (random 0.12)); 
			_vcl animate ["antenna_1",  _speed/_cL];
			_vcl animate ["antenna_2",  _speed/_cL];
			sleep 0.01;
			_vcl animate ["antenna_3",  _speed/_cL];
			_vcl animate ["antenna_4",  _speed/_cL];
			_vcl animate ["antenna_5",  _speed/_cL];
			_vcl animate ["antenna_6",  _speed/_cL];
			sleep 0.01;
		};
		sleep 0.1;
	};
	sleep 2;
};