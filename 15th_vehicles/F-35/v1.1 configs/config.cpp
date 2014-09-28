//F-35B JSF:
#include "basicDefines.hpp"
#include "CrewAnimations.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"

class CfgPatches {
	class CHO_F35B {
		units[] = {"CHO_F35B_AA", "CHO_F35B_CAS", "CHO_F35B_LGB"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};

class CfgNonAIVehicles {
	class ProxyWeapon;
	class ProxyEmpty: ProxyWeapon {
		model = "\A3\weapons_f\Empty";
		simulation = "maverickweapon";
	};
};
class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class CHO_F35B_base: Plane_Fighter_03_base_F {
		viewDriverShadow = 1;
		castDriverShadow = 1;
		author = "Chortles";
		_generalMacro = "CHO_F35B_base";
		displayName = "F-35B";					/// how is the plane displayed in editor
		driverAction = "F35B_Pilot";			/// what is the standard pose for the pilot, defined as animation state
		driverCanEject = 1;
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";

		vehicleClass = "Air";
		model = "\cho_f35b\models\f35b.p3d";			/// path to model of the plane
		picture = "\cho_f35b\UI\Picture_F35B_CA.paa";	/// small picture in command menu
		icon = "\cho_f35b\UI\icon_F35B_CA.paa";			/// icon in map/editor
		mapSize = 15.5;

		enableGPS = 1;
		radarType = 4;
		LockDetectionSystem = 8;				/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionsystem = 16;	/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case

		/*class Exhausts		/// must wait on figuring out how to get it to move with thrust vectoring nozzle
		{
			class Exhaust_main {
				position = "Exhausts_start_main";
				direction = "Exhausts_end_main";
				effect = "ExhaustsEffectPlane";
			};
		};*/

		class WingVortices {
			class WingTipLeft {
				effectName = "WingVortices";	/// name of the effect
				position = "cerveny pozicni";	/// name of the memory point in model
			};
			class WingTipRight {
				effectName = "WingVortices";
				position = "zeleny pozicni";
			};
			class BodyLeft_outer {
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};
			class BodyRight_outer {
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft_inner {
				effectName = "BodyVortices"; // name of the effect
				position = "body_vapour_L_S";
			};
			class BodyRight_inner {
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};
		
		#include "CfgSounds.hpp"	/// sounds are included in separate file to prevent cluttering

		nightVision = 1;

		irScanRangeMin = 3500;
		irScanRangeMax = 10500;
		irScanToEyeFactor = 4;
		irScanGround = true;

		driveOnComponent[] = {"wheel_1_1", "wheel_2_1", "wheel_2_2"};  /// array of components to be assigned special low-friction material (usually wheels)
		gearRetracting = 1;

		#include "CfgFlightPerformance.hpp"

		laserScanner = 1;		/// if the vehicle is able to see targets marked by laser marker
		gunAimDown = 0.07;		//gunAimDown = 0.029000;	/// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	/// adjusts the view of pilot to have crosshair centred

		flapsFrictionCoef = 0.2;	/// sets the effectivity of using flaps to increase drag/lift

		minFireTime = 30;			/// how long does the pilot fire at one target before switching to another one

		threat[]={1, 1, 0.7};		/// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies

		#include "CfgReflectors.hpp"

		armor = 40;					/// just some protection against missiles, collisions and explosions
		damageResistance = 0.01096;	/// for AI if it is worth to be shoot at
		// armorStructured = 1;
		destrType = DestructWreck;	/// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		damageEffect = "AirDestructionEffects"; /// from JS_JC_F35

		/*
		class HitLGlass {armor=0.1;material=-1;name="sklo predni L";visual="sklo predni L";passThrough=1;}
		class HitRGlass {armor=0.1;material=-1;name="sklo predni L";visual="sklo predni L";passThrough=1;}
		dammageHalf[]= {\f35b\data\alfa_ca.paa};
		dammageFull[]= {\f35b\data\alfa_ca.paa};
		*/

		class Damage 	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[]={};
			mat[]={
				"cho_f35b\materials\F35.rvmat",				/// material mapped in model
				"cho_f35b\materials\f35_damage.rvmat",		/// changes to this one once damage of the part reaches 0.5
				"cho_f35b\materials\f35_destruct.rvmat",	/// changes to this one once damage of the part reaches 1

				"cho_f35b\materials\f35b_sklo.rvmat",
				"cho_f35b\materials\f35b_sklo_damage.rvmat",
				"cho_f35b\materials\f35b_sklo_damage.rvmat",

				"cho_f35b\materials\f35b_sklo_int.rvmat",
				"cho_f35b\materials\f35b_sklo_int_damage.rvmat",
				"cho_f35b\materials\f35b_sklo_int_damage.rvmat"
			};
		};
		
		#include "CfgSkins.hpp"

		#include "CfgHUD.hpp"

		class AnimationSources
		{
			class vtol
			{
				source = "user";
				animPeriod= 2.5;
			};
			class Hatch_Weaponbay_1_1 {
				source = "user";
				animPeriod= 0.4;
			};
            class Hatch_Weaponbay_1_2 {
				source = "user";
				animPeriod= 0.4;
			};
            class Hatch_Weaponbay_1_3 {
				source = "user";
				animPeriod= 0.4;
			};
            class Hatch_Weaponbay_1_4 {
				source = "user";
				animPeriod= 0.4;
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "gatling_25mm";
			};
		};

		fov = 0.5;
		//type= VAir;
		supplyRadius = 6;
		vtol = 3;
//		include = "physx.hpp";

