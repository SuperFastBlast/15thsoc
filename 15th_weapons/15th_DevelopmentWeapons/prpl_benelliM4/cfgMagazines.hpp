class CfgMagazines
{
	class CA_Magazine;
	
	class 15th_8Rnd_12Gauge_Pellets : CA_Magazine
	{
		scope = 2;
		displayname="12cal Pellets M1014";
		ammo="15th_B_12Gauge_Pellets";
		count=8;
		initspeed=395;
		picture="\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		descriptionshort="Caliber: 12 cal Pellets<br />Rounds: 8<br />Used in: M1014";
		reloadaction="GestureReloadM4SSAS";
		mass=4;
	};
	
	class 15th_8Rnd_12Gauge_Slug : CA_Magazine
	{
		scope = 2;
		displayname="12cal Slug M1014";
		ammo="15th_B_12Gauge_Slug";
		count=8;
		initspeed=415;
		picture="\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		descriptionshort="Caliber: 12 cal Slug<br />Rounds: 8<br />Used in: M1014";
		reloadaction="GestureReloadM4SSAS";
		mass=4;
	};
};