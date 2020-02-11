#include "script_mod.hpp"

class CfgPatches
{
	class xp_template
	{
		// Default BIS info
		name = "XP Template";
		author = "Superxpdude";
		url = "https://github.com/Superxpdude/tmtm_template";
		
		requiredAddons[] = {"CBA_settings"};
		requiredVersion = REQUIRED_VERSION;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		
		// CBA Info
		authors[] = {"Superxpdude"};
		version = VERSION;
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {VERSION_AR};
	};
};

#include "CfgFunctions.hpp"