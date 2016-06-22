class Land_Hotel_02_F: House_F
{
    class UserActions
    {
        //right front
        class DES_GetUpBalcony1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-6.30013,-0.834253,0.109366] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-8.70617,-3.60269,0.0956259], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        //right front
        class DES_GetDownBalcony1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 13;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-8.70617,-3.60269,0.0956259] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-6.30013,-0.834253,0.109366], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
        //right back
        class DES_GetUpBalcony2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 6;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [1.69122,-0.82265,0.109366] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [5.00811,-3.9505,0.0956259], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        //right back
        class DES_GetDownBalcony2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 9;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [5.00811,-3.9505,0.0956259] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [1.69122,-0.82265,0.109366], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
        //left front
        class DES_GetUpBalcony3
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-6.80754,2.73215,0.109366] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-8.70757,5.92076,0.0935259], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        //left front
        class DES_GetDownBalcony3
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 13;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-8.70757,5.92076,0.0935259] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-6.80754,2.73215,0.109366], this, (getDir this), 0] spawn des_fnc_teleport";
        };
        //left back
        class DES_GetUpBalcony4
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 13;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [1.64025,2.73108,0.109366] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [4.99385,5.51732,0.0935259], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        //left back
        class DES_GetDownBalcony4
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 9;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [4.99385,5.51732,0.0935259] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [1.64025,2.73108,0.109366], this, (getDir this), 0] spawn des_fnc_teleport";
        };
    };
};
