#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */
<<<<<<< HEAD
typedef struct{
	int (*fun)(va_list num);
	const char *identif;
}
convertion;
int pfunction_hexupc(va_list num);
int pfunction_hexlc(va_list num);
int pfunction_oct(va_list num);
int pfunction_unsi(va_list num);
int pfunction_bin(va_list num);
int pfunction_str(va_list num);
int pfunction_char(va_list num);
int pfunction_int(va_list num);
int pfunction_dec(va_list num);
int putchar(char c);
=======

typedef struct specifiers
{
	char specifiers;
	int (*fun)(va_list);
} specifiers_t;

/*prototypes*/
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

/*Conversion specifiers*/
int pfunction_char(va_list args);
int pfunction_str(va_list args);

>>>>>>> da5e9613277480e4575df23b3f70172c3c76bea6
#endif
