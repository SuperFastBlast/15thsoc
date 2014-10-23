class CfgPatches {
	class meu_Nocs {
		units[] = {};
		weapons[] = {meu_MX2A_base};
		requiredVersion = 1.00;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
//adding AGM stuff
class Extended_PostInit_EventHandlers {
  class AGM_Vector {
    clientInit = "call compile preprocessFileLineNumbers '\MX2A\clientInit.sqf'";
  };
};

class AGM_Core_Default_Keys {
  class vectorAzimuth {
    displayName = "$STR_AGM_Vector_AzimuthKey";
    condition = "currentWeapon player == 'meu_MX2A_tan' && {_vehicle == player} && {cameraView == 'Gunner'}";
    statement = "AGM_vectorKey set [0, true]; if (AGM_isVectorReady) then {AGM_isVectorReady = false; AGM_Vector_scriptHandle = 0 spawn AGM_Vector_tabAzimuthKey; 0 spawn AGM_Vector_abort;};";
    conditionUp = "true";
    statementUp = "AGM_vectorKey set [0, false];";
    key = 15;
    shift = 0;
    control = 0;
    alt = 0;
  };
  class vectorDistance {
    displayName = "$STR_AGM_Vector_DistanceKey";
    condition = "currentWeapon player == 'meu_MX2A_tan' && {_vehicle == player} && {cameraView == 'Gunner'}";
    statement = "AGM_vectorKey set [1, true]; if (AGM_isVectorReady) then {AGM_isVectorReady = false; AGM_Vector_scriptHandle = 0 spawn AGM_Vector_tabDistanceKey; 0 spawn AGM_Vector_abort;};";
    conditionUp = "true";
    statementUp = "AGM_vectorKey set [1, false];";
    key = 19;
    shift = 0;
    control = 0;
    alt = 0;
  };
};

//end agm stuff

class CfgVehicles
{
//inhertance classes
class NATO_BOX_BASE;
class Item_Base_F;
//mx2a box for testing
		class MX2A_box: NATO_Box_Base
		{
			scope = 2;
			accuracy = 1000;
			side = 1;
			faction = "blu_f";
			displayName = "MX2A testing box";
			model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		
		


				class TransportWeapons
				{
					class meu_MX2A_tan
					{
						weapon = "meu_MX2A_tan";
						count = 50;
					};
					class meu_MX2A_olive
					{
						weapon = "meu_MX2A_olive";
						count = 50;
					};
				};
		};		
	



//some definition of the iteam
		class Item_MX2A: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_Rangefinder0";
		author = "$STR_A3_Bohemia_Interactive";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class meu_MX2A_base
			{
				name = "MX2A";
				count = 1;
			};
		};
	};




};//end cfgVehicles

class CfgWeapons
{
	//external classes
	class Binocular;

	// definitions of the functions of the monocular
	class meu_MX2A_tan: Binocular
	{
		author = "15th MEU ModTeam";
		_generalMacro = "Laserdesignator";
		model = "MX2A\meu_MX2A_tan.p3d";
		modelOptics = "\MX2A\meu_mx2a_optics.p3d";
		weaponInfoType = "AGM_RscOptics_vector";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "MX-2A tan";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Laserdesignator1";
		picture = "\A3\Weapons_F\Data\UI\gear_lasermarker_CA.paa";
		cursor = "laserDesignator";
		cursorAim = "EmptyCursor";
		cursorAimOn = "EmptyCursor";
		showSwitchAction = 1;
		simulation = "weapon";
		forceOptics = 0;
		class WeaponSlotsInfo
		{
			mass = 20;
		};
		Laser = 0;
		visionMode[] = {"TI"};
		thermalMode[] = {0,1};
		opticsZoomMin = 0.22;
		opticsZoomMax = 0.20;
		opticsZoomInit = 0.42;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
	};
	class meu_MX2A_olive : meu_MX2a_tan
	{
	model = "MX2A\meu_MX2A_olive.p3d";	
	displayName = "MX-2A Olive";
	};
};//end cfgweapons

