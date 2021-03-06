/* 
 *
 * 
 * VideoEye
 *
 */

#pragma once
#include "resource.h"
#include "stdafx.h"
#include "afxcmn.h"

// Audiodecode 对话框

class Audiodecode : public CDialogEx
{
	DECLARE_DYNAMIC(Audiodecode)

public:
	Audiodecode(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Audiodecode();

// 对话框数据
	enum { IDD = IDD_AUDIODECODE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	//自己添加的，初始化Teechart
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	void SystemClear();
	CListCtrl m_decodeframe_a;
	afx_msg void OnBnClickedCancel();
};
