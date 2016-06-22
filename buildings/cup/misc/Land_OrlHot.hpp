class Land_OrlHot: House_F {

    class UserActions
    {
        //front
        class DES_GetUpBalcony1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony (front)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 7;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.0255127,5.48958,-3.83391] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [0.00389099,5.24121,0.0881996], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        //front
        class DES_GetDownBalcony1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (front)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [0.00389099,5.24121,0.0881996] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.0255127,5.48958,-3.83391], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };

        //front
        class DES_GetUpBalcony2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony (back)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 7;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.0255127,5.48958,-3.83391] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [5.53221,-3.07261,-0.08393], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        //back
        class DES_GetDownBalcony2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (front)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [5.53221,-3.07261,-0.08393] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.0255127,5.48958,-3.83391], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };

        class DES_GetUpBalcony3
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony (back)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 9;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-5.47333,-4.0481,-3.83391] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [4.60422,-4.01637,-0.08393], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        //Back
        class DES_GetDownBalcony3
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (back)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [4.60422,-4.01637,-0.08393] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-5.47333,-4.0481,-3.83391], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
