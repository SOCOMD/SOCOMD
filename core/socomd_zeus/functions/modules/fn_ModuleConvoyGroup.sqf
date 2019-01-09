params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

_mouseOver = missionNamespace getVariable [ "bis_fnc_curatorObjectPlaced_mouseOver", [""]];

_curatorEntity = objnull;
if ((_mouseOver select 0) == "OBJECT") then 
{
	 _curatorEntity = (_mouseOver select 1);
};

//Exit there is no curator entity under cursor
if(isNull _curatorEntity) exitWith {
	deleteVehicle _logic;
};

_group = Group _curatorEntity;
if(isNull _group) exitWith {
	deleteVehicle _logic;
};

_group setVariable ["VCM_DisableForm",true];
_group setBehaviour "SAFE";
_group setFormation "COLUMN";

deleteVehicle _logic;