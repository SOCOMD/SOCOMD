//////////////////////////////////////////////////////////////////////
// UNIFORM

class Uniform_Base;
class U_B_CombatUniform_mcam : Uniform_Base
{
	class ItemInfo;
};

class SOCOMD_Uniform_LongSleeve : U_B_CombatUniform_mcam
{
	scope = public;
	author = "SOCOMD & massi";
	displayName = "SOCOMD Multcam Uniform (Sleeve Down)";
	picture = "\socomd_data\uniform\icons\icon_u_ir1_co.paa";

	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Soldier_LongSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class SOCOMD_Uniform_ShortSleeve : SOCOMD_Uniform_LongSleeve
{
	scope = public;
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_u_ir2_co.paa";
	displayName = "SOCOMD Multcam Uniform (Sleeve Up)";
	 
	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Soldier_ShortSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class SOCOMD_Uniform_Officer_LongSleeve : SOCOMD_Uniform_LongSleeve
{
	scope = public;
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_u_ir1_co.paa";
	displayName = "SOCOMD Multcam Officer Uniform (Sleeve Down)";

	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Officer_LongSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class SOCOMD_Uniform_Officer_ShortSleeve: SOCOMD_Uniform_Officer_LongSleeve
{
	scope = public;
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_u_ir2_co.paa";
	displayName = "SOCOMD Multcam Officer Uniform (Sleeve Up)";

	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Officer_ShortSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class U_B_Wetsuit : Uniform_Base
{
	class ItemInfo;
};

class SOCOMD_Uniform_Diver : U_B_Wetsuit
{
	scope = public;
	author = "SOCOMD & massi";
	displayName = "SOCOMD Wetsuit";
	
	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Diver";
		uniformType = "Neopren";
		containerClass = "Supply80";
		mass = 10;
	};
};

class U_I_pilotCoveralls;
class SOCOMD_Uniform_GSuit : U_I_pilotCoveralls
{
	scope = public;
	author = "SOCOMD";
	displayName = "SOCOMD Pilot G-Suit";
	ACE_GForceCoef = 0.7;
};

class CUP_I_B_PMC_Unit_26;
class SOCOMD_Uniform_Snow_HoodUp : CUP_I_B_PMC_Unit_26 {
	displayName = "SOCOMD Snow Uniform (Hood Up)";
};

class CUP_I_B_PMC_Unit_27;
class SOCOMD_Uniform_Snow_HoodDown : CUP_I_B_PMC_Unit_27 {
	displayName = "SOCOMD Snow Uniform (Hood Down)";
};

class ADFU_G3_MC;
class SOCOMD_Commando_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD Commando";
	author = "SOCOMD & ADFU";
};

class ADFU_G3_MC_Rolled;
class SOCOMD_Commando_SleevesUp : ADFU_G3_MC_Rolled {
	displayName = "SOCOMD Commando (Rolled)";
	author = "SOCOMD & ADFU";
};