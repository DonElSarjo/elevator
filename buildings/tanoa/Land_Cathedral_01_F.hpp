class Land_Cathedral_01_F: House_F
{
    class UserActions
    {
        //RIGHT TOWER
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to right tower roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 13;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [7.59095,-5.00461,-9.37976] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [9.19095,-13.0103,11.1967], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        //LEFT TOWER
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to left tower roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 13;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-7.58171,-4.67861,-9.37976] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-9.20429,-13.4737,11.1967], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        //right tower
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 33;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [9.19095,-13.0103,11.1967] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [7.59095,-5.00461,-9.37976], this, (getDir this)+270, 0] spawn des_fnc_teleport";
        };
        //left tower
        class DES_GetDownRoof2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs (back)";
            priority = 3;
            radius = 33;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-9.20429,-13.4737,11.1967] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-7.58171,-4.67861,-9.37976], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
