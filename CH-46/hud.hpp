class AirplaneHUD {
	borderbottom = 0.1;
	borderleft = 0.09;
	borderright = 0.02;
	bordertop = 0.02;
	bottomleft = "HUD LD";
	color[] = {0, 1, 0, 0.1};
	helmetdown[] = {0, -0.05, 0};
	helmetmounteddisplay = 1;
	helmetposition[] = {-0.025, 0.025, 0.1};
	helmetright[] = {0.05, 0, 0};
	topleft = "HUD LH";
	topright = "HUD PH";
	class Pos10Vector {
		pos0[] = {0.5, 0.27};
		pos10[] = {"0.5+0.9", "0.27+0.7"};
		type = "vector";
	};
	class Bones {
		class AGLMove1 {
			max = 100;
			maxpos[] = {0.05, 0.8};
			min = 0;
			minpos[] = {0.05, 0.1};
			source = "altitudeAGL";
			type = "linear";
		};
		class AGLMove2 {
			pos[] = {0.05, 0.8};
			type = "fixed";
		};
		class ASLMove1 {
			max = 500;
			maxpos[] = {0.1, 0.8};
			min = 0;
			minpos[] = {0.1, 0.1};
			source = "altitudeASL";
			type = "linear";
		};
		class ASLMove2 {
			pos[] = {0.1, 0.8};
			type = "fixed";
		};
		class VertSpeed {
			max = 25;
			maxpos[] = {0, 0.4};
			min = -25;
			minpos[] = {0, -0.4};
			source = "vSpeed";
			type = "linear";
		};
		class SpdMove2 {
			max = 200;
			maxpos[] = {0.94, 0.87};
			min = 33;
			minpos[] = {0.94, 0.1};
			source = "speed";
			type = "linear";
		};
		class ILS {
			pos0[] = {0.5, 0.4};
			pos3[] = {0.7, 0.6};
			type = "ils";
		};
		class WeaponAim: Pos10Vector {
			source = "weapon";
		};
		class Target: Pos10Vector {
			source = "target";
		};
		class TargetDistanceMissile {
			center[] = {0, 0};
			max = 3000;
			maxangle = 120;
			min = 100;
			minangle = -120;
			source = "targetDist";
			type = "rotational";
		};
		class TargetDistanceMGun {
			center[] = {0, 0};
			max = 1000;
			maxangle = 90;
			min = 100;
			minangle = -180;
			source = "targetDist";
			type = "rotational";
		};
		class Level0: Pos10Vector {
			angle = 0;
			type = "horizon";
		};
		class LevelP5: Level0 {
			angle = 5;
		};
		class LevelM5: Level0 {
			angle = -5;
		};
		class LevelP10: Level0 {
			angle = 10;
		};
		class LevelM10: Level0 {
			angle = -10;
		};
		class LevelP15: Level0 {
			angle = 15;
		};
		class LevelM15: Level0 {
			angle = -15;
		};
		class Velocity: Pos10Vector {
			source = "velocity";
			type = "vector";
		};
		class PlaneW {
			pos[] = {0.5, 0.27};
			type = "fixed";
		};
	};
	class Draw {
		alpha = 0.8;
		clipbr[] = {1, 0.9};
		cliptl[] = {0, 0.05};
		color[] = {0.1, 0.5, 0.05};
		condition = "on";
		class Altitude {
			points[] = {{"AGLMove1", 1}, {"AGLMove2", 1}, {}, {"ASLMove2", 1}, {"ASLMove1", 1}, {"ASLMove1", {0.02, 0}, 1}, {"ASLMove1", {0.02, 0}, 1, "VertSpeed", 1}};
			type = "line";
		};
		class DimmedBase {
			alpha = 0.3;
			class AltitudeBase {
				points[] = {{"AGLMove2", 1}, {"ASLMove2", 1}};
				type = "line";
			};
		};
		class Speed {
			points[] = {{{0.95, 0.87}, 1}, {{0.95, 0.1}, 1}, {}, {"SpdMove2", {-0.05, 0}, 1}, {"SpdMove2", 1}};
			type = "line";
		};
		class SpeedNumber {
			align = "left";
			down[] = {"SpdMove2", {-0.05, 0.03}, 1};
			pos[] = {"SpdMove2", {-0.05, -0.03}, 1};
			right[] = {"SpdMove2", {0.01, -0.03}, 1};
			scale = 1;
			source = "speed";
			sourcescale = 3.6;
			type = "text";
		};
		class PlaneW {
			clipbr[] = {1, 0.9};
			cliptl[] = {0, 0.1};
			class LineHL {
				points[] = {{"PlaneW", {-0.07, 0}, 1}, {"PlaneW", {-0.02, 0}, 1}, {"PlaneW", {0, -0.02}, 1}, {"PlaneW", {0.02, 0}, 1}, {"PlaneW", {0, 0.02}, 1}, {"PlaneW", {-0.02, 0}, 1}, {}, {"PlaneW", {0.02, 0}, 1}, {"PlaneW", {0.07, 0}, 1}};
				type = "line";
			};
			class Velocity {
				points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {0, -0.02}, 1}};
				type = "line";
			};
		};
		class MGun {
			condition = "mgun";
			class Circle {
				points[] = {{"WeaponAim", {0, -0.07}, 1}, {"WeaponAim", {"+0.7*0.07", "-0.7*0.07"}, 1}, {"WeaponAim", {0.07, 0}, 1}, {"WeaponAim", {"+0.7*0.07", "+0.7*0.07"}, 1}, {"WeaponAim", {0, 0.07}, 1}, {"WeaponAim", {"-0.7*0.07", "+0.7*0.07"}, 1}, {"WeaponAim", {-0.07, 0}, 1}, {"WeaponAim", {"-0.7*0.07", "-0.7*0.07"}, 1}, {"WeaponAim", {0, -0.07}, 1}, {}, {"WeaponAim", {0, -0.01}, 1}, {"WeaponAim", {"+0.7*0.01", "-0.7*0.01"}, 1}, {"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {"+0.7*0.01", "+0.7*0.01"}, 1}, {"WeaponAim", {0, 0.01}, 1}, {"WeaponAim", {"-0.7*0.01", "+0.7*0.01"}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {"WeaponAim", {"-0.7*0.01", "-0.7*0.01"}, 1}, {"WeaponAim", {0, -0.01}, 1}, {}, {"WeaponAim", {"0.03*sin(-180)", "-0.03*cos(-180)"}, 1}, {"WeaponAim", {"0.07*sin(-180)", "-0.07*cos(-180)"}, 1}, {}, {"WeaponAim", {"0.03*sin(+90)", "-0.03*cos(+90)"}, 1}, {"WeaponAim", {"0.07*sin(+90)", "-0.07*cos(+90)"}, 1}, {}, {"WeaponAim", 1, "TargetDistanceMGun", {0, 0.04}, 1}, {"WeaponAim", 1, "TargetDistanceMGun", {0, 0.07}, 1}};
				type = "line";
			};
		};
		class Missile {
			condition = "missile";
			class Circle {
				points[] = {{"WeaponAim", {0, -0.1}, 1}, {"WeaponAim", {"+0.7*0.1", "-0.7*0.1"}, 1}, {"WeaponAim", {0.1, 0}, 1}, {"WeaponAim", {"+0.7*0.1", "+0.7*0.1"}, 1}, {"WeaponAim", {0, 0.1}, 1}, {"WeaponAim", {"-0.7*0.1", "+0.7*0.1"}, 1}, {"WeaponAim", {-0.1, 0}, 1}, {"WeaponAim", {"-0.7*0.1", "-0.7*0.1"}, 1}, {"WeaponAim", {0, -0.1}, 1}, {}, {"WeaponAim", {"0.1*0.8*sin(-120)", "-0.1*0.8*cos(-120)"}, 1}, {"WeaponAim", {"0.1*1.2*sin(-120)", "-0.1*1.2*cos(-120)"}, 1}, {}, {"WeaponAim", {"0.1*0.8*sin(+120)", "-0.1*0.8*cos(+120)"}, 1}, {"WeaponAim", {"0.1*1.2*sin(+120)", "-0.1*1.2*cos(+120)"}, 1}, {}, {"WeaponAim", 1, "TargetDistanceMissile", {0, "0.1*0.8"}, 1}, {"WeaponAim", 1, "TargetDistanceMissile", {0, "0.1*1.2"}, 1}};
				type = "line";
			};
			class Target {
				points[] = {{"Target", {-0.05, -0.05}, 1}, {"Target", {0.05, -0.05}, 1}, {"Target", {0.05, 0.05}, 1}, {"Target", {-0.05, 0.05}, 1}, {"Target", {-0.05, -0.05}, 1}};
				type = "line";
			};
		};
		class Horizont {
			clipbr[] = {0.8, 0.9};
			cliptl[] = {0.2, 0.1};
			class Dimmed {
				alpha = 0.6;
				class Level0 {
					points[] = {{"Level0", {-0.4, 0}, 1}, {"Level0", {-0.13, 0}, 1}, {}, {"Level0", {0.13, 0}, 1}, {"Level0", {0.4, 0}, 1}};
					type = "line";
				};
			};
			class LevelP5 {
				points[] = {{"LevelP5", {-0.15, 0.03}, 1}, {"LevelP5", {-0.15, 0}, 1}, {"LevelP5", {0.15, 0}, 1}, {"LevelP5", {0.15, 0.03}, 1}};
				type = "line";
			};
			class LevelM5 {
				points[] = {{"LevelM5", {-0.15, -0.03}, 1}, {"LevelM5", {-0.15, 0}, 1}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.15, -0.03}, 1}};
				type = "line";
			};
			class LevelP10 {
				points[] = {{"LevelP10", {-0.2, 0.05}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.05}, 1}};
				type = "line";
			};
			class LevelM10 {
				points[] = {{"LevelM10", {-0.2, -0.05}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.05}, 1}};
				type = "line";
			};
			class LevelP15 {
				points[] = {{"LevelP15", {-0.2, 0.07}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.07}, 1}};
				type = "line";
			};
			class LevelM15 {
				points[] = {{"LevelM15", {-0.2, -0.07}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.07}, 1}};
				type = "line";
			};
		};
		class ILS {
			condition = "ils";
			class Glideslope {
				clipbr[] = {0.71, 0.71};
				cliptl[] = {0.29, 0.29};
				class ILS {
					points[] = {{"ILS", {-10, 0}, 1}, {"ILS", {10, 0}, 1}, {}, {"ILS", {0, -10}, 1}, {"ILS", {0, 10}, 1}};
					type = "line";
				};
			};
			class AOABracket {
				points[] = {{{0.42, 0.78}, 1}, {{0.4, 0.78}, 1}, {{0.4, 0.88}, 1}, {{0.42, 0.88}, 1}};
				type = "line";
			};
		};
	};
};