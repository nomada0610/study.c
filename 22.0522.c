#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

int my_strncmp(const char* str1, const char* str2, int count)
{
	int ret = 0;

	if (!count)
		return 0;

	while (count-- && !(ret = *str1++ - *str2++) && *str1);
			//str1++, str2++;

	return ret;//((ret > 0) - (-ret > 0));

}

//abcddef
//def

char* my_strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;
	char* cp1=NULL;
	char* cp2=NULL;
	//str2为NULL，返回str1
	if (!*str2)
		return str1;
	//在str1中找到str2的首个字符，

	while (*cp)
	{
		cp1 = cp;
		cp2 = (char*)str2;
		while (*cp2  && !(*cp1 - *cp2))
			cp1++, cp2++;
		
		if (!*cp2)
			return cp;
		
		cp++;
	}
	return NULL;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	int ret = 0;
	while ((ret =*str1 - *str2) == 0 && *str2)
	{
		str1++;
		str2++;
	}

	//if (ret == 0)
	//	return 0;
	//else
		return((ret > 0) - ((-ret) > 0));
}

int main()
{
	const char* p1 = "abcdefgg";
	const char* p2 = "abce";


	//char* ret = my_strstr(p1, p2);
	//if (ret)
	//	printf("找到了 %s\n", ret);
	//else
	//	printf("找不到\n");

	int ret = my_strncmp(p1, p2, 3);

	if (ret == 0)
		printf("p1 = p2\n");
	else if (ret > 0)
		printf("p1 > p2\n");
	else
		printf("p1 < p2\n");

	return 0;
}