	class CHO_F35B_aa : CHO_F35B_base {
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
			"CHO_F35B_gbu12_W",
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

	class CHO_F35B_cas : CHO_F35B_base {
		author = "Chortles";
		_generalMacro = "CHO_F35B_CAS";
		scope = public;
		displayName = "F-35B Lightning II (Strike)";
		crew = "B_pilot_F";
		side = TWest;
		faction = "BLU_F";
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

	class CHO_F35B_lgb : CHO_F35B_base {
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