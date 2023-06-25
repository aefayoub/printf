#include "main.h"
/**
 * pfunction_bin - Print the binary of an unsigned int
 * @args: List of arguments
 * Return: Number of characters printed
 */
int pfunction_bin(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int len = 0;
int i;
int b;
for (i = 31; i >= 0; i--)
{
b = (num >> i) & 1;
_putchar(b + '0');
len++;
}
return (len);
}
