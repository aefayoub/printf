#include "main.h"
/**
 *
 *
 *
 */
int pfunction_hexupc(va_list num)
{
	unsigned int n = va_arg(num, unsigned int);
	int i = 0;
	int count = 0;
	int *arr;
	unsigned int num = n

		while (n != 0)
		{
			n = n / 16;
			count++;
		}
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = num % 16;
		num = num / 16
	}
	for (i = count - 1; i >= 0 ; i --)
	{
		if (arr[i] > 9)
			_putchar(arr[i] + 55)
		else
			_putchar(arr[i] + '0')
	}
	free(arr);
	return count;
}
