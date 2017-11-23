// Lab14D.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "Lab14D.h"

#include <windows.h> 

#define ID_LOCKBUTTON 0x0101
#define ID_WARBUTTON 0x0102
#define ID_SHAMBUTTON 0x0103
#define ID_PALBUTTON 0x0104
#define ID_QUITBN  0x0201 

const char szAppName[] = "Class Game";
const char szClassName[] = "Selection Class";
const char newAppName[] = "Game Screen";
const char newClassName[] = "Screen Class";

HWND AppInit(HINSTANCE hCurrent, HINSTANCE hPrevious);

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMsg,
	WPARAM wParam, LPARAM lParam)
{
	static HINSTANCE hInstance;
	static HWND label;
	static HWND lockButton, warButton, shamButton, palButton, QuitBn;

	switch (iMsg)
	{
	case WM_CREATE:	
		hInstance = ((CREATESTRUCT*)lParam)->hInstance;

		label = CreateWindow("static", "ST_U",
			WS_CHILD | WS_VISIBLE | WS_TABSTOP,
			85, 0, 230, 20,
			hWnd, (HMENU)(501),
			(HINSTANCE)GetWindowLong(hWnd, GWL_HINSTANCE), NULL);
		SetWindowText(label , "Select the class you want to play.");

		lockButton = CreateWindow("Button", "Warlock",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			50, 25, 100, 18, hWnd, (HMENU)ID_LOCKBUTTON, hInstance, NULL);

		warButton = CreateWindow("Button", "Warrior",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			250, 25, 100, 18, hWnd, (HMENU)ID_WARBUTTON, hInstance, NULL);

		shamButton = CreateWindow("Button", "Shaman",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			50, 60, 100, 18, hWnd, (HMENU)ID_SHAMBUTTON, hInstance, NULL);

		palButton = CreateWindow("Button", "Paladin",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			250, 60, 100, 18, hWnd, (HMENU)ID_PALBUTTON, hInstance, NULL);

		QuitBn = CreateWindow("Button", "Exit",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			150, 100, 100, 18, hWnd, (HMENU)ID_QUITBN, hInstance, NULL);

		break;

	case WM_COMMAND:
		
		switch (LOWORD(wParam))
		{
		case ID_LOCKBUTTON:
			break;
		case ID_WARBUTTON:
			break;
		case ID_SHAMBUTTON:
			break;
		case ID_PALBUTTON:
			break;
		case ID_QUITBN:
			PostQuitMessage(0);
			break;
		}
		SetFocus(hWnd);
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, iMsg, wParam, lParam);
	} return 0;
}

LRESULT CALLBACK WndProc2(HWND hWnd, UINT iMsg,
	WPARAM wParam, LPARAM lParam)
{
	static HINSTANCE hInstance;

	switch (iMsg)
	{
	case WM_CREATE:
		hInstance = ((CREATESTRUCT*)lParam)->hInstance;

		break;

	case WM_COMMAND:

		switch (LOWORD(wParam))
		{
		}
		SetFocus(hWnd);
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, iMsg, wParam, lParam);
	} return 0;
}




int WINAPI WinMain(HINSTANCE hCurrInst, HINSTANCE hPrevInst,
	LPSTR strCmd, int iCmd)
{
	MSG msg;
	HWND hwnd;

	hwnd = AppInit(hCurrInst, hPrevInst);
	if (!hwnd) return false;

	ShowWindow(hwnd, iCmd);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return msg.wParam;
}

HWND AppInit(HINSTANCE hCurrent, HINSTANCE hPrevious)
{
	WNDCLASS wc;

	if (!hPrevious) {
		wc.lpszClassName = szClassName;
		wc.style = CS_HREDRAW | CS_VREDRAW;
		wc.lpfnWndProc = (WNDPROC)WndProc;
		wc.cbClsExtra = 0;
		wc.cbWndExtra = 0;
		wc.hInstance = hCurrent;
		wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
		wc.hCursor = LoadCursor(NULL, IDC_ARROW);
		wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 8);
		wc.lpszMenuName = NULL;
		if (!RegisterClass(&wc)) return NULL;
	}

	return CreateWindowEx(NULL, szClassName, szAppName, WS_DLGFRAME,
		CW_USEDEFAULT, CW_USEDEFAULT, 500, 500,
		NULL, NULL, hCurrent, NULL);
}
