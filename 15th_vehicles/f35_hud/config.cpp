

#define true	1
#define false	0

class CfgPatches {
	class f35_hud {
		units[] = {"F35B"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};

class CfgVehicles {
	class Air;	// External class reference
	
	class Plane : Air {};
	
	class Plane_Fighter_03_base_F;

	
	class F35B : Plane_Fighter_03_base_F {
		

		laserScanner = true;
		irTarget = true;
		irScanRangeMin = 100;
		irScanRangeMax = 12000;
		irScanToEyeFactor = 4;
		irScanGround = true;
		
		class MFD {
			class HMD_AA {
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15, 1, 0.15, 1};
				
				class Bones {
					class PlaneOrientation {
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					
					class WeaponAim {
						type = "vector";
						source = "weapon";
						pos0[] = {0.5, 0.5};
						pos10[] = {1.382, 1.382};
					};
					
					class Target {
						type = "vector";
						source = "target";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.7, 0.7};
					};
					
					class TargetSelected {
						type = "vector";
						source = "target";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.7, 0.7};
					};
					
					class RangeBone {
						type = "linear";
						source = "targetDist";
						sourceScale = 1;
						min = 0;
						max = 10000;
						minPos[] = {0.8, 0.3};
						maxPos[] = {0.8, 0.7};
					};
					
					class Velocity {
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.38};
						pos10[] = {0.9, 0.78};
					};
				};
				
				class Draw {
					color[] = {0.15, 1, 0.15};
					alpha = 0.9;
					condition = "on";
					
					class AAMissileCircle {
						type = "group";
						condition = "AAmissile";
						
						class AAMissileCrosshair {
							type = "line";
							width = 4;
							points[] = {{"WeaponAim", {0, -0.3125}, 1}, {"WeaponAim", {0.0434, -0.30775}, 1}, {"WeaponAim", {0.0855, -0.293656}, 1}, {"WeaponAim", {0.125, -0.270625}, 1}, {"WeaponAim", {0.1607, -0.239375}, 1}, {"WeaponAim", {0.1915, -0.200875}, 1}, {"WeaponAim", {0.2165, -0.15625}, 1}, {"WeaponAim", {0.234925, -0.106875}, 1}, {"WeaponAim", {0.2462, -0.05425}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2462, 0.05425}, 1}, {"WeaponAim", {0.234925, 0.106875}, 1}, {"WeaponAim", {0.2165, 0.15625}, 1}, {"WeaponAim", {0.1915, 0.200875}, 1}, {"WeaponAim", {0.1607, 0.239375}, 1}, {"WeaponAim", {0.125, 0.270625}, 1}, {"WeaponAim", {0.0855, 0.293656}, 1}, {"WeaponAim", {0.0434, 0.30775}, 1}, {"WeaponAim", {0, 0.3125}, 1}, {"WeaponAim", {-0.0434, 0.30775}, 1}, {"WeaponAim", {-0.0855, 0.293656}, 1}, {"WeaponAim", {-0.125, 0.270625}, 1}, {"WeaponAim", {-0.1607, 0.239375}, 1}, {"WeaponAim", {-0.1915, 0.200875}, 1}, {"WeaponAim", {-0.2165, 0.15625}, 1}, {"WeaponAim", {-0.234925, 0.106875}, 1}, {"WeaponAim", {-0.2462, 0.05425}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2462, -0.05425}, 1}, {"WeaponAim", {-0.234925, -0.106875}, 1}, {"WeaponAim", {-0.2165, -0.15625}, 1}, {"WeaponAim", {-0.1915, -0.200875}, 1}, {"WeaponAim", {-0.1607, -0.239375}, 1}, {"WeaponAim", {-0.125, -0.270625}, 1}, {"WeaponAim", {-0.0855, -0.293656}, 1}, {"WeaponAim", {-0.0434, -0.30775}, 1}, {"WeaponAim", {0, -0.3125}, 1}};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.03, 0.025, 0.1};
				helmetRight[] = {0.06, 0, 0};
				helmetDown[] = {0, -0.05, 0};
			};
			
			class HMD_ALL {
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15, 1, 0.15, 1};
				
				class Bones {
					class PlaneOrientation {
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					
					class WeaponAim {
						type = "vector";
						source = "weapon";
						pos0[] = {0.5, 0.5};
						pos10[] = {1.382, 1.382};
					};
					
					class Target {
						type = "vector";
						source = "target";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.7, 0.7};
					};
					
					class TargetSelected {
						type = "vector";
						source = "target";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.7, 0.7};
					};
					
					class RangeBone {
						type = "linear";
						source = "targetDist";
						sourceScale = 1;
						min = 0;
						max = 10000;
						minPos[] = {0.8, 0.3};
						maxPos[] = {0.8, 0.7};
					};
					
