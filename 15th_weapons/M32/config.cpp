
class CfgPatches
{
	class M32
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {};
	};
};

#define magentry(mag, num)      \
		class _xx_##mag       	\
		{          				\
			magazine = #mag;    \
			count = num;      	\
		}
		
#define wepentry(wep, num)  	\
		class _xx_##wep 		\
		{ 						\
			weapon = #wep; 		\
			count = num; 		\
		}

#define itementry(item, num) class _xx_##item { name=#item; count = num; }

class CfgAmmo
{
	class G_40mm_HE;
	class M433_40mm_HEDP: G_40mm_HE
  {
        hit = 170;
        indirectHit = 25;
        indirectHitRange = 5;
        caliber = 3;
        class CamShakeHit
        {
            power = 30;
            duration = "((round (30^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
class CfgMagazines
{
	class CA_Magazine;
	class 3Rnd_HE_Grenade_shell;
	class 6Rnd_HE_M32: 3Rnd_HE_Grenade_shell
	{
		picture = "\m32\Data\Icon\m_6x40mmhp_ca.paa";
		displayName= "6 Rnd. M433";
		ammo = "M433_40mm_HEDP";
		count = 6;
		mass = 24;
	};
	class 6Rnd_FlareWhite_M32: 6Rnd_HE_M32
	{
		picture="\M32\Data\Icon\m_6x40mmflare_ca.paa";
		displayName= "6 Rnd. 40MM Flare (White)";
		ammo = "F_40mm_White";
		count = 6;
		mass = 24;
	};
	class 6Rnd_FlareGreen_M32: 6Rnd_FlareWhite_M32
	{
		ammo = "F_40mm_Green";
		displayName= "6 Rnd. 40MM Flare (Green)";
		mass = 24;
	};
	class 6Rnd_FlareRed_M32: 6Rnd_FlareWhite_M32
	{
		ammo = "F_40mm_Red";
		displayName= "6 Rnd. 40MM Flare (Red)";
		mass = 24;
	};
	class 6Rnd_FlareYellow_M32: 6Rnd_FlareWhite_M32
	{
		ammo = "F_40mm_Yellow";
		displayName= "6 Rnd. 40MM Flare (Yellow)";
		mass = 24;
	};
	class 6Rnd_FlareCIR_M32: 6Rnd_FlareWhite_M32
	{
		ammo = "F_40mm_Cir";
		displayName= "6 Rnd. 40MM Flare (IR)";
		mass = 24;
	};

	class 6Rnd_Smoke_M32: 6Rnd_HE_M32
	{
		picture="\M32\Data\Icon\m_6x40mmsmoke_ca.paa";
		displayName= "6Rnd 40MM Smoke (White)";
		ammo = "G_40mm_Smoke";
		count = 6;
		mass = 24;
	};
	class 6Rnd_SmokeRed_M32: 6Rnd_Smoke_M32
	{
		displayName= "6Rnd 40MM Smoke (Red)";
		ammo = "G_40mm_SmokeRed";
		mass = 24;
	};
	class 6Rnd_SmokeGreen_M32: 6Rnd_Smoke_M32
	{
		displayName= "6Rnd 40MM Smoke (Green)";
		ammo = "G_40mm_SmokeGreen";
		mass = 24;
	};
	class 6Rnd_SmokeYellow_M32: 6Rnd_Smoke_M32
	{
		displayName= "6Rnd 40MM Smoke (Yellow)";
		ammo = "G_40mm_SmokeYellow";
		mass = 24;
	};
	class 6Rnd_SmokePurple_M32: 6Rnd_Smoke_M32
	{
		displayName= "6Rnd 40MM Smoke (Purple)";
		ammo = "G_40mm_SmokePurple";
		mass = 24;
	};
	class 6Rnd_SmokeOrange_M32: 6Rnd_Smoke_M32
	{
		displayName= "6Rnd 40MM Smoke (Orange)";
		ammo = "G_40mm_SmokeOrange";
		mass = 24;
	};

};
	

class CfgWeapons
{
	class Rifle_Base_F;
	class EGLM;
	class M32: Rifle_Base_F
	{
		scope = 2;
		model = "\M32\M32.p3d";
		handAnim[]={"OFP2_ManSkeleton","\M32\Data\Anim\M32.rtm"};
		picture="\M32\Data\Icon\m32_CA.paa";
		displayName= "M32 MGL";
		magazines[] = {"6Rnd_HE_M32", "6Rnd_FlareWhite_M32", "6Rnd_FlareGreen_M32", "6Rnd_FlareRed_M32", "6Rnd_FlareYellow_M32", "6Rnd_FlareCIR_M32", "6Rnd_Smoke_M32", "6Rnd_SmokeRed_M32", "6Rnd_SmokeGreen_M32", "6Rnd_SmokeYellow_M32", "6Rnd_SmokePurple_M32", "6Rnd_SmokeOrange_M32", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
		reloadTime=0.5;
		weaponinfotype = "RscWeaponZeroing";
		discretedistance[] = {100, 200, 300, 400};
		discretedistancecamerapoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
		discreteDistanceInitIndex = 1; /// 200 is the default zero
		cameradir = "OP_look";
		cursoraim = "gl";
		canlock = 0;
		cartridgepos = "";
		cartridgevel = "";
		cursor = "EmptyCursor";
		muzzleend = "konec granatometu";
		muzzlepos = "usti granatometu";
		reloadaction = "ReloadMagazine";
		mass = 83;
       	muzzles[]=
		{
			"this"
		};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.25118864,1,10};
		sounds[] = {"StandardSound", "reloadMagazineSound", "drySound"};
		class StandardSound
		{
			weaponSoundEffect="DefaultRifle";
			begin1[]=
			{
			 "m32\sounds\m32_s1.wss",1.1220185,1,200
			};
			soundBegin[]=
			{
			 "begin1",1
			};
		   reloadMagazineSound[]=
		   {
		    "m32\sounds\m32_r.wss",1,1,10
		   };
		   drySound[]=
		  {
		   "A3\sounds_f\Weapons\other\sfx5",0.56234133,1,10
		  };
		};
	};
};

class CfgVehicles 
{
	class NATO_Box_Base;
	class M32_equipbox: NATO_Box_Base
	{
		scope = 2;
		accuracy = 1000;
		displayName = "M32 + Ammo Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";

		class TransportItems
		{
			itementry(acc_flashlight, 3);
			itementry(acc_pointer_ir, 3);
		};
		class TransportWeapons
		{
			wepentry(M32, 10);
		};
		class TransportMagazines
		{
			magentry(6Rnd_HE_M32, 5);
			magentry(6Rnd_FlareWhite_M32, 5);
			magentry(6Rnd_FlareGreen_M32, 5);
			magentry(6Rnd_FlareRed_M32, 5);	
			magentry(6Rnd_FlareYellow_M32, 5);
			magentry(6Rnd_FlareCIR_M32, 5);
			magentry(6Rnd_Smoke_M32, 5);
			magentry(6Rnd_SmokeRed_M32, 5);
			magentry(6Rnd_SmokeGreen_M32, 5);
			magentry(6Rnd_SmokeYellow_M32, 5);
			magentry(6Rnd_SmokePurple_M32, 5);
			magentry(6Rnd_SmokeOrange_M32, 5);						
		};
	};		
};