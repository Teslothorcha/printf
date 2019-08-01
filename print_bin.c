#include "holberton.h"
/**
 * p_b - prints number in binary
 *@list: argument enterede to format printing
 * Return: amount of integers printed
 */
int p_b(va_list list)
{
	int number = va_arg(list, int);
	int arrb[100];
	int i = 0, j, c;
	int counter;

	if (number == 0)
	{
		_putchar('0');
		return (-1);
	}
	while (number > 0)
	{
		arrb[i] = number % 2;
		number = number / 2;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		c = arrb[j];
		_putchar(c + '0');
		counter++;
	}
	return (counter);
}
