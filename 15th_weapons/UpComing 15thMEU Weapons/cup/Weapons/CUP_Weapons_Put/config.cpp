
class CfgPatches
{
	class CUP_Weapons_Put
	{
		units[] = {"CUP_Mine","CUP_MineE","CUP_IED_V1","CUP_IED_V2","CUP_IED_V3","CUP_IED_V4"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","A3_Characters_F"};
		magazines[] = {"CUP_TimeBomb_M","CUP_Mine_M","CUP_MineE_M","CUP_PipeBomb_M","CUP_IED_V1_M","CUP_IED_V2_M","CUP_IED_V3_M","CUP_IED_V4_M"};
		ammo[] = {"CUP_TimeBomb_Ammo","CUP_PipeBomb_Ammo","CUP_Mine_Ammo","CUP_MineE_Ammo","CUP_IED_V1_Ammo","CUP_IED_V2_Ammo","CUP_IED_V3_Ammo","CUP_IED_V4_Ammo"};
	};
};
class CfgAmmo
{
	class PipeBombBase;
	class MineBase;
	class CUP_TimeBomb_Ammo: PipeBombBase
	{
		hit = 8000;
		indirectHit = 8000;
		indirectHitRange = 32;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_Satchel.p3d";
		whistleDist = 40;
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_7",5.1622777,1,1500};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		mineInconspicuousness = 40;
		mineTrigger = "TimeTrigger";
		triggerWhenDestroyed = 2;
		defaultMagazine = "CUP_PipeBomb_M";
	};
	class CUP_PipeBomb_Ammo: PipeBombBase
	{
		simulation = "shotPipeBomb";
		hit = 8000;
		indirectHit = 8000;
		indirectHitRange = 32;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_Satchel.p3d";
		whistleDist = 40;
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_7",5.1622777,1,1500};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		mineInconspicuousness = 40;
		mineTrigger = "RemoteTrigger";
		triggerWhenDestroyed = 2;
		defaultMagazine = "CUP_PipeBomb_M";
	};
	class CUP_Mine_Ammo: MineBase
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 2;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_AT15.p3d";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2",3.1622777,1,2000};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		mineInconspicuousness = 40;
		mineTrigger = "TankTriggerMagnetic";
		defaultMagazine = "CUP_Mine_M";
	};
	class CUP_MineE_Ammo: CUP_Mine_Ammo
	{
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_TM46.p3d";
		defaultMagazine = "CUP_MineE_M";
	};
	class CUP_IED_V1_Ammo: CUP_Mine_Ammo
	{
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V1.p3d";
		defaultMagazine = "CUP_IED_V1_M";
		whistleDist = 8;
		mineTrigger = "RemoteTrigger";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2",3.1622777,1,1500};
	};
	class CUP_IED_V2_Ammo: CUP_IED_V1_Ammo
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 4;
		whistleDist = 15;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V2.p3d";
		defaultMagazine = "CUP_IED_V2_M";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2",3.1622777,1,1500};
	};
	class CUP_IED_V3_Ammo: CUP_IED_V1_Ammo
	{
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		whistleDist = 15;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V3.p3d";
		defaultMagazine = "CUP_IED_V3_M";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2",3.1622777,1,1500};
	};
	class CUP_IED_V4_Ammo: CUP_IED_V1_Ammo
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 4;
		whistleDist = 15;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V4.p3d";
		defaultMagazine = "CUP_IED_V4_M";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2",3.1622777,1,1500};
	};
	
};
class CfgMagazines
{
	class CA_Magazine;
	class CUP_TimeBomb_M: CA_Magazine
	{
		scope = 2;
		displayName = "Timed Satchel Charge";
		picture = "\CUP\Weapons\CUP_Weapons_Put\data\ui\gear_satchel_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_Satchel.p3d";
		allowedSlots[] = {901,701};
		descriptionShort = "Timer-based explosive device";
		type = "2 * 256";
		value = 5;
		mass = 200;
		ammo = "CUP_TimeBomb_Ammo";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		weaponPoolAvailable = 1;
		useAction = 1;
		useActionTitle = "Put %1 (%2 left)";
		sound[] = {"A3\sounds_f\dummysound",0.00031622776,1,10};
	};
	class CUP_Mine_M: CUP_TimeBomb_M
	{
		scope = 2;
		displayName = "AT-15 Anti-Tank Mine";
		picture = "\CUP\Weapons\CUP_Weapons_Put\data\ui\gear_AT15_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_AT15.p3d";
		ammo = "CUP_Mine_Ammo";
		mass = 160;
		allowedSlots[] = {901};
		value = 5;
		nameSoundWeapon = "mine";
		nameSound = "mine";
		descriptionShort = "AT-15 US Anti-Tank Land Mine";
	};
	class CUP_MineE_M: CUP_TimeBomb_M
	{
		scope = 2;
		displayName = "TM46 Anti-Tank Mine";
		picture = "\CUP\Weapons\CUP_Weapons_Put\data\ui\gear_TM46_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_TM46.p3d";
		ammo = "CUP_MineE_Ammo";
		mass = 160;
		allowedSlots[] = {901};
		value = 5;
		nameSoundWeapon = "mine";
		nameSound = "mine";
		descriptionShort = "TM-46 Eastern Bloc Anti-Tank Land Mine";
	};
	class CUP_PipeBomb_M: CUP_TimeBomb_M
	{
		scope = 2;
		displayName = "Satchel Charge";
		ammo = "CUP_PipeBomb_Ammo";
		descriptionShort = "remote-detonated explosive device";
	};
	class CUP_IED_V1_M: CUP_Mine_M
	{
		scope = 2;
		displayName = "IED 1";
		picture = "\CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v1_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V1.p3d";
		ammo = "CUP_IED_V1_Ammo";
		descriptionShort = "Improvised Explosive Device";
	};
	class CUP_IED_V2_M: CUP_IED_V1_M
	{
		displayName = "IED 2";
		picture = "\CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v2_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V2.p3d";
		ammo = "CUP_IED_V2_Ammo";
	};
	class CUP_IED_V3_M: CUP_IED_V1_M
	{
		displayName = "IED 3";
		picture = "\CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v3_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V3.p3d";
		ammo = "CUP_IED_V3_Ammo";
	};
	class CUP_IED_V4_M: CUP_IED_V1_M
	{
		displayName = "IED 4";
		picture = "\CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v4_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V4.p3d";
		ammo = "CUP_IED_V4_Ammo";
	};
};
class CfgWeapons
{
	class Default;
	class Put: Default
	{
		class PutMuzzle;
		class MineMuzzle: PutMuzzle
		{
			magazines[] = {"ATMine_Range_Mag","CUP_Mine_M","CUP_MineE_M","CUP_IED_V1_M","CUP_IED_V2_M","CUP_IED_V3_M","CUP_IED_V4_M"};
		};
		class PipeBombMuzzle: PutMuzzle
		{
			magazines[] = {"SatchelCharge_Remote_Mag","CUP_PipeBomb_M","CUP_TimeBomb_M"};
		};		
	};
};
class CfgVehicles
{
	class MineBase;
	class CUP_Mine: MineBase
	{
		scope = 2;
		ammo = "CUP_Mine_Ammo";
		icon = "iconExplosiveAT";
		displayName = "AT-15 Anti-Tank Mine";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "AT-15 Anti-Tank Mine";
	};
	class CUP_MineE: CUP_Mine
	{
		scope = 2;
		ammo = "CUP_MineE_Ammo";
		icon = "iconExplosiveAT";
		displayName = "TM-46 Anti-Tank Mine";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "TM-46 Anti-Tank Mine";
	};
	class CUP_IED_V1: CUP_Mine
	{
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V1.p3d";
		picture = "CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v1_ca.paa";
		mapSize = 4;
		displayName = "IED 1";
		armor = 75;
		ammo = "CUP_IED_V1_Ammo";
		class DestructionEffects{};
	};
	class CUP_IED_V2: CUP_IED_V1
	{
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V2.p3d";
		picture = "CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v2_ca.paa";
		displayName = "IED 2";
		armor = 25;
		ammo = "CUP_IED_V2_Ammo";
	};
	class CUP_IED_V3: CUP_IED_V1
	{
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V3.p3d";
		picture = "CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v3_ca.paa";
		displayName = "IED 3";
		armor = 200;
		ammo = "CUP_IED_V3_Ammo";
	};
	class CUP_IED_V4: CUP_IED_V3
	{
		model = "\CUP\Weapons\CUP_Weapons_Put\CUP_IED_V2.p3d";
		picture = "CUP\Weapons\CUP_Weapons_Put\data\ui\gear_ied_v2_ca.paa";
		displayName = "IED 4";
		ammo = "CUP_IED_V4_Ammo";
	};
};
