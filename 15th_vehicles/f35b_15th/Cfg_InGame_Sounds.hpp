		attenuationEffectType = "HeliAttenuation";

		
		soundGetIn[] = {"f35b_15th\sounds\int-jetair-wind1", db-25, 1};
		soundGetOut[] = {"f35b_15th\sounds\ext-jetair-wind1", db-25, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"f35b_15th\sounds\int-av8b-start-1", 0.562341, 1.0};
		soundEngineOnExt[] = {"f35b_15th\sounds\ext-jetair-start1", 0.794328, 1.0, 800};
		soundEngineOffInt[] = {"f35b_15th\sounds\int-av8b-stop-1", 0.562341, 1.0};
		//soundEngineOffExt[] = {"f35b_15th\sounds\ext-jetair-stop1", 0.794328, 1.0, 800};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 1.5};

		class Sounds {
			class EngineLowOut {
				sound[] = {"f35b_15th\sounds\ext-jetair-engine-low1", 2.51189, 1.0, 1200};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "engineOn*camPos*(rpm factor[0.85, 0])";
			};
			
			class EngineHighOut {
				sound[] = {"f35b_15th\sounds\ext-jetair-engine-high3", 2.51189, 1.3, 1500};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
			};
			
			class ForsageOut {
				sound[] = {"f35b_15th\sounds\ext-jetair-forsage1", 2.51189, 1.1, 2000};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
				cone[] = {3.14, 3.92, 2.0, 0.4};
			};
			
			class WindNoiseOut {
				sound[] = {"f35b_15th\sounds\ext-jetair-wind1", db0, 1.0, 100};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			
			class EngineLowIn {
				sound[] = {"f35b_15th\sounds\int-av8b-engine-low", db-2, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			
			class EngineHighIn {
				sound[] = {"f35b_15th\sounds\int-av8b-engine", db-2, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			
			class ForsageIn {
				sound[] = {"f35b_15th\sounds\int-av8b-forsage-1", db-1.5, 1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.8, 1.0]))";
			};
			
			class WindNoiseIn {
				sound[] = {"f35b_15th\sounds\int-jetair-wind1", db-3, 1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};