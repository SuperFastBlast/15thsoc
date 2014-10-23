
	class JS_JC_F35_canopy : thingX 
	{
		mapSize = 0.78;
		author = "John_Spartan & Saul";
		displayName = "JS_JC_F35 Canopy";
		model = "\f35b_15th\JS_JC_F35_canopy.p3d";
		_generalMacro = "thingX";
		scope = protected;
		simulation = "thingx";
		animated = false;
		reversed = false;
		nameSound = "";
		vehicleClass = "Objects";
		accuracy = 0.2;	// accuracy needed to recognize type of this target
		
		class DestructionEffects {};
	};

	

	
	class JS_JC_F35ejection_seat : Motorcycle
	{

		
		reversed = false;
		startEngine = false;
		crew = "B_Pilot_F";
		driverCanEject = 0;
		scope = protected;
		vehicleClass = "Objects";
		side = TWest;
		faction = BLU_F;
		author = "John_Spartan & Saul";
		displayName = "SJU-17 Ejection Seat";
		canFloat = false;
		Icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model = "\f35b_15th\JS_JC_F35_ejection_seat.p3d";
		driverAction = "JS_JC_F35_pilot";
		getInAction = "";
		getOutAction = "";
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		usePreciseGetInAction = 1;
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGetIn[] = {"", db-70, 1};
		soundGetOut[] = {"", db-70, 1};
		soundEngine[] = {"", db5, 0.9};
		soundEnviron[] = {"", 0.562341, 1};
		unitInfoType = "RscUnitInfoSoldier";
		hideUnitInfo = true;
		//destrType = "DestructNo";

		weapons[] = {};
		magazines[] = {};

		dammageHalf[] = {};
		dammageFull[] = {};

		extCameraPosition[] = {0.0, 3.0, -10.0};
		threat[] = {0.0, 0.0, 0.0};

		class ViewPilot 
		{
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 0.9;
			minFov = 0.42;
			maxFov = 0.9;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		

		fuelCapacity = 0;
		
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		
		class TransportWeapons {};
		
		class TransportMagazines {};

		class Turrets {};

		class Exhausts {};

		class Reflectors {};

		class Sounds {};

		class Damage 
		{
			tex[] = {};
			mat[] = {"f35b_15th\f35.rvmat", "f35b_15th\data\f35.rvmat", "f35b_15th\data\f35.rvmat"};
		};

		class Eventhandlers: Eventhandlers {};
		

	};

	