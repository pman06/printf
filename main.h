#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
typedef struct printers 
{
	char *c;
	int (*f)(va_list);
} prt;
int print_string(va_list ls);
int print_int(va_list ls);
int print_char(va_list ls);
#endif
