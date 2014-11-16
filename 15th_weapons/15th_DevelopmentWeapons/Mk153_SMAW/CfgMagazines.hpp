class CfgMagazines {
    
	// External class reference
	class CA_LauncherMagazine;
	
	class SMAW_HEDP : CA_LauncherMagazine {
		scope = public;
		model = "MK153_SMAW\SMAW_rocket.p3d";
		modelSpecial = "MK153_SMAW\SMAW_loaded.p3d";
		displayName = "SMAW HEDP Rocket";
		displayNameShort = "HEDP";
		ammo = R_SMAW_HEDP;
		reloadAction = "ReloadRPG";
		picture = "\MK153_SMAW\data\equip\M_SMAW_CA.paa";
		initSpeed = 220;
        mass = 53;
		descriptionShort = "High-Explosive Dual-Purpose Rocket for the SMAW Launcher";
	};
	
	class SMAW_HEAA : SMAW_HEDP {
		displayName = "SMAW HEAA Rocket";
		displayNameShort = "HEAA";
		ammo = R_SMAW_HEAA;
        reloadAction = "ReloadRPG";
		descriptionShort = "High-Explosive Anti-Armor Rocket for the SMAW Launcher";\
	};
    
};