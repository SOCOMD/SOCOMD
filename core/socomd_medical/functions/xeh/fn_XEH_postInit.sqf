["SOCOMD_Medical_Event_ketamineLocal", {_this call SOCOMD_Medical_fnc_ketamineLocal;}] call CBA_fnc_addEventHandler;
["SOCOMD_Medical_Event_naloxoneLocal", {_this call SOCOMD_Medical_fnc_naloxoneLocal;}] call CBA_fnc_addEventHandler;
["ace_treatmentSucceded",{
    params ["", "_target", "", "_className"];
    if (toUpper _className isEqualTo "PERSONALAIDKIT" && local _target) exitWith {
        _target setVariable ["SOCOMD_REVIVAL", SOCOMD_medical_persistantReviveTimer]
    };
 }] call CBA_fnc_addEventHandler;

