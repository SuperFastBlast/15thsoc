unit = _this select 0;

if ((currentweapon unit == "tf47_at4_heat") && (unit getvariable "tf47_disposable" == "1")) then
{
	unit removeWeapon "tf47_at4_heat";
	weapon1 = createVehicle ["WeaponHolderSimulated", ((getposATL unit) vectoradd [0,0,0.04]), [], 0, "CAN_COLLIDE"];
	weapon1 addweaponcargo ["tf47_at4_tube", 1];
};

if ((currentweapon unit == "tf47_at4_hedp") && (unit getvariable "tf47_disposable" == "1")) then
{
	unit removeWeapon "tf47_at4_hedp";
	weapon1 = createVehicle ["WeaponHolderSimulated", ((getposATL unit) vectoradd [0,0,0.04]), [], 0, "CAN_COLLIDE"];
	weapon1 addweaponcargo ["tf47_at4_tube", 1];
};

if ((currentweapon unit == "tf47_at4_hp") && (unit getvariable "tf47_disposable" == "1")) then
{
	unit removeWeapon "tf47_at4_hp";
	weapon1 = createVehicle ["WeaponHolderSimulated", ((getposATL unit) vectoradd [0,0,0.04]), [], 0, "CAN_COLLIDE"];
	weapon1 addweaponcargo ["tf47_at4_tube", 1];
};