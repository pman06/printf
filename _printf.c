#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_func- Function to return function for the
 * function specifier
 * @ls: variadic lists
 * @format: string pointer in printf
 * Return: int
 */
int print_func(va_list ls, const char *format)
{
	int b, i, count;
	char ch;

	prt arr[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	count = 0;
	i = 0;
	ch = format[i];
	while (format[i] != '\0')
	{
		if (ch == '%')
		{
			b = 0;
			i++;
			ch = format[i];
			while (arr[b].c != NULL && ch != *(arr[b].c))
				b++;
			if (arr[b].c != NULL)
				count += arr[b].f(ls);
			else
			{
				if (ch == '\0')
					return (-1);
				if (ch == '%')
					count += _putchar('%');
				count += _putchar(ch);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
		ch = format[i];
	}
	return (count);
}


/**
 * _printf- Function to print anything
 * @format: string to print
 * Return: interger
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list ls;

	if (!format)
	{
		return (-1);
	}
	va_start(ls, format);
	count	+= print_func(ls, format);
	va_end(ls);
	return (count);
}
