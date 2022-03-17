#include "pch.h"
#include "CRecipie.h"

CString CRecipie::GetNameString()
{
    return m_oNameString;
}

CString CRecipie::GetDescriptionString()
{
    return m_oDescriptionString;
}

double CRecipie::GetProteins()
{
    return m_dProteins;
}

CString CRecipie::GetProteinsString()
{
    CString ResultMsg;
    ResultMsg.Format(_T("%f"), m_dProteins);
    return ResultMsg;
}

double CRecipie::GetFats()
{
    return m_dFats;
}

CString CRecipie::GetFatsString()
{
    CString ResultMsg;
    ResultMsg.Format(_T("%f"), m_dFats);
    return ResultMsg;
}

double CRecipie::GetCarbs()
{
    return m_dCarbs;
}

CString CRecipie::GetCarbsString()
{
    CString ResultMsg;
    ResultMsg.Format( _T("%f"), m_dCarbs);
    return ResultMsg;
}

double CRecipie::GetCalories()
{
    return m_dCalories;
}

void CRecipie::SetNameString(CString oNameString)
{
    m_oNameString = oNameString;
}

void CRecipie::SetDescriptionString(CString oDescriptionString)
{
    m_oDescriptionString = oDescriptionString;
}

void CRecipie::SetProteins(double dProteins)
{
    m_dProteins = dProteins;
}

void CRecipie::SetProteins(CString oProteins)
{
    m_dProteins = _ttof(oProteins);
}

void CRecipie::SetFats(double dFats)
{
    m_dFats = dFats;
}

void CRecipie::SetFats(CString oFats)
{
    m_dProteins = _ttof(oFats);
}

void CRecipie::SetCarbs(double dCarbs)
{
    m_dCarbs = dCarbs;
}

void CRecipie::SetCarbs(CString oCarbs)
{
    m_dProteins = _ttof(oCarbs);
}

void CRecipie::SetCalories(double cCalories)
{
    m_dCalories = cCalories;
}

double CRecipie::CalculateCalories(double dProteins, double dCarbs, double dFats)
{
    return (dProteins * 4.0f) + (dCarbs * 4.0f) + (dFats * 9.0f);
}

void CRecipie::CalculateCalories()
{
    m_dCalories = (m_dProteins * 4.0f) + (m_dCarbs * 4.0f) + (m_dFats * 9.0f);
}

