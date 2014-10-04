Private ["_F35"];
_F35 = vehicle player;
If (!Local _F35) ExitWith {};


CreateDialog "F35_E_MAIN_UI";

WaitUntil {!Dialog};
 
_F35 animate ["service_menu_switch",0];