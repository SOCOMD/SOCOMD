class Extended_Init_EventHandlers {
    class bma3_bushmaster_unarmed_F {
		class bushie_Damage_eh {
			init = "[_this select 0] execVM '\socomd_core\functions\utils\fn_BushMasterInit.sqf'";
		};	
    };
};

class Extended_PostInit_EventHandlers {
    class socomd_core {
        clientinit = "[_this select 0] call socomd_fnc_XEH_postInit";
    };
};

class Extended_PreInit_EventHandlers
{
	class AB_WindowBreaker
	{
		init="call compile preprocessFileLineNumbers 'socomd_core\functions\common\XEH_PreInit.sqf'";
	};
};