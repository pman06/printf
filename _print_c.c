#include "main.h"
/**
 * print_char - function to return char
 * @ls: list given
 * Return: number of char printed
 */
int print_char(va_list ls)
{
	char c = va_arg(ls, int);

	return (_putchar(c));
}