					class Velocity {
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.38};
						pos10[] = {0.9, 0.78};
					};
					
					class HorizonIndicatorBank {
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1.0;
						center[] = {0.1, 0.8};
						min = -3.1415927;
						max = 3.1415927;
						minAngle = 180;
						maxAngle = -180;
						aspectRatio = 1;
					};
					
					class HorizonIndicatorDive : HorizonIndicatorBank {
						source = "horizonDive";
						min = -3.14159265359 / 2;
						max = 3.14159265359 / 2;
						minAngle = -90;
						maxAngle = 90;
					};
					
					class HorizonDive {
						source = "horizonDive";
						type = "linear";
						min = -3.14159265359 / 2;
						max = 3.14159265359 / 2;
						minPos[] = {0.1, 0.846};
						maxPos[] = {0.1, 0.754};
					};
				};
				
				class Draw {
					color[] = {0.15, 1, 0.15};
					alpha = 0.8;
					condition = "on";
					
					class Left_box {
						type = "line";
						width = 3.0;
						points[] = {{{0.16, 0.4}, 1}, {{0.16 - 0.12, 0.4}, 1}, {{0.16 - 0.12, 0.4 + 0.06}, 1}, {{0.16, 0.4 + 0.06}, 1}, {{0.16, 0.4}, 1}};
					};
					
					class Right_box {
						type = "line";
						width = 3.0;
						points[] = {{{0.84, 0.4}, 1}, {{0.84 + 0.12, 0.4}, 1}, {{0.84 + 0.12, 0.4 + 0.06}, 1}, {{0.84, 0.4 + 0.06}, 1}, {{0.84, 0.4}, 1}};
					};
					
					class Center_box {
						type = "line";
						width = 3.0;
						points[] = {{{0.45, 0.01}, 1}, {{0.45 + 0.10, 0.01}, 1}, {{0.45 + 0.10, 0.01 + 0.05}, 1}, {{0.45, 0.01 + 0.05}, 1}, {{0.45, 0.01}, 1}};
					};
					
					class SpeedNumber {
						type = "text";
						align = "left";
						scale = 1;
						source = "speed";
						width = 2.0;
						sourceScale = 3.6;
						pos[] = {{0.15, 0.4}, 1};
						right[] = {{0.2, 0.4}, 1};
						down[] = {{0.15, 0.45}, 1};
					};
					
					class HeadingNumber : SpeedNumber {
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] = {{0.5, 0.01}, 1};
						right[] = {{0.55, 0.01}, 1};
						down[] = {{0.5, 0.06}, 1};
					};
					
					class AltNumber : SpeedNumber {
						align = "right";
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {{0.85, 0.4}, 1};
						right[] = {{0.9, 0.4}, 1};
						down[] = {{0.85, 0.45}, 1};
					};
					
					class RadarAltitudeText {
						type = "text";
						source = "static";
						text = "R";
						align = "right";
						scale = 1;
						pos[] = {{0.85, 0.48}, 1};
						right[] = {{0.88, 0.48}, 1};
						down[] = {{0.85, 0.51}, 1};
					};
					
					class RadarAltitude {
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.871, 0.48}, 1};
						right[] = {{0.901, 0.48}, 1};
						down[] = {{0.871, 0.51}, 1};
					};
					
					class HorizonIndicator {
						type = "line";
						width = 4.0;
						points[] = {{"HorizonDive", {-0.046, 0}, 1}, {"HorizonDive", {0.046, 0}, 1}};
					};
					
					class Bank_circle {
						type = "line";
						width = 4.0;
						points[] = {{"HorizonIndicatorBank", {-1.2000 * 0.046, -0.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {-1.0000 * 0.046, -0.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.9877 * 0.046, -0.1736 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.9397 * 0.046, -0.3420 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.8660 * 0.046, -0.5000 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.7660 * 0.046, -0.6428 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.6428 * 0.046, -0.7660 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.5000 * 0.046, -0.8660 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.3420 * 0.046, -0.9397 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.1736 * 0.046, -0.9877 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.0000 * 0.046, -1.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {0.1736 * 0.046, -0.9877 * 0.046}, 1}, {"HorizonIndicatorBank", {0.3420 * 0.046, -0.9397 * 0.046}, 1}, {"HorizonIndicatorBank", {0.5000 * 0.046, -0.8660 * 0.046}, 1}, {"HorizonIndicatorBank", {0.6428 * 0.046, -0.7660 * 0.046}, 1}, {"HorizonIndicatorBank", {0.7660 * 0.046, -0.6428 * 0.046}, 1}, {"HorizonIndicatorBank", {0.8660 * 0.046, -0.5000 * 0.046}, 1}, {"HorizonIndicatorBank", {0.9397 * 0.046, -0.3420 * 0.046}, 1}, {"HorizonIndicatorBank", {0.9877 * 0.046, -0.1736 * 0.046}, 1}, {"HorizonIndicatorBank", {1.0000 * 0.046, -0.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {1.2000 * 0.046, -0.0000 * 0.046}, 1}, {}, {"HorizonIndicatorBank", {0.005, 0}, 1}, {"HorizonIndicatorBank", {-0.005, 0}, 1}, {}, {"HorizonIndicatorBank", {0, 0.005}, 1}, {"HorizonIndicatorBank", {0, -0.005}, 1}};
					};
					
					class ATMissileBox {
						condition = "ATmissile";
						type = "group";
						
						class ATMissileCrosshair {
							type = "line";
							width = 4;
							points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15, -0.15 + 0.02}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15, 0.15 - 0.02}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15, -0.15 + 0.02}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15, 0.15 - 0.02}, 1}, {}, {"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15 + 0.02, -0.15}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15 + 0.02, 0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15 - 0.02, -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15 - 0.02, 0.15}, 1}};
						};
					};
					
					class WeaponName {
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.83, 0.81}, 1};
						right[] = {{0.86, 0.81}, 1};
						down[] = {{0.83, 0.84}, 1};
					};
					
					class AmmoCount {
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.83, 0.84}, 1};
						right[] = {{0.86, 0.84}, 1};
						down[] = {{0.83, 0.87}, 1};
					};
					
					class AimingCrosshair {
						type = "group";
						condition = "on";
						
						class MachineGunCrosshair {
							type = "line";
							width = 3;
							points[] = {{{0.020 + 0.5 + 0.02, 0.5}, 1}, {{0.010 + 0.5 + 0.02, 0.5}, 1}, {}, {{0.5, 0.020 + 0.5 + 0.02}, 1}, {{0.5, 0.010 + 0.5 + 0.02}, 1}, {}, {{-0.020 + 0.5 - 0.02, 0.5}, 1}, {{-0.010 + 0.5 - 0.02, 0.5}, 1}, {}, {{0.5, -0.020 + 0.5 - 0.02}, 1}, {{0.5, -0.010 + 0.5 - 0.02}, 1}};
						};
					};
					
					class Range_GUN {
						condition = "mgun";
						type = "group";
						
						class rangeHMD {
							type = "text";
							source = "targetDist";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.82}, 1};
							right[] = {{0.55, 0.82}, 1};
							down[] = {{0.5, 0.87}, 1};
						};
						
						class MasterMODE {
							type = "text";
							source = "static";
							text = GUN;
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.77}, 1};
							right[] = {{0.87, 0.77}, 1};
							down[] = {{0.83, 0.81}, 1};
						};
					};
					
					class Range_RKT {
						condition = "rocket";
						type = "group";
						
						class rangeHMD {
							type = "text";
							source = "targetDist";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.82}, 1};
							right[] = {{0.55, 0.82}, 1};
							down[] = {{0.5, 0.87}, 1};
						};
						
						class MasterMODE {
							type = "text";
							source = "static";
							text = "A-G";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.77}, 1};
							right[] = {{0.87, 0.77}, 1};
							down[] = {{0.83, 0.81}, 1};
						};
					};
					
					class Range_AG {
						condition = "ATmissile";
						type = "group";
						
						class rangeHMD {
							type = "text";
							source = "targetDist";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.82}, 1};
							right[] = {{0.55, 0.82}, 1};
							down[] = {{0.5, 0.87}, 1};
						};
						
						class MasterMODE {
							type = "text";
							source = "static";
							text = "A-G";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.77}, 1};
							right[] = {{0.87, 0.77}, 1};
							down[] = {{0.83, 0.81}, 1};
						};
					};
					
					class Range_AA {
						condition = "AAmissile";
						type = "group";
						
						class rangeHMD {
							type = "text";
							source = "targetDist";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.82}, 1};
							right[] = {{0.55, 0.82}, 1};
							down[] = {{0.5, 0.87}, 1};
						};
						
						class MasterMODE {
							type = "text";
							source = "static";
							text = "A-A";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.77}, 1};
							right[] = {{0.87, 0.77}, 1};
							down[] = {{0.83, 0.81}, 1};
						};
					};
					
					class Range_Bomb {
						condition = "bomb";
						type = "group";
						
						class rangeHMD {
							type = "text";
							source = "targetDist";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.82}, 1};
							right[] = {{0.55, 0.82}, 1};
							down[] = {{0.5, 0.87}, 1};
						};
						
						class MasterMODE {
							type = "text";
							source = "static";
							text = "A-G";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.77}, 1};
							right[] = {{0.87, 0.77}, 1};
							down[] = {{0.83, 0.81}, 1};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035, 0.035, 0.1};
				helmetRight[] = {0.07, 0, 0};
				helmetDown[] = {0, -0.07, 0};
			};
		};
	};
};
