#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <errno.h>


int main()
{
	int a = -1;
	int b = 0;
	char c = 0;
	FILE* fp = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, fp);
	fclose(fp);

	fp = fopen("test.txt", "rb");
	//char类型运算是整型提升，使ff==EOF
	while ((c = fgetc(fp)) != EOF)
	{
		printf("%x/n", c);
	}
	rewind(fp);
	while ((b = fgetc(fp)) != EOF)
	{
		printf("%x/n", b);
	}
	return 0;
}

//int main()
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "w");
//	fputc('1', fp);
//	fputc('0', fp);
//	fputc('0', fp);
//	fputc('0', fp);
//}

//int main()
//{
//	char a = 255;
//	unsigned char b = -1;
//
//	printf("a = %u\n", a);
//	printf("b = %u\n", b);
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int c = 0;
//	while (!feof(pf))
//	{
//		c = fgetc(pf);
//		printf("%c:/t%x/n", c, c);
//	}
//
//	return 0;
//}


//enum
//{
//	SIZE = 5
//};
//
//int main()
//{
//	double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
//	double b = 0.0;
//	size_t ret_code = 0;
//
//	FILE* pf = fopen("test2.bin", "wb");
//	fwrite(a, sizeof(double), SIZE, pf);
//	fclose(pf);
//
//	pf = fopen("test2.bin", "rb");
//	while ((ret_code = (fread(&b, sizeof(double), 1, pf))) >= 1)
//	{
//		printf("%lf ", b);
//	}
//
//	if (feof(pf))
//	{
//		printf("reach the end of file\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("freand error");
//	}
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	char a[10] = "hello";
//
//	FILE* pf = fopen("test.txt", "wb");
//	if (!pf)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	fwrite(a, sizeof(char), 5, pf);
//	fclose(pf);
//
//	pf = fopen("test.txt", "rb");
//
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//
//	if (feof(pf))
//	{
//		printf("reach the end of file\n");
//	}
//	else if (ferror(pf))
//	{
//		printf("I/O error when reading\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("file opening ");
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//fseek(pf, -2, SEEK_END);
//	//int ch = fgetc(pf);
//	//int n = ftell(pf);
//	//printf("%d\n", n);
//	//printf("%c\n", ch);
//
//	printf("%c\n", fgetc(pf));
//	rewind(pf);
//	printf("%c\n", fgetc(pf));
//	
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}