//adding ending agm stuff
class AGM_Rsc_Display_Base;
class AGM_Rsc_Control_Base;
class RSCText;

class RscInGameUI {
  class AGM_RscOptics_vector: AGM_Rsc_Display_Base {
    idd = -1;
    onLoad = "uiNamespace setVariable ['AGM_dlgVectorOptics', _this select 0];";
    controls[] = {"CA_Distance","CA_Heading","CA_OpticsPitch"};

    class CA_Distance: RSCText {
      idc = 151;  // distance
      w = 0;
      h = 0;
    };
    class CA_Heading: RSCText {
      idc = 156;  // azimuth
      w = 0;
      h = 0;
    };
    class CA_OpticsPitch: RSCText {
      idc = 182;  // inclination
      w = 0;
      h = 0;
    };
  };
};

class RscTitles {
  class AGM_Vector : AGM_Rsc_Display_Base {
    name = "AGM_Vector";
    onLoad = "uiNamespace setVariable ['AGM_dlgVector', _this select 0];";
    controls[] = {"Vector_Center", "Vector_Crosshair", "Digit0", "Digit1", "Digit2", "Digit3", "Digit4", "Digit5", "Digit6", "Digit7", "Digit8", "Digit9", "DigitE1", "DigitE2", "DigitE3", "DigitE4"};

    class Vector_Center : AGM_Rsc_Control_Base {
      idc = 1;
      colorText[] = {1, 0, 0, 0.5};
      x = 0.488 * safezoneW + safezoneX;
      y = 0.4783 * safezoneH + safezoneY;
      w = 0.4 / 16 * safezoneW;
      h = 0.4 / 9 * safezoneH;
    };

    class Vector_Crosshair : Vector_Center {
      idc = 2;
      x = 0.4848 * safezoneW + safezoneX;
      y = 0.4732 * safezoneH + safezoneY;
      w = 0.5 / 16 * safezoneW;
      h = 0.5 / 9 * safezoneH;
    };

    class Digit0 : Vector_Center {
      idc = 10;
      x = (0.54 + 0 * 0.02) * safezoneW + safezoneX;
      y = 0.54 * safezoneH + safezoneY;
      w = 0.5 / 16 * safezoneW;
      h = 0.5 / 9 * safezoneH;
    };

    class Digit1 : Digit0 {
      idc = 11;
      x = (0.54 + 1 * 0.02) * safezoneW + safezoneX;
    };

    class Digit2 : Digit0 {
      idc = 12;
      x = (0.54 + 2 * 0.02) * safezoneW + safezoneX;
    };

    class Digit3 : Digit0 {
      idc = 13;
      x = (0.54 + 3 * 0.02) * safezoneW + safezoneX;
    };

    class Digit4 : Digit0 {
      idc = 14;
      x = (0.54 + 4 * 0.02) * safezoneW + safezoneX;
    };

    class Digit5 : Digit0 {
      idc = 15;
      x = (0.35 + 0 * 0.02) * safezoneW + safezoneX;
    };

    class Digit6 : Digit0 {
      idc = 16;
      x = (0.35 + 1 * 0.02) * safezoneW + safezoneX;
    };

    class Digit7 : Digit0 {
      idc = 17;
      x = (0.35 + 2 * 0.02) * safezoneW + safezoneX;
    };

    class Digit8 : Digit0 {
      idc = 18;
      x = (0.35 + 3 * 0.02) * safezoneW + safezoneX;
    };

    class Digit9 : Digit0 {
      idc = 19;
      x = (0.35 + 4 * 0.02) * safezoneW + safezoneX;
    };

    class DigitE1 : Digit0 {
      idc = 21;
      x = (0.39 + 0 * 0.02) * safezoneW + safezoneX;
      y = 0.42 * safezoneH + safezoneY;
    };

    class DigitE2 : DigitE1 {
      idc = 22;
      x = (0.39 + 1 * 0.02) * safezoneW + safezoneX;
    };

    class DigitE3 : DigitE1 {
      idc = 23;
      x = (0.39 + 2 * 0.02) * safezoneW + safezoneX;
    };

