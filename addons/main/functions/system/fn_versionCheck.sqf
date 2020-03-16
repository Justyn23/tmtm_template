/*
	XPT_fnc_versionCheck
	Author: Superxpdude
	Checks to see if the template files in the mission match the required version of the template files in the addon.
	
	Parameters:
		Designed to be called during postInit. No parameters.
		
	Returns: Nothing
*/

#include "script_macros.hpp"
TEMPLATE_ENABLED_CHECK

_missionVersion = ["xpt_param_version",0] call BIS_fnc_getParamValue;
_addonVersion = TEMPLATE_PARAM_VERSION;

if (_missionVersion < _addonVersion) then {
	[1, format ["Mission template files out of date. Mission version [%1] | Current version [%2]",_missionVersion,_addonVersion], 0] call XPT_fnc_log;
};