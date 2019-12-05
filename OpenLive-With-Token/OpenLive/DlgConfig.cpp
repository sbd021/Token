// DlgConfig.cpp : implementation file
//

#include "stdafx.h"
#include "OpenLive.h"
#include "DlgConfig.h"
#include "afxdialogex.h"

#include "DlgConfig.h"
// CDlgConfig dialog

IMPLEMENT_DYNAMIC(CDlgConfig, CDialogEx)

CDlgConfig::CDlgConfig(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgConfig::IDD, pParent)
{

}

CDlgConfig::~CDlgConfig()
{
}

void CDlgConfig::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDT_APPID, m_edtAppid);
	DDX_Control(pDX, IDC_APP_CERF, m_edtCerf);
}


BEGIN_MESSAGE_MAP(CDlgConfig, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgConfig::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgConfig message handlers


void CDlgConfig::OnBnClickedOk()
{
	CString cerf;
	m_edtCerf.GetWindowText(cerf);
	cerf.Trim();

	if (cerf.IsEmpty()){
		AfxMessageBox(_T("cerf empty"));
		return;
	}
	CString appid;
	m_edtAppid.GetWindowText(appid);
	appid.Trim();


	if (appid.IsEmpty()){
		AfxMessageBox(_T("appid empty"));
		return;
	}
	// TODO: Add your control notification handler code here
	CAgoraConfig::GetAgoraConfig()->SetAppCerf(cerf);
	CAgoraConfig::GetAgoraConfig()->SetAppid(appid);
	CDialogEx::OnOK();
}
