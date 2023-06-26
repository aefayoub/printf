#include "main.h"
/**
 * pfuntion_char - Print a character
 * @num: List of arguments
 * Return: Number of characters printed
 */
int pfunction_char(va_list num)
{
	int c = va_arg(args, int);
	return (_putchar(c));
}  
