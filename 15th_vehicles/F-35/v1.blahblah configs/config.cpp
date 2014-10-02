//F-35B JSF:
#include "basicDefines.h"
#include "CrewAnimations.h"
#include "CfgAmmo.h"
#include "CfgMagazines.h"
#include "CfgWeapons.h"

class CfgPatches {
	class cho_f35b {
		units[] = {"cho_f35b_aa", "cho_f35b_cas", "cho_f35b_lgb"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};

class CfgMods
{
	class cho_f35b
	{
		dir = "@cho_f35b";
		name = "F-35B Lightning II";
		picture = "cho_f35b\ui\picture_f35b_ca.paa";
		action = "http://forums.bistudio.com/showthread.php?171239-F-35B-Lightning-II";

		hideName = 0;
		hidePicture = 0;

		credits = "";
		author = "<img image='cho_f35b\ui\picture_f35b_ca.paa' shadow='0' size='2.2' />";
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
	class Air;
	class Plane: Air
	{
		class HitPoints;
		class ViewPilot;
		class EventHandlers;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class CHO_F35B_base: Plane_Base_F {
		mapSize = 15.5;
		author = "Chortles";
		_generalMacro = "CHO_F35B_base";
		displayName = "F-35B";					/// how is the plane displayed in editor
		scope = 0;
		model = "\cho_f35b\models\cho_f35b.p3d";		/// path to model of the plane
		icon = "\cho_f35b\UI\icon_F35B_CA.paa";			/// icon in map/editor
		picture = "\cho_f35b\UI\Picture_F35B_CA.paa";	/// small picture in command menu
		destrType = DestructWreck;	/// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		armor = 40;					/// just some protection against missiles, collisions and explosions
		armorStructural = 1;
		damageResistance = 0.01096;	/// for AI if it is worth to be shoot at
		accuracy = 0.2;
		class Library
		{
			libTextDesc = $STR_LIB_F35B; // "The F-35 Lightning is a single-seat single-engine stealth-capable military multirole strike fighter. It is capable of providing close air support, tactical bombing or air combat missions. The F-35B is the Short-Take Off and Vertical Landing (STOVL) variant of F-35 prototype. &lt;br/&gt;It is armed with two guided bomb units, dual AIM-9 air-to-air guided missile platforms and with a 25mm cannon.";
		};
		driverAction = "F35B_Pilot";			/// what is the standard pose for the pilot, defined as animation state
		getinAction = "pilot_plane_cas_02_Enter";	/// or getinAction = "pilot_plane_cas_01_Enter";
		getoutaction = "pilot_plane_cas_02_Exit";	/// or getoutaction = "pilot_plane_cas_01_Exit";
		precisegetinout = 1;
		//viewDriverShadow = 1;
		//castDriverShadow = 1;
		viewDriverShadowDiff = 0.5;
		viewDriverShadowAmb = 0.5;
		lockDetectionSystem = 8;				/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = 16;	/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		class Turrets{};
		class TransportItems{};
		#include "CfgSounds.h"	/// sounds are included in separate file to prevent cluttering
		//altNoForce = 35000;
		//altFullForce = 12500;
		//maxSpeed = 1059;
		#include "CfgFlightPerformance.h"
		threat[]={1, 1, 0.7};		/// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies
		irScanRangeMin = 3500;
		irScanRangeMax = 10500;
		irScanToEyeFactor = 4;
		irScanGround = true;
		laserScanner = 1;		/// if the vehicle is able to see targets marked by laser marker
		minFireTime = 30;			/// how long does the pilot fire at one target before switching to another one
		gunAimDown = 0.07;		//gunAimDown = 0.029000;	/// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	/// adjusts the view of pilot to have crosshair centred
		cabinOpening = 1;
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		/*memoryPointsGetInDriver = "GetIn_driver_pos";
		memoryPointsGetInDriverDir = "GetIn_driver_dir";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		memoryPointCM[] = {"FlareLauncher_1_pos","FlareLauncher_2_pos"};
		memoryPointCMDir[] = {"FlareLauncher_1_dir","FlareLauncher_2_dir"};
		memoryPointLDust = "WheelDust_left_pos";
		memoryPointRDust = "WheelDust_right_pos";
		memoryPointGun = "Cannon_barrel_end";
		selectionFireAnim = "Cannon_muzzleflash";*/
		driveOnComponent[] = {"wheel_1_1", "wheel_2_1", "wheel_2_2"};  /// array of components to be assigned special low-friction material (usually wheels)
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
		#include "CfgReflectors.h"
		class AnimationSources: AnimationSources
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
			class fuel_hose
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		//hiddenSelections[] = {"camo1"};
		
		
		
		damageEffect = "AirDestructionEffects"; /// from JS_JC_F35
		
		
		
		
		
		
		driverCanEject = 1;
		

		vehicleClass = "Air";
		
		

		enableGPS = 1;
		radarType = 4;
		

		

		
		
		

		nightVision = 1;

		

		
		gearRetracting = 1;

		

		
		

		

		

		

		

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
		
		#include "CfgSkins.h"

		#include "CfgHUD.h"

		

		fov = 0.5;
		//type= VAir;
		supplyRadius = 6;
		vtol = 3; // 2 = CTOL/STOVL, 3 = STOVL / VTOL, 1 = CTOL/broken
//		include = "physx.hpp";

		dustEffect = "HeliDust";
		waterEffect = "HeliWater";

		class Eventhandlers
		{
            init = "_this execVM 'cho_f35b\scripts\init.sqf'";
			//getIn = "[1,_this select 0] execVM ""\ca\air2\hud\data\scripts\HUD.sqf"""; // non-XEH method
			//Engine = "if (_this select 1) then {[1,_this select 0] execVM ""\ca\air2\hud\data\scripts\HUD.sqf""}"; // non-XEH method
		};  

		

		
		
		class UserActions
		{
			class extendrefueling 
			{
				displayName = "Turn on refuelling";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and this animationPhase ""fuel_hose"" < 0.5 and speed this > 100";
				statement = "this animate [""fuel_hose"",1];";
			};
			
			class retractrefueling 
			{
				displayName = "Turn off refueling";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "player in this and this animationPhase ""fuel_hose"" > 0.5";
				statement = "this animate [""fuel_hose"",0];";
			};
		};
	};

	#include "CfgLoadouts.h"

	class PlaneWreck;	// External class reference
	class CHO_F35B_wreck : PlaneWreck {
		scope = protected;

		class Armory {disabled = 1;};
		model = "cho_f35b\models\cho_F35bWreck.p3d";
		typicalCargo[] = {};
		irTarget = false;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		
		class Eventhandlers {};
	};
};