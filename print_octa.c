#include "holberton.h"

/**
 * octal - print a
 *@va:unsigned integer input
 *
 * Return: no return
 */
int octal(va_list va)
{
	unsigned int c;
	int  i, j;
	int a[100];

	c = va_arg(va, unsigned int);
	i = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c != 0)
	{
		a[i] = c % 8;
		c = c / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(a[j] + '0');
	return (i);
}
