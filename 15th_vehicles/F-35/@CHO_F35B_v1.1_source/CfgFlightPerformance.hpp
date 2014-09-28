		landingSpeed = 220;		/// used for AI to approach the runawy, the plane should be stable at this speed
		acceleration = 300; 	/// used for AI to plan the waypoints and accelerating, doesn't affect plane performance
		maxSpeed = 1400;		/// maximal speed of the plane, affects even thrust and is base for both envelope and thrustCoef

		rudderInfluence = 0.5;		/// coefficient of rudder affecting steering of the plane
		aileronSensitivity = 1.1; // relative aileron sensitivity
		elevatorSensitivity = 0.8; // relative elevator sensitivity

		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		envelope[]=
		{
			// speed relative to max. speed -> lift
			// 0.0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0 1.1 1.2 1.3 1.4  // rel. speed
			0.0,0.4,1.9,4,6.8,8.3,8.5,8,7.2,5.8,4,1.8,0.5,0
		};

		/// angle of incidence - difference between forward and airfold chord line - def. val is 3*PI/180 (meaning three degrees)
		angleOfIndicence = 0.05235987;

		/// forces keeping plane aligned with its speed direction - the bigger force the better it changes the direction of flight
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;

		/// thrust effectiveness; if empty old settings is used 
		// effectiveness according to current speed and maxSpeed ratio
		// last value goes for 150% of max speed
		thrustCoef[]= {1.5, 1.2, 1.1, 1.0, 1.0, 1.0, 1.0, 0.9, 0.7, 0.5, 0.3, 0.1, 0.0, 0.0, 0.0, 0.0};

		landingAoa = "rad 7"; 	/// what AoA is going the IA use to land the plane
		/*brakeDistance = 65;
		aileronSensitivity = 1.5;
		elevatorSensitivity = 0.9;
		wheelSteeringSensitivity = 1.5;
		flapsFrictionCoef = 0.2;
		landingSpeed = 200;
		landingAoa = "rad 10";
		acceleration = 200;
		maxSpeed = 1100;
		airFriction0[] = {100,50,12};
		airFriction1[] = {100,50,12};
		airFriction2[] = {100,50,12};
		noseDownCoef = 0;
		gunAimDown = 0.0;
		altFullForce = 10000;
		altNoForce = 9000;*/