class Land_MultistoryBuilding_04_F: House_F
{
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 40;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-8.81798,-4.26666,-36.3137] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [5.3093,2.27957,22.3974], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 41;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [7.08506,-9.41359,-36.3137] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [5.3093,2.27957,22.3974], this, (getDir this)+270, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 25;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [5.3093,2.27957,22.3974] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-8.81798,-4.26666,-36.3137], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
