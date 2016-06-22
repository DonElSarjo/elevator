class Land_Shop_City_05_F: House_F
{
    class UserActions
    {
        class DES_GetUpBalcony1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony (r)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 21;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-9.18351,15.0192,-7.47618] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-5.20329,15.4759,-3.70688], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpBalcony2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony (l)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 21;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-9.18351,15.0192,-7.47618] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [5.40994,15.4744,-3.70954], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        //l
        class DES_GetDownBalcony1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 19;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [5.40994,15.4744,-3.70954] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-9.18351,15.0192,-7.47618], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
        //r
        class DES_GetDownBalcony2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 19;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player &&  {this modelToWorld [-5.20329,15.4759,-3.70688] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-9.18351,15.0192,-7.47618], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
        //long front
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 18;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [0.983169,14.6631,-7.47618] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.0615847,1.69433,4.11352], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        //long back
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 15;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.332568,-10.4033,-7.30859] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.0615847,1.69433,4.11352], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        //short side
        class DES_GetUpRoof3
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 15;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [9.85053,4.94553,-7.47618] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [5.16387,7.26027,4.11352], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        //long front
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (front)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 6;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.0615847,1.69433,4.11352] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [0.983169,14.6631,-7.47618], this, (getDir this), 0] spawn des_fnc_teleport";
        };
        //longback
        class DES_GetDownRoof2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (back)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs (back)";
            priority = 3;
            radius = 6;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.0615847,1.69433,4.11352] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.332568,-10.4033,-7.30859], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
        //short side
        class DES_GetDownRoof3
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 12;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [5.16387,7.26027,4.11352] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [9.85053,4.94553,-7.47618], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
