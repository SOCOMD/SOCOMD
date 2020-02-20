// 	: : : C.O.R.E Gear & Equipment Config : : :
//	

#define TEast				0
#define TWest				1
#define TGuerrila			2
#define TCivilian			3
#define TSideUnknown		4
#define TEnemy				5
#define TFriendly			6
#define TLogic				7

#define private				0
#define protected			1
#define public				2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly			2
#define ReadOnlyVerified	3

#define true				1
#define false				0

enum {
	 //  = 2,	// Error parsing: Empty enum name
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

// Addon
class CfgPatches {
	
	class VQI_CORE_Gear {										// Project Name or ID
		units[] = {}; 											// ?
		weapons[] = {}; 										// ?
		magazines[] = {};										// ?
		requiredVersion = 1.68; 								// Game Version Needed
		requiredAddons[] = {"A3_Weapons_F","A3_Sounds_F"}; 		// Load first BEFORE project if required
	};
};






//class Default;				// External class reference




class WeaponSlotsInfo;

class cfgWeapons {
	
	#include "cfgOptics.hpp"
};







/*
//////////////////////////////////////////////////////
// Audio Voodoo
class cfgSounds {
	#include "\vqi_gear\sounds\cfgSounds.hpp"
	sounds[] = {};
};
*/








///////////////////
/* NOTES:


*/