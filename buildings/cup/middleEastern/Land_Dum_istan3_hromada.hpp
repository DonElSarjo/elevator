class Land_Dum_istan3_hromada: House_F {
    class UserActions
    {
        class DES_GetUpRoofR
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof (right)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 5;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-3.21511,0.144741,-3.24189] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.51211,1.85963,2.64392], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoofL
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof (left)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 5;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-3.21511,0.144741,-3.24189] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-4.83307,-3.1396,2.64392], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoofR
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 11;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.51211,1.85963,2.64392] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-3.21511,0.144741,-3.24189], this, (getDir this), 0] spawn des_fnc_teleport";
        };
        class DES_GetDownRoofL
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 11;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-4.83307,-3.1396,2.64392] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-3.21511,0.144741,-3.24189], this, (getDir this), 0] spawn des_fnc_teleport";
        };
    };
};
