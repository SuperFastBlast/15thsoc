private ["_logic","_objs","_config"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_objs = [_this,1,[],[[]]] call BIS_fnc_param;
_config = _logic getVariable ["config",0];

if (!isClass (configFile >> "CfgFunctions" >> "VAS")) exitWith {
	systemChat "VAS is not included with this MCC. VAS Module not Loaded.";
	diag_log "VAS Module not Initialized. MCC4 r4 required for this VAS";
};

if (_config == 1) then {
	vas_weapons = ["rh_m9","arifle_mas_m4","arifle_mas_m4_m203","arifle_mas_m16","arifle_mas_m16_gl","srifle_mas_sr25_h","LMG_mas_M249a_F","LMG_mas_M249_F","meu_AT4","CAF_M72A6","Laserdesignator","Binocular","Rangefinder","launch_RPG32_F","M32"];
	vas_magazines = ["rh_15rnd_9x19_m9","30Rnd_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_T_Stanag","SmokeShell","SmokeShellGreen","SmokeShellYellow","SmokeShellRed","SmokeShellPurple","SmokeShellOrange","SmokeshellBlue","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","REV1_flash","Chemlight_green","Chemlight_red","Chemlight_yellow","Chemlight_blue","DemoCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","Laserbatteries","RPG32_F","RPG32_HE_F","APERSMine_Range_Mag","ClaymoreDirectionalMine_Remote_Mag","6Rnd_HE_M32","6Rnd_FlareWhite_M32","6Rnd_FlareGreen_M32","6Rnd_FlareRed_M32","6Rnd_FlareYellow_M32","6Rnd_FlareCIR_M32","6Rnd_Smoke_M32","6Rnd_SmokeRed_M32","6Rnd_SmokeGreen_M32","6Rnd_SmokeYellow_M32","6Rnd_SmokePurple_M32","6Rnd_SmokeOrange_M32","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"];
	vas_items = ["acc_flashlight","acc_pointer_IR","FHQ_optic_ACOG","optic_Arco","optic_Hamr","FHQ_optic_AIM","FHQ_acc_ANPEQ15","FHQ_optic_HWS","FHQ_optic_HWS_G33","FHQ_optic_microCCO","optic_tws","NVGoggles_OPFOR","Medikit","FirstAidKit","ItemWatch","ItemCompass","ItemGPS","ItemRadio","ItemMap","B_UavTerminal","itemctab","itemandroid","ItemcTabHCam","H_mas_mar_HelmetBind_v","H_mas_mar_HelmetB_v","U_mas_mar_B_IndUniform1_v","U_mas_mar_B_CombatUniform_veg","V_mas_mar_PlateCarrier2_rgr_d","V_mas_mar_PlateCarrierGL_rgr_d","U_B_PilotCoveralls","U_mas_mar_B_pilot","V_TacVest_blk","H_PilotHelmetFighter_B","H_CrewHelmetHeli_B","H_PilotHelmetHeli_B","H_HelmetCrew_I","V_mas_mar_PlateCarrier1_rgr_d","V_mas_mar_PlateCarrierGL_rgr_d","optic_tws_mg","H_mas_mar_HelmetB_light_v","ToolKit","MineDetector"];
	vas_backpacks = ["B_UAV_01_backpack_F","B_Kitbag_cbr","B_AssaultPack_cbr","tf_rt1523g","B_Carryall_cbr"];
	vas_glasses = ["AV_ESS_blk_clr","AV_ESS_tan","AV_ESS_tan_clr","AV_ESS_grn","AV_ESS_grn_clr"];
};

{
	_x addAction["<t color='#ff1111'>Virtual Ammobox</t>","mcc_sandbox_mod\VAS\open.sqf"];
} foreach _objs;

diag_log format ["VAS Module Initialized on: %1",_objs];
true;