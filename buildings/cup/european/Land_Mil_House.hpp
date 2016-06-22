class Land_Mil_House: House_F {
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-2.05295,6.09406,-5.1429] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-2.20322,-5.62192,3.37913], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 12;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-2.20322,-5.62192,3.37913] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-2.05295,6.09406,-5.1429], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
    };
};
