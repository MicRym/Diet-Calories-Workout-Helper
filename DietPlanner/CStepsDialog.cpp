// CStepsDialog.cpp : implementation file
//

#include "pch.h"
#include "DietPlanner.h"
#include "CStepsDialog.h"
#include "afxdialogex.h"


// CStepsDialog dialog

IMPLEMENT_DYNAMIC(CStepsDialog, CDialogEx)

CStepsDialog::CStepsDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_STEPS_DIALOG, pParent)
	, m_oStepNumberString(_T(""))
	, m_oStepDescriptionString(_T(""))
{

}

CStepsDialog::CStepsDialog(CStringList& oStringList, CWnd* pParent)
	: CDialogEx(IDD_STEPS_DIALOG, pParent)
{

}

CStepsDialog::~CStepsDialog()
{
}

void CStepsDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_STEP_NUMBER, m_oStepNumberString);
	DDX_Control(pDX, IDC_EDIT1, m_oStepEditControl);
	DDX_Text(pDX, IDC_EDIT1, m_oStepDescriptionString);
}


BEGIN_MESSAGE_MAP(CStepsDialog, CDialogEx)
END_MESSAGE_MAP()


// CStepsDialog message handlers
