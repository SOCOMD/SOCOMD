/*//////////////////////////////////////////////////////////////////////////////

Uses "getUnitLoadout player" to get the loadout of the current unit.

Loadout Format:
[
    [], //0 PRIMARY     | WEAPON FORMAT
    [], //1 SECONDARY   | WEAPON FORMAT
    [], //2 HANDGUN     | WEAPON FORMAT
    [], //3 UNIFORM     | CONTAINER FORMAT
    [], //4 VEST        | CONTAINER FORMAT
    [], //5 BACKPACK    | CONTAINER FORMAT
    ""  //6 HELMET
    ""  //7 FACEWEAR
    []  //8 BINOCULAR   | WEAPON
    []  //9 ITEMS       | EQUIPMENT FORMAT
]

WEAPON FORMAT
[
    "",     //0 WEAPON TYPE
    "",     //1 MUZZLE
    "",     //2 POINTER
    "",     //3 OPTIC
    ["", 0] //4 PRIMARY MAGAZINE (TYPE/COUNT)
    ["", 0] //5 SECONDARY MAGAZINE (TYPE/COUNT)
    "",     //6 BIPOD
]

CONTAINER FORMAT
[
    ""      //0 ITEM TYPE
    [...]   //1 INVENTORY
]

EQUIPMENT FORMAT
[
    "",     //0 MAP
    "",     //1 GPS
    "",     //2 RADIO
    "",     //3 COMPASS
    "",     //4 WATCH
    ""      //5 GOGGLES
]

INVENTORY ITEM
[
    "",     //0 ITEM TYPE
    0       //0 ITEM COUNT
]

////////////////////////////////////////////////////////////////////////////////

** EXAMPLE LOADOUT **
class SASR_StandardTrooper
{
    primary = "";
    secondary = "";
    handgun = "";
    headgear = "";
    facewear = "";
    binocular = "";
    gps = "";
    
    class Uniform
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };

    class Vest
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };

    class Backpack
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };
};

//////////////////////////////////////////////////////////////////////////////*/

#define LOADOUT_ITEM(id,qty) class _xx_##id { type = #id; count = qty; };

//////////////////////////////////////////////////////////////////////
// COMMON LOADOUT ITEMS

#define SASR_STANDARD_MEDICAL   LOADOUT_ITEM(ACE_personalAidKit, 1) \
                                LOADOUT_ITEM(ACE_elasticBandage, 5) \
                                LOADOUT_ITEM(ACE_packingBandage, 5) \ 
                                LOADOUT_ITEM(ACE_quikclot, 5) \
                                LOADOUT_ITEM(ACE_epinephrine, 2) \
                                LOADOUT_ITEM(ACE_morphine, 2) \
                                LOADOUT_ITEM(ACE_tourniquet, 1) \
                                LOADOUT_ITEM(ACE_bodyBag, 1)

#define SASR_ESSENTIALS         LOADOUT_ITEM(ItemcTabHCam, 1) \
                                LOADOUT_ITEM(ACE_EarPlugs, 1) \
                                LOADOUT_ITEM(ACE_CableTie, 2) \
                                LOADOUT_ITEM(CUP_NVG_HMNVS, 1) \
                                LOADOUT_ITEM(ACE_Flashlight_MX991, 1) \ 
                                LOADOUT_ITEM(ACE_Chemlight_HiRed, 4) \
                                LOADOUT_ITEM(Chemlight_blue, 3) \
                                LOADOUT_ITEM(B_IR_Grenade, 1)

#define JAC_ESSENTIALS          LOADOUT_ITEM(ItemcTabHCam, 1) \
                                LOADOUT_ITEM(ACE_EarPlugs, 1) \
                                LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
                                LOADOUT_ITEM(CUP_NVG_HMNVS, 1) \
                                LOADOUT_ITEM(B_IR_Grenade, 1)    

