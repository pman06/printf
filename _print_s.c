#include "main.h"
/*
 * print_string- function to print string out
 * @ls: variadic list
 * Return: count of string printed
 */
int print_string(va_list ls)
{
	char *s;
	int count;
	s = va_arg(ls, char *);
	if (s == NULL)
		s = "(null)";
	count = 0;
	while (s[count] != '\0')
		count += _putchar(s[count]);
	return (count);
}
