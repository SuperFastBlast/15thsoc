		class MFD {
			class AirplaneHUD {
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0.2;
				color[] = {0.15, 1.0, 0.15, 1.0};
				enableParallax = 1;
				
				class Bones {
					class PlaneOrientation {
						type = "fixed";
						pos[] = {0.498, 0.38};
					};
					
					class WeaponAim {
						type = "vector";
						source = "weapon";
						pos0[] = {0.498, 0.38};
						pos10[] = {1.298, 1.38};
					};
					
					class Target {
						type = "vector";
						source = "target";
						pos0[] = {0.498, 0.38};
						pos10[] = {1.298, 1.38};
					};
					
					class Velocity {
						type = "vector";
						source = "velocity";
						pos0[] = {0.498, 0.38};
						pos10[] = {1.298, 1.38};
					};
					
					class ILS_H {
						type = "ils";
						pos0[] = {0.5, 0.5};
						pos3[] = {0.605, 0.5};
					};
					
					class ILS_W : ILS_H {
						pos3[] = {0.5, 0.605};
					};
					
					class Level0 {
						type = "horizon";
						pos0[] = {0.5, 0.38 + 0.00};
						pos10[] = {1.3, 1.38};
						angle = 0;
					};
					
					class VerticalSpeed {
						type = "linear";
						source = "vspeed";
						sourceScale = 1.0;
						min = -100;
						max = 100;
						minPos[] = {0.0, 0.15};
						maxPos[] = {0.0, -0.15};
					};
					
					class HorizonIndicatorBank {
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1.0;
						center[] = {0.065, 0.12};
						min = -3.14159;
						max = 3.14159;
						minAngle = 0;
						maxAngle = 360;
						aspectRatio = 1 / (0.8 /1 );
					};
					
					class HorizonIndicatorDive : HorizonIndicatorBank {
						source = "horizonDive";
						min = -3.14159265359 / 2;
						max = 3.14159265359 / 2;
						minAngle = 90;
						maxAngle = -90;
					};
				};
				
				class Draw {
					color[] = {0.15, 1.0, 0.15};
					alpha = 1;
					condition = "on";
					
					class PlaneOrientationCrosshair {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						width = 4.0;
						points[] = {{"PlaneOrientation", {0, -0.025}, 1}, {"PlaneOrientation", {0.01, -0.02165}, 1}, {"PlaneOrientation", {0.01732, -0.0125}, 1}, {"PlaneOrientation", {0.02, 0}, 1}, {"PlaneOrientation", {0.01732, 0.0125}, 1}, {"PlaneOrientation", {0.01, 0.02165}, 1}, {"PlaneOrientation", {0, 0.025}, 1}, {"PlaneOrientation", {-0.01, 0.02165}, 1}, {"PlaneOrientation", {-0.01732, 0.0125}, 1}, {"PlaneOrientation", {-0.02, 0}, 1}, {"PlaneOrientation", {-0.01732, -0.0125}, 1}, {"PlaneOrientation", {-0.01, -0.02165}, 1}, {"PlaneOrientation", {0, -0.025}, 1}};
					};
					
					class PlaneMovementCrosshair {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						width = 4.0;
						points[] = {{"Velocity", {0, -0.025}, 1}, {"Velocity", {0.01, -0.02165}, 1}, {"Velocity", {0.01732, -0.0125}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.01732, 0.0125}, 1}, {"Velocity", {0.01, 0.02165}, 1}, {"Velocity", {0, 0.025}, 1}, {"Velocity", {-0.01, 0.02165}, 1}, {"Velocity", {-0.01732, 0.0125}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.01732, -0.0125}, 1}, {"Velocity", {-0.01, -0.02165}, 1}, {"Velocity", {0, -0.025}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.05}, 1}, {"Velocity", {0, -0.025}, 1}, {}};
					};
					
					class MachineGunCrosshairGroup {
						type = "group";
						condition = "mgun";
						
						class MachineGunCrosshair {
							type = "line";
							width = 4.0;
							points[] = {{"WeaponAim", {0.0, -0.05/(0.8 /1 )}, 1}, {"WeaponAim", {0.0, -0.015/(0.8 /1 )}, 1}, {}, {"WeaponAim", {-0.05, 0.0/(0.8 /1 )}, 1}, {"WeaponAim", {-0.015, 0.0/(0.8 /1 )}, 1}, {}, {"WeaponAim", {0.0, 0.05/(0.8 /1 )}, 1}, {"WeaponAim", {0.0, 0.015/(0.8 /1 )}, 1}, {}, {"WeaponAim", {0.05, 0.0/(0.8 /1 )}, 1}, {"WeaponAim", {0.015, 0.0/(0.8 /1 )}, 1}};
						};
					};
					
					class AAMissileCrosshairGroup {
						type = "group";
						condition = "AAmissile";
						
						class AAMissileCrosshair {
							type = "line";
							width = 4.0;
							points[] = {{"WeaponAim", {0, -0.3125}, 1}, {"WeaponAim", {0.0434, -0.30775}, 1}, {"WeaponAim", {0.0855, -0.293656}, 1}, {"WeaponAim", {0.125, -0.270625}, 1}, {"WeaponAim", {0.1607, -0.239375}, 1}, {"WeaponAim", {0.1915, -0.200875}, 1}, {"WeaponAim", {0.2165, -0.15625}, 1}, {"WeaponAim", {0.234925, -0.106875}, 1}, {"WeaponAim", {0.2462, -0.05425}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2462, 0.05425}, 1}, {"WeaponAim", {0.234925, 0.106875}, 1}, {"WeaponAim", {0.2165, 0.15625}, 1}, {"WeaponAim", {0.1915, 0.200875}, 1}, {"WeaponAim", {0.1607, 0.239375}, 1}, {"WeaponAim", {0.125, 0.270625}, 1}, {"WeaponAim", {0.0855, 0.293656}, 1}, {"WeaponAim", {0.0434, 0.30775}, 1}, {"WeaponAim", {0, 0.3125}, 1}, {"WeaponAim", {-0.0434, 0.30775}, 1}, {"WeaponAim", {-0.0855, 0.293656}, 1}, {"WeaponAim", {-0.125, 0.270625}, 1}, {"WeaponAim", {-0.1607, 0.239375}, 1}, {"WeaponAim", {-0.1915, 0.200875}, 1}, {"WeaponAim", {-0.2165, 0.15625}, 1}, {"WeaponAim", {-0.234925, 0.106875}, 1}, {"WeaponAim", {-0.2462, 0.05425}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2462, -0.05425}, 1}, {"WeaponAim", {-0.234925, -0.106875}, 1}, {"WeaponAim", {-0.2165, -0.15625}, 1}, {"WeaponAim", {-0.1915, -0.200875}, 1}, {"WeaponAim", {-0.1607, -0.239375}, 1}, {"WeaponAim", {-0.125, -0.270625}, 1}, {"WeaponAim", {-0.0855, -0.293656}, 1}, {"WeaponAim", {-0.0434, -0.30775}, 1}, {"WeaponAim", {0, -0.3125}, 1}};
						};
					};
					
					class ATMissileCrosshairGroup {
						condition = "ATmissile";
						type = "group";
						
						class ATMissileCrosshair {
							type = "line";
							width = 4.0;
							points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15, -0.15 + 0.02}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15, 0.15 - 0.02}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15, -0.15 + 0.02}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15, 0.15 - 0.02}, 1}, {}, {"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15 + 0.02, -0.15}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15 + 0.02, 0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15 - 0.02, -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15 - 0.02, 0.15}, 1}};
						};
					};
					
					class BombCrosshairGroup {
						type = "group";
						condition = "bomb";
						
						class BombCrosshair {
							type = "line";
							width = 4.0;
							points[] = {{"WeaponAim", {0, -0.125}, 1}, {"WeaponAim", {0.01736, -0.1231}, 1}, {"WeaponAim", {0.0342, -0.117463}, 1}, {"WeaponAim", {0.05, -0.10825}, 1}, {"WeaponAim", {0.06428, -0.09575}, 1}, {"WeaponAim", {0.0766, -0.08035}, 1}, {"WeaponAim", {0.0866, -0.0625}, 1}, {"WeaponAim", {0.09397, -0.04275}, 1}, {"WeaponAim", {0.09848, -0.0217}, 1}, {"WeaponAim", {0.1, 0}, 1}, {"WeaponAim", {0.09848, 0.0217}, 1}, {"WeaponAim", {0.09397, 0.04275}, 1}, {"WeaponAim", {0.0866, 0.0625}, 1}, {"WeaponAim", {0.0766, 0.08035}, 1}, {"WeaponAim", {0.06428, 0.09575}, 1}, {"WeaponAim", {0.05, 0.10825}, 1}, {"WeaponAim", {0.0342, 0.117463}, 1}, {"WeaponAim", {0.01736, 0.1231}, 1}, {"WeaponAim", {0, 0.125}, 1}, {"WeaponAim", {-0.01736, 0.1231}, 1}, {"WeaponAim", {-0.0342, 0.117463}, 1}, {"WeaponAim", {-0.05, 0.10825}, 1}, {"WeaponAim", {-0.06428, 0.09575}, 1}, {"WeaponAim", {-0.0766, 0.08035}, 1}, {"WeaponAim", {-0.0866, 0.0625}, 1}, {"WeaponAim", {-0.09397, 0.04275}, 1}, {"WeaponAim", {-0.09848, 0.0217}, 1}, {"WeaponAim", {-0.1, 0}, 1}, {"WeaponAim", {-0.09848, -0.0217}, 1}, {"WeaponAim", {-0.09397, -0.04275}, 1}, {"WeaponAim", {-0.0866, -0.0625}, 1}, {"WeaponAim", {-0.0766, -0.08035}, 1}, {"WeaponAim", {-0.06428, -0.09575}, 1}, {"WeaponAim", {-0.05, -0.10825}, 1}, {"WeaponAim", {-0.0342, -0.117463}, 1}, {"WeaponAim", {-0.01736, -0.1231}, 1}, {"WeaponAim", {0, -0.125}, 1}, {}, {"Velocity", 0.001, "WeaponAim", {0.0, 0.0}, 1}, {"Velocity", {0.0, 0.0}, 1}};
						};
					};
					
					class WeaponName {
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.02, 0.85}, 1};
						right[] = {{0.06, 0.85}, 1};
						down[] = {{0.02, 0.89}, 1};
					};
					
					class AmmoCount {
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.96, 0.85}, 1};
						right[] = {{1.0, 0.85}, 1};
						down[] = {{0.96, 0.89}, 1};
					};
					
					class FlapsGroup {
						type = "group";
						condition = "flaps";
						
						class FlapsText {
							type = "text";
							source = "static";
							text = FLAPS;
							align = "left";
							scale = 1;
							pos[] = {{0.09, 0.455 + 0*0.045}, 1};
							right[] = {{0.13, 0.455 + 0*0.045}, 1};
							down[] = {{0.09, 0.495 + 0*0.045}, 1};
						};
					};
					
					class GearGroup {
						type = "group";
						condition = "ils";
						
						class GearText {
							type = "text";
							source = "static";
							text = GEAR;
							align = "left";
							scale = 1;
							pos[] = {{0.093, 0.50 + 0*0.045}, 1};
							right[] = {{0.133, 0.50 + 0*0.045}, 1};
							down[] = {{0.093, 0.54 + 0*0.045}, 1};
						};
					};
					
					class PitchNumber {
						type = "text";
						source = "horizonDive";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.13, 0.225 + 1*0.045}, 1};
						right[] = {{0.17, 0.225 + 1*0.045}, 1};
						down[] = {{0.13, 0.265 + 1*0.045}, 1};
					};
					
					class PitchText {
						type = "text";
						source = "static";
						text = PITCH;
						align = "left";
						scale = 1;
						pos[] = {{0.092, 0.225 + 1*0.045}, 1};
						right[] = {{0.132, 0.225 + 1*0.045}, 1};
						down[] = {{0.092, 0.265 + 1*0.045}, 1};
					};
					
					class RollNumber {
						type = "text";
						source = "horizonBank";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.13, 0.27 + 1*0.045}, 1};
						right[] = {{0.17, 0.27 + 1*0.045}, 1};
						down[] = {{0.13, 0.31 + 1*0.045}, 1};
					};
					
					class RollText {
						type = "text";
						source = "static";
						text = ROLL;
						align = "left";
						scale = 1;
						pos[] = {{0.096, 0.27 + 1*0.045}, 1};
						right[] = {{0.136, 0.27 + 1*0.045}, 1};
						down[] = {{0.096, 0.31 + 1*0.045}, 1};
					};
					
					class SpeedNumber {
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = {{0.13, 0.36}, 1};
						right[] = {{0.17, 0.36}, 1};
						down[] = {{0.13, 0.4}, 1};
					};
					
					class SpeedText {
						type = "text";
						source = "static";
						text = SPEED;
						align = "left";
						scale = 1;
						pos[] = {{0.091, 0.36}, 1};
						right[] = {{0.131, 0.36}, 1};
						down[] = {{0.091, 0.4}, 1};
					};
					
					class SpeedSeparator {
						type = "line";
						width = 2.0;
						points[] = {{{0.121, 0.36 - 2 * 0.045}, 1}, {{0.121, 0.543 + 0 * 0.045}, 1}};
					};
					
					class Climb {
						type = "line";
						width = 2.0;
						points[] = {{"VerticalSpeed", {0.875, 0.38 - 0.16}, 1}, {"VerticalSpeed", {0.875, 0.38 + 0.16}, 1}, {}, {"VerticalSpeed", {0.868, 0.38 - 0.15}, 1}, {"VerticalSpeed", {0.874, 0.38 - 0.15}, 1}, {}, {"VerticalSpeed", {0.866, 0.38 - 0.12}, 1}, {"VerticalSpeed", {0.874, 0.38 - 0.12}, 1}, {}, {"VerticalSpeed", {0.866, 0.38 - 0.09}, 1}, {"VerticalSpeed", {0.874, 0.38 - 0.09}, 1}, {}, {"VerticalSpeed", {0.866, 0.38 - 0.06}, 1}, {"VerticalSpeed", {0.874, 0.38 - 0.06}, 1}, {}, {"VerticalSpeed", {0.866, 0.38 - 0.03}, 1}, {"VerticalSpeed", {0.874, 0.38 - 0.03}, 1}, {}, {"VerticalSpeed", {0.857, 0.38}, 1}, {"VerticalSpeed", {0.874, 0.38}, 1}, {}, {"VerticalSpeed", {0.874, 0.38 + 0.03}, 1}, {"VerticalSpeed", {0.866, 0.38 + 0.03}, 1}, {}, {"VerticalSpeed", {0.874, 0.38 + 0.06}, 1}, {"VerticalSpeed", {0.866, 0.38 + 0.06}, 1}, {}, {"VerticalSpeed", {0.874, 0.38 + 0.09}, 1}, {"VerticalSpeed", {0.866, 0.38 + 0.09}, 1}, {}, {"VerticalSpeed", {0.874, 0.38 + 0.12}, 1}, {"VerticalSpeed", {0.866, 0.38 + 0.12}, 1}, {}, {"VerticalSpeed", {0.874, 0.38 + 0.15}, 1}, {"VerticalSpeed", {0.868, 0.38 + 0.15}, 1}};
					};
					
					class ClimbMinGroup {
						type = "group";
						clipTL[] = {0.82, 0.4};
						clipBR[] = {0.88, 0.69};
						
						class ClimbMin {
							type = "text";
							source = "static";
							text = -100;
							align = "left";
							scale = 1;
							pos[] = {"VerticalSpeed", {0.86, 0.51}, 1};
							right[] = {"VerticalSpeed", {0.885, 0.51}, 1};
							down[] = {"VerticalSpeed", {0.86, 0.54}, 1};
						};
					};
					
					class ClimbMaxGroup {
						type = "group";
						clipTL[] = {0.82, 0.06};
						clipBR[] = {0.88, 0.36};
						
						class ClimbMax {
							type = "text";
							source = "static";
							text = 100;
							align = "left";
							scale = 1;
							pos[] = {"VerticalSpeed", {0.86, 0.21}, 1};
							right[] = {"VerticalSpeed", {0.885, 0.21}, 1};
							down[] = {"VerticalSpeed", {0.86, 0.24}, 1};
						};
					};
					
					class ClimbText {
						type = "text";
						source = "static";
						text = CLIMB;
						align = "left";
						scale = 1;
						pos[] = {{0.85, 0.72}, 1};
						right[] = {{0.875, 0.72}, 1};
						down[] = {{0.85, 0.75}, 1};
					};
					
					class AltitudeNumber {
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.83, 0.36}, 1};
						right[] = {{0.87, 0.36}, 1};
						down[] = {{0.83, 0.4}, 1};
					};
					
					class AltitudeText {
						type = "text";
						source = "static";
						text = AGL;
						align = "right";
						scale = 1;
						pos[] = {{0.88, 0.72}, 1};
						right[] = {{0.92, 0.72}, 1};
						down[] = {{0.88, 0.76}, 1};
					};
					
					class AltitudeArrow {
						type = "line";
						width = 3.0;
						points[] = {{{0.875 - 0.018, 0.38 - 0.016}, 1}, {{0.875, 0.38}, 1}, {{0.875 - 0.018, 0.38 + 0.016}, 1}, {}, {{0.88 + 0.018, 0.38 - 0.016}, 1}, {{0.88, 0.38}, 1}, {{0.88 + 0.018, 0.38 + 0.016}, 1}};
					};
					
					class AltitudeScale {
						type = "scale";
						horizontal = 0;
						source = "altitudeAGL";
						sourceScale = 1;
						width = 4.0;
						top = 0.71;
						center = 0.38;
						bottom = 0.05;
						lineXleft = 0.88;
						lineYright = 0.89;
						lineXleftMajor = 0.88;
						lineYrightMajor = 0.9;
						majorLineEach = 5;
						numberEach = 10;
						step = 10;
						stepSize = 0.025;
						align = "right";
						scale = 1;
						pos[] = {0.91, 0.69};
						right[] = {0.95, 0.69};
						down[] = {0.91, 0.73};
					};
					
					class HeadingArrows {
						type = "line";
						width = 3.0;
						points[] = {{{0.5 - 0.016, 0.915 - 0.018}, 1}, {{0.5, 0.915}, 1}, {{0.5 + 0.016, 0.915 - 0.018}, 1}, {}, {{0.5 - 0.016, 0.98 + 0.018}, 1}, {{0.5, 0.98}, 1}, {{0.5 + 0.016, 0.98 + 0.018}, 1}};
					};
					
					class HeadingScale {
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1.0;
						width = 4.0;
						top = 0.05;
						center = 0.5;
						bottom = 0.95;
						lineXleft = 0.93;
						lineYright = 0.92;
						lineXleftMajor = 0.94;
						lineYrightMajor = 0.92;
						majorLineEach = 3;
						numberEach = 9;
						step = 5;
						stepSize = 0.02;
						align = "center";
						scale = 1.0;
						pos[] = {0.05, 0.94};
						right[] = {0.09, 0.94};
						down[] = {0.05, 0.98};
					};
					
					class HorizontalLine {
						clipTL[] = {0.2, 0.0};
						clipBR[] = {0.8, 0.76};
						
						class HorizontalLineDraw {
							type = "line";
							source = "Level0";
							points[] = {{"Level0", {-6 * 0.075/2, 0}, 1}, {"Level0", {-5 * 0.075/2, 0}, 1}, {}, {"Level0", {-4 * 0.075/2, 0}, 1}, {"Level0", {-3 * 0.075/2, 0}, 1}, {}, {"Level0", {-2 * 0.075/2, 0}, 1}, {"Level0", {-1 * 0.075/2, 0}, 1}, {}, {"Level0", {1 * 0.075/2, 0}, 1}, {"Level0", {2 * 0.075/2, 0}, 1}, {}, {"Level0", {3 * 0.075/2, 0}, 1}, {"Level0", {4 * 0.075/2, 0}, 1}, {}, {"Level0", {5 * 0.075/2, 0}, 1}, {"Level0", {6 * 0.075/2, 0}, 1}};
						};
					};
					
					class HorizonIndicatorBackground {
						type = "line";
						width = 2.0;
						points[] = {{{-1.4 * 0.046 + 0.065, 0.0000 * 0.046 + 0.12}, 1}, {{1.4 * 0.046 + 0.065, 0.0000 * 0.046 + 0.12}, 1}};
					};
					
					class HorizonIndicator {
						type = "line";
						width = 4.0;
						points[] = {{"HorizonIndicatorBank", {-1.2000 * 0.046, 0.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {-1.0000 * 0.046, 0.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.9877 * 0.046, 0.1736 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.9397 * 0.046, 0.3420 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.8660 * 0.046, 0.5000 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.7660 * 0.046, 0.6428 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.6428 * 0.046, 0.7660 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.5000 * 0.046, 0.8660 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.3420 * 0.046, 0.9397 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.1736 * 0.046, 0.9877 * 0.046}, 1}, {"HorizonIndicatorBank", {-0.0000 * 0.046, 1.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {0.1736 * 0.046, 0.9877 * 0.046}, 1}, {"HorizonIndicatorBank", {0.3420 * 0.046, 0.9397 * 0.046}, 1}, {"HorizonIndicatorBank", {0.5000 * 0.046, 0.8660 * 0.046}, 1}, {"HorizonIndicatorBank", {0.6428 * 0.046, 0.7660 * 0.046}, 1}, {"HorizonIndicatorBank", {0.7660 * 0.046, 0.6428 * 0.046}, 1}, {"HorizonIndicatorBank", {0.8660 * 0.046, 0.5000 * 0.046}, 1}, {"HorizonIndicatorBank", {0.9397 * 0.046, 0.3420 * 0.046}, 1}, {"HorizonIndicatorBank", {0.9877 * 0.046, 0.1736 * 0.046}, 1}, {"HorizonIndicatorBank", {1.0000 * 0.046, 0.0000 * 0.046}, 1}, {"HorizonIndicatorBank", {1.2000 * 0.046, 0.0000 * 0.046}, 1}};
					};
					
					class ILS {
						condition = "ils";
						
						class Glideslope {
							clipTL[] = {0.0, 0.0};
							clipBR[] = {1.0, 1.0};
							
							class ILS {
								type = "line";
								points[] = {{ILS_W, {-0.24, 0}, 1}, {ILS_W, {0.24, 0}, 1}, {}, {ILS_W, {0, 0.0272165}, 1}, {ILS_W, {0, -0.0272165}, 1}, {}, {ILS_W, {0.12, 0.0272165}, 1}, {ILS_W, {0.12, -0.0272165}, 1}, {}, {ILS_W, {0.24, 0.0272165}, 1}, {ILS_W, {0.24, -0.0272165}, 1}, {}, {ILS_W, {-0.12, 0.0272165}, 1}, {ILS_W, {-0.12, -0.0272165}, 1}, {}, {ILS_W, {-0.24, 0.0272165}, 1}, {ILS_W, {-0.24, -0.0272165}, 1}, {}, {ILS_H, {0, -0.272165}, 1}, {ILS_H, {0, 0.272165}, 1}, {}, {ILS_H, {0.024, 0}, 1}, {ILS_H, {-0.024, 0}, 1}, {}, {ILS_H, {0.024, 0.136082}, 1}, {ILS_H, {-0.024, 0.136082}, 1}, {}, {ILS_H, {0.024, 0.272165}, 1}, {ILS_H, {-0.024, 0.272165}, 1}, {}, {ILS_H, {0.024, -0.136082}, 1}, {ILS_H, {-0.024, -0.136082}, 1}, {}, {ILS_H, {0.024, -0.272165}, 1}, {ILS_H, {-0.024, -0.272165}, 1}};
							};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025, 0.025, 0.1};
				helmetRight[] = {0.05, 0.0, 0.0};
				helmetDown[] = {0.0, -0.05, 0.0};
			};
		};