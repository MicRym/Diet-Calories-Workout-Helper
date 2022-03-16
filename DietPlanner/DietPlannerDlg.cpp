// DietPlannerDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "DietPlanner.h"
#include "DietPlannerDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CDietPlannerDlg dialog



CDietPlannerDlg::CDietPlannerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIETPLANNER_DIALOG, pParent)
	, m_oGroupTextString(_T(""))
	, m_dProteins(0)
	, m_dFats(0)
	, m_dCarbs(0)
	, m_dTotalCalories(0)
	, m_iOption(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDietPlannerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_CONNECTION_STATIC, m_oConnectionFlag);
	DDX_Text(pDX, IDC_GROUP, m_oGroupTextString);
	DDX_Control(pDX, IDC_PROTEINS_EDIT, m_oProteinsControl);
	DDX_Control(pDX, IDC_FATS_EDIT, m_oFatsControl);
	DDX_Control(pDX, IDC_CARBS_EDIT, m_oCarbsControl);
	DDX_Control(pDX, IDC_TOTAL_CALORIES, m_oTotalCalories);
	DDX_Text(pDX, IDC_PROTEINS_EDIT, m_dProteins);
	DDV_MinMaxDouble(pDX, m_dProteins, 0, DBL_MAX);
	DDX_Text(pDX, IDC_FATS_EDIT, m_dFats);
	DDX_Text(pDX, IDC_CARBS_EDIT, m_dCarbs);
	DDV_MinMaxDouble(pDX, m_dCarbs, 0, DBL_MAX);
	DDX_Text(pDX, IDC_TOTAL_CALORIES, m_dTotalCalories);
	DDV_MinMaxDouble(pDX, m_dTotalCalories, 0, DBL_MAX);
	DDX_Radio(pDX, IDC_CALORIES_RADIO, m_iOption);
	DDV_MinMaxInt(pDX, m_iOption, -1, 1);
}

BEGIN_MESSAGE_MAP(CDietPlannerDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_LOGIN_BTN, &CDietPlannerDlg::OnBnClickedLoginBtn)
	ON_BN_CLICKED(IDC_CALORIES_RADIO, &CDietPlannerDlg::OnBnClickedCaloriesRadio)
	ON_BN_CLICKED(IDC_MACRO_RADIO, &CDietPlannerDlg::OnBnClickedMacroRadio)
END_MESSAGE_MAP()


// CDietPlannerDlg message handlers

BOOL CDietPlannerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	MacroEditDisable(FALSE);
	// TODO: Add extra initialization here
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDietPlannerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDietPlannerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDietPlannerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDietPlannerDlg::OnBnClickedLoginBtn()
{
	m_oLoginDialog.SetDBPointer(m_oCDBConnector);
	if (m_oLoginDialog.DoModal() == IDOK)
	{
		m_oConnectionFlag = "Connected";
		AfxMessageBox(m_oCDBConnector.SelectFromTable());
		UpdateData(FALSE);
	}
	// TODO: Add your control notification handler code here
}


void CDietPlannerDlg::OnBnClickedCaloriesRadio()
{
	UpdateData(TRUE);
	MacroEditDisable(false);
	UpdateData(FALSE);
}


void CDietPlannerDlg::OnBnClickedMacroRadio()
{
	UpdateData(TRUE);
	MacroEditDisable(true);
	UpdateData(FALSE);
}

void CDietPlannerDlg::MacroEditDisable(bool bDisable)
{
	m_oCarbsControl.EnableWindow(bDisable);
	m_oFatsControl.EnableWindow(bDisable);
	m_oProteinsControl.EnableWindow(bDisable);
	m_oTotalCalories.SetReadOnly(bDisable);
}
