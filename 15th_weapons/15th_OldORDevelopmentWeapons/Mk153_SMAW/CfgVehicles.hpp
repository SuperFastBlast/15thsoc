class CfgVehicles
{
	class B_supplyCrate_F;
	class SMAW_box: B_supplyCrate_F {
		displayname = "[15th] MK153 SMAW Box";
        transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;

		class TransportMagazines
		{
		
			class _xx_SMAW_HEAA {
				count = 250;
				magazine = "SMAW_HEAA";
			};
			
			class _xx_SMAW_HEDP {
				count = 250;
				magazine = "SMAW_HEDP";
			};
		};
		
		class TransportWeapons
		{
            
			class _xx_SMAW_Launcher
			{
				count = 50;
                weapon = "SMAW_Launcher";
			};
            
		};
	};
};