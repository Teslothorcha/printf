#include "holberton.h"
/**
 * p_u - prints unsgined number
 *@list: argument enterede to format printing
 * Return: amount of integers printed
 */
int p_u(va_list list)
{
	unsigned int n = va_arg(list, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);

}
#include "holberton.h"
/**
 * p_o - prints number in octa
 *@list: argument enterede to format printing
 * Return: amount of integers printed
 */
int p_o(va_list list)
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
		arrb[i] = number % 8;
		number = number / 8;
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
/**
 * p_h - prints number in hexa
 *@list: argument enterede to format printing
 * Return: amount of integers printed
 */
int p_h(va_list list)
{
	unsigned int number;
	int arrb[100];
	int i, j, h;

	number = va_arg(list, unsigned int);
	h = 0, i = 0;
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number != 0)
	{
		h = number % 16;
		if (h < 10)
		{
			arrb[i] = (48 + h);
		}
		else
		{
			arrb[i] = (87 + h);
		}
		number = number / 16;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(arrb[j]);
	}
	return (i);
}
/**
 * p_hh - prints number in capital hexa
 *@list: argument enterede to format printing
 * Return: amount of integers printed
 */
int p_hh(va_list list)
{
	int number;
	int arrb[100];
	int i, j, h;

	h = 0;
	i = 0;
	number = va_arg(list, unsigned int);
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number != 0)
	{
		h = number % 16;
		if (h < 10)
		{
			arrb[i] = (48 + h);
		}
		else
		{
			arrb[i] = (55 + h);
		}
		number = number / 16;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(arrb[j]);
	}
	return (i);
}
int roott(va_list print)
{
	int i, j, counter = 0;
	int f = 0;
	char *str = va_arg(print, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		f = 0;
		for (j = 0; a[j] && !f; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				f = 1;
			}
		}
		if (!f)
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
