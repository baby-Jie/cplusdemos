#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include <Windows.h>

typedef int int32;

/// <summary>
/// ���������
/// </summary>
void testRandom()
{
	// �������������
	srand(time(NULL));

	int i = 0;
	for (; i < 10; i++)
	{
		int val = rand() % 100; // ȡֵ [0, 99]
		printf("%d\n", val);
	}
}

/// <summary>
/// ����
/// </summary>
void testScanf()
{
	// scanf �е�x��X��Ч����һ����  %x %X %d %s %c %f %ld %lf
	int x;
	scanf("%X", &x);
	printf("%d\n", x);
	
}

int main()
{
	int a = 0x00030C34;
	int direction = 0;
	scanf("");
	SetWindowPos(a, NULL, 100, 0, 1000, 1000, 0);
	return 0;
}