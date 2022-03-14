
// DietPlannerDlg.h : header file
//

#pragma once
#include "CLoginDialog.h"
#include "CDBConnector.h"
// CDietPlannerDlg dialog
class CDietPlannerDlg : public CDialogEx
{
// Construction
public:
	CDietPlannerDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIETPLANNER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
private:
	CDBConnector m_oCDBConnector;
	CLoginDialog m_oLoginDialog;
	CString m_oConnectionFlag;

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLoginBtn();
};
