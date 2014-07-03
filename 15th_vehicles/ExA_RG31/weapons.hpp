	class CfgWeapons
	{
		class LMG_RCWS;
		class Mgun;

			class M2: LMG_RCWS 
			{

				ballisticscomputer = 2;
				displayname = "M2";
				magazines[] = {"100Rnd_127x108_Mag"};
				showaimcursorinternal = 0;
				class GunParticles 
				{
					class effect1 
					{
						directionname = "konec hlavne";
						effectname = "MachineGunCloud";
						positionname = "usti hlavne";
					};
				};
				
		class manual: MGun {
		dispersion = 0.00087;
		displayname = "M2";
		maxrange = 2;
		maxrangeprobab = 0.01;
		midrange = 1;
		midrangeprobab = 0.01;
		minrange = 0;
		minrangeprobab = 0.01;
		reloadtime = 0.2;
		soundburst = 0;
		soundcontinuous = 0;
		weaponsoundeffect = "DefaultRifle";
		};
		class close: manual {
		airateoffire = 1;
		airateoffiredistance = 50;
		burst = 7;
		maxrange = 50;
		maxrangeprobab = 0.1;
		midrange = 20;
		midrangeprobab = 0.7;
		minrange = 0;
		minrangeprobab = 0.05;
		showtoplayer = 0;
	};
	class short: close {
		airateoffire = 2;
		airateoffiredistance = 300;
		burst = 6;
		maxrange = 300;
		maxrangeprobab = 0.1;
		midrange = 200;
		midrangeprobab = 0.7;
		minrange = 50;
		minrangeprobab = 0.05;
	};
	class medium: close {
		airateoffire = 4;
		airateoffiredistance = 600;
		burst = 5;
		maxrange = 600;
		maxrangeprobab = 0.1;
		midrange = 500;
		midrangeprobab = 0.7;
		minrange = 200;
		minrangeprobab = 0.05;
	};
	class far: close {
		airateoffire = 5;
		airateoffiredistance = 1000;
		burst = 4;
		maxrange = 1100;
		maxrangeprobab = 0.01;
		midrange = 850;
		midrangeprobab = 0.4;
		minrange = 400;
		minrangeprobab = 0.05;
	};
	};
	};
	
	class CfgAmmo
	{
			class BulletBase;
			class B_127x99_Ball: BulletBase
		{
			airfriction = -0.00096;
			airlock = 1;
			audiblefire = 15;
			caliber = 2.4;
			cartridge = "FxCartridge_127";
			cost = 5;
			hit = 27;
			indirecthit = 0;
			indirecthitrange = 0;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerendtime = 1;
			tracerscale = 1.2;
			tracerstarttime = 0.075;
			typicalspeed = 880;
			visiblefire = 10;
		};
	
	};
	
	class CfgMagazines 
	{
		class VehicleMagazine;
		class 100Rnd_127x108_Mag:VehicleMagazine
		{
			ammo = "B_127x99_Ball";
			count = 100;
			descriptionshort = "";
			displayname = "50 Cal";
			initspeed = 1060;
			tracersEvery = 3;
			mass = 10;
			picture = "\A3\Weapons_F\Data\UI\M_5rnd_127x108_CA.paa";
			scope = 2;
		};

		};