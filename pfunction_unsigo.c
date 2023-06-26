#include "main.h"
/**
 *
 *
 *
 */
int pfunction_oct(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0;
	unsigned int num = n;
	int *arr;
	int count = 0;

	while (n != 0)
	{
		n = n / 8;
		count++;
	}

	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = num % 8;
		num = num / 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
