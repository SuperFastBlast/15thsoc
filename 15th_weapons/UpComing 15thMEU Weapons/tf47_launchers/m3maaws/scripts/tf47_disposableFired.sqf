unit = _this select 0;

if (currentweapon unit == "tf47_at4_heat") then
{
//	unit addSecondaryWeaponItem "tf47_fakeitem_at4";
	unit setvariable ["tf47_disposable","1"];
	while {currentWeapon unit == "tf47_at4_heat"} do
	{
		sleep 0.125;
	};
	sleep 0.125;
	if (secondaryWeapon unit == "tf47_at4_heat") then
	{
		unit removeWeapon "tf47_at4_heat";
		weapon1 = createVehicle ["WeaponHolderSimulated", ((getposATL unit) vectoradd [0,0,0.04]), [], 0, "CAN_COLLIDE"];
		weapon1 addweaponcargo ["tf47_at4_tube", 1];
	};
};
if (currentweapon unit == "tf47_at4_hedp") then
{
//	unit addSecondaryWeaponItem "tf47_fakeitem_at4";
	unit setvariable ["tf47_disposable","1"];
	while {currentWeapon unit == "tf47_at4_hedp"} do
	{
		sleep 0.125;
	};
	sleep 0.125;
	if (secondaryWeapon unit == "tf47_at4_hedp") then
	{
		unit removeWeapon "tf47_at4_hedp";
		weapon1 = createVehicle ["WeaponHolderSimulated", ((getposATL unit) vectoradd [0,0,0.04]), [], 0, "CAN_COLLIDE"];
		weapon1 addweaponcargo ["tf47_at4_tube", 1];
	};
};
if (currentweapon unit == "tf47_at4_hp") then
{
//	unit addSecondaryWeaponItem "tf47_fakeitem_at4";
	unit setvariable ["tf47_disposable","1"];
	while {currentWeapon unit == "tf47_at4_hp"} do
	{
		sleep 0.125;
	};
	sleep 0.125;
	if (secondaryWeapon unit == "tf47_at4_hp") then
	{
		unit removeWeapon "tf47_at4_hp";
		weapon1 = createVehicle ["WeaponHolderSimulated", ((getposATL unit) vectoradd [0,0,0.04]), [], 0, "CAN_COLLIDE"];
		weapon1 addweaponcargo ["tf47_at4_tube", 1];
	};
};
unit setvariable ["tf47_disposable","0"];