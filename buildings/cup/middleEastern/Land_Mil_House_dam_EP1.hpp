class Land_Mil_House_dam_EP1: House_F {
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 10;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.594055,7.53996,-5.24809] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.689865,-4.41565,3.40647], this, (getDir this), 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 12;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.689865,-4.41565,3.40647] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.594055,7.53996,-5.24809], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
    };
};
