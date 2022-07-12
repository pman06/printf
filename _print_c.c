#include "main.h"
/*
 * printar- function to print char oout
 * @ls: variadic list
 * Return: 1
 */
int print_char(va_list ls)
{
	char c = va_arg(ls, int);
	return (_putchar(c));
}
