#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
va_list args;
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
int n = va_arg(args, int);
leng = leng +  pfunction_int(args);
break;
}
case 's':
{
char *str = va_arg(args, char *);
leng = leng + pfunction_string(args);
break;
}
case 'c':
{
char c = va_arg(args, int);
leng = leng + pfunction_char(args);
break;
}
unsigned int n = va_arg(args, unsigned int);
leng = leng + pfunction_bin(args);
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
va_end(args);
return (leng);
}
