
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, i = 0;
	scanf("%d", &n);
	int* num = (int*)malloc(sizeof(int) * n);
	int* flags = (int*)malloc(sizeof(int) * n);

	memset(flags, 0, sizeof(int) * n);

	for (; i < n; i++)
	{
		scanf("%d", num + i);
	}

	printf("\n");
	system("pause");
	return 0;
}
