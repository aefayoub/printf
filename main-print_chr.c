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
	char buf[100]; // Buffer to store the characters
    unsigned int ibuf = 0; // Index for the buffer
    int num_characters = 0; // Number of characters printed

    char c = 'A'; // Example character to print
    num_characters += print_buf(buf, ibuf, c);

    // Call other print functions if needed and update num_characters accordingly

    printf("Number of characters printed: %d\n", num_characters);

    return 0;
 }
