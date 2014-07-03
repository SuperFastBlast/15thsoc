
class CfgPatches
{
	class meu_15th3M
	{
		units[] = {
			"meu_ModuleTeleport",
			"meu_moduleTeleportAttributes",
			"meu_Module15thLO",
			"meu_ModuleVAS",
			"meu_ModuleGroupID",
			"meu_moduleAreaCleanUp",
			"meu_moduleLRRadio",
			"meu_ModulexReload",
			"meu_moduleVehicleRespawn",
			"meu_moduleRepetitiveCleanup",
			"meu_ModuleBFTinHMMWV",
			"meu_Modulefar_revive",
			"meu_ModuleVicLO",
			"meu_ModulezltRepair",
			"meu_ModuleIgiLoad"
		};
		requiredVersion = 1.0;
		requiredAddons[] = {"CBA_MAIN","A3_Modules_F","meu_ammoBoxes"};
		author[] = {"15th Mod Team"};
		authorUrl = "http://www.15thmeu.net";
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class meu_3mModules: NO_CATEGORY
	{
		displayName = "15th 3M Modules";
	};
};

class CfgVehicles
{
	class Logic;	
	#include <\15th3M\configs\meu_Modulefar_revive.hpp>
	#include <\15th3M\configs\meu_ModulezltRepair.hpp>
	#include <\15th3M\configs\meu_ModuleLRRadio.hpp>
	#include <\15th3M\configs\meu_ModuleBFTinHMMWV.hpp>	
	#include <\15th3M\configs\meu_ModuleIgiLoad.hpp>
	class Module_F: Logic { 
		class ArgumentsBaseUnits { 
			class Units; 
		}; 
		class ModuleDescription { 
			class AnyBrain; 
		}; 
	};
	#include <\15th3M\configs\meu_ModuleTeleport.hpp>
	#include <\15th3M\configs\meu_moduleTeleportAttributes.hpp>
	#include <\15th3M\configs\meu_moduleAreaCleanUp.hpp>
	#include <\15th3M\configs\meu_moduleVAS.hpp>
	#include <\15th3M\configs\meu_module15thLO.hpp>
	#include <\15th3M\configs\meu_moduleGroupID.hpp>
	#include <\15th3M\configs\meu_ModulexReload.hpp>
	#include <\15th3M\configs\meu_moduleVehicleRespawn.hpp>
	#include <\15th3M\configs\meu_moduleRepetitiveCleanup.hpp>
	#include <\15th3M\configs\meu_ModuleVicLO.hpp>
};

class CfgFunctions 
{
	class meu
	{
		class 3M
		{
			file = "\15th3M\functions";
			class teleportAttributes{};
			class teleportSetPos{};
			class teleportInit{};
			class teleportAct{};
			class teleportMarkers{};
			class BFTinHMMWV{};
			class groupID{};
			class ab15thLO{};
			class VAS{};
			class gearCleanUp{};
			class x_reloadInit{};
			class vehicleRespawn{};
			class repetitiveCleanup{};
			class TFAR{};
		};
	};
};
