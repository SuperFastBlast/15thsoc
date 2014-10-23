class CfgMovesBasic 
{
	class DefaultDie;	// External class reference
	
	class ManActions 
	{
		JS_JC_F35_pilot = "JS_JC_F35_pilot";

	};
};

class CfgMovesMaleSdr : CfgMovesBasic 
{
	class States 
	{
		class Crew;	// External class reference
		
		class JS_JC_F35_pilot_dead : DefaultDie 
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = "false";
			terminal = true;
			file = "\f35b_15th\anim\KIA_F35B_Pilot.rtm";
			connectTo[] = {"DeadState", 0.1};
		};
		
		class JS_JC_F35_pilot : Crew 
		{
			file = "\f35b_15th\anim\F35B_Pilot.rtm";
			interpolateTo[] = {"JS_JC_F35_pilot_dead", 1};
		};
		

	};
};











