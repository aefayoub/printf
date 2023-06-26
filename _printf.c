#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * @identif: specifier from the char*.
 * @fun: ptr to specifier of the match. 
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	int i = 0;
	int len = 0;
	va_list num;
	struct
	{
		int (*fun)(va_list);
		const char *identif;
	}
	convert_match match[] = {
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
			len += _putchar('%') + _putchar(format[i]);
	}
	else
	leng += _putchar(format[i]);
	i++;
}
}
va_end(num);
return (len);
}
