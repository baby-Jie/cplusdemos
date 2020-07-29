#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

union A
{
	int a;
	char b;
};

int main()
{
	// 随机数
	/*for (int i = 0; i < 10; i++)
	{
		int ret = rand() % 40;
		srand(time(NULL));
		printf("%d\n", ret);
	}*/

	/*short s = 0x1234;
	short* pts = &s;
	printf("%x\n", *((char*)pts));*/
	// scanf: %d %x %X %c %s %f
	// char(0 - 255) < short < int <= long  
	// scanf
	//int t = 100; // signed int t = 100;

	//int x = 16;
	//printf("%X\n", 31);

	////signed int t1 = 100;
	////long l = 123L;

	//unsigned char ch = -1000;

	//printf("%d\n", ch);

	//printf("%d\n", ch);


	//printf("char:%d,short:%d,int:%d,long:%d", sizeof(char), sizeof(short), sizeof(t), sizeof(long));
	/*char chs[100];
	scanf("%s", chs);
	printf("%s\n", chs);*/

	/*char* s1 = malloc(100);
	char* p = realloc(s1, 20000000);
	if (s1 == p)
	{
		printf("相同\n");
	}
	else
	{
		printf("不同\n");
	}

	free(p);
	return 0;*/

	union A a;
	a.a = 0;
	a.b = 10;
	printf("%d\n", a.a);
	return 0;

}
