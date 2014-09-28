class CfgMovesBasic {
	class DefaultDie;	// External class reference
	
	class ManActions {
		F35B_Pilot = "F35B_Pilot";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	class States {
		class Crew;	// External class reference
		
		class KIA_F35B_Pilot : DefaultDie {
			speed = 0.5;
			file = "\CHO_F35B\Anim\KIA_F35B_Pilot.rtm";
			connectTo[] = {"DeadState", 0.1};
		};
		
		class F35B_Pilot : Crew {
			file = "\CHO_F35B\Anim\F35B_Pilot.rtm";
			connectTo[] = {"KIA_F35B_Pilot", 1};
		};
	};
};