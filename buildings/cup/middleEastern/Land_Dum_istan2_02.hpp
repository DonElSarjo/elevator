class Land_Dum_istan2_02: House_F {
    class UserActions
    {
        class DES_GetUpRoofR
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to right roof exit";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 5;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-1.23128,0.0799637,-4.14961] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [6.1339,-9.77591,5.98289], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoofL
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to left roof exit";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 5;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-1.23128,0.0799637,-4.14961] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [6.48677,9.72869,5.98289], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoofR
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 16;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [6.1339,-9.77591,5.98289] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-1.23128,0.0799637,-4.14961], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
        class DES_GetDownRoofL
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 16;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [6.48677,9.72869,5.98289] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-1.23128,0.0799637,-4.14961], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
