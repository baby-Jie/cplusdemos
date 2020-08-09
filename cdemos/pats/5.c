
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int flags[101];
int reached_flags[101];

int main_5()
{
	int n, i = 0;
	scanf("%d", &n);
	int* num = (int*)malloc(sizeof(int) * n);

	//memset(flags, 0, sizeof(int) * 101);

	for (; i < n; i++)
	{
		scanf("%d", num + i);
		flags[*(num + i)] = 1;
	}

	flags[1] = 0;
	reached_flags[1] = 1;

	for (i = 0; i < n; i++)
	{
		int currentVal = num[i];
		while (currentVal != 1)
		{
			if (reached_flags[currentVal])
			{
				break;
			}
			reached_flags[currentVal] = 1;
			if (currentVal & 1)
			{
				currentVal = (currentVal * 3 + 1) / 2;
			}
			else
			{
				currentVal /= 2;
			}
			flags[currentVal] = 0;
		}
	}
	int firstFlag = 1;

	for (i = 100; i >= 0; i--)
	{
		if (flags[i])
		{
			if (firstFlag)
			{
				printf("%d", i);
				firstFlag = 0;
			}
			else
			{
				printf(" %d", i);
			}
		}
	}
	printf("\n");
	return 0;
}
