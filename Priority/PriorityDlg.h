#pragma once
#include "header.h"

class CPriorityDlg
{
public:
	CPriorityDlg(void);
public:
	~CPriorityDlg(void);
	static BOOL CALLBACK DlgProc(HWND hWnd, UINT mes, WPARAM wp, LPARAM lp);
	static CPriorityDlg* ptr;
	void Cls_OnClose(HWND hwnd);
	BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
	void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
	HWND hPlay1, hPlay2, hPlay3, hList1, hList2, hList3;	
	HANDLE Th1, Th2, Th3;	
};
