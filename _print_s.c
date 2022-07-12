#include "main.h"
/**
 * print_string - function to return char
 * @ls: list given
 * Return: number of char printed
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
