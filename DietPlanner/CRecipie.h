#pragma once
#include"CIngridient.h"
class CRecipie
{
#pragma once
public:
		//getters
		CString GetNameString();
		CString GetDescriptionString();
		double	GetProteins();
		CString GetProteinsString();
		double	GetFats();
		CString GetFatsString();
		double	GetCarbs();
		CString GetCarbsString();
		double	GetCalories();
		CList<CIngridient>* GetListPtr();
		CStringList* GetStepsListPtr();

		//setters
		void SetNameString(CString oNameString);
		void SetDescriptionString(CString oDescriptionString);
		void SetProteins(double dProteins);
		void SetProteins(CString oProteins);
		void SetFats(double dFats);
		void SetFats(CString oFats);
		void SetCarbs(double dCarbs);
		void SetCarbs(CString oCarbs);
		void SetCalories(double cCalories);
		//methodes
		static double CalculateCalories(double dProteins, double dCarbs, double dFats);
		void CalculateCalories();
		void AddIngridient(CIngridient oIngridient);
		void AddIngridient(CString oIngridientName, CString oUnitName, double dQuantity);
private:
		CString m_oNameString;
		CString m_oDescriptionString;
		double m_dProteins;
		double m_dFats;
		double m_dCarbs;
		double m_dCalories;
		CList<CIngridient> m_oIngridientsList;
		CStringList m_oStepsStringLis;
};

