#include "holberton.h"
/**
 * print_bin - funtion returns binaries
 * @va:parameter
 * Return: cont
 */

int print_bin(va_list va)
{
	unsigned int num;
	int  j;
	int a[100];
	int cont = 0;

	num = va_arg(va, int);
	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	while (num > 0)
	{
		a[cont] = num % 2;
		num /= 2;
		cont++;
	}

	for (j = cont - 1; j >= 0; j--)
		putchar(a[j] + 48);
	return (cont);
}
