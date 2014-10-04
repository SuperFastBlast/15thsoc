If (!Local Player) ExitWith {};  
Private "_F35";
_F35 = vehicle player;

closeDialog 0;

sleep 0.01;
if 
(
((_F35 distance (nearestObject [_F35, "B_Truck_01_ammo_F"]) < 25) and (damage (nearestObject [_F35, "B_Truck_01_ammo_F"]) < 1) and (player == driver _F35) and (_F35 animationPhase "service_menu_switch" < 0.5) and (speed _F35 < 1))
or
((_F35 distance (nearestObject [_F35, "Land_Hangar_F"]) < 55) and (damage (nearestObject [_F35, "Land_Hangar_F"]) < 1) and (player == driver _F35) and (_F35 animationPhase "service_menu_switch" < 0.5) and (speed _F35 < 1))
or
((_F35 distance (nearestObject [_F35, "Land_TentHangar_V1_F"]) < 55) and (damage (nearestObject [_F35, "Land_TentHangar_V1_F"]) < 1) and (player == driver _F35) and (_F35 animationPhase "service_menu_switch" < 0.5) and (speed _F35 < 1))
or
((_F35 distance (nearestObject [_F35, "JDG_carrier_Spawner"]) < 555) and (damage (nearestObject [_F35, "JDG_carrier_Spawner"]) < 1) and (player == driver _F35) and (_F35 animationPhase "service_menu_switch" < 0.5) and (speed _F35 < 1))
) 

then {CreateDialog "F35_E_MAIN_UI";} else {CreateDialog "FA18_E_MAIN_RESTRICTED_UI";};

