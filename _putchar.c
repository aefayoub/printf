#include "main.h"
/**
 * putchar - it writes the char c to standard output.
 * @c: The char to get printed.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int putchar(char c)
{
        return (write(1, &c, 1));
}
