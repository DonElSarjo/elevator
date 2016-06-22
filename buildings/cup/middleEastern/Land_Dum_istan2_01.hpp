class Land_Dum_istan2_01: House_F {
    class UserActions
    {
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 9;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-6.05463,0.171122,-7.36417] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [1.10847,-0.326059,6.28773], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownRoof1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go downstairs";
            priority = 3;
            radius = 15;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [1.10847,-0.326059,6.28773] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-6.05463,0.171122,-7.36417], this, (getDir this)+90, 0] spawn des_fnc_teleport";
        };
    };
};
