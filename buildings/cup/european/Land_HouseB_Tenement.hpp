class Land_HouseB_Tenement: House_F {
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 25;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-7.86343,5.70817,-20.7845] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-9.9642,2.70815,18.4924], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to right roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 25;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-10.6301,5.65852,-20.7845] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-9.9642,2.70815,18.4924], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 23;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-9.9642,2.70815,18.4924] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-7.86343,5.70817,-20.7845], this, (getDir this), 0] spawn des_fnc_teleport";
        };
    };
};
