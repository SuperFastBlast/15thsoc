//player addaction ["Airburst Cfg", "_this execVM '\tf47_launchers\m3maaws\scripts\m3maaws_airburstcfg.sqf'"];

(_this select 0) setVariable ["AirburstState", "x"];
(_this select 0) setVariable ["FlareState", "x"];


(_this select 0) setVariable ["AirburstRange", "70000"];
(_this select 0) setVariable ["FlareRange", "500"];

_unit = _this select 0;

_t = 1;

while {true} do {

	sleep 2;
	_unit removeMagazines "tf47_at4_m_heat";
	_unit removeMagazines "tf47_at4_m_hedp";
	_unit removeMagazines "tf47_at4_m_hp";

	if ((secondaryWeaponItems _unit) select 0 == "tf47_fakeitem_at4") then
	{
		_unit removeSecondaryWeaponItem "tf47_fakeitem_at4";
	};
	if ((secondaryWeaponMagazine _unit) select 0 == "tf47_at4_m_heat") then
	{
		_unit removeWeapon 'tf47_at4_heat'; 
		_unit addWeapon 'tf47_at4_heat'; 
	};

	if ((secondaryWeaponMagazine _unit) select 0 == "tf47_at4_m_hedp") then
	{
		_unit removeWeapon 'tf47_at4_hedp'; 
		_unit addWeapon 'tf47_at4_hedp'; 
	};

	if ((secondaryWeaponMagazine _unit) select 0 == "tf47_at4_m_hp") then
	{
		_unit removeWeapon 'tf47_at4_hp'; 
		_unit addWeapon 'tf47_at4_hp'; 
	};

//	sleep 2;

	if (currentWeapon _unit == "tf47_at4_heat") then {
		_unit addMagazine "tf47_at4_m_heat";
		
	};

	if (currentWeapon _unit == "tf47_at4_hedp") then {
		_unit addMagazine "tf47_at4_m_hedp";
		
	};

	if (currentWeapon _unit == "tf47_at4_hp") then {
		_unit addMagazine "tf47_at4_m_hp";
		
	};

//	sleep 2;

	while {currentWeapon _unit == "tf47_at4_heat"} do {
		sleep 1;		
	};
	while {currentWeapon _unit == "tf47_at4_hedp"} do {
		sleep 1;		
	};
	while {currentWeapon _unit == "tf47_at4_hp"} do {
		sleep 1;		
	};
};