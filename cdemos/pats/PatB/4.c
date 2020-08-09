
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main4()
{
	int n, max_score, min_score, temp_score;
	char max_name[11], min_name[11], max_id[11], min_id[11], temp_id[11], temp_name[11], i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		memset(temp_name, 0, 10);
		memset(temp_id, 0, 10);
		scanf("%s%s%d", temp_name, temp_id, &temp_score);
		if (i == 0)
		{
			strcpy(max_name, temp_name);
			strcpy(min_name, temp_name);
			strcpy(max_id, temp_id);
			strcpy(min_id, temp_id);
			max_score = temp_score;
			min_score = temp_score;
		}
		else
		{
			if (temp_score > max_score)
			{
				max_score = temp_score;
				strcpy(max_name, temp_name);
				strcpy(max_id, temp_id);
			}
			else if (temp_score < min_score)
			{
				min_score = temp_score;
				strcpy(min_name, temp_name);
				strcpy(min_id, temp_id);
			}
		}
	}
	printf("%s %s\n", max_name, max_id);
	printf("%s %s\n", min_name, min_id);
	return 0;
}
