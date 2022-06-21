#pragma once

#include "CIngridient.h"
// CIngridientAddDlg dialog

class CIngridientAddDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CIngridientAddDlg)

public:
	CIngridientAddDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CIngridientAddDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_INGRIDIENT_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	CEdit m_oIgNameEdit;
	CEdit m_oIgQuantEdit;
	CComboBox m_oIgUnitEdit;
	CIngridient* m_oIngridient;
public:
	CString m_oIgNameString;
	double m_dIgQunty;
	afx_msg void OnBnClickedOk();
	void SetIngridientPointer(CIngridient& poIngridient) { m_oIngridient = &poIngridient; }
	CString m_oUnitString;
};
