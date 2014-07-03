       
 
    //Player-system only, ensure it's not running already
    //TODO: MP? TS? JIP?
     
    //Run system only once
    if (!(player getVariable ["HSim_turbulence", false])) then
    {
            player setVariable ["HSim_turbulence", true];
           
            //TODO: make circumstances affect turbulence
            /*
            More in warm weather ... season-based? TOD-based?
            Less in higher altitude (connected to lower temperature at higher alts)
            More in lower speeds? No (not in hover!)
            More in vertical maneuvers ... velocity? No
            Different per helicopter ... parameter
            Wake turbulence! Behind other helicopters
            Wind
            Sudden tall structures on terrain
            Inside clouds big turbulence, above much less than below
            Overal setting part of weather
            */
     
            //TODO: use force generators, so the effect is not just visual?
            /*
            _fgIndex = addForceGeneratorRTD [false, 2, [0, 0, 0], [0, 0, 0], [0, 0, 0], [0, 0, 0], _heli];
            _fgIndex setForceGeneratorRTD [true, 2, [wind, 1500] call BIS_fnc_vectorMultiply, [0, 0, 0], [0, 0, 0], [0, 0, 0], _heli];
            */
           
            //TODO: a script per helicopter is a bit much, but this system is to be replaced by engine tech
            //Run while the helicopter works
            while {alive player} do
            {
                    private ["_turbulence", "_timeLast", "_timeLastHeavy", "_timeLastClouds", "_turbulenceLast"];
                    _turbulence = 0;
                    _timeLast = time;
                    _timeLastHeavy = time;
                    _timeLastClouds = time;
                    _turbulenceLast = _turbulence;
           
                    //Only use camera shake when the player is inside
                    waitUntil {((vehicle player) != player)}; //Only when player is in a RTD helicopter
					
                   
                    private ["_heli"];
                    _heli = vehicle player;
                   
                    while {((vehicle player) == _heli)} do
                    {
						enableCamShake true;
 
                            //Sometimes introduce heavier turbulence
                            if (((speed _heli) > 25) && (((position _heli) select 2) > 1)) then
                            {
                                    //Turbulence in clouds
                                    if (simulInClouds (position _heli)) then
                                    {
                                            //TODO: use simulCloudDensity? 0 or 1 now, so no use
                                            if (((time - _timeLastClouds) > 10)) then
                                            {
                                                    addCamShake [2 + (random 3), 1 + (random 9), 10 + (random 5)];
                                                    _timeLastClouds = time;
                                            };
                                    }
                                    else
                                    {
                                            if (((time - _timeLastHeavy) > 45) && ((random 1) > 0.6)) then
                                            {
                                                    addCamShake [0.25 + (random 1.25), 1 + (random 5), 10 + (random 5)];
                                                    _timeLastHeavy = time;
                                            };
                                    };
                            };
     
                            //Current shake has finished, or base turbulence has changed
                            if (((time - _timeLast) > 240) || (_turbulence != _turbulenceLast)) then
                            {
                                    if (_turbulence != _turbulenceLast) then {resetCamShake;};
                                    if (_turbulence > 0) then {addCamShake [_turbulence, 240, 15];};
                                   
                                    _timeLast = time;
                                    _turbulenceLast = _turbulence;
                            };
                           
                            sleep 1;
                    };
                   
                    resetCamShake;
            };
    };
     
    true