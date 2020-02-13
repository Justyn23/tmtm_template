/*
	XPT_fnc_enabled
	Author: Superxpdude
	Determines if the template is enabled
	
	Parameters:
		None
		
	Returns:
		Boolean - True if enabled.
*/

#include "script_macros.hpp"

private _return = if ((getMissionConfigValue "XPT_enabled") == 1) then {
	true
} else {
	false
};

_return