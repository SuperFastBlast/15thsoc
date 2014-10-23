class CfgMagazines 
{
	class VehicleMagazine;	// External class reference


	class js_m_f35_gau12 : VehicleMagazine 
	{
		scope = public;
		displayName = "GAU-12/A 25mm";
		ammo = "B_25mm";
		count = 190;
		initSpeed = 1036;
		tracersEvery = 3;
		nameSound = "cannon";
	};

	class js_m_f35_aim9x_x1 : VehicleMagazine 
	{
		scope = public;
		displayName = "AIM-9X";
		displayNameShort = "AIM-9X";
		ammo = "js_a_f35_aim9x";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 450;	// max estimated speed km/h
		sound[] = {"A3\sounds_f\dummysound", db0, 1, 1300};
		reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
		nameSound = "missiles";
	};

	class js_m_f35_aim9x_inner_x1 : VehicleMagazine 
	{
		scope = public;
		displayName = "AIM-9X";
		displayNameShort = "AIM-9X";
		ammo = "js_a_f35_aim9x_inner";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 450;	// max estimated speed km/h
		sound[] = {"A3\sounds_f\dummysound", db0, 1, 1300};
		reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
		nameSound = "missiles";
	};

	
	class js_m_f35_GBU12_x1 : VehicleMagazine 
	{
		scope = public;
		displayName = "GBU12 LGB";
		descriptionShort = "GBU12 LGB";
		displayNameShort = "GBU12 LGB";
		ammo = "js_a_f35_GBU12_LGB";
		initSpeed = 0;
		maxLeadSpeed = 1000;	// max estimated speed km/h
		sound[] = {"", db0, 1};
		reloadSound[] = {"", 0.000316228, 1};
		count = 1;
		nameSound = "";
	};


	

	

	
	
};