/*
 ASR AI3 global settings; these settings are applicable on all machines running the mod and are pushed over the network by the server to all clients
 this file must be found in <game folder>\userconfig\asr_ai3\
 for most settings, 0 = disabled, 1 = enabled

 Mission makers can control these features by setting these global variables in init.sqf
*/

asr_ai3_main_enabled 		= 1;		// All the other settings matter only if we have 1 here; set 0 to disable all scripted features
asr_ai3_main_radionet 		= 1;		// AI groups share known enemy locations over radio
asr_ai3_main_radiorange 	= 5000;		// Maximum range for AI radios (warning: increasing this impacts game performance)
asr_ai3_main_seekcover 		= 1;		// Set to 1 if AI should move to near cover in combat when they're exposed in the open, 0 to disable.
asr_ai3_main_throwsmoke		= 0.8;		// AI throws smoke when advancing to cover (set 0 to disable or a number up to 1 to enable, higher number means better chance to do it)
asr_ai3_main_reactions 		= 1;		// Infantry groups will randomly react with basic, scripted actions, to detecting the enemy or being shot at (1-enabled, 0-disabled)
asr_ai3_main_usebuildings 	= 0.8;		// Chance the AI group will enter nearby buildings when in combat mode (0 to 1 values, 0 will disable the feature)
asr_ai3_main_getinweapons 	= 0.9;		// Chance the AI group will mount nearby static and vehicle weapons when in combat mode (0 to 1 values, 0 will disable the feature)
asr_ai3_main_packNVG		= 1;		// Automatically un-equip NVG during the day (store them in the vest/backpack) and re-equip when it gets dark
asr_ai3_main_dayscope		= 0;		// Prevent AI from using scope fire modes at night (reduced engagement range and accuracy); requires ASDG JR to work
asr_ai3_main_debug 		= 0;		// Log extra debugging info to RPT, create debug markers and hints (1-enabled, 0-disabled)
