class CfgPatches
{
	class ej_IARal
	{
		requiredaddons[]={"A3_Modules_F", "A3_UI_F", "A3_Structures_F_Items_Electronics","A3_Weapons_F","asdg_jointrails","asdg_jointmuzzles"};
		requiredversion=1.24;
		units[]={};
		weapons[]=
		{
			"ej_IAR30"
		};
		magazines[]=
		{};
	author[]={"EricJ"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
    class Rifle;
    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
    };
	class ej_IARal_base: Rifle_Base_F
	{
	changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",0.17782794,1,5};
	jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
    AGM_Jamming_Reliability = 0.001;    // 40 malfunctions on 10,000 rounds fired.
    AGM_Overheating_Increment = 0.012;  // How much the weapon heats up for every shot. Max temperature is 3. 250 shots for max temp.
    AGM_Overheating_Cooldown = 0.009;   // How fast the weapon cools down every second. 1500 seconds / 25 minutes for a complete cooldown from max temp.
    AGM_Overheating_Dispersion = 0.001; // Base dispersion in radians when the weapon is overheated. Increases the hotter the weapons gets.
    AGM_Overheating_allowSwapBarrel = 0;   // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
	AGM_Bipod = 1;
		descriptionshort="M27 IAR<br />Caliber: 5.56";
		discretedistance[]={300,400,500,600};
		discretedistanceinitindex=1;
		dispersion=9.9999997e-005;
		dexterity=1.8;
		inertia = 0.5;
		initSpeed = -0.946;
		maxRecoilSway = 0.0125;
  		swayDecaySpeed = 1.25;
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
		magazines[] = {"MEU_30Rnd_M855A1_556x45_Stanag","MEU_30Rnd_M855A1_556x45_T_Stanag"};
		model="\IARal\ej_IAR30.p3d";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		muzzles[]=
		{
			"this"
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
		reloadAction="GestureReloadSMG_02";
		reloadTime=0.096000001;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedslots[]={901};
			class CowsSlot{};
			class PointerSlot{};
			class CUP_PicatinnyTopMountM16: CUP_PicatinnyTopMount{};
			class CUP_PicatinnySideMountM16: CUP_PicatinnySideMount{};

			mass=83.9;
			class MuzzleSlot
			{
				displayName = "Muzzle SLot";
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"Trixie_Cyclone"};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {		/// the new parameter to distinguish muzzle accessories type
				StandardSound, // default zvuk
				SilencedSound // silenced zvuk
			};

			class BaseSoundModeType
			{	
			weaponSoundEffect = "DefaultRifle";
    				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.31622776,1,10};
    				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.31622776,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};

			class StandardSound: BaseSoundModeType
			{
			begin1[] = {"\IARal\M27_S1.wav", db4, 1,1400};
			begin2[] = {"\IARal\M27_S1.wav", db4, 1,1400};
			begin3[] = {"\IARal\M27_S1.wav", db4, 1,1400};
			soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
			};

			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soun
			{
			begin1[]={"\IARal\M27_sf.wav", 0.80000001, 1,300};
			begin2[]={"\IARal\M27_sf.wav", 0.80000001, 1,300};
			soundBegin[]={begin1,0.333, begin2,0.333};
			};
			reloadTime=0.096000001;
			recoil = "recoil_single_primary_4outof10";
            		recoilprone = "recoil_single_primary_prone_3outof10";
			dispersion=0.00087;
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
    				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.31622776,1,10};
    				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.31622776,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};

			class StandardSound: BaseSoundModeType
			{
			begin1[] = {"\IARal\M27_S1.wav", db4, 1,1200};
			begin2[] = {"\IARal\M27_S1.wav", db4, 1,1200};
			begin3[] = {"\IARal\M27_S1.wav", db4, 1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
			};

			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soun
			{
			begin1[]={"\IARal\M27_sf.wav", 0.80000001, 1,300};
			begin2[]={"\IARal\M27_SF.wav", 0.80000001, 1,300};
			soundBegin[]={begin1,0.333, begin2,0.333};
			};

			reloadTime=0.096000001;
			dispersion=0.00087;
			recoil = "recoil_auto_primary_4outof10";
           		recoilprone = "recoil_auto_primary_prone_3outof10";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.56234133,1,10}; /// custom made sounds
		reloadMagazineSound[] = {"\IARal\M4R.wss",1,1,30};
	};
	class ej_IAR30: ej_IARal_base
	{
		scope=2;
		initSpeed = 880;
		displayname="M27 IAR";
		reloadAction="GestureReloadSMG_02";
		dexterity=1.8;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\IARal\data\Anim\SCAR.rtm"
		};
	};
};