#define JAC_STANDARD_MEDICAL    LOADOUT_ITEM(ACE_elasticBandage, 5) \
                                LOADOUT_ITEM(ACE_quikclot, 5) \
                                LOADOUT_ITEM(ACE_packingBandage, 5) \
                                LOADOUT_ITEM(ACE_morphine, 2) \
                                LOADOUT_ITEM(ACE_epinephrine, 2)

//////////////////////////////////////////////////////////////////////

class CfgLoadouts
{
    class SOCOMD
    {
        class SASR_Trooper
        {
            headgear = "AU_02_780000_v1";
            binocular = "Rangefinder";
            gps = "ItemMicroDAGR";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_ESSENTIALS
                };
            };
        };

        class SASR_Rifleman
        {
            primary = "SMA_MK18MOEBLK";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            gps = "ItemMicroDAGR";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory 
                {
                    SASR_STANDARD_MEDICAL

                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 3)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk262, 6)
                };
            };
        };


        class SASR_PatrolLeader
        {
            primary = "SMA_MK16_EGLM_Green";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Laserdesignator";
            gps = "ItemAndroid";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_ESSENTIALS

                    LOADOUT_ITEM(SmokeShellBlue, 2)
                    LOADOUT_ITEM(SmokeShellRed, 2)
                    LOADOUT_ITEM(SmokeShellGreen, 2)
                    LOADOUT_ITEM(SmokeShellYellow, 2)
                    LOADOUT_ITEM(Laserbatteries, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";

                class Inventory 
                {
                    SASR_STANDARD_MEDICAL

                    LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 6)
                    LOADOUT_ITEM(UGL_FlareWhite_F, 2)
                    LOADOUT_ITEM(UGL_FlareRed_F, 2)
                    LOADOUT_ITEM(UGL_FlareGreen_F, 2)
                    LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
                    LOADOUT_ITEM(1Rnd_Smoke_Grenade_shell, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 3)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_IR, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 2)
                };
            };

            class Backpack
            {
                type = "SOCOMD_LongRange_Radio";                
            };
        };

        class SASR_Marksman
        {
            primary = "SMA_Mk17_16";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Laserdesignator";
            gps = "ItemMicroDAGR";
            
            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_ESSENTIALS
                    
                    LOADOUT_ITEM(SmokeShellBlue, 1)
                    LOADOUT_ITEM(SmokeShellGreen, 1)
                    LOADOUT_ITEM(SmokeShellRed, 1)
                    LOADOUT_ITEM(SmokeShellYellow, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    
                    LOADOUT_ITEM(CUP_HandGrenade_M67, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                    LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR, 4)
                    LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR_Tracer, 2)
                    LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR_IR, 1)
                    LOADOUT_ITEM(ACE_FlareTripMine_Mag, 1)
                };
            };
        };

        class SASR_Sniper
        {
            primary = "SMA_MK18MOE";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Laserdesignator";
            gps = "ItemAndroid";
            
            class Uniform
            {
                type = "VSM_Multicam_Crye_SS_Camo";
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_ESSENTIALS
                    SASR_STANDARD_MEDICAL
                    
                    LOADOUT_ITEM(SmokeShellBlue, 1)
                    LOADOUT_ITEM(SmokeShellGreen, 1)
                    LOADOUT_ITEM(SmokeShellRed, 1)
                    LOADOUT_ITEM(SmokeShellYellow, 1)

                    LOADOUT_ITEM(CUP_HandGrenade_M67, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 4)
                    LOADOUT_ITEM(KA_CS5_10rnd_Mk316_SPR_mag, 3)
                    LOADOUT_ITEM(KA_CS5_10rnd_Subsonic_mag, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk318_IR, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk318, 3)
                    LOADOUT_ITEM(Laserbatteries, 1)
                };
            };

            class Backpack
            {
                type = "VSM_OCP_carryall";
                class Inventory
                {
                    LOADOUT_ITEM(KA_CS5, 1)
                    LOADOUT_ITEM(KA_CS5_Silencer, 1)
                    LOADOUT_ITEM(CUP_bipod_Harris_1A2_L, 1)
                    LOADOUT_ITEM(U_B_FullGhillie_sard, 1)
                    LOADOUT_ITEM(ACE_FlareTripMine_Mag, 1)
                    LOADOUT_ITEM(KA_CS5_10rnd_M948_SLAP_mag, 2)
                    LOADOUT_ITEM(KA_CS5_10rnd_M993_AP_mag, 2)
                };
            };
        };

        class SASR_MachineGunner
        {
            primary = "sma_minimi_mk3_762tsb";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Rangefinder";
            gps = "ItemMicroDAGR";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_ESSENTIALS
                    
                    LOADOUT_ITEM(SmokeShellBlue, 1)
                    LOADOUT_ITEM(SmokeShellGreen, 1)
                    LOADOUT_ITEM(SmokeShellRed, 1)
                    LOADOUT_ITEM(SmokeShellYellow, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_MG_Multicam";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL

                    LOADOUT_ITEM(SmokeShell, 2)
                    LOADOUT_ITEM(CUP_HandGrenade_M67, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 1)
                    LOADOUT_ITEM(SMA_150Rnd_762_M80A1, 3)
                };
            };
        };

        class SASR_Demolitions
        {
            primary = "SMA_M4CQBR";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Rangefinder";
            gps = "ItemMicroDAGR";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_ESSENTIALS
                    
                    LOADOUT_ITEM(SmokeShellBlue, 1)
                    LOADOUT_ITEM(SmokeShellGreen, 1)
                    LOADOUT_ITEM(SmokeShellRed, 1)
                    LOADOUT_ITEM(SmokeShellYellow, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    
                    LOADOUT_ITEM(CUP_HandGrenade_M67, 2)
                    LOADOUT_ITEM(SmokeShell, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 1)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk318_Tracer, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk318, 3)
                    LOADOUT_ITEM(ACE_M14, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                 class Inventory
                {
                    LOADOUT_ITEM(ACE_DefusalKit, 1)
                    LOADOUT_ITEM(ACE_Clacker, 1)
                    LOADOUT_ITEM(ACE_wirecutter, 1)
                    LOADOUT_ITEM(ACE_EntrenchingTool, 1)
                    LOADOUT_ITEM(ACE_SpraypaintBlue, 1)
                    LOADOUT_ITEM(ACE_SpraypaintRed, 1)
                    LOADOUT_ITEM(MineDetector, 1)
                    LOADOUT_ITEM(DemoCharge_Remote_Mag, 4)
                    LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
                };
            };
        };

        class SASR_Saboteur
        {
            primary = "SMA_M4CQBR";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Rangefinder";
            gps = "ItemMicroDAGR";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_ESSENTIALS
                    
                    LOADOUT_ITEM(SmokeShellBlue, 1)
                    LOADOUT_ITEM(SmokeShellGreen, 1)
                    LOADOUT_ITEM(SmokeShellRed, 1)
                    LOADOUT_ITEM(SmokeShellYellow, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL

                    LOADOUT_ITEM(CUP_HandGrenade_M67, 2)
                    LOADOUT_ITEM(SmokeShell, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 1)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk318_Tracer, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk318, 3)
                    LOADOUT_ITEM(ACE_M14, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                class Inventory
                {
                    LOADOUT_ITEM(ACE_DefusalKit, 1)
                    LOADOUT_ITEM(ACE_Clacker, 1)
                    LOADOUT_ITEM(ACE_wirecutter, 1)
                    LOADOUT_ITEM(ACE_EntrenchingTool, 1)
                    LOADOUT_ITEM(ACE_SpraypaintBlue, 1)
                    LOADOUT_ITEM(ACE_SpraypaintRed, 1)
                    LOADOUT_ITEM(MineDetector, 1)
                    LOADOUT_ITEM(DemoCharge_Remote_Mag, 2)
                    LOADOUT_ITEM(SLAMDirectionalMine_Wire_Mag, 2)
                    LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 2)
                    LOADOUT_ITEM(APERSBoundingMine_Range_Mag, 2)
                    LOADOUT_ITEM(APERSMine_Range_Mag, 3)
                };
            };
        };

        class SASR_LAT
        {
            primary = "SMA_MK18MOEBLK";
            secondary = "HAFM_LAW";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_Mich2000_2_Multicam";
            binocular = "Rangefinder";
            gps = "ItemMicroDAGR";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_ESSENTIALS
                };
            };      

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL

                    LOADOUT_ITEM(SmokeShell, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 3)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk262, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk262_Tracer, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk262_IR, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                class Inventory
                {
                    LOADOUT_ITEM(CUP_SMAW_HEDP_M, 1)
                    LOADOUT_ITEM(CUP_SMAW_HEAA_M, 1)
                };
            };
        };

        class SASR_HAT
        {
            primary = "SMA_MK18MOEBLK";
            secondary = "CUP_launch_Mk153Mod0";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_Mich2000_2_Multicam";
            binocular = "Rangefinder";
            gps = "ItemMicroDAGR";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_ESSENTIALS
                };
            };      

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL

                    LOADOUT_ITEM(SmokeShell, 2)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 3)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk262, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk262_Tracer, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_Mk262_IR, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                class Inventory
                {
                    LOADOUT_ITEM(CUP_SMAW_HEAA_M, 1)
                };
            };
        };

        class JAC_Aircrew
        {
            primary = "SMA_M4MOE_Tan";
            headgear = "H_CrewHelmetHeli_B";
            binocular = "Binocular";
            gps = "ItemMicroDAGR";

            class Uniform 
            {
                type = "VSM_M81_Crye_grey_shirt_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 3)
                };
            };

            class Vest
            {
                type = "V_Chestrig_blk";
            };
        };

        class JAC_GroundCrew
        {
            headgear = "CUP_H_Navy_CrewHelmet_White";
            gps = "ItemMicroDAGR";

            class Uniform 
            {
                type = "VSM_M81_Crye_tan_shirt_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL
                };
            };

            class Vest 
            {
                type = "CUP_V_B_LHDVest_White";
            };
        };

        class JAC_PJ
        {
            primary = "SMA_M4MOE_Tan";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_oga_OPS_2";
            binocular = "Binocular";
            gps = "ItemAndroid";

            class Uniform 
            {
                type = "VSM_M81_Crye_tan_shirt_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL

                    LOADOUT_ITEM(RH_15Rnd_9x19_M9, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 4)
                    LOADOUT_ITEM(SmokeShellRed, 2)
                };
            };

            class Vest
            {
                type = "VSM_OGA_Vest_3";
                class Inventory 
                {
                    LOADOUT_ITEM(ACE_elasticBandage, 20)
                    LOADOUT_ITEM(ACE_quikclot, 20)
                    LOADOUT_ITEM(ACE_epinephrine, 7)
                    LOADOUT_ITEM(ACE_morphine, 7)
                    LOADOUT_ITEM(ACE_packingBandage, 20)
                    LOADOUT_ITEM(ACE_tourniquet, 4)
                    LOADOUT_ITEM(ACE_personalAidKit, 2)
                };
            };
        };

        class JAC_Pilot
        {
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "SOCOMD_Pilot_helmet";
            binocular = "Binocular";
            gps = "ItemcTab";

            class Uniform 
            {
                type = "SOCOMD_Uniform_GSuit";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL

                    LOADOUT_ITEM(H_Watchcap_camo, 1)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 3)
                };
            };
        };
        
        class JAC_Officer
        {
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "H_MilCap_gry";
            binocular = "Rangefinder";
            gps = "ItemcTab";

            class Uniform 
            {
                type = "VSM_OGA_Crye_SS_grey_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS

                    LOADOUT_ITEM(H_Watchcap_camo, 1)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 3)
                };
            };

            class Vest
            {
                type = "VSM_FAPC_Operator_OGA_OD";
                class Inventory
                {
                    JAC_STANDARD_MEDICAL
                };
            };

            class Backpack
            {
                type = "tf_rt1523g_black";
            };
        };
        
    };
};