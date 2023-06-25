#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
int i = 0;
va_list num;
len = 0;
convert_match match[] = {
{"%s", pfunction_string}, {"%c", pfunction_char}, {"%i", pfunction_int},
{"%d", pfunction_int}, {"%b", pfunction_bin},
};
va_start(num, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
int j = 0;
while (j < sizeof(match) / sizeof(match[0]))
{
if (format[i] == match[j].id[1])
{
len += match[j].f(num);
break;
}
j++;
}
if (j == sizeof(match) / sizeof(match[0]))
{
_putchar('%');
_putchar(format[i]);
len += 2;
}
}
else
{
_putchar(format[i]);
len++;
}
i++;
}
}
va_end(num);
return (len);
}
