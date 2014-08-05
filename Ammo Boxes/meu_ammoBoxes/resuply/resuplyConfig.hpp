// REVISION 16JUL14

// Expanded box framework added 8AUG14

#Define EXPANDED_BOXES 0 // change to 1 to enable bravo-hotel boxes

	// Resupply Box ALPHA: Basic Infantry
	class Box_meu_suply : B_supplyCrate_F { // Basic Infantry
		displayname = "[15th] Resupply ALPHA"; 
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		SLX_XEH_DISABLED = 0;

#include <\meu_ammoBoxes\resuply\transportGear\alpha.hpp>				
	};
	
	// Resupply Box BRAVO: AT Box
	class Box_meu_suply_Bravo : B_supplyCrate_F {
		displayname = "[15th] Resupply BRAVO";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		SLX_XEH_DISABLED = 0;
		scope = EXPANDED_BOXES;

#include <\meu_ammoBoxes\resuply\transportGear\bravo.hpp> 		
	};	
	
	// Resupply Box CHARLIE: Weapons Specific Box (MG/ SMAW)
	class Box_meu_suply_Charlie : Box_meu_suply_Bravo {
		displayname = "[15th] Resupply CHARLIE";
		
#include <\meu_ammoBoxes\resuply\transportGear\charlie.hpp> 
	};
	
	// Resupply Box DELTA: Weapons Specific Box (DEMO)
	class Box_meu_suply_Delta : Box_meu_suply_Bravo {
		displayname = "[15th] Resupply DELTA";
		
#include <\meu_ammoBoxes\resuply\transportGear\delta.hpp> 
	};
	
	// Resupply Box ECHO: Grenadier/ DMR Box
	class Box_meu_suply_Echo : Box_meu_suply_Bravo {
		displayname = "[15th] Resupply ECHO";
		
#include <\meu_ammoBoxes\resuply\transportGear\echo.hpp> 
	};
	
	// Resupply Box FOXTROT: Signal Box
	class Box_meu_suply_Foxtrot : Box_meu_suply_Bravo {
		displayname = "[15th] Resupply FOXTROT";
		
#include <\meu_ammoBoxes\resuply\transportGear\foxtrot.hpp> 
	};
	
	// Resupply Box GOLF: Medical Box
	class Box_meu_suply_Golf : Box_meu_suply_Bravo {
		displayname = "[15th] Resupply GOLF";
		
#include <\meu_ammoBoxes\resuply\transportGear\golf.hpp> 
	};
	
	// Resupply Box HOTEL: Communications Box
	class Box_meu_suply_Hotel : Box_meu_suply_Bravo {
		displayname = "[15th] Resupply HOTEL";
		
#include <\meu_ammoBoxes\resuply\transportGear\hotel.hpp> 
	};
	
