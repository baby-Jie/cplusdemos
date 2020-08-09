#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE preHInstance, PSTR pstr, int cmdLine)
{
	MessageBox(NULL, L"hello", L"caption", MB_OK);
	return 0;
}