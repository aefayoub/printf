#include "main.h"
/**
 * pfunction_dec - prints singned integer %d.
 * @num: printing type arguments.
 * Return: number of character printed.
 */
int pfunction_dec(va_list num)
{
	int i = 0;
	int n = va_arg(num, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	if (n == 0)
	{
		_putchar('0');
		return (i + 1);
	}
	int val[10];
	int last = 0;

	while (n > 0)
	{
		val[last++] = n % 10;
		n = n / 10;
		for (int x = last - 1; x >= 0; x--)
		{
			_putchar(val[i] + '0');
			i++;
		}
		return (i);
	}
}
