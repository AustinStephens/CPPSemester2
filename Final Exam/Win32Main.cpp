// Final Exam
// Displays 4 buttons, 3 show a special message when pressed. The 4th exits the program.
#include <windows.h> 

#define ID_BUTTON1 0x0101
#define ID_BUTTON2 0x0102
#define ID_BUTTON3 0x0103
#define ID_ENBN  0x0201 


const char szAppName[] = "Buttons";
const char szClassName[] = "Buttons class";

HWND AppInit(HINSTANCE hCurrent, HINSTANCE hPrevious);

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMsg,
	WPARAM wParam, LPARAM lParam)
{
	static HINSTANCE hInstance;
	static HWND Button1, Button2, Button3, EnBn;

	switch (iMsg)
	{
	case WM_CREATE:
		hInstance = ((CREATESTRUCT*)lParam)->hInstance;

		Button1 = CreateWindow("Button", "DOOR#1",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			40, 20, 100, 20, hWnd, (HMENU)ID_BUTTON1, hInstance, NULL);

		Button2 = CreateWindow("Button", "DOOR#3",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			260, 20, 100, 20, hWnd, (HMENU)ID_BUTTON3, hInstance, NULL);

		Button3 = CreateWindow("Button", "DOOR#2",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			150, 20, 100, 20, hWnd, (HMENU)ID_BUTTON2, hInstance, NULL);

		EnBn = CreateWindow("Button", "ENOUGH Already",
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			125, 60, 150, 20, hWnd, (HMENU)ID_ENBN, hInstance, NULL);
		break;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_BUTTON1:
			MessageBox(hWnd, "Sorry you lost your Ear Buds !!", "Message", MB_OK);
			break;
		case ID_BUTTON2:
			MessageBox(hWnd, "You have won a PIGGY BANK with $9.26 in pennies!!!", "Message", MB_OK);
			break;
		case ID_BUTTON3:
			MessageBox(hWnd, "You have WON an All Expenses Paid Package\n2 Adults & 2 children passes to the Air Zoo !!!", "Message", MB_OK);
			break;
		case ID_ENBN:
			SendMessage(hWnd, WM_CLOSE, 0, 0);
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

	return CreateWindow(szClassName, szAppName, WS_DLGFRAME,
		CW_USEDEFAULT, CW_USEDEFAULT, 400, 150,
		NULL, NULL, hCurrent, NULL);
}
