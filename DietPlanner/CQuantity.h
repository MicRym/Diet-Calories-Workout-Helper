#pragma once
class CQuantity
{
private:
	CString m_oUnitString;
	double m_dQuantity;

public:
	void SetUnitString(CString oUnitString);
	void SetQuantity(double dQuantity);
	CString GetUnitString() { return m_oUnitString; }
	double GetQuantity() { return m_dQuantity; }
	
};

