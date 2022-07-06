#pragma once


// CStepsDialog dialog

class CStepsDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CStepsDialog)

public:
	CStepsDialog(CWnd* pParent = nullptr);   // standard constructor
	CStepsDialog(CStringList& oStringList, CWnd* pParent = nullptr);
	virtual ~CStepsDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STEPS_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
private:
	CStringList* m_pSetpsList;
	DECLARE_MESSAGE_MAP()
public:
	CString m_oStepNumberString;
private:
	CEdit m_oStepEditControl;
	CString m_oStepDescriptionString;
};
