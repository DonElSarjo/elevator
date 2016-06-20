params ["_player", "_pos", "_model", "_dir", "_elev"];
private ["_weapon", "_move"];

if (_elev == 1) then { cutText ["Going upstairs","BLACK OUT"]; } else { cutText ["Going downstairs","BLACK OUT"]; };

_weapon = currentWeapon _player;
switch (true) do {
    case (_weapon isKindOf ["Rifle", configFile >> "CfgWeapons"]): {
        _move = "AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon_Putdown";
    };
    case (_weapon isKindOf ["Pistol", configFile >> "CfgWeapons"]): {
        _move = "AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon_Putdown";
    };
    case (_weapon isKindOf ["Launcher", configFile >> "CfgWeapons"]): {
        _move = "AmovPercMstpSrasWlnrDnon_AinvPercMstpSrasWlnrDnon_Putdown";
    };
    case (_weapon == ""): {
        _move = "AmovPercMstpSnonWnonDnon_AinvPercMstpSnonWnonDnon_Putdown";
    };
};

_player playMoveNow _move;

uisleep 1.5;

_player allowDamage false;
_player hideObjectGlobal true;
_player enableSimulation false;


uisleep 2;

player setDir _dir;
_player setPosATL _pos;

_player allowDamage true;
_player hideObjectGlobal false;
_player enableSimulation true;

_player setFatigue (getFatigue _player)/2;

cutText ["","BLACK IN"];

_player playMoveNow _move;
