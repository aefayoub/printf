#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * pfunction_int - prints singned integer %i.
 * @args: printing type arguments.
 * Return: number of character printed.
 */
int pfunction_int(va_list args)
{
int i = 0;
int n = va_arg(args, int);
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
int num[10];
int last = 0;
while (n > 0)
{
num[last++] = n % 10;
n = n / 10;
for (int x = last - 1; x >= 0; x--)
{
_putchar(num[i] + '0');
i++;
}
/**
 * pfunction_dec - prints singned integer %d.
 * @args: printing type arguments.
 * Return: number of character printed.
 */
int pfunction_dec(va_list args)
{
int i = 0;
int n = va_arg(args, int);
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
int num[10];
int last = 0;
while (n > 0)
{
num[last++] = n % 10;
n = n / 10;
for (int x = last - 1; x >= 0; x--)
{
_putchar(num[i] + '0');
i++;
}
return (i);
} 
