#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	char buf[100];
	unsigned int ibuf = 0;
	int num_characters = 0;

	num_characters += print_buf(buf, ibuf);
	printf("Number of characters printed: %d\n", num_characters);
	return (0);
 }
