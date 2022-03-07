class CfgPatches
{
	class bl_MysteryBox_Edit
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Scripts",
			"JM_CF_Scripts",
			"MagicBox_Scripts",
			"DF_Scripts"
		};
	};
};

class CfgMods 
{
	class bl_MysteryBox_Edit
	{
		name = "bl_MysteryBox_Edit";
		dir = "bl_MysteryBox_Edit";
		credits = "InclementDab & Zeroy";
		author = "BoomLay";
		type = "mod";
		dependencies[] =
		{
			"Game", 
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"MagicBox/scripts/common",
					"bl_MysteryBox_Edit/scripts/4_World"
				};
			};
		};
	};
};