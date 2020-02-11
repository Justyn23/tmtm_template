/*
	XPT_fnc_log
	Author: Superxpdude
	Handles writing logs within the template scripts.
	Allows for log reporting on a single machine, or multiple machines.
	
	There are four available log levels
		0: Critical - Critical errors that significantly impact the operation of the game, or mission.
		1: Error - Errors that will impact the operation of a system, but not the entire mission.
		2: Warning - Issues that may result in undesired effects, but will not break systems.
		3: Info - Information regarding the operation of the template.
	
	Debug mode can be enabled from the lobby parameters.
	Critical, and Error will always be reported in-game and in the .rpt.
	Warning and Info will always be reported to the .rpt, and will be reported in-game if debug mode is enabled
	
	Parameters:
		0: Number - Priority. A lower number means a higher priority, see above for details.
		1: String - Error message. Descriptive text to describe what went wrong.
			OR
		1: Array - Contains the following values:
			1.0: String - Module Name. Used to distinguish which "part" of the template is throwing an error. Function name of calling script used when undefined.
			1.1: String - Error message.
		2: Number (Optional) - Location. Uses the following values:
			0 - Will only log the error on the machine upon which the error occured.
			1 - Will log the error on the machine, as well as the server.
			2 - Will log the error on all connected machines.
			Default value (when missing) is 0.
		
	Returns: Nothing
*/

#include "xpt_script_defines.hpp"

// Define variables
params [
	["_priority", false, [false]],
	["_error", nil, ["",[]],2],
	["_location", 0, [0]]
];

private ["_module", "_message"];

// Grab the debug mode status
private _debug = (["XPT_debugMode", 0] call BIS_fnc_getParamValue);

// Log an error (heh) if any variables are missing or invalid.
if (isNil "_error") exitWith {
	[true, "Called with no message defined"] call XPT_fnc_errorLog;
};
if ((_location > 2) OR (_location < 0)) exitWith {
	[true, format ["Called with invalid location of: %1", _location]] call XPT_fnc_errorLog;
};

// If the error message is a string, convert it to an array
if !(_error isEqualType []) then {
	_error = [nil, _error];
};

_error params [
	["_module", _fnc_scriptNameParent, [""]],
	["_message", nil, [""]]
];

// Check to make sure that the message is defined
if (isNil "_message") exitWith {
	[true, "Called with no message defined"] call XPT_fnc_errorLog;
};

// Build our message
private _log = format ["[%1] %2",_module,_message];

// Send our message
switch (_location) do {
	// Only the local machine
	case 0: {[_priority,_log] call XPT_fnc_errorLog;};
	// Local machine and server
	case 1: {
		[_priority,_log] call XPT_fnc_errorLog;
		[_priority,_log] remoteExec ["XPT_fnc_errorLog", 2];
	};
	// All machines
	case 2: {[_priority,_log] remoteExec ["XPT_fnc_errorLog", 0];};
};