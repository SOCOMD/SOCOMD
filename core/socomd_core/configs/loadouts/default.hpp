///Standard SOCOMD
//////////////////////////////////////////////////////////////////////
//Common loadout items
//Contents shared by every loadout
//////////////////////////////////////////////////////////////////////
// COMMON SOCOMD LOADOUT ITEMS

#define LOADOUT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_fieldDressing, 6) \
	LOADOUT_ITEM(ACE_elasticBandage, 6) \
	LOADOUT_ITEM(ACE_packingBandage, 6) \
	LOADOUT_ITEM(ACE_quikclot, 6) \
	LOADOUT_ITEM(ACE_epinephrine, 2) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_tourniquet, 2)

#define LOADOUT_UNIFORM_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACE_DAGR, 1) \
	LOADOUT_ITEM(hlc_acc_DBALPL, 1) \
	LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)

#define LOADOUT_BACKPACK_ESSENTIALS \
	LOADOUT_ITEM(SOCOMD_NVG, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1) \
	LOADOUT_ITEM(ACE_CableTie, 4)

#define LOADOUT_VEST_ESSENTIALS \
	LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
	LOADOUT_ITEM(ACE_M84, 2) \
	LOADOUT_ITEM(SmokeShell, 5) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)

// COMMON JAC LOADOUT ITEMS

#define LOADOUT_SUPPORT_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1) \
	LOADOUT_ITEM(SOCOMD_NVG, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_DAGR, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1)

#define LOADOUT_SUPPORT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_fieldDressing, 6) \
	LOADOUT_ITEM(ACE_elasticBandage, 5) \
	LOADOUT_ITEM(ACE_quikclot, 5) \
	LOADOUT_ITEM(ACE_packingBandage, 5) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_epinephrine, 2)
	
// COMMON TAGE LOADOUT ITEMS
	
#define TAGE_BACKPACK_ESSENTIALS		 \
	LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1)   \
	LOADOUT_ITEM(ACE_MapTools, 1)		 \
	LOADOUT_ITEM(ACE_CableTie, 8)        
	
#define TAGE_VEST_ESSENTIALS             \
	LOADOUT_ITEM(ACE_M84, 4)             \
	LOADOUT_ITEM(SmokeShell, 5)          \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 2) 

//////////////////////////////////////////////////////////////////////
//Individual loadout items
//Contents shared by individual loadouts common to every Qstore
//When you want to change the contents of a loadout on every Qstore, change it here
//////////////////////////////////////////////////////////////////////

//HAT
#define LOADOUT_HAT_BACKPACK				\
	LOADOUT_ITEM(CUP_Javelin_M, 1)

////////////////////////////////////////////////////////////////////////////////
// Unarmed

class SOCOMD_Unarmed {
	headgear = "AU_02_780000_v1";
	binocular = "";

	class Uniform {
		type = SOCOMD_Item_Uniform_Rifleman;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Commander

class SOCOMD_Commander {
	primary			= ITEM_PRIMARY_TROOPLEADER;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_HANDGUN_TROOPLEADER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_TROOPLEADER;
	headgear		= ITEM_HEADGEAR_TROOPLEADER;
	binocular		= "Laserdesignator";
	gps				= "ItemAndroid";

	class Uniform {
		type = ITEM_UNIFORM_TROOPLEADER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
			LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
		};
	};

	class Vest {
		type = ITEM_VEST_TROOPLEADER;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_TROOPLEADER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
			LOADOUT_ITEM(ACE_HuntIR_M203, 3)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Leader

class SOCOMD_Leader {
	primary		    = ITEM_PRIMARY_PATROLLEADER;
	secondary		= ITEM_SECONDARY_PATROLLEADER;
	handgun		    = ITEM_HANDGUN_PATROLLEADER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PATROLLEADER;
	headgear		= ITEM_HEADGEAR_PATROLLEADER;
	binocular		= "Laserdesignator";
	gps			    = "ItemAndroid";

	class Uniform {
		type = ITEM_UNIFORM_PATROLLEADER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
			LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
		};
	};

	class Vest {
		type = ITEM_VEST_PATROLLEADER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_PATROLLEADER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
			LOADOUT_ITEM(ACE_HuntIR_M203, 3)
		};
	};
};

class SOCOMD_2IC : SOCOMD_Leader {};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_Rifleman {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	secondary		= ITEM_SECONDARY_RIFLEMAN;
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sapper

class SOCOMD_Sapper {
	primary		    = ITEM_PRIMARY_SAPPER;
	secondary		= ITEM_SECONDARY_SAPPER;
	handgun		    = ITEM_HANDGUN_SAPPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SAPPER;
	headgear		= ITEM_HEADGEAR_SAPPER;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_SAPPER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_SAPPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_SAPPER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_wirecutter, 1)
			LOADOUT_ITEM(ACE_EntrenchingTool, 1)
			LOADOUT_ITEM(MineDetector, 1)
			LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)
			LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 1)
			LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
			LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Machine Gunner

class SOCOMD_MachineGunner {
	primary		    = ITEM_PRIMARY_MACHINEGUNNER;
	secondary		= ITEM_SECONDARY_MACHINEGUNNER;
	handgun		    = ITEM_HANDGUN_MACHINEGUNNER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MACHINEGUNNER;
	headgear		= ITEM_HEADGEAR_MACHINEGUNNER;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 4)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Medic

