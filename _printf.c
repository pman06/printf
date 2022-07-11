#include <stdio.h>
#include <stdarg.h>
/**
 * print_string- Function to print strings
 * @s: string to print
 * Return: interger count
 */
int print_string(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		count++;
		i++;
	}
	return (count);
}

/**
 * print_char- Function to print char
 * @ch: character to print
 * Return: void
 */
void print_char(char ch)
{
	putchar(ch);
}


/**
 * _printf- Function to print anything
 * @format: string to print
 * Return: interger
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	char ch, chr;
	char *s;
	va_list ls;

	if (!format)
	{
		return (-1);
	}
	va_start(ls, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ch = format[i + 1];
			switch (ch)
			{
				case 'c':
					chr = (char) va_arg(ls, int);
					print_char(chr);
					break;

				case 's':
					s = va_arg(ls, char *);
					count += print_string(s);
					break;

				case '%':
					putchar('%');
					break;
			}
			i++;
			count--;
		}
		else
		{
			putchar(format[i]);
		}
		i++;
		count++;
	}

	va_end(ls);
	return (count);
}
