class CfgPatches
	{
		class CUPFactions
			{
				units[] = {};
				weapons[] = {};
				requiredVersion = 0.1; //This is for key signing
				requiredAddons[] = {"A3_Data_F","A3_Characters_F_Common","A3_Weapons_F","A3_Characters_F_Civil","A3_Characters_F","a3_characters_f_beta", "a3_characters_f_gamma","A3_Characters_F_OPFOR","CUP_Weapons_AK","CUP_Weapons_SVD","CUP_Weapons_PK","CUP_Weapons_RPG7","CUP_Weapons_Makarov","CUP_Weapons_East_Attachments","CUP_Weapons_Weaponscore","CUP_Weapons_Strela_2","RDS_APC","RDS_Tank"}; //All the PBOs you call on for this mod
			};
	};
class UniformSlotInfo //This allows uniforms to be worn by anyone ie: NATO wearing AAF uniform
	{
		slotType = 0;
		linkProxy = "-";
	};
class CfgFactionClasses
	{
		class CUPOPfor
			{
				displayName = "Benzheen Army";
				priority = 2;
				side = 0;
				icon = "\CUPFactions\empty.paa";
			};
	};
class CfgVehicleClasses
	{
		class CSATARMY //Name of unit group e.g Air, Infantry, Armour
			{
				displayName = "Infantry"; //In-game name
			};
	};
	
class CfgWeapons
	{
		class H_HelmetB_grass;
		class CSAT_H_HelmetB_grass : H_HelmetB_grass
			{
				scope = 2;
				weaponPoolAvailable = 1;
				displayName = "CSAT ECH Helmet Grass";
			};
		class H_HelmetB_light_grass;
		class CSAT_H_HelmetB_light_grass : H_HelmetB_light_grass
			{
				scope = 2;
				weaponPoolAvailable = 1;
				displayName = "CSAT ECH Helmet Light Grass";
			};
		class H_HelmetB_camo;
		class CSAT_H_HelmetB_camo : H_HelmetB_camo
			{
				scope = 2;
				weaponPoolAvailable = 1;
				displayName = "CSAT ECH Helmet Camo";
			};
			
    };
class HeadLimits;
class Hitpoints;
class HitHead;
class HitBody;
class HitHands;
class HitLegs;
class CfgAISkill
	{
		aimingAccuracy[] = {0,0,1,0.57};
		aimingShake[] = {0,0,1,0.35};
		aimingSpeed[] = {0.2,0.3,1,1};
		courage[] = {0,0,1,1};
		commanding[] = {0,1,1,1};
		endurance[] = {0,1,1,2};
		general[] = {0,1,1,3};
		reloadSpeed[] = {0,1,1,1};
		spotDistance[] = {0,0.5,1,2};
		spotTime[] = {0,0.5,1,1.2};
	};
