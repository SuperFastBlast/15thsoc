class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AAV_Driver = "AAV_Driver";
		AAV_Gunner = "AAV_Gunner";
		AAV_Commander = "AAV_Commander";
		AAV_Driver_OUT = "AAV_Driver_OUT";
		AAV_Gunner_OUT = "AAV_Gunner_OUT";
		AAV_Commander_OUT = "AAV_Commander_OUT";
		AAV_Cargo01 = "AAV_Cargo01";
		AAV_Cargo02 = "AAV_Cargo02";
		AAV_Cargo03 = "AAV_Cargo03";
		AAV_Cargo04 = "AAV_Cargo04";
	};
};
#define SPEED_STATIC 1e10
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
//		class Stryker_Dead;
		class KIA_AAV_Driver: DefaultDie
		{
			actions = DeadActions;
			file=\AAVB\DATA\anim\KIA_AAV_Driver.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class AAV_Driver: Crew
		{
			file=\AAVB\DATA\anim\AAV_Driver.rtm;
			interpolateTo[]={KIA_AAV_Driver,1};
		};
		class KIA_AAV_Gunner: DefaultDie
		{
			actions = DeadActions;
			file=\AAVB\DATA\anim\KIA_AAV_Gunner.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class AAV_Gunner: Crew
		{
			file=\AAVB\DATA\anim\AAV_Gunner.rtm;
			interpolateTo[]={KIA_AAV_Gunner,1};
		};
		class KIA_AAV_Commander: DefaultDie
		{
			actions = DeadActions;
			file=\AAVB\DATA\anim\KIA_AAV_Commander.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class AAV_Commander: Crew
		{
			file=\AAVB\DATA\anim\AAV_Commander.rtm;
			interpolateTo[]={KIA_AAV_Commander,1};
		};
		class KIA_AAV_Driver_OUT: DefaultDie
		{
			actions = DeadActions;
			file=\AAVB\DATA\anim\KIA_AAV_Driver_OUT.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class AAV_Driver_OUT: Crew
		{
			file=\AAVB\DATA\anim\AAV_Gunner.rtm;
		};
		class KIA_AAV_Gunner_OUT: DefaultDie
		{
			actions = DeadActions;
			file=\AAVB\DATA\anim\KIA_AAV_Gunner_OUT.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class AAV_Gunner_OUT: Crew
		{
			file=\AAVB\DATA\anim\AAV_Gunner_OUT.rtm;
			interpolateTo[]={KIA_AAV_Gunner_OUT,1};
		};
		class KIA_AAV_Commander_OUT: DefaultDie
		{
			actions = DeadActions;
			file=\AAVB\DATA\anim\KIA_AAV_Commander_OUT.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class AAV_Commander_OUT: Crew
		{
			file=\AAVB\DATA\anim\AAV_Commander_OUT.rtm;
			interpolateTo[]={KIA_AAV_Commander_OUT,1};
		};
		class AAV_Cargo01 : Crew
		{
			file=\AAVB\DATA\anim\OutCargoLB.rtm;
	//die outside vehicle
		};
		class AAV_Cargo02 : Crew
		{
			file=\AAVB\DATA\anim\OutCargoLF.rtm;
//			interpolateTo[]={Stryker_Dead,1};		//die outside vehicle
		};
		class AAV_Cargo03 : Crew
		{
			file=\AAVB\DATA\anim\OutCargoRB.rtm;
//			interpolateTo[]={Stryker_Dead,1};		//die outside vehicle
		};
		class AAV_Cargo04 : Crew
		{
			file=\AAVB\DATA\anim\OutCargoRF.rtm;
//			interpolateTo[]={Stryker_Dead,1};		//die outside vehicle
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		AAV_Driver = "";
		AAV_Gunner = "";
		AAV_Commander = "";
		AAV_Driver_OUT = "";
		AAV_Gunner_OUT = "";
		AAV_Commander_OUT = "";
		AAV_Cargo01 = "crew";
		AAV_Cargo02 = "crew";
		AAV_Cargo03 = "crew";
		AAV_Cargo04 = "crew";
	};
};