// Check if the template is enabled
#define TEMPLATE_ENABLED_CHECK if ((["xpt_param_version",0] call BIS_fnc_getParamValue) == 0) exitWith {};

#define TEMPLATE_PARAM_VERSION 1