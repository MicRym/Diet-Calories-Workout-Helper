// CIngridientsDlg.cpp : implementation file
//

#include "pch.h"
#include "DietPlanner.h"
#include "CIngridientsDlg.h"
#include "afxdialogex.h"


// CIngridientsDlg dialog

IMPLEMENT_DYNAMIC(CIngridientsDlg, CDialogEx)

CIngridientsDlg::CIngridientsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_INGRIDIENTS_DIALOG, pParent)
{

}

CIngridientsDlg::~CIngridientsDlg()
{
}

void CIngridientsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_INGRIDIENTS_LIST, m_oIngridientsListControl);
}


BEGIN_MESSAGE_MAP(CIngridientsDlg, CDialogEx)
END_MESSAGE_MAP()

BOOL CIngridientsDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	m_oIngridientsListControl.InsertColumn(0, L"ID", LVCFMT_LEFT, 60);
	m_oIngridientsListControl.InsertColumn(1, L"Ingridient Names", LVCFMT_LEFT, 100);
	m_oIngridientsListControl.InsertColumn(2, L"Unit", LVCFMT_LEFT, 60);
	m_oIngridientsListControl.InsertColumn(3, L"Quantity", LVCFMT_LEFT, 60);
	return TRUE;
}
