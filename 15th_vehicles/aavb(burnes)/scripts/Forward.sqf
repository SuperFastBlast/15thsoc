private ["_tank","_dir","_speed","_vel"];
_tank = _this select 0;

if (isNil{_tank getVariable "ScriptRunning"}) then
{

	_tank setVariable ["ScriptRunning",1,true];

	//_tankType = typeOf _tank;
	//_nameOftank = (getText (configFile >> "cfgVehicles" >> (_tankType) >> "displayname"));
	//_textString = format ["Moving %1",_nameOftank];
	//6000 cutText [_textString,"PLAIN DOWN",0];

	_dir = getDir _tank;

	_speed = 1;

	_vel = velocity _tank;

	_tank setVelocity
	[
	         (_vel select 0)+((sin _dir)*_speed),
	         (_vel select 1)+((cos _dir)*_speed),
	         0
	];

	sleep 1;
	_tank setVariable ["ScriptRunning",nil,true];

};