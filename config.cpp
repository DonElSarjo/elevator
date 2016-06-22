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
	//cup misc
	#include "\des\elevator\buildings\cup\misc\Land_OrlHot.hpp"
	//cup european
	#include "\des\elevator\buildings\cup\european\Land_Mil_House.hpp"
	#include "\des\elevator\buildings\cup\european\Land_Mil_House_dam.hpp"
	#include "\des\elevator\buildings\cup\european\Land_A_MunicipalOffice.hpp"
	#include "\des\elevator\buildings\cup\european\Land_HouseB_Tenement.hpp"
	//cup middle eastern
	#include "\des\elevator\buildings\cup\middleEastern\Land_Mil_House_EP1.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Mil_House_dam_EP1.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan2_01.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan2_02.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan2_03.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan2_03a.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan2_04a.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan3_hromada.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_mesto3_istan.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan4.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan4_big.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan4_big_inverse.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan4_detaily1.hpp"
	#include "\des\elevator\buildings\cup\middleEastern\Land_Dum_istan4_inverse.hpp"
};
