#include "main.h"
/**
 * pfunctionstr - Print a string
 * @num: List of arguments
 * Return: Number of characters printed
 */
int pfunction_str(va_list num)
{
	char *str = va_arg(num, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";
	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		len++;
	}
	return (len);
}
