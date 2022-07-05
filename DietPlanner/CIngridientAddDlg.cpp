// CIngridientAddDlg.cpp : implementation file
//

#include "pch.h"
#include "DietPlanner.h"
#include "CIngridientAddDlg.h"
#include "afxdialogex.h"
#include "CIngridient.h"


// CIngridientAddDlg dialog

IMPLEMENT_DYNAMIC(CIngridientAddDlg, CDialogEx)

CIngridientAddDlg::CIngridientAddDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ADD_INGRIDIENT_DIALOG, pParent)
	, m_oIgNameString(_T(""))
	, m_dIgQunty(0)
	, m_oUnitString(_T(""))
{
	m_oIgNameEdit.ModifyStyle(0, ES_NUMBER);
}

CIngridientAddDlg::~CIngridientAddDlg()
{
}

void CIngridientAddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_IG_NAME_EDIT, m_oIgNameEdit);
	DDX_Control(pDX, IDC_IG_QUANTY_EDIT, m_oIgQuantEdit);
	DDX_Control(pDX, IDC_UNIT_COMBO, m_oIgUnitEdit);
	DDX_Text(pDX, IDC_IG_NAME_EDIT, m_oIgNameString);
	DDX_Text(pDX, IDC_IG_QUANTY_EDIT, m_dIgQunty);
	DDV_MinMaxDouble(pDX, m_dIgQunty, 0, DBL_MAX);
	DDX_CBString(pDX, IDC_UNIT_COMBO, m_oUnitString);
}


BEGIN_MESSAGE_MAP(CIngridientAddDlg, CDialogEx)
	
	ON_BN_CLICKED(IDOK, &CIngridientAddDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CIngridientAddDlg message handlers



void CIngridientAddDlg::OnBnClickedOk()
{
	UpdateData(TRUE);
	if (m_oIgNameString.IsEmpty() ||
		m_dIgQunty == 0 ||
		m_oUnitString.IsEmpty())
	{
		AfxMessageBox(_T("Fill positions!"));
	}
	else
	{
		m_oIngridient->SetNameString(m_oIgNameString);
		m_oIngridient->SetQuantity(m_oUnitString, m_dIgQunty);
		CDialogEx::OnOK();
	}
	
}
