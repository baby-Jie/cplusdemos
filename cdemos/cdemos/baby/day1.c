#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/// <summary>
/// 测试随机数
/// </summary>
void testRandom()
{
	// 先设置随机种子
	srand(time(NULL));

	int i = 0;
	for (; i < 10; i++)
	{
		int val = rand() % 100; // 取值 [0, 99]
		printf("%d\n", val);
	}
}

/// <summary>
/// 输入
/// </summary>
void testScanf()
{
	// scanf 中的x和X的效果是一样的  %x %X %d %s %c %f %ld %lf
	int x;
	scanf("%X", &x);
	printf("%d\n", x);
	
}

int main()
{
	testScanf();
	return 0;
}