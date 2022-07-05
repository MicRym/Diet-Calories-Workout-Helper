// CIngridientsDlg.cpp : implementation file
//

#include "pch.h"
#include "DietPlanner.h"
#include "CIngridientsDlg.h"
#include "afxdialogex.h"
#include "CIngridient.h"
#include "CIngridientAddDlg.h"


// CIngridientsDlg dialog

IMPLEMENT_DYNAMIC(CIngridientsDlg, CDialogEx)

CIngridientsDlg::CIngridientsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_INGRIDIENTS_DIALOG, pParent)
{
	m_oIngridientList = nullptr;
}

CIngridientsDlg::CIngridientsDlg(CList<CIngridient>& oIngridientList, CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_INGRIDIENTS_DIALOG, pParent)
{
	m_oIngridientList = &oIngridientList;
}

CIngridientsDlg::~CIngridientsDlg()
{
	m_oIngridientList = nullptr;
}

void CIngridientsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_INGRIDIENTS_LIST, m_oIngridientsListControl);
}


BEGIN_MESSAGE_MAP(CIngridientsDlg, CDialogEx)
	ON_BN_CLICKED(IDC_ADD_STEP_BTN, &CIngridientsDlg::OnBnClickedAddStepBtn)
	ON_BN_CLICKED(IDC_DEL_BTN, &CIngridientsDlg::OnBnClickedDelBtn)
END_MESSAGE_MAP()

BOOL CIngridientsDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	m_oIngridientsListControl.InsertColumn(0, L"ID", LVCFMT_LEFT, 60);
	m_oIngridientsListControl.InsertColumn(1, L"Ingridient Names", LVCFMT_LEFT, 100);
	m_oIngridientsListControl.InsertColumn(2, L"Quantity", LVCFMT_LEFT, 60);
	m_oIngridientsListControl.SendMessage(LVM_SETEXTENDEDLISTVIEWSTYLE, 0, LVS_EX_FULLROWSELECT);
	PopulateListCtrl();
	return TRUE;
}


void CIngridientsDlg::PopulateListCtrl()
{
	int iCount = 0;
	iCount = m_oIngridientList->GetCount();
	POSITION oPosition = m_oIngridientList->GetHeadPosition();
	
	for (int iIndex = 0; iIndex < iCount; iIndex++)
	{
		CIngridient oIngridientToAdd = m_oIngridientList->GetNext(oPosition);
		CString oText;
		oText.Format(_T("%d"), iIndex);
		m_oIngridientsListControl.InsertItem(iIndex, oText);
		m_oIngridientsListControl.SetItemText(iIndex, 1, oIngridientToAdd.GetIngridientNameString());
		m_oIngridientsListControl.SetItemText(iIndex, 2, oIngridientToAdd.GetQuantityWithUnit());
		
	}
}

void CIngridientsDlg::OnBnClickedAddStepBtn()
{
	UpdateData(TRUE);
	CIngridientAddDlg oAddDlg;
	CIngridient oIngridientToAdd;
	int iIndex = m_oIngridientsListControl.GetItemCount();
	oAddDlg.SetIngridientPointer(oIngridientToAdd);
	if (oAddDlg.DoModal() == IDOK)
	{
		CString oText;
		oText.Format(_T("%d"), iIndex);
		m_oIngridientList->AddTail(oIngridientToAdd);
		m_oIngridientsListControl.InsertItem(iIndex, oText);
		m_oIngridientsListControl.SetItemText(iIndex, 1, oIngridientToAdd.GetIngridientNameString());
		m_oIngridientsListControl.SetItemText(iIndex, 2, oIngridientToAdd.GetQuantityWithUnit());
	}
	UpdateData(FALSE);
}


void CIngridientsDlg::OnBnClickedDelBtn()
{
	UpdateData(TRUE);
	int iCurrentSelection;
	iCurrentSelection = m_oIngridientsListControl.GetSelectionMark();
	if (iCurrentSelection != -1)
	{
		m_oIngridientList->RemoveAt(m_oIngridientList->FindIndex(iCurrentSelection));
		m_oIngridientsListControl.DeleteAllItems();
		PopulateListCtrl();
	}
	UpdateData(FALSE);
	// TODO: Add your control notification handler code here
}

void CIngridientsDlg::GetIngridientList(CList<CIngridient>& ooDest)
{
	for (POSITION pos = m_oIngridientList->GetHeadPosition(); pos;)
	{
		ooDest.AddTail(m_oIngridientList->GetNext(pos));
	}
}
