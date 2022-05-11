#define _CRT_SECURE_NO_WARNINGS

#define N 5


#include <stdio.h>

char* test()
{
	char* p = "hello world";
	return p;
}

int main()
{
	char* p = test();

	printf("%s\n", p);

	return 0;
}

//#include <stdio.h>
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	printf("%d\n", p[1]);
//	return 0;
//}


//int strlen_m(char* string)
//{
//	if (*string != '\0')
//		return 1 + strlen_m(string + 1);
//	//char* start = string;
//	//char* end = string;
//	//while (*end != 0)
//	//{
//	//	end++;
//	//}
//	//return end - start;
//	//int count = 0;
//	//while (*string != '\0')
//	//{
//	//	string++;
//	//	count++;
//	//}
//	//return count;
//}
//
//void reverse_string(char* a)
//{
//	if (strlen_m(a) >= 2)
//	{
//		char tmp = a[0];
//		int len = strlen_m(a);
//		a[0] = a[len - 1];
//		a[len - 1] = '\0';
//		reverse_string(a + 1);
//		a[len-1] = tmp;
//	}
//
//	

	
	
	
	
	
	
	//int left = 0;
	//int right = strlen_m(a) - 1;
	//while (left < right)
	//{
	//	char tmp = 0;
	//	tmp = a[left];
	//	a[left] = a[right];
	//	a[right] = tmp;
	//	left++;
	//	right--;
	//}

	//char tmp = 0;
	//int left = 0;
	//int right = strlen_m(a) - 1;
	//if (left < right)
	//{
	//	tmp = a[left];
	//	a[left] = a[right];
	//	a[right] = '\0';
	//	reverse_string(a + 1);
	//	a[right] = tmp;
	//}
	//

//}
//
//int main()
//{
//	int i = 0;
//	char a[] = "abcdefgh";
//	int sz = strlen_m(a);
//	reverse_string(a);
//
//	printf("%s", a);
//
//
//	return 0;
//}







//void print(int n)
//{
//	if (n > 0)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int main()
//{
//	int n = 8574;
//	print(n);
//	return 0;
//}
//




//int Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1;
//}
//
//
//int main()
//{
//	int n = 2;
//	int k = 10;
//	int ret = Pow(n, k);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
//
//








//
//int main()
//{
//	int i = 0;
//	for (int i = 0; i <= 100000; i++)
//	{
//		int m = i;
//		int n = 1;//m至少有一位
//		int sum = 0;
//		while (m /= 10)
//		{
//			n++;
//		}
//
//		m = i;//while循环会将m归0，重新赋值
//
//		while (m)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//
//	return 0;
//}
//


//int Len(int n)
//{
//	int count = 1;
//	while (n/=10)
//	{
//		count++;
//	}
//	return count;
//}
//
////int main()
////{
////	printf("%d", Len(222));
////	return 0;
////}
//
//
//int Pow(int n, int len)
//{
//	if (len > 0)
//	{
//		return n%10 * Pow(n, len - 1);
//	}
//	else
//		return 1;
//	
//}
////
//////int main()
//////{
//////	printf("%d", Pow(2,10));
//////
//////	return 0;
//////}
////
//int Narc(int n, int len)
//{
//	if (n > 0)
//	{
//		return Pow(n, len) + Narc(n / 10, len);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//////水仙花数
//int main()
//{
//	int n = 0;
//	for (n = 0; n < 100000; n++)
//	{
//		int len = Len(n);
//		if (n == Narc(n, len))
//		{
//			printf("%d\n", n);
//		}
//	}
//
//	return 0;
//}



//int DigitSum(unsigned int num)
//{
//	if (num > 0)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//
//
//
//
//int main()
//{
//	unsigned int num = 5234;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}


//
//int main()
//{
//	printf("%d\n", 1%10);
//}




//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,3,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int* p = arr;
//	int* pa = &arr[2];
//	//print(arr, sz);
//	//printf("%p   %p", p+2, &arr[1]);
//
//	printf("%d\n", pa-p);
//	printf("%d\n", *(p+1));
//	printf("%d\n", *(p+4));
//	return 0;
//}




//int main()
//{
//	int a = -1;
//	int count = 0;
//	
//	while (a)
//	{
//		count++;
//		a &= a - 1;
//
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = 7;
//	
//	b += a++ + c;
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}
//
//
//




//int main()
//{



	//int a = 1;
	//!a--;
	//int arr[5] = { 1, 2, 3, 4, 5 };
	//int* p = NULL;
	//printf("%p\n", arr);
	//printf("%p\n", &arr[4]);
	//printf("%p\n", &arr[6]);

	//printf("%d", &arr[4]-&arr[0]);//元素个数


	//for (p = &arr[0]; p < &arr[N]; p++)
	//{
	//	*p = 0;
	//}
	//return 0;


 
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;//初始化指针
//	*p = 20;//无效指针，调试报错，指针使用前检查有效性
//
//	return 0;
//}


//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 9; i++)
//	{
//		*p++ = i;
//	}
//	return 0;
//}

//int main()
//{
//	int* p;//未初始化指针变量，默认放的是一个随机值
//	*p = 20;
//
//	return 0;
//}


//int main()
//{
//	int a[3] = { 1, 2, 3 };
//	int b = 0;
//	
//	int *p = &a;
//	int *t = &b;
//
//	printf("%d\n", *a+1);
//	/*printf("%d\n", a+1);
//	printf("%d\n", a+2);*/
//	printf("%p\n", &b);
//
//	printf("%d\n",sizeof(a[0]));
//}