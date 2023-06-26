#include "main.h"
/**
 * pfunction_hexlwc - prints unsigned it in hex lowercase.
 * @
 *
 * Rerurn;
 */
int pfunction_hexlwc(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0;
	int count = 0;
	unsigned int num = n;
	int *arr;

	while ( num != 0)
	{
		n = n / 16;
		count++;
	}
	arr = malloc(count * sizeof(int));
	for(i = 0; i < count; i++)
	{
		arr[i] = num % 16;
		num = num / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] >9)
			_putchar(arr [i] + 87);
		else
			_putchar(arr[i] + '0');
	}
	free(arr);
	return count;
}
