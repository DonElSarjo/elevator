class Land_MultistoryBuilding_03_F: House_F
{
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 27;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-7.1592,-1.62682,-24.2182] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.707389,11.0242,25.919], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 31;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.00740668,-13.1225,-25.9038] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.707389,11.0242,25.919], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 30;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.707389,11.0242,25.919] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-1.57538,5.14032,-25.9038], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
