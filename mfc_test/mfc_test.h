
// mfc_test.h : главный файл заголовка для приложения mfc_test
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// Cmfc_testApp:
// О реализации данного класса см. mfc_test.cpp
//

class Cmfc_testApp : public CWinAppEx
{
public:
	Cmfc_testApp();


// Переопределение
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Реализация

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
