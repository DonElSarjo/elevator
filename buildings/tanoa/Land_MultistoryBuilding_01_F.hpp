class Land_MultistoryBuilding_01_F: House_F
{
    class UserActions
    {
        class DES_GetUpBalcony
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to balcony";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 34;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-17.4587,-17.6226,-21.0173] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-12.3358,-17.6931,-14.6502], this, (getDir this)+90, 1] spawn des_fnc_teleport";
        };
        class DES_GetDownBalcony
        {
            displayName = "<img image='\des\elevator\icons\down.paa' shadow='true'/> Go downstairs";
            displayNameDefault = "<img image='\des\elevator\icons\down.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 41;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-12.3358,-17.6931,-14.6502] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [-17.4587,-17.6226,-21.0173], this, getDir this, 0] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof1
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 32;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-17.512,-12.0719,-21.0165] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [3.0877,13.328,19.2671], this, getDir this, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof2
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 30;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [-17.4983,6.97291,-21.0165] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [3.0877,13.328,19.2671], this, getDir this, 1] spawn des_fnc_teleport";
        };
        class DES_GetUpRoof3
        {
            displayName = "<img image='\des\elevator\icons\up.paa' shadow='true'/> Go to roof";
            displayNameDefault = "<img image='\des\elevator\icons\up.paa' size='2' shadow='true'/>";
            priority = 3;
            radius = 30;
            position = "camera";
            showWindow = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "vehicle player == player && {this modelToWorld [17.9146,4.36052,-21.0165] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [3.0877,13.328,19.2671], this, getDir this, 1] spawn des_fnc_teleport";
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
            condition = "vehicle player == player && {this modelToWorld [3.0877,13.328,19.2671] distance getPosATL player <= 2}";
            statement = "[player, this modelToWorld [10.0984,-11.9656,-21.0165], this, (getDir this)+270, 0] spawn des_fnc_teleport";
        };
    };
};
