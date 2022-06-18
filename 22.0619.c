#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <errno.h>


struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	//struct S s = { "张三", 20, 78.5 };
	struct S tmp = { 0 };

	FILE* pf = fopen("test.txt", "rb");
	if (!pf)
		return 0;

	//fwrite(&s, sizeof(struct S), 1, pf);
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);

	fclose(pf);
	pf = NULL;

	return 0;
}

//struct S
//{
//	int n;
//	float f;
//	char arr[100];
//};
//
//
//int main()
//{
//	char arr[1024] = { 0 };
//	struct S s = { 50, 3.14, "abcdef" };
//	struct S tmp = { 0 };
//	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
//	printf("%s\n", arr);
//
//	sscanf(arr, "%d %f %s", &s.n, &s.f, s.arr);
//	printf("%d %f %s\n", s.n, s.f, s.arr);
//
//	return 0;
//}



//int main()
//{
//	struct S s = { 0 };//{ 50, 3.14, "ct" };
//	FILE* pf = fopen("test.txt", "r");
//	//fprintf(pf, "%d %f %s", s.n, s.f, s.arr);
//	fscanf(pf, "%d %f %s", &s.n, &s.f, s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.f, s.arr);
//	return 0;
//}
//


//int main()
//{
//	char arr[1024] = { 0 };
//	//FILE* pf = fopen("test.txt", "r");
//
//	//fputs("hello\n", pf);
//	//fputs("world", pf);
//
//	//fgets(arr, 1024, pf);
//	//puts(arr);
//	//fgets(arr, 1024, pf);
//	//puts(arr);
//
//	//fgets(arr, 1024, stdin);
//	//fputs(arr, stdout);
//
//	gets(arr);
//	puts(arr);
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen(".\\test.txt", "w");
//	//fputc('a', stdout);
//	return 0;
//}


//int main()
//{
//	//printf("%c\n", fgetc(stdin));
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (!pfWrite)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	FILE* pfRead = fopen("test.txt", "r");
//	if (!pfRead)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
