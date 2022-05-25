#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <memory.h>
#include <assert.h>

void* my_memcpy(void* dst, const void* src, size_t count)
{
	void* ret = dst;
	assert(dst && src);
	while (count--)
	{
		*(char*)dst = *(char*)src;
		++(char*)dst, ++(char*)src;
		//((char*)dst)++, ((char*)src)++;
	}
	return ret;
}


void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		while (count--)
			*((char*)dest)++ = *((char*)src)++;
	}
	else if (dest > src)
	{
		//(char*)dest += count - 1, (char*)src += count - 1;

		while (count--)
		{
			int a = 0;
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}



int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	//void* ret=my_memcpy(arr2, arr1, sizeof(arr1));
	void* ret = my_memmove(arr1+3, arr1, 20);
	int i = 0;
	for (; i < sizeof(arr1) / sizeof(int); i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}