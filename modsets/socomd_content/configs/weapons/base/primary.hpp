//Rifle 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4afgSTOCK; //Default
class SMA_MK18MOEBLK_SM;
class SMA_AUG_A3_F;
class SMA_HK416CUSTOMCQBvfgB;

//RifleGL 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4_GL_SM; //Default
class SMA_MK18BLK_GL_SM;
class SMA_AUG_EGLM;
class SMA_HK416GLCQB_B;

//Rifle 762 - 20Rnd_762x51_Mag
class SMA_AssaultBase;
class SMA_762_RIFLEBASE : SMA_AssaultBase {
	magazineWell[] = {"CBA_762x51_HK417"};
};
class SMA_HK417_16in;
class SMA_HK417vfg;

class srifle_EBR_F;
class SPARTAN_EBR_black_F : srifle_EBR_F {
	magazineWell[] = {"CBA_762x51_HK417"};
};

//Machine Gun 556
class CUP_lmg_minimi_railed;
class CUP_lmg_m249_pip2 : CUP_lmg_minimi_railed {
	displayName = "FN Minimi HS";
	magazineWell[] = {"CBA_556x45_MINIMI"};
};

//Machine Gun 762
class sma_minimi_762_base_F;
class sma_minimi_mk3_762tsb : sma_minimi_762_base_F {
	displayName = "Mk 48 Maximi";
	magazineWell[] = {"SOCOMD_762_150Rnd"};
};

//Rifle 300WM
class hlc_AWC_base;
class hlc_rifle_awmagnum : hlc_AWC_base {
	magazineWell[] = {"SOCOMD_300_MAG"};
	mass=120;
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};

//Rfile Barret
class ej_barrett_base;
class ej_m107 : ej_barrett_base {
	magazineWell[] = {"SOCOMD_Barret_MAG"};
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};

class CUP_arifle_AK104_railed;
class Socomd_Russian_AK: CUP_arifle_AK104_railed {
	displayName="Russian SSO Rifle";
	hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoRail",
			"CamoRailHG"
		};
		hiddenSelectionsTextures[]=
		{
			"socomd_data_core\Russian\ak74m_body_camo_co.paa",
			"socomd_data_core\Russian\ak74m_stock_camo_co.paa",
			"socomd_data_core\Russian\ak74m_grip_rail_co.paa",
			"socomd_data_core\Russian\fortisshift_foregrip_co.paa"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_camo_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_Subsonic_545x39_AK74M_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_Subsonic_545x39_AK_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_Subsonic_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_Subsonic_545x39_AKSU_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_60Rnd_545x39_AK74M_M",
			"CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
			"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",
			"CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",
			"CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M"
		};
};