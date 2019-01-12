ASORVS_SideRestriction = true;

ASORVS_BrightMaps = [];

ASORVS_UnitInsigniaAsBackground = false;
//Background logo. Can be in a mod or in a mission. .paa (recommended) or .jpg
ASORVS_BackgroundLogo =   "A3\ui_f\data\Logos\arma3_expansion_ca.paa";
//ASORVS_BackgroundLogo = "clan_logo.jpg"; //Image in your mission folder.
//ASORVS_BackgroundLogo = "clan-textures\clan_logo.paa"; //Image in clan-textures.pbo addon

//Background tile (Arma 3 loading screen noise)
ASORVS_BackgroundTile = "A3\ui_f\data\GUI\cfg\LoadingScreens\loadingnoise_ca.paa";

//Items that should not be shown in any lists
ASORVS_Blacklist = [];
//You can also add a blacklist per side AND/OR per faction. All blacklists that match player when ASORVS is opened will be included. Examples:
//ASORVS_Blacklist_WEST = []; //hide items for all west units
//ASORVS_Blacklist_BLU_F = []; //hide items for all NATO (class name BLU_F) units

//Only these items will show in any lists. Items not in these lists will be removed when opening ASORVS. Only base radios from TFAR / ACRE need to be added.
//ASORVS_Whitelist ["SOCOMD_ASLAV", "SOCOMD_SOV_HMG_D", "SOCOMD_SOV_HMG_W", "SOCOMD_BUSHMASTER_HMG", "SOCOMD_BUSHMASTER_TRANS", "SOCOMD_BLACKHAWK", "SOCOMD_CHINOOK", "SOCOMD_HURRICANE_AA", "SOCOMD_HURRICANE_AT", "SOCOMD_HURRICANE_CAS", "SOCOMD_FIREFLY", "SOCOMD_DRAGONFLY_127", "SOCOMD_DRAGONFLY_762", "SOCOMD_LCH", "SOCOMD_ASSAULT_BOAT", "SOCOMD_RHIB_ARMED", "SOCOMD_SUPPORT_HMG_D", "SOCOMD_SUPPORT_HMG_W", "SOCOMD_QUADBIKE", "SOCOMD_BIKE", "SOCOMD_LR_ATV"];
//You can also add a whitelist per side and/or per faction. Items in this list MUST also be in ASORVS_Whitelist if it exists.
//ASORVS_Blacklist_WEST = ["ItemRadio"]; //hide items for all west units
//ASORVS_Blacklist_BLU_F = ["ItemRadio"]; //hide items for all NATO (class name BLU_F) units

