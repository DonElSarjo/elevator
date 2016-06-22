class Land_Dum_istan2_03a: House_F {
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 8;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-3.69959,-4.86586,-6.50645] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [1.44265,0.0844555,0.690866], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [6.22047,5.36641,-6.50645] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [1.44265,0.0844555,0.690866], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (front)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 9;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [1.44265,0.0844555,0.690866] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-3.69959,-4.86586,-6.50645], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (back)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 9;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [1.44265,0.0844555,0.690866] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [6.22047,5.36641,-6.50645], this, (getDir this)+270, 0] spawn des_fnc_teleport";
        };
    };
}
