_F35 = _this select 0;
while {true} do
{

    _weaponbay_missile_count = {_x == "CHO_F35B_Zephyr_int_M"} count magazines _F35;
	_weaponbay_bomb_count = {_x == "CHO_F35B_GBU12_int_M"} count magazines _F35;
	if 
    ( 
        ((currentWeapon _F35 == "CHO_F35B_Zephyr_W") and (currentMagazine _F35 == "CHO_F35B_Zephyr_int_M") and  (_weaponbay_missile_count > 0)) || ((currentWeapon _F35 == "CHO_F35B_GBU12_W") and (currentMagazine _F35 == "CHO_F35B_GBU12_int_M") and (_weaponbay_bomb_count > 0))
    ) 
    then
    {
        If (_F35 animationphase "Hatch_Weaponbay_1_1" < 0.01) then {_F35 animate ["Hatch_Weaponbay_1_1",1];};
        If (_F35 animationphase "Hatch_Weaponbay_1_2" < 0.01) then {_F35 animate ["Hatch_Weaponbay_1_2",1];};
        If (_F35 animationphase "Hatch_Weaponbay_1_3" < 0.01) then {_F35 animate ["Hatch_Weaponbay_1_3",1];};
        If (_F35 animationphase "Hatch_Weaponbay_1_4" < 0.01) then {_F35 animate ["Hatch_Weaponbay_1_4",1];};
    }
    else
    {
        _F35 animate ["Hatch_Weaponbay_1_1",0];
        _F35 animate ["Hatch_Weaponbay_1_2",0];
        _F35 animate ["Hatch_Weaponbay_1_3",0];
        _F35 animate ["Hatch_Weaponbay_1_4",0];
    };

sleep 0.5;
};