class SOCOMD_Medic {
	primary		    = ITEM_PRIMARY_MEDIC;
	secondary		= ITEM_SECONDARY_MEDIC;
	handgun		    = ITEM_HANDGUN_MEDIC;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MEDIC;
	headgear		= ITEM_HEADGEAR_MEDIC;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_MEDIC;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MEDIC;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MEDIC;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sniper

class SOCOMD_Sniper {
	primary	        = ITEM_PRIMARY_SNIPER;
	secondary		= ITEM_SECONDARY_SNIPER;
	handgun		    = ITEM_HANDGUN_SNIPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SNIPER;
	headgear		= ITEM_HEADGEAR_SNIPER;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_SNIPER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_SNIPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_408_7Rnd, 10)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_SNIPER;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Recon

class SOCOMD_Recon {
	primary		    = ITEM_PRIMARY_RECON;
	secondary		= ITEM_SECONDARY_RECON;
	handgun		    = ITEM_HANDGUN_RECON;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RECON;
	headgear		= ITEM_HEADGEAR_RECON;
	binocular		= "Laserdesignator";
	gps			    = "ItemAndroid";

	class Uniform {
		type = ITEM_UNIFORM_RECON;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
		};
	};

	class Vest {
		type = ITEM_VEST_RECON;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_408_7Rnd, 9)
			LOADOUT_ITEM(ACE_Vector,1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 4)
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// LAT

class SOCOMD_AT {
	primary		    = ITEM_PRIMARY_AT;
	secondary		= ITEM_SECONDARY_AT;
	handgun		    = ITEM_HANDGUN_AT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_AT;
	headgear		= ITEM_HEADGEAR_AT;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_AT;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_AT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_AT;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Pilot

class SOCOMD_Pilot {
    primary 		= ITEM_PRIMARY_PILOT;
    secondary 		= ITEM_SECONDARY_PILOT;
	handgun 		= ITEM_HANDGUN_PILOT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PILOT;
	headgear 		= ITEM_HEADGEAR_PILOT;
	binocular 		= "Binocular";
	gps 			= "ItemcTab";

	class Uniform {
		type = ITEM_UNIFORM_PILOT;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_PILOT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_9x21_60Rnd, 8)
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_PILOT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Crewman

class SOCOMD_Crewman {
	primary 		= ITEM_PRIMARY_CREWMAN;
    secondary 		= ITEM_SECONDARY_CREWMAN;
	handgun 		= ITEM_HANDGUN_CREWMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_CREWMAN;
	headgear 		= ITEM_HEADGEAR_CREWMAN;
	binocular		= "Binocular";
	gps 			= "ItemAndroid";

	class Uniform {
		type = ITEM_UNIFORM_CREWMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_CREWMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_9x21_60Rnd, 8)
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_CREWMAN;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// PJ

class SOCOMD_PJ {
	primary 		= ITEM_PRIMARY_PJ;
    secondary 		= ITEM_SECONDARY_PJ;
	handgun 		= ITEM_HANDGUN_PJ;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_PJ;
	headgear 		= ITEM_HEADGEAR_PJ;
	binocular 		= "Binocular";
	gps 			= "ItemAndroid";

	class Uniform {
		type = ITEM_UNIFORM_PJ;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_PJ;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_9x21_60Rnd, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_PJ;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};


///Counter Terrorism
class TAGE_TroopLeader
{
	primary = "SMG_05_F";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_OpsCore_08_BLK";
	facewear = "Mask_M40";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS 

			LOADOUT_ITEM(Laserbatteries, 2)
		};
	};

	class Vest
	{
		type = "SOCOMD_lbt_comms_mc_BLK";

		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)

		};
	};

	class Backpack
	{
		type = "SOG_BAG_recon_blk";
		class Inventory
		{
			TAGE_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

class TAGE_Medic
{
	primary = "SMG_05_F";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_OpsCore_08_BLK";
	facewear = "Mask_M40";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS 
		};
	};

	class Vest
	{
		type = "SOCOMD_Medic_Vest_BLK";
		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
		};
	};

	class Backpack
	{
		type = "SOG_BAG_med_blk";
		class Inventory
		{
			TAGE_BACKPACK_ESSENTIALS
			
			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};

class TAGE_Sapper
{
	primary = "SMG_05_F";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_OpsCore_08_BLK";
	facewear = "Mask_M40";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS 

		};
	};

	class Vest
	{
		type = "SOCOMD_lbt_tl_mc_BLK";
		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
		};
	};

	class Backpack
	{
		type = "SOG_BAG_BREACHER_BLK";
		class Inventory
		{
			TAGE_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_wirecutter, 1)
			LOADOUT_ITEM(MineDetector, 1)
			LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
		};
	};
};

class TAGE_Sniper
{
	primary = "hlc_rifle_awcovert_BL";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "CUP_H_PMC_Cap_Grey";
	facewear = "milgp_f_face_shield_tactical_shemagh_BLK";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";

		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS 
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
		};
	};

	class Vest
	{
		type = "SOCOMD_lbt_comms_mc_BLK";
		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(hlc_5rnd_300WM_FMJ_AWM, 9)

		};
	};
	
	class Backpack
	{
		type = "SOG_BAG_blk";
		class Inventory
		{
			LOADOUT_STANDARD_MEDICAL
			TAGE_BACKPACK_ESSENTIALS
			
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
		};
	};
};



