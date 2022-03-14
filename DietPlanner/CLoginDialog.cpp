// CLoginDialog.cpp : implementation file
//

#include "pch.h"
#include "DietPlanner.h"
#include "CLoginDialog.h"
#include "afxdialogex.h"


// CLoginDialog dialog

IMPLEMENT_DYNAMIC(CLoginDialog, CDialogEx)

CLoginDialog::CLoginDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LOGIN_DIALOG, pParent)
{

}

CLoginDialog::~CLoginDialog()
{
}

void CLoginDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_LOGIN_EDIT, m_oLoginString);
	DDX_Text(pDX, IDC_PASSWORD_EDIT, m_oPasswordString);
	DDX_Control(pDX, IDOK, m_oOKButton);
	DDX_Control(pDX, IDCANCEL, m_oCancelButton);
}


BEGIN_MESSAGE_MAP(CLoginDialog, CDialogEx)
	ON_BN_CLICKED(IDOK, &CLoginDialog::OnBnClickedOk)
END_MESSAGE_MAP()


// CLoginDialog message handlers


void CLoginDialog::OnBnClickedOk()
{
	UpdateData(TRUE);
	CT2A pszConvertedLoginString(m_oLoginString);
	CT2A pszConvertedPasswordString(m_oPasswordString);
	m_poDBConnector->ChangeUser(SQLString(pszConvertedLoginString), SQLString(pszConvertedPasswordString));
	m_poDBConnector->ChangeDB("dietplanner");
	CString ErrorMSG =  m_poDBConnector->ConnectToDatabase();
	if (ErrorMSG == "Sukces")
	{
		AfxMessageBox((CString)ErrorMSG);
		CDialogEx::OnOK();
	}
	else
	{
		AfxMessageBox((CString) ErrorMSG );
	}
}
