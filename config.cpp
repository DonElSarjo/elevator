class CfgPatches
{
	class DES_Elevator
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F"};
	};
};
class CfgFunctions
{
	class DES
	{
		class Elevator
		{
			class Teleport
			{
				file = "\des\elevator\fnc\fn_teleport.sqf";
			};
		};
	};
};
class CfgVehicles
{
	class House_F;
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
};
