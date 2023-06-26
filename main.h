#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct - structure to match conversion.
 * @identif: specifier from the char*.
 * @fun: ptr to specifier of the match.
 */
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
#endif
