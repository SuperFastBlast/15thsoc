class CfgPatches
{
	class ej_IARal
	{
		requiredaddons[]={"A3_Modules_F", "A3_UI_F", "A3_Structures_F_Items_Electronics","A3_Weapons_F","asdg_jointrails","asdg_jointmuzzles"};
		requiredversion=1.24;
		units[]={};
		weapons[]=
		{
			"ej_IAR30",
			"ej_IAR30des",
		};
		magazines[]=
		{
			"IARmk318_mag",
			"IAR30mk318_mag",
			"IARmk262_mag",
			"IARrt_mag"
		};
	author[]={"EricJ"};
	};
};
class cfgRecoils
{
	scar_HRecoil[] = 	 {0,0.014,0.015,  0.02,0.014,0.015,  0.07,0.005,0.018,  0.13,0,0};
	scar_HRecoilProne[] = {0,0.01,0.006,    0.013,0.01,0.006,  0.1,0.008,0.001,  0.12,0,0};

	IAR_Recoil[]={0,0.0049999999,0.0049999999,0.0049999999,0.0099999998,0.011,0.090000004,0.0049999999,-0.00039999999,0.13,0,0};
	IAR_RecoilProne[]={0,0.0049999999,0.0049999999,0.0049999999,0.0099999998,0.0089999996,0.075000003,0.0049999999,-0.00030000001,0.13,0,0};
	IAR_Recoil_Auto[]={0,0.0070000002,0.015,0.0070000002,0.0099999998,0.022,0.090000004,0.02,0.0099999998,0.13,0,0};
	IAR_RecoilProneAuto[]={0,0.0049999999,0.0049999999,0.0049999999,0.0099999998,0.0089999996,0.075000003,0.0049999999,-0.00030000001,0.13,0,0};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class asdg_MuzzleSlot_556;
class asdg_FrontSideRail;
class asdg_OpticRail1913;

class CfgWeapons
{
    class Rifle;
    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
    };
	class UGL_F; 
	class ej_IARal_base: Rifle_Base_F
	{
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.5,
			1
		};
		descriptionshort="M27 IAR<br />Caliber: 5.56";
		discretedistance[]={300,400,500,600};
		discretedistanceinitindex=1;
		dispersion=9.9999997e-005;
		dexterity=1.8;
		displayname="M27 IAR";
		distancezoommax=300;
		distancezoommin=300;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\IARal\data\Anim\SCAR.rtm"
		};
		maxrange=300;
		maxrangeprobab=0.2;
		midrange=225;
		midrangeprobab=0.69999999;
		minrange=2;
		minrangeprobab=0.30000001;
		magazines[] = {"IAR30mk318_mag","M855A1_M4_30Rnd","M855A1_tracer_M4_30Rnd","M855A1_M16_30Rnd","M855A1_tracer_M16_30Rnd","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		model="\IARal\ej_IAR30.p3d";
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		muzzles[]=
		{
			"this",
			"securite"
		};
		class securite: Rifle
		{
			displayName="$STR_R3F_SAFE";
			magazines[]=
			{
				"R3F_securite_mag"
			};
			begin1[]=
			{
				"",
				1,
				1,
				1
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadMagazineSound[]=
			{
				"",
				1,
				1,
				1
			};
			drySound[]=
			{
				"",
				1,
				1,
				1
			};
			optics="true";
			modelOptics="-";
			opticsZoomMin=0.375;
			opticsZoomMax=1.1;
			opticsZoomInit=0.75;
			memoryPointCamera="eye";
		};
		optics=0;
		opticsdisableperipherialvision=0.67000002;
		opticsflare=0;
		opticsid=0;
		opticsppeffects[]={};
		opticszoominit=0.75;
		opticszoommax=1.1;
		opticszoommin=0.375;
		picture="\IARal\data\UI\iar30inv_x_ca.paa";
		recoil="assaultRifleBase";
		recoilprone="assaultRifleBase";
		reloadAction="GestureReloadSMG_02";
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\reloads\new_trg",
			0.39810699,
			1,
			30
		};
		reloadsound[]=
		{
			"A3\sounds_f\weapons\reloads\new_trg.wav",
			0.1,
			1,
			30
		};
		reloadtime=0.1;
		scope=0;
		selectionfireanim="muzzleflash";
		weaponinfotype="RscWeaponZeroing";
		weaponlockdelay=0;
		weaponlocksystem=0;
		weaponpoolavailable=1;
		weaponsoundeffect="";
		weight=0;
		class Library
		{
			libtextdesc="M27 IAR";
		};
		class GunClouds
		{
			access=0;
			cloudletaccy=0;
			cloudletalpha=0.30000001;
			cloudletanimperiod=1;
			cloudletcolor[]={1,1,1,0};
			cloudletduration=0.050000001;
			cloudletfadein=0;
			cloudletfadeout=0.1;
			cloudletgrowup=0.050000001;
			cloudletmaxyspeed=100;
			cloudletminyspeed=-100;
			cloudletshape="cloudletClouds";
			cloudletsize=1;
			deltat=0;
			initt=0;
			interval=-0.02;
			size=0.30000001;
			sourcesize=0.02;
			timetolive=0;
			class Table
			{
				class T0
				{
					color[]={1,1,1,0};
					maxt=0;
				};
			};
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=60;
			class asdg_MuzzleSlot_IAR: asdg_MuzzleSlot_556{};
			class asdg_OpticRail1913_IAR: asdg_OpticRail1913{};
			class asdg_FrontSideRail_IAR: asdg_FrontSideRail{};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {		/// the new parameter to distinguish muzzle accessories type
				StandardSound, // default zvuk
				SilencedSound, // silenced zvuk
			};

			class BaseSoundModeType
			{	
			weaponSoundEffect = "DefaultRifle";
			closure1[]={"A3\sounds_f\weapons\closure\closure_rifle_2", db-12, 1,10};
			closure2[]={"A3\sounds_f\weapons\closure\closure_rifle_3", db-12, 1,10};
			soundClosure[]={closure1,0.5, closure2,0.5};
			};

			class StandardSound: BaseSoundModeType
			{
			begin1[] = {"iaral\sound\Sound1.wav", db4, 1,1200};
			begin2[] = {"iaral\sound\Sound1.wav", db4, 1,1200};
			begin3[] = {"iaral\sound\Sound1.wav", db4, 1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
			};

			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soun
			{
			begin1[]={"iaral\sound\sf.wav", 0.80000001, 1,300};
			begin2[]={"iaral\sound\sf.wav", 0.80000001, 1,300};
			soundBegin[]={begin1,0.333, begin2,0.333};
			};

			reloadTime=0.096000001;
			recoil="IAR_Recoil";
			recoilProne="IAR_RecoilProne";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {
				StandardSound,
				SilencedSound
			};

			class BaseSoundModeType
			{	
			weaponSoundEffect = "DefaultRifle";
			closure1[]={"A3\sounds_f\weapons\closure\closure_rifle_2", db-12, 1,10};
			closure2[]={"A3\sounds_f\weapons\closure\closure_rifle_3", db-12, 1,10};
			soundClosure[]={closure1,0.5, closure2,0.5};
			};

			class StandardSound: BaseSoundModeType
			{
			begin1[] = {"iaral\sound\Sound1.wav", db4, 1,1200};
			begin2[] = {"iaral\sound\Sound1.wav", db4, 1,1200};
			begin3[] = {"iaral\sound\Sound1.wav", db4, 1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
			};

			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soun
			{
			begin1[]={"iaral\sound\sf.wav", 0.80000001, 1,300};
			begin2[]={"iaral\sound\sf.wav", 0.80000001, 1,300};
			soundBegin[]={begin1,0.333, begin2,0.333};
			};

			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="IAR_Recoil_Auto";
			recoilProne="IAR_RecoilProneAuto";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};

		class EGLM_Launcher: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "EGLM";
			descriptionShort = "EGLM";
			useModelOptics = false;
			useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {				
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell"};
			cameraDir = "OP_look";
			discreteDistance[] = {100, 200, 300, 400};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 1; /// 200 is the default zero
		};
		
		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
	};
	class ej_IAR30: ej_IARal_base
	{
		scope=2;
		displayname="M27 IAR w/ 30-round magazine";
		reloadAction="GestureReloadSMG_02";
		dexterity=1.6;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\IARal\data\Anim\SCAR.rtm"
		};
	};
	class ej_IAR30des: ej_IARal_base
	{
		scope=2;
		model="\IARal\ej_IAR30des.p3d";
		picture="\IARal\data\UI\iar30desinv_x_ca.paa";
		displayname="M27 IAR Desert w/30-round magazine";
		reloadAction="GestureReloadSMG_02";
		dexterity=1.35;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\IARal\data\Anim\SCAR.rtm"
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class IAR30mk318_mag: 30Rnd_556x45_Stanag
	{
		ammo="ej_B_mk318";
		count=30;
		descriptionshort="";
		displayname="5.56mm 30-round Mk318 Magazine";
		initspeed=950;
		lastroundstracer=5;
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		model="";
		scope=2;
		tracersevery=0;
		mass=8;
	};
	class IAR_coffinmag: 30Rnd_556x45_Stanag
	{
		ammo="TB_556x45_Ball";
		count=60;
		descriptionshort="";
		displayname="5.56mm 60-round Coffin Mag";
		initspeed=930;
		lastroundstracer=0;
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		model="";
		scope=2;
		tracersevery=0;
		mass=16;
	};
	class CA_Magazine;
	class R3F_securite_mag: CA_Magazine
	{
		scope=2;
		displayName="";
		count=0;
		initSpeed=0;
		tracersEvery=0;
		ammo="R3F_securite_Ball";
		picture="\iar\Data\blank.paa";
		model="";
		descriptionShort="";
		mass=0;
		class Library
		{
			libTextDesc="";
		};
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class ej_B_mk318: B_556x45_Ball
	{
		hit = 10;
		typicalSpeed = 925.1468;
		airFriction = -0.001243324;
		caliber = 0.755;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 5.5;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly=0;
		tracerendtime=1;
		tracerscale=1;
		tracerstarttime=0.050000001;
	};
	class BulletBase;
	class R3F_securite_Ball: BulletBase
	{
		hit=0;
		cartridge="FxCartridge_Small";
		cost=0;
		typicalSpeed=0;
		airFriction=0;
		caliber=0;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		nvgOnly=0;
	};
};