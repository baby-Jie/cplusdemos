#include <Windows.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void test_p1()
{
	MessageBox(NULL, TEXT("�ҵ�һ��"), L"�ҵ�", MB_OK);
}

void test_p3()
{
	wchar_t ch = L'��';
	wchar_t chs[] = L"�ҵ�һ��";
	setlocale(LC_ALL, "Chs");
	wprintf(L"%ls, %lc\n", chs, ch);
}

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

void test_p4(HINSTANCE hInstance, int iCmdShow)
{
	static TCHAR szAppName[] = TEXT("MyWindows");

	HWND hwnd;
	MSG msg;
	WNDCLASS wndclass;

	wndclass.style = CS_HREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;

	if (!RegisterClass(&wndclass))
	{
		MessageBox(NULL, TEXT("���������Ҫ��Windows NT ����ִ��!"), szAppName, MB_ICONERROR);
		return;
	}

	hwnd = CreateWindow(szAppName, TEXT("������"), 
		WS_OVERLAPPEDWINDOW, 
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL, 
		NULL, 
		hInstance,
		NULL);

	ShowWindow(hwnd, iCmdShow);

	while (GetMessage(&msg, hwnd, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

void test_start(HINSTANCE hInstance, int iCmdShow)
{
	static TCHAR appName[] = TEXT("�ҵĲ��Գ���");
	HWND hwnd; // ���
	MSG msg; // ��Ϣ
	WNDCLASS wndClass;

	wndClass.style = CS_HREDRAW;
	wndClass.lpfnWndProc = WndProc;
	wndClass.cbClsExtra = 0;
	wndClass.cbWndExtra = 0;
	wndClass.hInstance = hInstance;
	wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndClass.lpszMenuName = NULL;
	wndClass.lpszClassName = appName;

	if (!RegisterClass(&wndClass))
	{
		MessageBox(NULL, TEXT("���������Ҫ��Windows NT����ִ��o !"), appName, MB_ICONERROR);
		return;
	}

	hwnd = CreateWindow(appName, TEXT("smx"), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);

	ShowWindow(hwnd, iCmdShow);

	while (GetMessage(&msg, hwnd, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}


LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC hdc;
	PAINTSTRUCT ps;
	RECT rect;
	switch (message)
	{
	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		GetClientRect(hwnd, &rect);
		TextOut(hdc, 400, 300, TEXT("��Һã������ҵĴ��ڳ���"), 12);
		//DrawText(hdc, TEXT("��Һã������ҵĵ�һ�����ڳ���"), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
		EndPaint(hwnd, &ps);
		return 0;
	/*case WM_DESTROY:
		PostQuitMessage(0);
		return 0;*/
	/*case WM_NCLBUTTONDOWN:
		MessageBox(hwnd, TEXT("���ڷǿͻ��������"), TEXT("����"), MB_OK);
		return 0;*/
	}
	return DefWindowProc(hwnd, message, wParam, lParam);
}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE preHInstance, PSTR pstr, int iCmdShow)
{
	test_start(hInstance, iCmdShow);


	return 0;
}