class CfgVehicles
	{
	    class B_FieldPack_ocamo;
	    class B_Carryall_ocamo;
	    class O_Soldier_F;
	    class O_Soldier_SL_F; 
	    class O_Soldier_TL_F; 
	    class O_Soldier_AR_F;
	    class O_medic_F;
	    class O_Soldier_GL_F;
	    class O_Soldier_LAT_F;
	    class O_soldier_M_F;
	    class O_officer_F;
		class O_crew_F;
		class O_helipilot_F;
		class RDS_T72B_Early_AAF_01;
		class RDS_T55_AAF_01;
		class RDS_BMP1P_AAF_01;
		class RDS_BMP2_AAF_01;
		class RDS_ZSU_AAF_01;
				
		class CSATATlightpack: B_FieldPack_ocamo
			{
				scope = 2; // Scope = 0 means units don't appear anywhere, = 1 means units appear in editor, = 2 means units appear in-game on zeus
				displayName = "CSATATlightpack";
				class TransportMagazines
					{
						class _xx_CUP_OG7_M
							{
								magazine = "CUP_OG7_M";
								count = 2;
							};
					};
			};
		class CSATATmediumpack: B_FieldPack_ocamo
			{
				scope = 2; // Scope = 0 means units don't appear anywhere, = 1 means units appear in editor, = 2 means units appear in-game on zeus
				displayName = "CSATATmediumpack";
				class TransportMagazines
					{
						class _xx_CUP_PG7V_M
							{
								magazine = "CUP_PG7V_M";
								count = 2;
							};
					};
			};
		class CSATAApack: B_FieldPack_ocamo
			{
				scope = 2; // Scope = 0 means units don't appear anywhere, = 1 means units appear in editor, = 2 means units appear in-game on zeus
				displayName = "CSATAApack";
				class TransportMagazines
					{
						class _xx_Titan_AA
							{
								magazine = "Titan_AA";
								count = 2;
							};
					};
			};
		class CSATATheavypack: B_FieldPack_ocamo
			{
				scope = 2;
				displayName = "CSATATheavypack";
				class TransportMagazines
					{
						class _xx_CUP_PG7VR_M
							{
								magazine = "CUP_PG7VR_M";
								count = 2;
							};
						class _xx_CUP_OG7_M
							{
								magazine = "CUP_OG7_M";
								count = 2;
							};
					};
			};
		
		class CSATARheavypack: B_FieldPack_ocamo
			{
				scope = 2;
				displayName = "CSATARpackheavy";
				class TransportMagazines
					{
						class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
							{
								magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
								count = 4;
							};
					};
			};
		class CSATARpack: B_FieldPack_ocamo
			{
				scope = 2;
				displayName = "CSATARpack";
				class TransportMagazines
					{
						class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
							{
								magazine = "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
								count = 5;
							};
					};
			};
		class CSATriflepack: B_FieldPack_ocamo
			{
				scope = 2;
				displayName = "CSATriflepack";
				class TransportMagazines
					{
						class _xx_CUP_30Rnd_545x39_AK_M
							{
								magazine = "CUP_30Rnd_545x39_AK_M";
								count = 8;
							};
					};
			};
		class CSATGLpack: B_FieldPack_ocamo
			{
				scope = 2;
				displayName = "CSATGLpack";
				class TransportMagazines
					{
						class _xx_CUP_1Rnd_HE_GP25_M
							{
								magazine = "CUP_1Rnd_HE_GP25_M";
								count = 10;
							};
						class _xx_CUP_30Rnd_545x39_AK_M
							{
								magazine = "CUP_30Rnd_545x39_AK_M";
								count = 4;
							};
					};
			};
		class CSATMedpack: B_Carryall_ocamo
			{
				scope = 2;
				displayName = "CSATMedpack";
				class TransportItems
					{
						class _xx_Medikit
							{
								name = "Medikit";
								count = 2;
							};
						class _xx_FirstAidKit
							{
								name = "FirstAidKit";
								count = 10;
							};
					};
			};
		
		class CSATRifleman: O_Soldier_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				icon = "iconMan";
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATRifleman"; //Class Name
				scope = 2;	
				displayName = "Rifleman"; //In-Game Name
				backpack = "CSATriflepack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
				respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATSL: O_Soldier_TL_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATSL"; //Class Name
				scope = 2;
				displayName = "Squad Leader"; //In-Game Name
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AKM","CUP_hgun_Makarov","Throw","Put","NVGoggles","Rangefinder"};
				respawnWeapons[] = {"CUP_arifle_AKM","CUP_hgun_Makarov","Throw","Put","NVGoggles","Rangefinder"};
				magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell"};
				respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_light_grass"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATTL: O_Soldier_TL_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATTL"; //Class Name
				scope = 2;
				displayName = "Team Leader"; //In-Game Name
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74_gl","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				respawnWeapons[] = {"CUP_arifle_AK74_gl","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell"};
				respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_light_grass"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATAR: O_Soldier_AR_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATAR"; //Class Name
				scope = 2;
				displayName = "Autorifleman"; //In-Game Name
				backpack = "CSATARpack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_RPK74","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_arifle_RPK74","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
				respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATARheavy: O_Soldier_AR_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATARheavy"; //Class Name
				scope = 2;
				displayName = "Machinegunner"; //In-Game Name
				backpack = "CSATARheavypack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_lmg_PKM","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_lmg_PKM","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
				respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATMed: O_medic_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATMed"; //Class Name
				scope = 2;
				displayName = "Medic"; //In-Game Name
				backpack = "CSATMedpack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellYellow"};
				respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellYellow"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_light_grass"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATGL: O_Soldier_GL_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATGL"; //Class Name
				scope = 2;
				displayName = "Grenadier"; //In-Game Name
				backpack = "CSATGLpack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74_GL","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_arifle_AK74_GL","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","1Rnd_Smoke_Grenade_shell"};
				respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","HandGrenade","SmokeShell","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","1Rnd_Smoke_Grenade_shell"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATMark: O_soldier_M_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATMark"; //Class Name
				scope = 2;
				displayName = "Marksman"; //In-Game Name
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_camo","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_camo","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				respawnWeapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","SmokeShell","SmokeShell"};
				respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","HandGrenade","SmokeShell","SmokeShell"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_camo"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATATlight: O_Soldier_LAT_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATATlight"; //Class Name
				scope = 2;
				displayName = "Rifleman(AT) Light"; //In-Game Name
				backpack = "CSATATlightpack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"CUP_OG7_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
				respawnMagazines[] = {"CUP_OG7_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};	
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATATmedium: O_Soldier_LAT_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATATmedium"; //Class Name
				scope = 2;
				displayName = "Rifleman(AT) Medium"; //In-Game Name
				backpack = "CSATATmediumpack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"CUP_PG7V_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
				respawnMagazines[] = {"CUP_PG7V_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};	
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATOff: O_officer_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATOff"; //Class Name
				scope = 2;
				displayName = "Officer"; //In-Game Name
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","ItemGPS","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_light_grass","ItemGPS","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AKM","CUP_hgun_Makarov","Throw","Put","NVGoggles","Rangefinder"};
				respawnWeapons[] = {"CUP_arifle_AKM","CUP_hgun_Makarov","Throw","Put","NVGoggles","Rangefinder"};
				magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","SmokeShell","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
				respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","SmokeShell","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_light_grass"};
				
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
	class CSATAA: O_Soldier_LAT_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATAA"; //Class Name
				scope = 2;
				displayName = "Rifleman(AA)"; //In-Game Name
				backpack = "CSATAApack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_launch_9K32Strela","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_9K32Strela","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"Titan_AA","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
				respawnMagazines[] = {"Titan_AA","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};	
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
			
		class CSATATheavy: O_Soldier_LAT_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATATheavy"; //Class Name
				scope = 2;
				displayName = "Rifleman(AT) Heavy"; //In-Game Name
				backpack = "CSATATheavypack";
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CSAT_H_HelmetB_grass","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","CUP_hgun_Makarov","Throw","Put","NVGoggles"};
				magazines[] = {"CUP_PG7VR_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
				respawnMagazines[] = {"CUP_PG7VR_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};	
				headgearProbability = 100;
				allowedHeadgear[] = {"CSAT_H_HelmetB_grass"};
				
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
		class CSATCrew: O_crew_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				icon = "iconMan";
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATCrew"; //Class Name
				scope = 2;	
				displayName = "Crew"; //In-Game Name
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
				respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
		class CSATHeliCrew: O_helipilot_F //Unit Class name: Class getting info from
			{
				side = 0; //Redfor
				faction = "CUPOPfor"; //Your Faction
				icon = "iconMan";
				vehicleclass = "CSATARMY"; //Unit Group
				_generalMacro = "CSATHeliCrew"; //Class Name
				scope = 2;	
				displayName = "Helicopter Crew"; //In-Game Name
				linkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
				respawnLinkedItems[] = {"V_HarnessOSpec_brn","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
				Items[] = {"FirstAidKit","FirstAidKit"};
				RespawnItems[] = {"FirstAidKit","FirstAidKit"};
				weapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				respawnWeapons[] = {"CUP_arifle_AK74","CUP_hgun_Makarov","Throw","Put","NVGoggles","Binocular"};
				magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
				respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
				
				
				minGunElev = -80; //How high the gun can fire
				maxGunElev = 80;  //How high the gun can fire
				minGunTurnAI = -40; //Arc of fire on emplaced weapons
				maxGunTurnAI = 40;
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -35;
					maxAngleX = 35;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 85;
				};
				sensitivity = 4; //How far they see/identify things
								//SENSITIVITY_LOW // not paying attention (civilians)
								//SENSITIVITY_MID // average soldier
								//SENSITIVITY_HIGH // paying high attention (leaders, recon, snipers, etc)
				minFireTime = 5; //Time spent firing on single target
				class HitPoints: HitPoints
					{
						class HitHead: HitHead
							{
								armor = 1;
							};
						class HitBody: HitBody
							{
								armor = 2;
							};
						class HitHands: HitHands
							{
								armor = 2;
							};
						class HitLegs: HitLegs
							{
								armor = 2;
							};
					};
				armor = 2;
				armorStructural = 6;
			};
	
		class CSATT72 : RDS_T72B_Early_AAF_01
			{
				displayName = "T-72B";
				side = 0;
				scope = 2;
				faction = "CUPOPfor";
				crew = "CSATCrew";
				typicalCargo[] = {"CSATCrew"};
			};
	};

class CfgGroups
	{
		class East
			{
				class CUPOPfor
					{
						name = "Benzheen Army";
						class Infantry
							{
								name = "Infantry";
								class CSAT_InfSquadlight
									{
										name = "Infantry Squad Light";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATSL";
												rank = "CAPTAIN";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "LIEUTENANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATGL";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
										class Unit3
											{
												side = 0;
												vehicle = "CSATATlight";
												rank = "SERGEANT";
												position[] = {7,0,0};
											};
										class Unit4
											{
												side = 0;
												vehicle = "CSATAR";
												rank = "CORPORAL";
												position[] = {9,0,0};
											};
										class Unit5
											{
												side = 0;
												vehicle = "CSATGL";
												rank = "LIEUTENANT";
												position[] = {12,0,0};
											};
										class Unit6
											{
												side = 0;
												vehicle = "CSATAR";
												rank = "CORPORAL";
												position[] = {14,0,0};
											};
										class Unit7
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "SERGEANT";
												position[] = {16,0,0};
											};
										class Unit8
											{
												side = 0;
												vehicle = "CSATMed";
												rank = "CORPORAL";
												position[] = {18,0,0};
											};
									};
								class CSAT_InfSquadheavy
									{
										name = "Infantry Squad Heavy";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATSL";
												rank = "CAPTAIN";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATATmedium";
												rank = "LIEUTENANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATGL";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
										class Unit3
											{
												side = 0;
												vehicle = "CSATARheavy";
												rank = "SERGEANT";
												position[] = {7,0,0};
											};
										class Unit4
											{
												side = 0;
												vehicle = "CSATGL";
												rank = "CORPORAL";
												position[] = {9,0,0};
											};
										class Unit5
											{
												side = 0;
												vehicle = "CSATATheavy";
												rank = "LIEUTENANT";
												position[] = {12,0,0};
											};
										class Unit6
											{
												side = 0;
												vehicle = "CSATARheavy";
												rank = "CORPORAL";
												position[] = {14,0,0};
											};
										class Unit7
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "SERGEANT";
												position[] = {16,0,0};
											};
										class Unit8
											{
												side = 0;
												vehicle = "CSATMed";
												rank = "CORPORAL";
												position[] = {18,0,0};
											};
									};
								class CSAT_InfTeam
									{
										name = "Combat Team";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATTL";
												rank = "LIEUTENANT";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATAR";
												rank = "CORPORAL";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATATmedium";
												rank = "SERGEANT";
												position[] = {5,0,0};
											};
										class Unit3
											{
												side = 0;
												vehicle = "CSATGL";
												rank = "CORPORAL";
												position[] = {7,0,0};
											};
										
									};
									
								class CSAT_InfTeam_AT_light
									{
										name = "Anti-Tank Team (HE)";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATTL";
												rank = "LIEUTENANT";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATATlight";
												rank = "SERGEANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATATlight";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
									};
								class CSAT_InfTeam_AT_medium
									{
										name = "Anti-Tank Team (AT)";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATTL";
												rank = "LIEUTENANT";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATATmedium";
												rank = "SERGEANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATATmedium";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
									};
								class CSAT_InfTeam_AT_heavy
									{
										name = "Anti-Tank Team (Heavy AT)";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATTL";
												rank = "LIEUTENANT";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATATheavy";
												rank = "SERGEANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATATheavy";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
									};
								class CSAT_InfSentry
									{
										name = "Security Patrol";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATGL";
												rank = "SERGEANT";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {3,0,0};
											};
									};
								class CSAT_InfMachinegunSquad
									{
										name = "Machinegunner Squad";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATSL";
												rank = "CAPTAIN";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATARheavy";
												rank = "LIEUTENANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
										class Unit3
											{
												side = 0;
												vehicle = "CSATARheavy";
												rank = "SERGEANT";
												position[] = {7,0,0};
											};
										class Unit4
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {9,0,0};
											};
										class Unit5
											{
												side = 0;
												vehicle = "CSATARheavy";
												rank = "LIEUTENANT";
												position[] = {12,0,0};
											};
										class Unit6
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {14,0,0};
											};
									};
								class CSAT_InfMachinegunteam
									{
										name = "Machinegunner Team";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATTL";
												rank = "LIEUTENANT";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATARheavy";
												rank = "SERGEANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATARheavy";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
									};
								class CSAT_InfATSquad
									{
										name = "Heavy AT Squad";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATSL";
												rank = "CAPTAIN";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATATheavy";
												rank = "LIEUTENANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
										class Unit3
											{
												side = 0;
												vehicle = "CSATATheavy";
												rank = "SERGEANT";
												position[] = {7,0,0};
											};
										class Unit4
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {9,0,0};
											};
										class Unit5
											{
												side = 0;
												vehicle = "CSATATheavy";
												rank = "CORPORAL";
												position[] = {12,0,0};
											};
									};
								class CSAT_Sniperteam
									{
										name = "Sniper Team";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATMark";
												rank = "CAPTAIN";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATMark";
												rank = "LIEUTENANT";
												position[] = {3,0,0};
											};
									};
								class CSAT_AAteam
									{
										name = "AA Team";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATAA";
												rank = "CAPTAIN";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATAA";
												rank = "LIEUTENANT";
												position[] = {3,0,0};
											};
									};
								class CSAT_ReinforcedInfTeam
									{
										name = "Reinforced Rifle Team";
										side = 0;
										faction = "CUPOPfor";
										class Unit0
											{
												side = 0;
												vehicle = "CSATTL";
												rank = "CAPTAIN";
												position[] = {0,5,0};
											};
										class Unit1
											{
												side = 0;
												vehicle = "CSATAR";
												rank = "LIEUTENANT";
												position[] = {3,0,0};
											};
										class Unit2
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {5,0,0};
											};
										class Unit3
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "SERGEANT";
												position[] = {7,0,0};
											};
										class Unit4
											{
												side = 0;
												vehicle = "CSATRifleman";
												rank = "CORPORAL";
												position[] = {9,0,0};
											};
										class Unit5
											{
												side = 0;
												vehicle = "CSATMed";
												rank = "CORPORAL";
												position[] = {12,0,0};
											};
									};
							};
					};			
			};
	};