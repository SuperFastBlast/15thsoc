_F35 = _this select 0;
_F35 animate ["rearming_done_switch",1];
_F35 animate ["eject_switch",0];
_F35 animate ["r_canopy_hide",0];
_F35 animate ["ejection_seat_hide",0];
_F35 animate ["init_done_switch",0];
_F35 animate ["gps_targeting_switch",0];

[this] execVM "f35b_15th\scripts\FX\F35_FX_Gforce.sqf";
while {true} do 
{

_weaponbay_missile_count = {_x == "js_m_fa18_aim120c_x1"} count magazines _F35;
_weaponbay_bomb_count = {_x == "js_m_fa18_GBU32_JDAM_x1"} count magazines _F35;
If (((currentWeapon _F35 == "js_w_fa18_aim120cLaucher") and  (_weaponbay_missile_count > 0)) or ((currentWeapon _F35 == "js_w_fa18_GBU32BombLauncher") and  (_weaponbay_bomb_count > 0))) then 
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

Exit;
