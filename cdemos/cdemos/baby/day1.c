#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include <Windows.h>

typedef int int32;

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

struct Student
{
	int id;  // 4
	char* name; // 4
	double score;  // 8
};

enum ScoreLevel
{
	S = 0, // 90+
	A, // [80, 89)
	B, // [70, 79)
	C, // [60, 69)
	D // < 60
};


union A
{
	int a;
	double b; // 8
	char c;
};


/// <summary>
/// score : 0 -100
/// </summary>
enum ScoreLevel GetLevel(int score)
{
	enum ScoreLevel level;
	if (score >= 90)
	{
		level = 0;
		level = S;
	}
	else if (80 <= score && score < 90)
	{
		level = A;
	}
	else if (70 <= score && score < 80)
	{
		level = B;
	}
	else if (60 <= score && score < 70)
	{
		level = C;
	}
	else if (score < 60)
	{
		level = D;
	}
	return level;
}

void test1()
{
	union A a;
	a.a = 0xffffeeee;
	a.c = 0x30;

	printf("%x\n", a.a);

}

void file_copy()
{
	char s[100] = "111"; // 长度为4 

	// r w a(append)

	FILE* fp = fopen("C:\\Users\\smx\\Desktop\\file_rename.txt", "r");
	char buffer[101] = {0};

	int ret = fread(buffer, sizeof(char), 100, fp);
	buffer[ret] = 0;
	printf("%s", buffer);

	while (ret)
	{
		memset(buffer, 0, 101);
		ret = fread(buffer, sizeof(char), 100, fp);
		buffer[ret] = 0;
		printf("%s", buffer);
	}

	fclose(fp);
}

int main()
{
	file_copy();
	printf("hello\n");
	//enum ScoreLevel level =
		/*enum ScoreLevel level = 0;
		printf("%s\n", level);*/
		// if 
		//printf("%d", GetLevel(88));
		//int a = 10;
		/*struct Student s1 = {1, 100, "smx"};

		printf("id = %d, name = %s, score = %lf\n", s1.id, s1.name, s1.score);*/

		//printf("%d\n", sizeof(struct Student));

		//s1 = struct 
		// atoi  itoa  
		// a: alpha i:int

		/*int a = 10;
		char buffer[10] = { 0 };
		_itoa(a, buffer, 2);


		printf("%s\n", buffer);*/
		//atoi()
		/*int b = 011;
		printf("%d\n", b);*/
		/*int a = 0x00030C34;
		int direction = 0;
		scanf("");
		SetWindowPos(a, NULL, 100, 0, 1000, 1000, 0);*/
		return 0;
}