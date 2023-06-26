#include "main.h"
/**
 *
 *
 *
 */
int pfunction_unsi(va_list args)
{
	unsigned int n = va_arg(srgs, unsigned int);
	int i = 0;
	int last = n % 10;
	int num, dig = 1

	n = n / 10;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		last = -last;
		i++;
	}

	if (n > 0)
	{
		unsigned int val = n;
		while (val / 10 != 0)
		{
			dig *= 10;
			val = val / 10;
		}
		val = n;
		while (dig > 0)
		{
			num = val / dig;
			_putchar(num + '0');
			val %= val;
			val /= 10;
			i++;
		}
	}
	_putchar(last + '0');
	i++;
	return (i);
}
