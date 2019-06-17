/////////////////////////////////////////////////////////////////////////////////
// SOV Base
class CUP_BAF_Coyote_BASE_D : Car_F {
	armor = 750;
	explosionShielding = 0.000000001;
	class HitPoints {
		class HitBody {
			armor = 2.5;
			explosionShielding = 50;
			material = -1;
			name = "karoserie";
			passThrough = 0;
			visual = "zbytek";
		};
		class HitEngine {
			armor = 0.5;
			explosionShielding = 10;
			material = -1;
			name = "motor";
			passThrough = 0;
		};
		class HitFuel {
			armor = 0.5;
			explosionShielding = 10;
			material = -1;
			name = "palivo";
			passThrough = 0;
		};
		class HitHull {
			armor = 750;
			explosionShielding = 1;
			material = -1;
			minimalHit = 0.1;
			name = "palivo";
			passThrough = 0;
			visual = "";
		};
		class HitLF2Wheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_1_2_steering";
			visual = "-";
		};
		class HitLFWheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_1_1_steering";
			visual = "-";
		};
		class HitLBWheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_1_4_steering";
			visual = "-";
		};
		class HitLMWheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_1_3_steering";
			visual = "-";
		};
		class HitRF2Wheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_2_2_steering";
			visual = "-";
		};
		class HitRFWheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_2_1_steering";
			visual = "-";
		};
		class HitRBWheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_2_4_steering";
			visual = "-"; 
		};
		class HitRMWheel {
			armor = 2.5;
			passThrough = 0;
			explosionShielding = 40;
			material = -1;
			name = "wheel_2_3_steering";
			visual = "-"; 
		};
	};
};





////////////////////////////////////////////////////////////////////////////////
// SOV-CD

class SOCOMD_SOV_HMG_D : CUP_B_BAF_Coyote_L2A1_D {

	//armor = 3000;
	//armorStructural = 20;
	//explosionShielding = 0.0005;
	//damageResistance = 0.03099;
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (M2) (3/9)";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	transportMaxBackpacks = "30";
	transportMaxWeapons = "60";
	transportMaxMagazines = "600";

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo3",
		"karoserie"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_core\CTGear\pink.paa",
		"socomd_data_core\CTGear\pink.paa",
		"socomd_data_core\CTGear\pink.paa",
		""
	};

	class TransportWeapons {
		INVENTORY_VEHICLE_DEFAULT_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_DEFAULT_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS
	};
};

class SOCOMD_SOV_HMG_W : CUP_B_BAF_Coyote_L2A1_W {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (M2) (3/9)";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	class TransportWeapons {
		INVENTORY_VEHICLE_DEFAULT_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_DEFAULT_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS
	};
};

class SOCOMD_SOV_GMG_D : CUP_B_BAF_Coyote_GMG_D {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (GMG) (3/9) ";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	transportMaxBackpacks = "30";
	transportMaxWeapons = "60";
	transportMaxMagazines = "600";

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo3"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_core\SOV\jackal_base_co.paa",
		"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa",
		"socomd_data_core\SOV\jackal_adds_co.paa"
	};

	class TransportWeapons {
		INVENTORY_VEHICLE_DEFAULT_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_DEFAULT_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS
	};
};

class SOCOMD_SOV_GMG_W : CUP_B_BAF_Coyote_GMG_W {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (GMG) (3/9) ";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	class TransportWeapons {
		INVENTORY_VEHICLE_DEFAULT_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_DEFAULT_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS
	};
};