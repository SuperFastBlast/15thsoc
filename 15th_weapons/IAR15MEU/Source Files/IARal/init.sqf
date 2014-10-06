"init.sqf" call BIS_fnc_log;
_EH = player addEventHandler ["firedNear", {
	_ammo = _this select 6;
	if( _ammo == "M136Rocket" ) then {
		[_ammo] execVM "\iaral\fire.sqf";
	};
}];

/*player addEventHandler ["firedNear", {
	_ammo = _this select 6;
	_fatigue = getFatigue player;
	if( _ammo == "M136Rocket" ) then {
		[[ _ammo ],"BIS_fnc_guiMessage",nil,true] spawn BIS_fnc_MP;
		player setFatigue (_fatigue + 0.3);
		player removeAllEventHandlers "firedNear";
	};
}];*/

/*player addEventHandler ["take", { 
	_item = _this select 2;
	_type = _item select 0;
	
	player sideChat _type;
	
	//if( _type == "ej_launch_m136") then {
	//	player addMagazines ["M136Magazine", 1];
	//	player removeAllEventHandlers "take"; 
	//};
}];*/

//player additem "M136Rocket";

//player addWeapon 'ej_launch_m136';

//player sideChat secondaryWeapon player;

//player sideChat format secondaryWeaponMagazine player;

//player addMagazines ["M136Magazine", 1]; player addWeapon "ej_launch_m136";

//player addBackpack "B_Carryall_ocamo"; player addMagazines ["M136Magazine", 1]; player addWeapon "ej_launch_m136"; removeBackpack player

//_valueBlur = 0.0 * 3;          _hndl = ppEffectCreate ["dynamicBlur", 505];          _hndl ppEffectEnable true;          _hndl ppEffectAdjust [_valueBlur];          _hndl ppEffectCommit 0;