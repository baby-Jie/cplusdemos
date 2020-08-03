
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* nums[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int main2()
{

	char buffer[100];
	int sum = 0, i = 0, len = 0;
	scanf("%s", buffer);
	len = strlen(buffer);
	for (i = 0; i < len; i++)
	{
		sum += buffer[i] - '0';
	}
	sprintf(buffer, "%d", sum);
	for (i = 0; i < strlen(buffer); i++)
	{
		if (i == 0)
		{
			printf("%s", nums[buffer[i] - '0']);
		}
		else
		{
			printf(" %s", nums[buffer[i] - '0']);
		}
	}
	printf("\n");
	return 0;
}
