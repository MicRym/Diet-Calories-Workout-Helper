#pragma once
#include "CQuantity.h"
class CIngridient
{
private:
	CString m_oIngridientNameString;
	CQuantity m_oQuantity;

public:
	CIngridient() = default;
	CIngridient(CString oNameString, CString oUnitString, double dQuantity);
	void SetNameString(CString oNameString);
	void SetQuantity(CString oUnitNameString, double dQuantity);
	CString GetIngridientNameString() { return m_oIngridientNameString; }
	CQuantity GetQuantity() { return m_oQuantity; }
	CString GetQuantityWithUnit();

};

