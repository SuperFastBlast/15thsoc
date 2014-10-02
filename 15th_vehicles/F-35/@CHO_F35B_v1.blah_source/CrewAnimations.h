class CfgMovesBasic {
	class DefaultDie;	// External class reference
	
	class ManActions {
		F35B_Pilot = "F35B_Pilot";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	#define AnimPath \cho_f35b\Anim
	class States {
		class Crew;	// External class reference
		
		class KIA_F35B_Pilot : DefaultDie {
			speed = 0.5;
			file = AnimPath\KIA_F35B_Pilot.rtm;
			connectTo[] = {"DeadState", 0.1};
		};
		
		class F35B_Pilot : Crew {
			file = AnimPath\F35B_Pilot.rtm;
			connectTo[] = {"KIA_F35B_Pilot", 1};
		};
	};
	#undef AnimPath
};