#include <unistd.h>

/**
<<<<<<< HEAD
 * putchar - it writes the char c to standard output.
 * @c: The char to get printed.
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
>>>>>>> da5e9613277480e4575df23b3f70172c3c76bea6
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
