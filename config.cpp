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
	//tanoa buildings
	#include "\des\elevator\buildings\tanoa\Land_MultistoryBuilding_01_F.hpp"
	#include "\des\elevator\buildings\tanoa\Land_MultistoryBuilding_03_F.hpp"
	#include "\des\elevator\buildings\tanoa\Land_MultistoryBuilding_04_F.hpp"
	#include "\des\elevator\buildings\tanoa\Land_Shop_City_04_F.hpp"
	#include "\des\elevator\buildings\tanoa\Land_Shop_City_05_F.hpp"
	#include "\des\elevator\buildings\tanoa\Land_Hotel_02_F.hpp"
	#include "\des\elevator\buildings\tanoa\Land_Cathedral_01_F.hpp"

};
