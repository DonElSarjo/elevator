class Land_A_MunicipalOffice: House_F {
    class UserActions
    {
        class DES_GetUpBalcony1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony (front)";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 23;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-0.296906,10.1464,-18.4241] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-3.10941,11.3457,-11.5891], this, (getDir this)+180, 1] spawn des_fnc_teleport";
        };
        //front
        class DES_GetDownBalcony1
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs (front)";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/> Go back";
            priority = 3;
            radius = 17;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-2.80463,10.4239,-11.5891] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-0.296906,10.1464,-18.4241], this, (getDir this)+180, 0] spawn des_fnc_teleport";
        };
    };
};
