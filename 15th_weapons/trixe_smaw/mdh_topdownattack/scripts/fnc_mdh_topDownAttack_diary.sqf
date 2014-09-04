///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// DIARYRECORD
///////////////////////////////////////////////////////////////////////////////////////////////////
waitUntil {!(isNull player)};
waitUntil {player==player};

if (isNil "fnc_mdh_topDownAttack_diary") then
{
	[] spawn
	{
		waitUntil {!isNil "fnc_mdh_topDownAttack_diary"};
		call fnc_mdh_topDownAttack_diary;
	};
};

fnc_mdh_topDownAttack_diary = {

if (isNull player) exitWith {false};
if(!(player diarySubjectExists "MDH_TopDownAttack")) then
{
player createDiarySubject ["MDH_TopDownAttack","TopDownAttack"];
player createDiaryRecord
["MDH_TopDownAttack",
["TopDownAttack",
"MDH_TopDownAttack is a mod, created by Moerderhoschi, to enable a Topdown attack with the standard 
ArmA 3 Titan Missile Launcher. The modification disables the lockability of all short Titan missile 
launchers and replace it with a own one. If you have any question you can contact me at the official Bohemia 
Interactive Forum: http://forums.bistudio.com
<br/>
<br/>
<p>
<h1>
Credits and Thanks:<br/>
Xeno - For many years of help with script and locality problems<br/>
L etranger - For the init.sqf initialization method for addons<br/>
Killzone Kid - For his great tutorials on his blog, which is a good help<br/>
Mr Burns - For permanent high sophisticated ideas since years</br>
Cultivator - For always ready to be my crash-test-dummy nr.1</br>
Armed-Assault.de Crew - For many great ArmA moments in the last years<br/>
BIS - For ArmA3<br/>
</p>
</h1>"
]
]
};
true

};