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

class CfgCommunicationMenu
{
	class xpt_jipTeleport	// Activates the JIP teleporter.
	{
		text = "Teleport to Squad";
		submenu = "";
		expression = "";
		icon = "";
		cursor = "";
		enable = "alive player";
		removeAfterExpressionCall = 0;
	};
};

class CfgNotifications
{
	class XPT_debugMode // Debug mode notification. Displays when a mission is started with debug mode enabled.
	{
		title = "Debug Mode";
		iconPicture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\use_ca.paa";
		iconText = "";
		description = "Debug mode is enabled. Some mission parameters may be changed.";
		duration = 15;
		priority = 100000;
	};
};

class CfgRespawnTemplates
{
	class XPT_wave
	{
		onPlayerKilled = "XPT_fnc_waveOnPlayerKilled";
	};
};

class CfgUnitInsignia
{
	class tmtm
	{
		displayName = "TMTM";
		author = "TMTM";
		texture = "\sxp\template\media\insignia\tmtm.paa";
	};
};