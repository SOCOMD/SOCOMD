//
//
if (VQI_HINTS_HALO == 1) then { hint "efx_transition_text.sqf"; };
sleep 1;
sleep VQI_LEAP_MSG_TIME;

private ["_txtTime","_txtFade","_startTextC","_startTextD","_custom1","_custom","_custom3","_valueRL","_valueDU"];


_txtTime = 5;
_txtFade = 5;

//_custom1 = "SOUTH PACIFIC - TANOA, FIJI";
//_custom2 = "XC-130 NIGHTMARE : 32,785'ft";
//_custom3 = "1420hrs, 07.JUL.17, -54*F";
_custom1 = VQI_LEAP_MSG_1;
_custom2 = VQI_LEAP_MSG_2;
_custom3 = VQI_LEAP_MSG_3;
_valueRL = VQI_LEAP_MSG_X;
_valueDU = VQI_LEAP_MSG_Y;
//_valueRL = 0.6;
//_valueDU = 1.1;




// Custom Info Lines
_startTextC = format["<t size='0.6' font='PuristaMedium' align='right'>%1 <br/> %2 <br/> %3",_custom1,_custom2,_custom3];
sleep 2;

// _variable, +R/L, +D/U, Timed, Fadeout Time, ?, ?
[_startTextC, _valueRL, _valueDU, _txtTime, _txtFade, 0, 5] spawn BIS_fnc_dynamicText; // 0.6   1.1
	







/////////////////////////
/* NOTES:



*/