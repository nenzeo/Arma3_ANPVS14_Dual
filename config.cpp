class CfgPatches
{
	class anpvs14_Dual
	{
		author="Ragnar";
		name="anpvs14 Dual";
		requiredAddons[]=
		{
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"anpvs14_Dual",
			"anpvs14_Dual_Counterweight"
		};
	};
};
class CfgWeapons
{
	class rhsusf_ANPVS_15;
	class anpvs14_Dual: rhsusf_ANPVS_15
	{
		author="Ragnar";
		displayName="AN/PVS-14 Dual";
		model="\anpvs14_Dual\anpvs14_Dual_UP.p3d";
		picture="\anpvs14_dual\data\Icons\icon_ANPVS14_Dual.paa";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\anpvs14_Dual\anpvs14_Dual_DOWN.p3d";
			modelOff="\anpvs14_Dual\anpvs14_Dual_UP.p3d";
			mass=10;
		};
	};
	class anpvs14_Dual_Counterweight: anpvs14_Dual
	{
		displayName="AN/PVS-14 Dual w/Counterweight";
		model="\anpvs14_Dual\anpvs14_Dual_counterweight_UP.p3d";
		picture="\anpvs14_dual\data\Icons\icon_ANPVS14_Dual_counterweight.paa";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\anpvs14_Dual\anpvs14_Dual_counterweight_DOWN.p3d";
			modelOff="\anpvs14_Dual\anpvs14_Dual_counterweight_UP.p3d";
			mass=10;
		};
	};
};