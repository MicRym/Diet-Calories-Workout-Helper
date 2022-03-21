#pragma once


// CIngridientsDlg dialog

class CIngridientsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CIngridientsDlg)

public:
	CIngridientsDlg(CWnd* pParent = nullptr);   // standard constructor
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
	CListCtrl m_oIngridientsListControl;
};
