
// mfc_test.h : ������� ���� ��������� ��� ���������� mfc_test
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������


// Cmfc_testApp:
// � ���������� ������� ������ ��. mfc_test.cpp
//

class Cmfc_testApp : public CWinAppEx
{
public:
	Cmfc_testApp();


// ���������������
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ����������

public:
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmfc_testApp theApp;
