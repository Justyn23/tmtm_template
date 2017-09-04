// Functions library
// Defines custom functions for the template.
// TEMPLATE SPECIFIC FUNCTIONS. DO NOT EDIT THIS FILE DIRECTLY UNLESS YOU KNOW WHAT YOU'RE DOING!

// Template functions now use the XPT tag to differentiate them from functions I write for my own missions. --Superxpdude
class XPT
{
	class curator
	{
		file = "template\functions\curator";
		class curatorEH {postInit = 1}; // Function for adding event handlers to curators on mission start.
		class curatorGrpPlaced {}; // Function for adding curator placed groups to other curators.
		class curatorObjPlaced {}; // Function for adding curator placed objects to other curators.
	};
	class debug
	{
		file = "template\functions\debug";
		class errorReport {}; // Function for handling error reporting
	};
	class headlessClient
	{
		file = "template\functions\headlessClient";
	};
	class loadout
	{
		file = "template\functions\loadout";
		class loadInventory {}; // Function for loading a unit's inventory
	};
	class radio
	{
		file = "template\functions\radio";
	};
};