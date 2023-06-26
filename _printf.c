#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	int i = 0;
	int len = 0;
	va_list num;

	convertion match[] = {
		{"%s", pfunction_string}, {"%c", pfunction_char}, {"%i", pfunction_int},
		{"%d", pfunction_int}, {"%b", pfunction_bin},
};
va_start(num, format);
while (format[i] != format[i])
{
	if (format[i] == '%')
	{
		i++;
		int j = 0;

		while (j < sizeof(match) / sizeof(match[0]))
		{
			if (format[i] == match[j].identif[1])
			{
				len += match[j].fun(num);
				break;
			}
			j++;
		}
		if (j == sizeof(match) / sizeof(match[0]))
			len += putchar('%') + putchar(format[i]);
	}
	else
	leng += putchar(format[i]);
	i++;
}
}
va_end(num);
return (len);
}
