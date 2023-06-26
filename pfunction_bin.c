#include "main.h"
/**
 * pfunction_bin - Print the binary of an unsigned int
 * @num: List of arguments
 * Return: Number of characters printed
 */
int pfunction_bin(va_list num)
{
	unsigned int val = va_arg(num, unsigned int);
	int len = 0;
	int i;
	int b;

	for (i = 31; i >= 0; i--)
	{
		b = (val >> i) & 1;
		putchar(b + '0');
		len++;
	}
	return (len);
}
