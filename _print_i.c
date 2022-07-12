#include "main.h"
/*
 * print_int- function to print integers out
 * @ls: variadic list
 * Return: count of string printed
 */
int print_int(va_list ls)
{
	int integer = va_arg(ls, int);

	int c, div = 1;
	unsigned int n;

	if (integer < 0)
	{
		c = _putchar('-');
		n = integer * -1;
	}
	else
		n = integer;

	while (n / div > 9)
		div *= 10;

	while (div != 0)
	{
		c = c + _putchar(n / div + '0');
		n = n % div;
		div = div / 10;

	}
	return (c);
}
