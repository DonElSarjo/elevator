class Land_Dum_mesto3_istan: House_F {
    class UserActions
    {
        class DES_GetUpBalcony1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 8;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-5.65726,0.187855,-3.22397] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-2.60907,4.00632,0.894894], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpBalcony2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 8;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [5.98054,-0.182106,-3.22397] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-2.60907,4.00632,0.894894], this, (getDir this)+90, 1] spawn des_fnc_teleport";
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
            condition = "vehicle player == player && {this modelToWorld [-2.60907,4.00632,0.894894] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [0.52441,6.06948,-7.29237], this, (getDir this)+90, 0] spawn des_fnc_teleport";
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
            condition = "vehicle player == player && {this modelToWorld [-2.60907,4.00632,0.894894] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [5.98054,-0.182106,-3.22397], this, (getDir this)+270, 0] spawn des_fnc_teleport";
        };
    };
}
