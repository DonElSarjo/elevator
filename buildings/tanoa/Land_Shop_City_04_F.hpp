class Land_Shop_City_04_F: House_F
{
    class UserActions
    {
        class DES_GetUpBalcony1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 12;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [0.293517,-10.1212,-3.96194] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [0.214312,-10.5859,3.62691], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        class DES_GetDownBalcony
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 14;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [0.214312,-10.5859,3.62691] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [0.293517,-10.1212,-3.96194], this, (getDir this)+270, 0] spawn des_fnc_teleport";
        };
        //low
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 11;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [7.99442,2.70278,-3.96194] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [1.26571,3.79288,4.19687], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        //high
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 11;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-8.07868,-1.69372,-3.96194] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-1.22675,-4.99467,7.00576], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 8;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [1.25828,3.82576,4.19687] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [7.99677,2.70421,-3.96194], this, (getDir this), 0] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof2
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 11;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-1.22675,-4.99467,7.00576] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-8.07868,-1.69372,-3.96194], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
