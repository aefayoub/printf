#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
va_list num;
int i = 0, leng = 0;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'i':
case 'd':
{
int n = va_arg(num, int);
leng = leng +  pfunction_int(num);
break;
}
case 's':
{
char *str = va_arg(num, char *);
leng = leng + pfunction_string(num);
break;
}
case 'c':
{
char c = va_arg(num, int);
leng = leng + pfunction_char(num);
break;
}
unsigned int n = va_arg(num, unsigned int);
leng = leng + pfunction_bin(num);
break;
}
default:
_putchar('%');
_putchar(format[i]);
leng += 2;
break;
}
}
else
{
_putchar(format[i]);
leng++;
}
i++;
}
va_end(num);
return (leng);
}
