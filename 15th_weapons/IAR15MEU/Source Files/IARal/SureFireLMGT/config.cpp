class CfgPatches
{
	class SFLMGT_ej
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
	class compatibleItems {
		SFLMGT_ej = 1;
	};
};

class Mode_SemiAuto;
class Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class Zasleh2;
	class SFLMGT_ej: ItemCore
	{
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="SureFire LMG Suppressor";
		picture="\IARal\data\ui\sf556inv.paa";
		model="\IARal\SureFireLMGT\SureFire556.p3d";
		
		
	class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=4;
			class MagazineCoef
			{
				initSpeed = 1.005;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.1;
				audibleFire=0.69999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
			class MuzzleCoef
			{
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				dispersionCoef="1.1f";
				recoilCoef="0.9f";
				recoilProneCoef="0.9f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
};