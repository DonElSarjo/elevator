class Land_Dum_istan4_detaily1: House_F {
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 9;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [0.52441,6.06948,-7.29237] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-2.43475,-0.334198,4.75763], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 8;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [2.70084,-2.62489,-4.34236] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-2.43475,-0.334198,4.75763], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (front)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 14;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-2.43475,-0.334198,4.75763] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [0.52441,6.06948,-7.29237], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (back)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 14;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-2.43475,-0.334198,4.75763] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [2.70084,-2.62489,-4.34236], this, (getDir this)+270, 0] spawn des_fnc_teleport";
        };
    };
}
