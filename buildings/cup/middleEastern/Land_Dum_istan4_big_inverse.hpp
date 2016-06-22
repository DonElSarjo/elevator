class Land_Dum_istan4_big_inverse: House_F {
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 13;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.521198,5.60997,-10.2863] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [2.52451,-0.0461845,7.7867], this, (getDir this)+180, 1] spawn des_fnc_teleport";
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
            condition = "vehicle player == player && {this modelToWorld [-2.74318,-2.73177,-7.33634] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [2.52451,-0.0461845,7.7867], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (front)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 20;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [2.52451,-0.0461845,7.7867] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.521198,5.60997,-10.2863], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (back)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 20;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [2.52451,-0.0461845,7.7867] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-2.74318,-2.73177,-7.33634], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
}
