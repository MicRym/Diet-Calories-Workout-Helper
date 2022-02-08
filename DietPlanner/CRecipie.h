#pragma once
using namespace System;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
ref class CRecipie
{
public:
	//getters
	String^ GetNameString();
	String^ GetDescriptionString();
	double GetProteins();
	String^ GetProteinsString();
	double GetFats();
	String^ GetFatsString();
	double GetCarbs();
	String^ GetCarbsString();
	double GetCalories();
	//setters
	void SetNameString(String^ oNameString);
	void SetDescriptionString(String^ oDescriptionString);
	void SetProteins(double dProteins);
	void SetProteins(String^ oProteins);
	void SetFats(double dFats);
	void SetFats(String^ oFats);
	void SetCarbs(double dCarbs);
	void SetCarbs(String^ oCarbs);
	void SetCalories(double cCalories);
	//methodes
	static double CalculateCalories(double dProteins, double dCarbs, double dFats);
	void CalculateCalories();
private:
	String^ m_oNameString;
	String^ m_oDescriptionString;
	double m_dProteins;
	double m_dFats;
	double m_dCarbs;
	double m_dCalories;
};

