#include"tb_defines.hpp"

zoneList[]=
{
//ID, TEAMSPAWNTYPE, LINK, SYNC, PROFILE, DEPEND, DEPQTY, ZONE_DESC
{0,0,0,{},{},1,{},0},

	{1,TEAM_BLUE,		SPAWN_XRAY,		{2},	{},	1,	{},	0,	"%3"	},
	{2,TEAM_BLUE,		SPAWN_NEVER,	{1,3},	{},	1,	{},	0,	"%1"	},
	{3,TEAM_BLUE,		SPAWN_NEVER,	{2,4},	{},	1,	{},	0,	"%1"	},
	{4,TEAM_NEUTRAL,	SPAWN_NEVER,	{3,5,6},{},	1,	{},	0,	"%1"	},
	{5,TEAM_NEUTRAL,	SPAWN_NEVER,	{4,7},	{6},1,	{},	0,	"%1"	},
	{6,TEAM_NEUTRAL,	SPAWN_NEVER,	{7},	{5},1,	{},	0,	"%1"	},
	{7,TEAM_NEUTRAL,	SPAWN_NEVER,	{5,6,8},	{},	1,	{},	0,	"%1"	},
	{8,TEAM_RED,		SPAWN_NEVER,	{7,9},	{},	1,	{},	0,	"%1"	},
	{9,TEAM_RED,		SPAWN_NEVER,	{8,10},	{},	1,	{},	0,	"%1"	},
	{10,TEAM_RED,		SPAWN_XRAY,		{9},	{},	1,	{},	0,	"%3"	}

};
