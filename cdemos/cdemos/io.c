#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

union A
{
	int a;
	char b;
};

long getFileSize(const char* file_path)
{
	FILE* fp = fopen(file_path, "r");

	fseek(fp, 0, SEEK_END);

	long size = ftell(fp);
	fclose(fp);

	return size;
}

void copyFile(const char* source_file_path, const char* target_file_path)
{
	// fopen fread fwrite
	FILE* fp_source = fopen(source_file_path, "r");

	FILE* fp_target = fopen(target_file_path, "w+");

	char buffer[1024];
	int ret = fread(buffer, sizeof(char), sizeof(buffer), fp_source);

	while (ret)
	{
		fwrite(buffer, sizeof(char), ret, fp_target);

		ret = fread(buffer, sizeof(char), sizeof(buffer), fp_source);
	}

	fclose(fp_source);
	fclose(fp_target);
}

void testGetFileSize()
{
	const char* file_path = "C:\\Users\\smx\\Desktop\\file.txt";
	getFileSize(file_path);
}

void testCopyFile()
{
	copyFile("C:\\Users\\smx\\Desktop\\file.txt", "C:\\Users\\smx\\Desktop\\file_copy1.txt");
}

void testOpenFileMode()
{
	FILE* fp = fopen("C:\\Users\\smx\\Desktop\\file_copy1.txt", "a+");
	char buffer[100] = "123";
	fwrite(buffer, sizeof(char), strlen(buffer), fp);
	fclose(fp);
	printf("%s\n", buffer);
}

void testPrintf()
{
	// double 类型 输入使用%lf 输出使用%f %lf都可以
	FILE* fp = fopen("C:\\Users\\smx\\Desktop\\file.txt", "r");

	char buffer[1024] = {0};
	while (!feof(fp))
	{
		int ret = fread(buffer, 1, 1024, fp);

		printf("%s", buffer);
	}
	fclose(fp);
}

void testFileStat()
{
	struct stat s = { 0 };
	stat("C:\\Users\\smx\\Desktop\\file.txt", &s);
	printf("%d\n", s.st_size);
}

void testRename()
{
	rename("C:\\Users\\smx\\Desktop\\file.txt", "C:\\Users\\smx\\Desktop\\file_rename.txt");
}

void testBuffer()
{
	FILE* fp = fopen("C:\\Users\\smx\\Desktop\\1.txt", "w+");

	int i;
	for (i = 0; i < 3; i++)
	{
		char buffer[100];
		scanf("%s", buffer);
		fwrite(buffer, 1, strlen(buffer), fp);
		fflush(fp); // 将缓冲区的数据输出到文件中
	}
	// 因为有缓冲区的存在，只有到这一步，才会输出到文件中，
	fclose(fp);
}

int main_io()
{
	testBuffer();
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

	//union A a;
	//a.a = 0;
	//a.b = 10;
	//printf("%d\n", a.a);
	return 0;

}
