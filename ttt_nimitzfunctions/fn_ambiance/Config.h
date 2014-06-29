// classes to spawn
// one and two initially meant one seater or two seater, but the std planes are all single seat ...
#define JETONE "JS_JC_FA18E"
#define JETTWO "JS_JC_FA18F"
#define STDJETONE "I_Plane_Fighter_03_CAS_F"
#define STDJETTWO "I_Plane_Fighter_03_AA_F"
#define JETS [ [STDJETONE, STDJETTWO], [JETONE, JETTWO] ]
#define STDPLANES 0
#define FA18PLANES 1
// Ghosthawk is disabled, it jumps on the deck
#define HELO "B_Heli_Transport_01_F"
// #define HELO "I_Heli_Transport_02_F"

// spacing between jets
#define JETOFFSET_X 11
#define JETOFFSET_Y 20

//deck height
#define DECK 17.25
#define HANGAR 7.25
#define STERN 6

// UGV for lack of a tractor
#define TRACTOR "B_UGV_01_F"
// #define TRACTOR "B_Quadbike_01_F"
// #define TRACTOR "B_MRAP_01_F"

#define SPEEDBOAT "B_Boat_Armed_01_minigun_F"

#define WHITEBOARD "Land_MapBoard_F"

#define WHITE 0
#define YELLOW 1
#define GREEN 2
#define GRAPE 3
#define RED 4
#define BLUE 5
#define BROWN 6
#define SOLDIER 7
#define PILOT 8
#define SOLDIERS_FUTARM ["FUTARM_WHITE_MT", "FUTARM_YELLOW_MT", "FUTARM_GREEN_MT", "FUTARM_GRAPE_MT", "FUTARM_RED_MT", "FUTARM_BLUE_MT", "FUTARM_BROWN_MT", "FUTARM_SOLDIER_BLUE_MT", "FUTARM_PILOT_MT"]
#define SOLDIERS_STD ["B_crew_F", "B_crew_F", "B_crew_F", "B_crew_F", "B_crew_F", "B_crew_F", "B_crew_F", "B_crew_F", "B_Pilot_F"]
