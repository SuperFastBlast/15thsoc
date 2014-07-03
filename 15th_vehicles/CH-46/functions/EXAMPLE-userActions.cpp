class UserActions
{
    class deployRopes
    {
        displayName = "Deploy Ropes";
        displayNameDefault = "Deploy Ropes";
//      position = cargo_door_handle;
		priority = -1;
		showWindow = false;
        radius = 6;
        onlyForPlayer = false;
        condition = "[this,player] call meu_fnc_deployCheck";
        statement = "[this] call meu_fnc_deployRopes";
    };
    class cutRopes
    {
        displayName = "Cut Ropes";
        displayNameDefault = "Cut Ropes";
//      position = cargo_door_handle;
		priority = -1;
		showWindow = false;
        radius = 6;
        onlyForPlayer = false;
        condition = "[this,player] call meu_fnc_cutCheck";
        statement = "[this] call meu_fnc_cutRopes";
    };
	class fastRope
    {
        displayName = "Fast Rope";
        displayNameDefault = "Fast Rope";
//      position = cargo_door_handle;
		priority = 6;
		showWindow = false;
        radius = 6;
        onlyForPlayer = false;
        condition = "[this,player] call meu_fnc_fastCheck";
        statement = "[this,player] call meu_fnc_fastRope";
    };
};