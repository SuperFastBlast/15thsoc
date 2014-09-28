		class Reflectors
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1};	/// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100, 0};		/// the same definition format for colouring the environment around
				position = "light_left";			/// name of memory point in model to take the origin of the light
				direction = "light_left_end";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "light_left";			/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "light_left";			/// name of selection in visual lods of the model that are going to be hidden while the light is off
				size = 1;
				innerAngle = 20;					/// angle from light direction vector where the light is at full strength
				outerAngle = 60;					/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					/// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = 1;						/// boolean switch if the light produces flare or not
				dayLight = 0;						/// boolean switch if the light is used during day or not
				FlareSize = 4;						/// how big is the flare, using the same metrics as intensity
				
				class Attenuation					/// describes how fast does the light dim
				{
					start = 1;						/// offset of start of the attenuation
					constant = 0;					/// constant attenuation of the light in any distance from source
					linear = 0;						/// coefficient for linear attenuation
					quadratic = 4;					/// coefficient for attenuation with square of distance from source
					
					hardLimitStart = 150;			/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				/// distance from source where the light is not displayed (shorter distances increase performance)				
				};
			};
			
			class Right
			{
				color[] = {7000, 7500, 10000, 1};	/// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100, 0};		/// the same definition format for colouring the environment around
				position = "light_left";			/// name of memory point in model to take the origin of the light
				direction = "light_left_end";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "light_left";			/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "light_left";			/// name of selection in visual lods of the model that are going to be hidden while the light is off
				size = 1;
				innerAngle = 20;					/// angle from light direction vector where the light is at full strength
				outerAngle = 60;					/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					/// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = 1;						/// boolean switch if the light produces flare or not
				dayLight = 0;						/// boolean switch if the light is used during day or not
				FlareSize = 4;						/// how big is the flare, using the same metrics as intensity
				
				class Attenuation					/// describes how fast does the light dim
				{
					start = 1;						/// offset of start of the attenuation
					constant = 0;					/// constant attenuation of the light in any distance from source
					linear = 0;						/// coefficient for linear attenuation
					quadratic = 4;					/// coefficient for attenuation with square of distance from source
					
					hardLimitStart = 150;			/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				/// distance from source where the light is not displayed (shorter distances increase performance)				
				};
			};
		};