_args = _this;

if(typeOf player == "SOCOMD_Homestead") exitWith {};

_isTranslator = player getVariable ["SOCOMD_isTranslator", 0];

_languages = ["e"];
if(_isTranslator == 0) then {
	_languages = _languages + ["f"];
	_isTranslator = 1;
}else {
	_isTranslator = 0;
};
player setVariable ["SOCOMD_isTranslator", _isTranslator];
_languages call acre_api_fnc_babelSetSpokenLanguages;

_isTranslator;