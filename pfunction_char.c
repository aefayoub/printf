#include "main.h"
/**
 * pfunction_char - Print a character
 * @num: List of arguments
 * Return: Number of characters printed
 */
int pfunction_char(va_list num)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);

<<<<<<< HEAD
	return (putchar(c));
=======
>>>>>>> da5e9613277480e4575df23b3f70172c3c76bea6
}
