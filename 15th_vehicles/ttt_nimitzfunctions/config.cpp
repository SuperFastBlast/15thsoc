class CfgPatches
{
	class TTT_NimitzElevator
	{
		units[] = { "TTT_ModuleNimitzElevator" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzGlobal
	{
		units[] = { "TTT_ModuleNimitzGlobal" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzBriefing
	{
		units[] = { "TTT_ModuleNimitzBriefing" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzHangar
	{
		units[] = { "TTT_ModuleNimitzHangar" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzFlightDeck
	{
		units[] = { "TTT_ModuleNimitzFlightDeck" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzFuel
	{
		units[] = { "TTT_ModuleNimitzFuel" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzIflols
	{
		units[] = { "TTT_ModuleNimitzIflols" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzRepair
	{
		units[] = { "TTT_ModuleNimitzRepair" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzBoat
	{
		units[] = { "TTT_ModuleNimitzBoat" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzRescue
	{
		units[] = { "TTT_ModuleNimitzRescue" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzOnShip
	{
		units[] = { "TTT_ModuleOnShip" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzCatapult
	{
		units[] = { "TTT_ModuleNimitzCatapult" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzAmbiance
	{
		units[] = { "TTT_ModuleNimitzAmbiance" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzArrest
	{
		units[] = { "TTT_ModuleNimitzArrest" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
	class TTT_NimitzDebug
	{
		units[] = { "TTT_ModuleNimitzDebug" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F", "JDG_carrier" };
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class TTT_Nimitz: NO_CATEGORY
	{
		displayName = "Nimitz";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class TTT_ModuleNimitzElevator: Module_F
	{
		scope = 1;
		displayName = "Nimitz Elevator";
		// icon = "\TTT_NimitzFunctions\img_fuel\fuel.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleElevator";
		functionPriority = 3;
		isGlobal = 0;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Elevator"; 
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzGlobal: Module_F
	{
		scope = 1;
		displayName = "Nimitz Global";
		// icon = "\TTT_NimitzFunctions\img_fuel\fuel.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleGlobal";
		functionPriority = 3;
		isGlobal = 0;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Global"; 
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzBriefing: Module_F
	{
		scope = 2;
		displayName = "Nimitz Briefing";
		// icon = "\TTT_NimitzFunctions\img_fuel\fuel.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleBriefing";
		functionPriority = 3;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Briefing"; 
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzHangar: Module_F
	{
		scope = 2;
		displayName = "Nimitz Hangar";
		// icon = "\TTT_NimitzFunctions\img_fuel\fuel.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleHangar";
		functionPriority = 2;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Hangar"; 
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzFlightDeck: Module_F
	{
		scope = 2;
		displayName = "Nimitz Flightdeck";
		// icon = "\TTT_NimitzFunctions\img_fuel\fuel.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleFlightdeck";
		functionPriority = 1;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Flightdeck"; 
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzFuel: Module_F
	{
		scope = 2;
		displayName = "Nimitz Fuel";
		icon = "\TTT_NimitzFunctions\img_fuel\fuel.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleFuel";
		functionPriority = 11;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Fuel"; 
			sync[] = {"jdg_carrier_spawner"};
		};
	};
	class TTT_ModuleNimitzIflols: Module_F
	{
		scope = 2;
		displayName = "Nimitz IFLOLS";
		icon = "\JDG_carrier\rsc\IFLOLS_1.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleIflols";
		functionPriority = 10;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz IFLOLS"; 
			sync[] = {"jdg_carrier_spawner"};

		};
	};
	class TTT_ModuleNimitzRepair: Module_F
	{
		scope = 2;
		displayName = "Nimitz Repair";
		icon = "\TTT_NimitzFunctions\img_repair\wrench.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleRepair";
		functionPriority = 5;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Repair"; 
			sync[] = {"jdg_carrier_spawner"};

		};
	};
	class TTT_ModuleNimitzBoat: Module_F
	{
		scope = 2;
		displayName = "Nimitz Boat";
		icon = "\TTT_NimitzFunctions\img_boat\boat.paa";
		category = "TTT_Nimitz";
		function = "TTT_fnc_moduleBoat";
		functionPriority = 6;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
			class Type
			{
				displayName = "Boat Type";
				description = "Class name of the boat to spawn";
				typeName = "STRING";
				defaultValue = "B_Boat_Transport_01_F";
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Boat"; 
			sync[] = {"jdg_carrier_spawner"};

		};
	};
	class TTT_ModuleNimitzRescue: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Nimitz Rescue Team"; // Name displayed in the menu
		icon = "\TTT_NimitzFunctions\img_rescue\rescue.paa";
		category = "TTT_Nimitz";

		// Name of function triggered once conditions are met
		function = "TTT_fnc_moduleRescue";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 7;
		// 1 for remote execution on all clients, 0 for server only execution
		isGlobal = 0;
		// 1 for persistent execution (i.e. will be called on every JIPped client). Use with caution, can lead to desync
		isPersistent = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			class Units: Units {};
			class Range
			{
				displayName = "Range";
				description = "Range to the ship that players get rescued";
				typeName = "NUMBER";
				defaultValue = 200;
			};
			class Brief
			{
				displayName = "Brief";
				description = "Brief or verbose rescue operation";
				defaultValue = true;
				typeName = "BOOL";
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Rescue team"; // Short description, will be formatted as structured text
			sync[] = {};

		};
	};
	class TTT_ModuleNimitzOnShip: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Nimitz On Ship"; // Name displayed in the menu
		icon = "\TTT_NimitzFunctions\img_onship\boat.paa";
		category = "TTT_Nimitz";

		// Name of function triggered once conditions are met
		function = "TTT_fnc_moduleOnShip";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 1 for remote execution on all clients, 0 for server only execution
		isGlobal = 1;
		// 1 for persistent execution (i.e. will be called on every JIPped client). Use with caution, can lead to desync
		isPersistent = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			class Units: Units {};
			class Height
			{
				displayName = "Height";
				description = "Height above sea level to move the object to";
				defaultValue = 17.5;
				typeName = "NUMBER";
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "On Ship, places an object at the given height above sea level. See the Nimitz icon for different values."; // Short description, will be formatted as structured text
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzCatapult: Module_F
	{
		scope = 2; 
		displayName = "Nimitz Catapult"; 
		icon = "\TTT_NimitzFunctions\img_catapult\cat.paa";
		category = "TTT_Nimitz";

		function = "TTT_fnc_moduleCatapult";
		functionPriority = 4;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;

		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz catapult module"; 
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzDebug: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Nimitz Debug"; // Name displayed in the menu
		icon = "\TTT_NimitzFunctions\img_debug\binary.paa"; 
		category = "TTT_Nimitz";

		// Name of function triggered once conditions are met
		function = "TTT_fnc_moduleDebug";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 9;
		// 1 for remote execution on all clients, 0 for server only execution
		isGlobal = 1;
		// 1 for persistent execution (i.e. will be called on every JIPped client). Use with caution, can lead to desync
		isPersistent = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units {};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Debug module"; // Short description, will be formatted as structured text
			sync[] = {"JDG_carrier_spawner"}; // Array of synced entities (can contain base classes)
		};
	};
	class TTT_ModuleNimitzArrest: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Nimitz Plane Arresting System"; // Name displayed in the menu
		icon = "\TTT_NimitzFunctions\img_arrest\hook.paa"; // Map icon. Delete this entry to use the default icon
		category = "TTT_Nimitz";

		// Name of function triggered once conditions are met
		function = "TTT_fnc_moduleArrest";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 8;
		// 1 for remote execution on all clients, 0 for server only execution
		isGlobal = 1;
		// 1 for persistent execution (i.e. will be called on every JIPped client). Use with caution, can lead to desync
		isPersistent = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			class Units: Units {};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz plane arrest module"; // Short description, will be formatted as structured text
			sync[] = {};
		};
	};
	class TTT_ModuleNimitzAmbiance: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Nimitz Ambiance"; // Name displayed in the menu
		icon = "\TTT_NimitzFunctions\img_ambiance\soldier.paa"; // Map icon. Delete this entry to use the default icon
		category = "TTT_Nimitz";

		// Name of function triggered once conditions are met
		function = "TTT_fnc_moduleAmbiance";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 2;
		// 1 for remote execution on all clients, 0 for server only execution
		isGlobal = 0;
		// 1 for persistent execution (i.e. will be called on every JIPped client). Use with caution, can lead to desync
		isPersistent = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			class Units: Units {};
			class FlightDeck
			{
				displayName = "Flightdeck";
				description = "Populate the flight deck";
				typeName = "BOOL";
				defaultValue = true;
			};
			class Hangar
			{
				displayName = "Hangar";
				description = "Populate the hangar";
				defaultValue = true;
				typeName = "BOOL";
			};
			class UGVTractor
			{
				displayName = "UGV Tractor";
				description = "Place UGV for tractor usage";
				defaultValue = true;
				typeName = "BOOL";
			};
			class Crew
			{
				displayName = "Crew";
				description = "Place Crew";
				defaultValue = true;
				typeName = "BOOL";
			};
			class Briefing
			{
				displayName = "Briefing";
				description = "Briefing room";
				defaultValue = true;
				typeName = "BOOL";
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Nimitz Ambiance module"; // Short description, will be formatted as structured text
			sync[] = {"JDG_carrier_spawner"};
		};
	};
};
class CfgFunctions 
{
	class TTT
	{
		class Elevator
		{
			file = "\TTT_NimitzFunctions\fn_elevator";
			class moduleElevator{};
			class syncElevator{};
			class elevator{};
		};
		class Simple
		{
			file = "\TTT_NimitzFunctions\fn_simple";
			class moduleFlightdeck{};
			class moduleHangar{};
			class moduleBriefing{};
			class syncSimple{};
		};
		class Repair
		{
			file = "\TTT_NimitzFunctions\fn_repair";
			class moduleRepair{};
			class syncRepair{};
			class repair{};
			class inspect{};
		};
		class Boat
		{
			file = "\TTT_NimitzFunctions\fn_boat";
			class moduleBoat{};
			class syncBoatAction{};
			class launchBoat{};
			class spawnBoat{};
			class recoverBoat{};
		};
		class Rescue
		{
			file = "\TTT_NimitzFunctions\fn_rescue";
			class moduleRescue{};
			class syncRescue{};
			class rescueVerbose{};
		};
		class OnShip
		{
			file = "\TTT_NimitzFunctions\fn_onship";
			class moduleOnShip{};
			class syncOnShip{};
		};
		class Catapult
		{
			file = "\TTT_NimitzFunctions\fn_catapult";
			class moduleCatapult{};
			class syncCatapult{};
			class addCatapultAction{};
			class catapultLaunch{};
			class launch{};
			class catapultJbd{};
			class steamStart{};
			class steamShot{};
			class steamCharge{};
		};
		class Debug
		{
			file = "\TTT_NimitzFunctions\fn_debug";
			class moduleDebug{};
			class showInfo{};
		};
		class Ambiance
		{
			file = "\TTT_NimitzFunctions\fn_ambiance";
			class moduleAmbiance{};
			class syncAmbiance{};
			class flightdeck{};
			class hangar{};
			class tractor{};
			class placeVehicle{};
			class loadout{};
			class planeTypes{};
			class soldierTypes{};
			class enableCVuse{};
			class crew{};
			class briefing{};
		};
		class Arrest
		{
			file = "\TTT_NimitzFunctions\fn_arrest";
			class moduleArrest{};
			class syncTailhook{};
			class arrest{};
			class tailhookUp{};
			class wires{};
			class useTailhook{};
		};
		class Iflols
		{
			file = "\TTT_NimitzFunctions\fn_iflols";
			class moduleIflols{};
			class syncIflols{};
			class iflolsCalc{};
		};
		class Fuel
		{
			file = "\TTT_NimitzFunctions\fn_fuel";
			class moduleFuel{};
			class syncFuelAction{};
			class fuel{};
			class fuelBegin{};
			class fuelEnd{};
		};
		class Global
		{
			file = "\TTT_NimitzFunctions\fn_global";
			class moduleGlobal{};
			class global{};
			// class getVar{};
		};
		class Common
		{
			file = "\TTT_NimitzFunctions\fn_common";
			class alive{};
			class setObjPos{};
			class setObjDir{};
			class colAct{};
		};
	};
	// maybe there can be an ifdef for the FA18, for now provide bridge function
	class FA18
	{
		class plane
		{
			file = "\TTT_NimitzFunctions\fn_fa18";
			class foldwing{};
			class loadout{};
			// class foldwing { file = "\js_jc_fa18\scripts\MISC\FA18_foldwings.sqf"; };
			// class loadout { file = "\js_jc_fa18\scripts\LOADOUTS\FA18_instant_loadouts.sqf"; };
		};
	};
	class Fock
	{
		class mp
		{
			file = "\TTT_NimitzFunctions\fn_common";
			class addActionMP{};
		};
	};
};
