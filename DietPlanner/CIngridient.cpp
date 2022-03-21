#include "pch.h"
#include "CIngridient.h"

CIngridient::CIngridient(CString oNameString, CString oUnitString, double dQuantity)
{
	m_oQuantity.SetQuantity(dQuantity);
	m_oQuantity.SetUnitString(oUnitString);
	m_oIngridientNameString = oNameString;
}

void CIngridient::SetNameString(CString oNameString)
{
	m_oIngridientNameString = oNameString;
}

void CIngridient::SetQuantity(CString oUnitNameString, double dQuantity)
{
	m_oQuantity.SetQuantity(dQuantity);
	m_oQuantity.SetUnitString(oUnitNameString);
}

CString CIngridient::GetQuantityWithUnit()
{
	CString oResultString;
	oResultString.Format(_T("%f %s"), m_oQuantity.GetQuantity(), m_oQuantity.GetUnitString());
	return oResultString;
}
