/*
 ASR AI3 server-side settings; these settings are only applicable on servers and single-player sessions
 this file must be found in <game folder>\userconfig\asr_ai3\
 for most settings, 0 = disabled, 1 = enabled

 Mission makers can control these features by setting these global variables in init.sqf
*/

asr_ai3_main_setskills 		= 1;		// Override AI skills based on their unit type (faction, training etc.; 0 - disabled, 1 - enabled)
asr_ai3_main_dynsvd 		= 1;		// Enable dynamic view distance adjustment based on day/night and fog thickness on dedicated servers and headless clients
asr_ai3_main_gunshothearing 	= 1.20;		// Gunshot hearing range coefficient (applied to shooter's weapon sound range; 0 will disable the feature)
asr_ai3_main_joinlast 		= 2;		// Groups left with only this number of units will merge with nearest group of the same faction (set to 0 to disable)
asr_ai3_main_removegimps	= 300;		// Units unable to walk for this time will separate from their group to prevent slowing it down (time in seconds, set 0 to disable)

/*
	Units are classified into skill sets between 1 and 10
	By default, a lower level number means a better skilled unit
	Levels 8-10 are special:
	 - 8-9 are for pilots
	 - 10 is for trained snipers
*/

asr_ai3_main_sets = [ // for each level: skilltype, [<min value>, <random value added to min>]
	[	"general",[1.00,0.0],	"aiming",[1.00,0.0],	"spotting",[1.00,0.0]	],	// 0:  super-AI (only used for testing)
	[	"general",[0.80,0.2],	"aiming",[0.35,0.1],	"spotting",[0.40,0.2]	],	// 1:  sf 1
	[	"general",[0.75,0.2],	"aiming",[0.30,0.1],	"spotting",[0.35,0.2]	],	// 2:  sf 2 (recon units, divers and spotters)
	[	"general",[0.70,0.2],	"aiming",[0.25,0.1],	"spotting",[0.30,0.2]	],	// 3:  regular 1 (regular army leaders, marksmen)
	[	"general",[0.65,0.2],	"aiming",[0.20,0.1],	"spotting",[0.25,0.2]	],	// 4:  regular 2 (regulars)
	[	"general",[0.60,0.2],	"aiming",[0.15,0.1],	"spotting",[0.20,0.2]	],	// 5:  militia or trained insurgents, former regulars (insurgent leaders, marksmen)
	[	"general",[0.55,0.2],	"aiming",[0.10,0.1],	"spotting",[0.15,0.2]	],	// 6:  some military training (insurgents)
	[	"general",[0.50,0.2],	"aiming",[0.05,0.1],	"spotting",[0.10,0.2]	],	// 7:  no military training
	[	"general",[0.70,0.2],	"aiming",[0.20,0.1],	"spotting",[0.50,0.2]	],	// 8:  pilot 1 (regular)
	[	"general",[0.60,0.2],	"aiming",[0.15,0.1],	"spotting",[0.40,0.2]	],	// 9:  pilot 2 (insurgent)
	[	"general",[0.80,0.2],	"aiming",[0.60,0.4],	"spotting",[0.80,0.2]	]	// 10: sniper 
];

asr_ai3_main_levels_units = [
	[],	// 0:  super-AI (only used for testing)
	[],	// 1:  sf 1
	[],	// 2:  sf 2 (recon units, divers and spotters)
	[],	// 3:  regular 1 (regular army leaders, marksmen)
	[],	// 4:  regular 2 (regulars)
	[],	// 5:  militia or trained insurgents, former regulars (insurgent leaders, marksmen)
	[],	// 6:  civilians with some military training (insurgents)
	[],	// 7:  civilians without military training
	[],	// 8:  pilot 1 (regular)
	[],	// 9:  pilot 2 (insurgent)
	[]	// 10: sniper 
];

asr_ai3_main_factions = [ // default coefficient for unlisted factions is 1, meaning no change
	["BLU_F",1], ["USMC",1], ["BIS_US",1], ["BIS_CZ",1], ["BIS_GER",1], ["BIS_UN",1], ["PMC_BAF",1], ["BIS_BAF",1],
	["OPF_F",1], ["RU",1], ["BIS_TK",1],
	["INS",1], ["BIS_TK_INS",1],
	["IND_F",1], ["CDF",1],
	["IND_G_F",1], ["GUE",1], ["BIS_TK_GUE",1]
];