		dustEffect = "HeliDust";
		waterEffect = "HeliWater";

		class Eventhandlers
		{
            init = "_this execVM 'cho_f35b\scripts\init.sqf'";
			//getIn = "[1,_this select 0] execVM ""\ca\air2\hud\data\scripts\HUD.sqf"""; // non-XEH method
			//Engine = "if (_this select 1) then {[1,_this select 0] execVM ""\ca\air2\hud\data\scripts\HUD.sqf""}"; // non-XEH method
		};  

		class Library
		{
			libTextDesc = $STR_LIB_F35B; // "The F-35 Lightning is a single-seat single-engine stealth-capable military multirole strike fighter. It is capable of providing close air support, tactical bombing or air combat missions. The F-35B is the Short-Take Off and Vertical Landing (STOVL) variant of F-35 prototype. &lt;br/&gt;It is armed with two guided bomb units, dual AIM-9 air-to-air guided missile platforms and with a 25mm cannon.";
		};

		//hiddenSelections[] = {"camo1"};
	};

	class CHO_F35B_AA : CHO_F35B_base {
		author = "Chortles";
		_generalMacro = "CHO_F35B_AA";
		scope = public;
		displayName = "F-35B Lightning II (AA)";
		crew = "B_pilot_F";
		side = TWest;
		faction = BLU_F;
		weapons[] = {
            "gatling_25mm",
			"CHO_F35B_Zephyr_W",
			"CHO_F35B_Falchion_W",
			"CHO_F35B_GBU12_W",
			"CMFlareLauncher"
        };
		magazines[] = {
            "300Rnd_25mm_shells",
            "CHO_F35B_Falchion_M",
            "CHO_F35B_Falchion_M",
            "CHO_F35B_Zephyr_ext_M",
            "CHO_F35B_Zephyr_ext_M",
            "CHO_F35B_Zephyr_ext_M",
            "CHO_F35B_Zephyr_ext_M",
            "CHO_F35B_GBU12_int_M",
            "CHO_F35B_GBU12_int_M",
            "CHO_F35B_Zephyr_int_M",
            "CHO_F35B_Zephyr_int_M",
            "120Rnd_CMFlare_Chaff_Magazine"
        };
		cost = 20000000;
		hiddenSelectionsTextures[] = {"cho_f35b\textures\skins\f35_co.paa"};
	};

	class CHO_F35B_CAS : CHO_F35B_base {
		author = "Chortles";
		_generalMacro = "CHO_F35B_CAS";
		scope = public;
		displayName = "F-35B Lightning II (CAS)";
		crew = "B_pilot_F";
		side = TWest;
		faction = BLU_F;
		weapons[] = {
            "gatling_25mm",
            "CHO_F35B_Zephyr_W",
			"CHO_F35B_Falchion_W",
			"CHO_F35B_GBU12_W",
			"CHO_F35B_Macer_W",
            "CMFlareLauncher"
        };
		magazines[] = {
            "300Rnd_25mm_shells",
            "CHO_F35B_Falchion_M",
            "CHO_F35B_Falchion_M",
            "CHO_F35B_Macer_M",
            "CHO_F35B_Macer_M",
            "CHO_F35B_Macer_M",
            "CHO_F35B_Macer_M",
            "CHO_F35B_GBU12_int_M",
            "CHO_F35B_GBU12_int_M",
            "CHO_F35B_Zephyr_int_M",
            "CHO_F35B_Zephyr_int_M",
            "120Rnd_CMFlare_Chaff_Magazine"
        };
		availableForSupportTypes[] = {"CAS_Bombing"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost = 20000000;	/// we need some high cost for such vehicles to be prioritized by AA defences
		hiddenSelectionsTextures[] = {"cho_f35b\textures\skins\f35_co.paa"};
	};

	class CHO_F35B_LGB : CHO_F35B_base {
		author = "Chortles";
		_generalMacro = "CHO_F35B_LGB";
		scope = public;
		displayName = "F-35B Lightning II (LGB)";
		crew = "B_pilot_F";
		side = TWest;
		faction = BLU_F;
		weapons[] = {
            "gatling_25mm",
            "CHO_F35B_Zephyr_W",
			"CHO_F35B_Falchion_W",
			"CHO_F35B_GBU12_W",
			"CMFlareLauncher"
        };
		magazines[] = {
            "300Rnd_25mm_shells",
            "CHO_F35B_Falchion_M",
            "CHO_F35B_Falchion_M",
            "CHO_F35B_GBU12_ext_M",
            "CHO_F35B_GBU12_ext_M",
            "CHO_F35B_GBU12_ext_M",
            "CHO_F35B_GBU12_ext_M",
            "CHO_F35B_GBU12_int_M",
            "CHO_F35B_GBU12_int_M",
            "CHO_F35B_Zephyr_int_M",
            "CHO_F35B_Zephyr_int_M",
            "120Rnd_CMFlare_Chaff_Magazine"
        };
		availableForSupportTypes[] = {"CAS_Bombing"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost = 20000000;	/// we need some high cost for such vehicles to be prioritized by AA defences
		hiddenSelectionsTextures[] = {"cho_f35b\textures\skins\f35_co.paa"};
	};

	class PlaneWreck;	// External class reference
	class F35B_wreck : PlaneWreck {
		scope = protected;

		class Armory {disabled = 1;};
		model = "cho_f35b\models\F35bWreck.p3d";
		typicalCargo[] = {};
		irTarget = false;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		
		class Eventhandlers {};
	};
};