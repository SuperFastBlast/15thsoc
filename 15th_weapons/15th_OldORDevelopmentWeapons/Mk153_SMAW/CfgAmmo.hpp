class CfgAmmo {
    
	// External class reference
    class RocketBase;
    
    class R_SMAW_BASE: RocketBase {
        scope = protected; // Hidden model definition
        model = "MK153_SMAW\SMAW_rocket_inflight.p3d"; // Inflight model
        
        // Default combat effects, innert by default
        hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
        fuseDistance = 7;
        
        // AI cost to fire, aka used to decide if the launcher should be used at a given time
		cost = 200;
        
        // Flight characteristics
		airFriction = 0.275; // 2k=0.375 Used to simulate decceleration due to air friction measured in M/S/M
		sideAirFriction = 0.275; // Used to simulate the effect of air hitting the side of rocket, used for affects guided rockets
		maxSpeed = 220;	// max speed on level road, m/s
        typicalSpeed = 220;
		initTime = 0; // Time at which the rocket's thruster ignites, mostly used for guided rockets
		thrustTime = 0; // How long the rocket's thruster lasts after ignition
		thrust = 0; // How much thrust the rocket's booster produces. Unit?

		// Effects none by default
		CraterEffects = "EmptyEffect";
		explosionEffects = "EmptyEffect";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = false;
		irLock = false;
		timeToLive = 18;
		maneuvrability = 0;
		allowAgainstInfantry = false;
        
        mass = 67; // Weight of a single rocket in KG
    };
    
    class R_SMAW_HEDP: R_SMAW_BASE { // HE, 25mm RHA, 20cm concrete
    	scope = public;
    	// Combat effects, DP does more indirect damage than AA but less direct damage
		hit = 250;
		indirectHit = 75;
		indirectHitRange = 10;
        
		cost = 200;
        
        // Apply larger explosive effects
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
        
        // AI can use this against infantry as DP is an effective round
		allowAgainstInfantry = true;
        
        mass = 67;
        
        class CamShakeExplode {
			power = (110*0.2);
			duration = "((round (110^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((5 + 110^0.5)*8);
		};
		
		class CamShakeHit {
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		
		class CamShakeFire {
			power = (20^0.25);
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((20^0.5)*8);
		};
		
		class CamShakePlayerFire {
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
    
  	class R_SMAW_HEAA: R_SMAW_HEDP {
        scope = public;
        
        // Combat effects
		hit = 750; // Increased damage to direct hits
		indirectHit = 25; // Reduced damage to indirect hits, there's less explosive
		indirectHitRange = 3; // Reduced shrapnel distance, there's less explosive
        
        // Use AT effects
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
        
        // AI shouldn't use AA rockets against infantry, it's not designed for it
		allowAgainstInfantry = false;
        
        mass = 67; // Weight of a single rocket in KG
		
		class CamShakeExplode {
			power = (55*0.2);
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((5 + 55^0.5)*8);
		};
		
		class CamShakeHit {
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		
		class CamShakeFire {
			power = (20^0.25);
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((20^0.5)*8);
		};
		
		class CamShakePlayerFire {
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
 	 };
};