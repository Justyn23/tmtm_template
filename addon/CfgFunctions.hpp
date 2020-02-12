class CfgFunctions
{
	class XPT
	{
		class event
		{
			file = "sxp\template\functions\event";
			class initPlayerLocal {};	// Template specific initPlayerLocal entries
			class initPlayerServer {};	// Template specific initPlayerServer entries
			class initServer {};		// Template specific initServer entries
			class onPlayerKilled {};	// Template specific onPlayerKilled entries
			class onPlayerRespawn {};	// Template specific onPlayerRespawn entries
		};
		class system
		{
			file = "sxp\template\functions\system";
			class briefingCreate {};					// Creates briefings from a config file
			class briefingOnStart {postInit = 1;};		// Creates briefings on mission start
			class cbaParams {preInit = 1;};				// Converts lobby parameters to CBA settings
			class enabled {};							// Checks if the template is enabled
			class fpsMarkers {postInit = 1;};			// Displays server and HC framerates on map
			class log {};								// Handles log messages
			class logWrite {};							// Writes log messages to .rpt and systemChat
			class mapMarkersClient {};					// Client-side map markers function
			class mapMarkersServer {};					// Server-side map markers function
			class updateTask {};						// Updates tasks from a config file
		};
	};
};