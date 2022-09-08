#pragma once
#include "CIngridient.h"
#include "CAutomaticSortedList.h"

// CIngridientsDlg dialog

class CIngridientsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CIngridientsDlg)

public:
	CIngridientsDlg(CWnd* pParent = nullptr);   // standard constructor
	CIngridientsDlg(CList<CIngridient>& oIngridientList, CWnd* pParent = nullptr);
	virtual ~CIngridientsDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INGRIDIENTS_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
private:
	CList<CIngridient>* m_oIngridientList;
	CListCtrl m_oIngridientsListControl;
	void PopulateListCtrl();
public:
	afx_msg void OnBnClickedAddStepBtn();
	afx_msg void OnBnClickedDelBtn();
	void GetIngridientList(CList<CIngridient> &ooDest);
};
