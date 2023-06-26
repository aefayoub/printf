#include "main.h"
/**
 * pfunctionstr - Print a string
 * @num: List of arguments
 * Return: Number of characters printed
 */
int pfunction_str(va_list num)
{
	int i;
	int count_fun = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
<<<<<<< HEAD
	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		len++;
	}
	return (len);
=======

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		count_fun += _putchar(str[i]);

	return (count_fun);
>>>>>>> da5e9613277480e4575df23b3f70172c3c76bea6
}
