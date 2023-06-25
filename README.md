0x11. C - printf
C
Group project(Lerato Mgwangqa, AYOUB ABOU EL FARAJ)

Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Compilation
Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf

Example of test file that you could use:
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$

0. Write a function that produces output according to a format.

 Prototype: int _printf(const char *format, ...);
 Returns: the number of characters printed (excluding the null byte used to end output to strings)
 write output to stdout, the standard output stream
 format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
 a. c: Used to print a single character.
 b. s: Used to print a null-terminated string.
 c. %: Used to print a literal % character.
 You don’t have to reproduce the buffer handling of the C library printf function
 You don’t have to handle the flag characters
 You don’t have to handle field width
 You don’t have to handle precision
 You don’t have to handle the length modifiers

1. Handle the following conversion specifiers:
 1.1 d: Used to print a signed decimal integer.
 1.2 i: Used to print a signed decimal integer.
 You don’t have to handle the flag characters
 You don’t have to handle field width
 You don’t have to handle precision
 You don’t have to handle the length modifiers

2. Handle the following custom conversion specifiers:

 2.1 b: the unsigned int argument is converted to binary

3. Handle the following conversion specifiers:
 3.1 u: Used to print an unsigned decimal integer.
 3.2 o: Used to print an unsigned octal number.
 3.3 x: Used to print an unsigned hexadecimal number in lowercase.
 3.4 X: Used to print an unsigned hexadecimal number in uppercase.
 You don’t have to handle the flag characters
 You don’t have to handle field width
 You don’t have to handle precision
 You don’t have to handle the length modifiers

4. Use a local buffer of 1024 chars in order to call write as little as possible.

5. Handle the following custom conversion specifier:

 5.1 S : prints the string.
 Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. Handle the following conversion specifier:

 6.1  p: Used to print a pointer address.
 You don’t have to handle the flag characters
 You don’t have to handle field width
 You don’t have to handle precision
 You don’t have to handle the length modifiers

7. Handle the following flag characters for non-custom conversion specifiers:

 +
 space
 #

8. Handle the following length modifiers for non-custom conversion specifiers:

 8.1 l:
 Used with %u, %o, %x, %X to indicate an unsigned long integer.For example, %lu for an unsigned long integer.

 8.2 h:
 Used with %d, %i, %u, %o, %x, %X to indicate a short integer.For example , %hd is used to print a short integer, %hu for an unsigned short integer.
 Conversion specifiers to handle: d, i, u, o, x, X
 For most general cases, you can omit the length modifiers "l" and "h" and rely on the default behavior based on the data type you are printing.

9. Handle the field width for non-custom conversion specifiers.

10. Handle the precision for non-custom conversion specifiers.
#advanced

11. Handle the 0 flag character for non-custom conversion specifiers.


12. Handle the - flag character for non-custom conversion specifiers.
#advanced

13. Handle the following custom conversion specifier:

  r : prints the reversed string

14. Handle the following custom conversion specifier:

  R: prints the rot13'ed string
#advanced

15.*All the above options work well together.
#advanced

