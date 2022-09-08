
// DietPlannerDlg.h : header file
//

#pragma once
#include "CLoginDialog.h"
#include "CDBConnector.h"
#include "CRecipie.h"
#include "tinyxml2.h"
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
	afx_msg void OnBnClickedCaloriesRadio();
	afx_msg void OnBnClickedMacroRadio();
	
private:
	CString m_oGroupTextString;
	CEdit m_oProteinsControl;
	CEdit m_oFatsControl;
	CEdit m_oCarbsControl;
	CEdit m_oTotalCalories;
	CRecipie m_oRecipie;
private:
	double m_dProteins;
	double m_dFats;
	double m_dCarbs;
	double m_dTotalCalories;
	void MacroEditDisable(bool bDisable);

	int m_iOption;
public:
	afx_msg void OnEnChangeProteinsEdit();
	afx_msg void OnEnChangeFatsEdit();
	afx_msg void OnEnChangeCarbsEdit();
	afx_msg void OnEnChangeTotalCalories();
	afx_msg void OnBnClickedSaveBtn();
private:
	CEdit m_oRecipieEdit;
public:
	CString m_oRecipieNameString;
	afx_msg void OnEnChangeRecipieEdit();
	afx_msg void OnBnClickedIngridientsBtn();
private:
	CString m_oIngrListEdit;
	CListCtrl m_oIGListCtrl;
	CEdit m_oIGListEdit;
	tinyxml2::XMLDocument m_oXMLDocument;
public:
	afx_msg void OnBnClickedStepsBtn();
};