    class DigitE4 : DigitE1 {
      idc = 24;
      x = (0.39 + 3 * 0.02) * safezoneW + safezoneX;
    };
  };

  //PRELOAD
  class AGM_Digit_Preload : AGM_Rsc_Display_Base {
    class controlsBackground {
      class Preload_Center : AGM_Rsc_Control_Base {
        text = "\MX2A\rsc\Vector_Center.paa";
      };
      class Preload_0 : Preload_Center {
        text = "\MX2A\rsc\d0.paa";
      };
      class Preload_1 : Preload_Center {
        text = "\MX2A\rsc\d1.paa";
      };
      class Preload_2 : Preload_Center {
        text = "\MX2A\rsc\d2.paa";
      };
      class Preload_3 : Preload_Center {
        text = "\MX2A\rsc\d3.paa";
      };
      class Preload_4 : Preload_Center {
        text = "\MX2A\rsc\d4.paa";
      };
      class Preload_5 : Preload_Center {
        text = "\MX2A\rsc\d5.paa";
      };
      class Preload_6 : Preload_Center {
        text = "\MX2A\rsc\d6.paa";
      };
      class Preload_7 : Preload_Center {
        text = "\MX2A\rsc\d7.paa";
      };
      class Preload_8 : Preload_Center {
        text = "\MX2A\rsc\d8.paa";
      };
      class Preload_9 : Preload_Center {
        text = "\MX2A\rsc\d9.paa";
      };
      class Preload_x : Preload_Center {
        text = "\MX2A\rsc\d+.paa";
      };
      class Preload_y : Preload_Center {
        text = "\MX2A\rsc\d-.paa";
      };
      class Preload_A : Preload_Center {
        text = "\MX2A\rsc\dA.paa";
      };
      class Preload_b : Preload_Center {
        text = "\MX2A\rsc\db.paa";
      };
      class Preload_C : Preload_Center {
        text = "\MX2A\rsc\dC.paa";
      };
      class Preload_d : Preload_Center {
        text = "\MX2A\rsc\dd.paa";
      };
      class Preload_E : Preload_Center {
        text = "\MX2A\rsc\dE.paa";
      };
      class Preload_F : Preload_Center {
        text = "\MX2A\rsc\dF.paa";
      };
      class Preload_G : Preload_Center {
        text = "\MX2A\rsc\dG.paa";
      };
      class Preload_i : Preload_Center {
        text = "\MX2A\rsc\di.paa";
      };
      class Preload_L : Preload_Center {
        text = "\MX2A\rsc\dL.paa";
      };
      class Preload_n : Preload_Center {
        text = "\MX2A\rsc\dn.paa";
      };
      class Preload_o : Preload_Center {
        text = "\MX2A\rsc\do.paa";
      };
      class Preload_oo : Preload_Center {
        text = "\MX2A\rsc\doo.paa";
      };
      class Preload_P : Preload_Center {
        text = "\MX2A\rsc\dP.paa";
      };
      class Preload_q : Preload_Center {
        text = "\MX2A\rsc\dq.paa";
      };
      class Preload_r : Preload_Center {
        text = "\MX2A\rsc\dr.paa";
      };
      class Preload_t : Preload_Center {
        text = "\MX2A\rsc\dt.paa";
      };
      class Preload_U : Preload_Center {
        text = "\MX2A\rsc\dU.paa";
      };
    };
  };

  class AGM_Debug_Crosshair : AGM_Rsc_Display_Base {
    name = "AGM_Debug_Crosshair";
    onLoad = "uiNamespace setVariable ['AGM_ctrlDebugCrosshair', (_this select 0) displayCtrl 1];";

    class controlsBackground {
      class Debug_Crosshair : AGM_Rsc_Control_Base {
        text = "\MX2A\rsc\debug_crosshair.paa";
        colorText[] = {1, 0, 0, 0.5};
        x = 0.490938 * safezoneW + safezoneX;
        y = 0.4838 * safezoneH + safezoneY;
        w = 0.3 / 16 * safezoneW;
        h = 0.3 / 9 * safezoneH;
      };
    };
  };
};

//end ending agm stuff
