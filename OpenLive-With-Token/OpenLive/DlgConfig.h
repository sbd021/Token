#pragma once
#include "afxwin.h"


// CDlgConfig dialog

class CDlgConfig : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgConfig)

public:
	CDlgConfig(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgConfig();

// Dialog Data
	enum { IDD = IDD_DIALOG_CONFIG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_edtAppid;
	CEdit m_edtCerf;
	afx_msg void OnBnClickedOk();
};
