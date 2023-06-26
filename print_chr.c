#include "main.h"
#include <stdio.h>

/**
 * pfunction_char - Print a character
 * @num: List of arguments
 * Return: Number of characters printed
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);

}
