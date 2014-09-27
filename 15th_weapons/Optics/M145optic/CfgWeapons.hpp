
class CfgWeapons
{
	
	//OPTIC
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class M145: ItemCore
	{
		scope = 2;
		displayName = "M145";
		picture = "\M145optic\data\m145\gear_m145_ca.paa";
		model = "\M145optic\BTC_m145.p3d";
		descriptionShort = "M145";
		weaponinfotype = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			mass = 2;
			modeloptics = "\M145optic\BTC_m145_optic.p3d";
			optics = 1;
			opticType = 2;
			class OpticsModes 
			{
				class M145_scope 
				{
					cameradir = "";
					distancezoommax = 300;
					distancezoommin = 300;
					memorypointcamera = "opticView";
					opticsdisableperipherialvision = 1;
					opticsflare = 1;
					opticsid = 1;
					opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticszoominit = 0.0500;
					opticszoommax = 0.0500;
					opticszoommin = 0.0500;
					usemodeloptics = 1;
					visionmode[] = {"Normal"};
				};
				class M145_iron
				{
					distancezoommax = 100;
					distancezoommin = 100;
					discreteInitIndex = 0;
					discretedistance[] = {100};
					discretedistanceinitindex = 0;
					discretefov[] = {};
					memorypointcamera = "eye";
					opticsdisableperipherialvision = 0;
					opticsdisplayname = "";
					opticsflare = 0;
					opticsid = 2;
					opticszoominit = 0.75;
					opticszoommax = 1.1;
					opticszoommin = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};	
					opticsppeffects[] = {};					
				};
			};
		};
	};
};