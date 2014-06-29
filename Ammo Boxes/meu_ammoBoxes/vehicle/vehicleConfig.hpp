

//class CfgVehicles {
	class Box_NATO_AmmoVeh_F;
	class Box_meu_vehicle : Box_NATO_AmmoVeh_F {
		displayname = "[15th] Vehicle Box";
		transportAmmo = 0;
		supplyRadius = 0;

		class UserActions {
			class clearCargo {
 				userActionID 		= 50;
 				displayName 		= "<t color=""#99FF00"">Clear Cargo</t>";
 				displayNameDefault 	= "";
 				position			= "mph_axis";
 				radius				= 10;
 				animPeriod			= 2;
 				onlyForplayer		= 1;
 				condition			= "(alive this) && (driver (vehicle player) == player) && (vehicle player in vehicles)";
 				statement			= "[player,0,true,true] call meu_fnc_vehicleLoadout;";
			};
			class rifle : clearCargo {
				displayName 		= "<t color=""#FF0000"">Rifle Loadout</t>";
				statement 			= "[player,1,false,true] call meu_fnc_vehicleLoadout;";
			};
			class weapons : clearCargo {
				displayName			= "<t color=""#FF0000"">Weapons Loadout</t>";
				statement 			= "[player,2,false,true] call meu_fnc_vehicleLoadout;";
			};
			class assault : clearCargo {
				displayName			= "<t color=""#FF0000"">Assault Loadout</t>";
				statement 			= "[player,3,false,true] call meu_fnc_vehicleLoadout;";
			};
			class bas : clearCargo {
				displayName			= "<t color=""#FF0000"">Medical Loadout</t>";
				statement 			= "[player,4,false,true] call meu_fnc_vehicleLoadout;";
			};
			class marauder : clearCargo {
				displayName			= "<t color=""#FF0000"">Marauder Loadout</t>";
				statement 			= "[player,5,false,true] call meu_fnc_vehicleLoadout;";
			};
		};
		
	};
//};

