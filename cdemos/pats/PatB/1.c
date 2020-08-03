#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1()
{
	int n;
	scanf("%d", &n);
	int step = 0;
	while (n != 1)
	{
		if (n & 1)
		{
			n = 3 * n + 1;
		}
		n /= 2;
		step++;
	}
	printf("%d\n", step);
	return 0;
}
