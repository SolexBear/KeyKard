class CfgPatches
{
	class KlimaX_Doors
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.25;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class KlimaX_Doors
	{
		dir="KlimaX_Doors";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="KlimaX_Doors";
		credits="";
		author="";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"KlimaX_Doors/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"KlimaX_Doors/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"KlimaX_Doors/Scripts/5_Mission"
				};
			};
		};
	};
};
