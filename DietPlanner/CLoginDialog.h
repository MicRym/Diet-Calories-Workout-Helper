#pragma once
#include "CDBConnector.h"

// CLoginDialog dialog

class CLoginDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CLoginDialog)

public:
	CLoginDialog(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CLoginDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

private:
	CDBConnector* m_poDBConnector;
	CString m_oLoginString;
	CString m_oPasswordString;
	CButton m_oOKButton;
	CButton m_oCancelButton;
public:
	afx_msg void OnBnClickedOk();
	void SetDBPointer(CDBConnector& oDBConnector) { m_poDBConnector = &oDBConnector; }
};
