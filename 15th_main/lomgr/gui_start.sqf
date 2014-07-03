private ["_box", "_ShowDialog","_ok","_void"];
	
_box = _this select 0;
//hint str _this;
player setVariable ["meuLomgrSelectedBox",_box];
	
_ShowDialog = {
sleep 0.01;
_ok = createDialog "meu_loadoutmgr_dlg";
waitUntil { !dialog };
};
 
_void = [] call _ShowDialog;
