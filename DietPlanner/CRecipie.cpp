#include "CRecipie.h"

String^ CRecipie::GetNameString()
{
    return m_oNameString;
}

String^ CRecipie::GetDescriptionString()
{
    return m_oDescriptionString;
}

double CRecipie::GetProteins()
{
    return m_dProteins;
}

String^ CRecipie::GetProteinsString()
{
    return Convert::ToString(m_dProteins);
}

double CRecipie::GetFats()
{
    return m_dFats;
}

String^ CRecipie::GetFatsString()
{
    return Convert::ToString(m_dFats);
}

double CRecipie::GetCarbs()
{
    return m_dCarbs;
}

String^ CRecipie::GetCarbsString()
{
    return Convert::ToString(m_dCarbs);
}

double CRecipie::GetCalories()
{
    return m_dCalories;
}

void CRecipie::SetNameString(String^ oNameString)
{
 m_oNameString = oNameString;
}

void CRecipie::SetDescriptionString(String^ oDescriptionString)
{
    m_oDescriptionString = oDescriptionString;
}

void CRecipie::SetProteins(double dProteins)
{
    m_dProteins = dProteins;
}

void CRecipie::SetProteins(String^ oProteins)
{
    m_dProteins = Convert::ToDouble(oProteins);
}

void CRecipie::SetFats(double dFats)
{
    m_dFats = dFats;
}

void CRecipie::SetFats(String^ oFats)
{
    m_dFats = Convert::ToDouble(oFats);
}

void CRecipie::SetCarbs(double dCarbs)
{
    m_dCarbs = dCarbs;
}

void CRecipie::SetCarbs(String^ oCarbs)
{
    m_dCarbs = Convert::ToDouble(oCarbs);
}

void CRecipie::SetCalories(double cCalories)
{
    m_dCalories = cCalories;
}

double CRecipie::CalculateCalories(double dProteins, double dCarbs, double dFats)
{
    return (dProteins*4.0f)+(dCarbs*4.0f)+(dFats*9.0f);
}

void CRecipie::CalculateCalories()
{
    m_dCalories= (m_dProteins * 4.0f) + (m_dCarbs * 4.0f) + (m_dFats * 9.0f);
}
