#include "main.h"
#include <stdio.h>
/**
 * print_prg - Writes the character '%' to the buffer.
 * @a: Unused argument (to match the function pointer signature).
 * @buf: Buffer pointer.
 * @i: Index for buffer pointer.
 *
 * Return: Always returns 1.
 */
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
