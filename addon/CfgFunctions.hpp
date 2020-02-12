class CfgFunctions
{
	class XPT
	{
		class curator
		{
			file = "sxp\template\functions\curator";
			class curatorAddUnit {};			// Adds an editable unit to all curators
			class curatorAssignUnit {};			// Assigns a player to a curator module
			class curatorEH {postInit = 1;};	// Adds event handlers to curators on mission start
			class curatorGrpPlaced {};			// Adds curator placed groups to other curators
			class curatorObjPlaced {};			// Adds curator placed objects to other curators
			class curatorRemoveNVG {};			// Removes NVGs from curator-spawned units
		};
		class event
		{
			file = "sxp\template\functions\event";
			class initPlayerLocal {};	// Template specific initPlayerLocal entries
			class initPlayerServer {};	// Template specific initPlayerServer entries
			class initServer {};		// Template specific initServer entries
			class onPlayerKilled {};	// Template specific onPlayerKilled entries
			class onPlayerRespawn {};	// Template specific onPlayerRespawn entries
		};
		class loadout
		{
			file = "sxp\template\functions\loadout";
			class exportInventory {};		// Exports a unit's inventory to the XPTLoadouts config format
			class loadCurrentInventory {};	// Uses loadInventory to apply a loadout to a unit
			class loadInventory {};			// Loads a unit's inventory
			class loadInventoryLegacy {};	// Loads a unit's inventory from the old XPTLoadouts format
		};
		class radio
		{
			file = "sxp\template\functions\radio";
			class radioHandleDeath {};			// Saves radio settings on death
			class radioHandleRespawn {};		// Applies radio settings on respawn
			class radioInit {preInit = 1;};		// Configures radio settings at mission start
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
		class vehicle
		{
			file = "sxp\template\functions\vehicle";
			class loadItemCargo {};			// Sets the item inventory of a vehicle or ammo box
			class vehicleSetup {};			// Sets up a vehicle from a config file
			class vehicleSetupTurret {};	// Sets up a turret on a vehicle
		};
	};
};