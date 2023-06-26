#include "main.h"
/**
 * pfunction_char - Print a character
 * @num: List of arguments
 * Return: Number of characters printed
 */
int pfunction_char(va_list num)
{
	int c = va_arg(args, int);

	return (putchar(c));
}
