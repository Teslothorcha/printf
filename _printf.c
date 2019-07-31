#include <stdlib.h>
#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - Print string argument and all it's convertions
 *@format: string argument to be printed and searched to find format spec.
 *Return: number of char printed exlucding null byte
 */
int _printf(const char *format, ...)
{
	argument arr[] = {
		{'c', cha_r},
		{'s', strin_g},
		{'d', p_d},
		{'i', p_d},
		{'\0', NULL},
};
	int c1, c2, w;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);
	c1 = 0;
	w = 0;
	if (c1 == 0 && format[c1 + 1] == '\0')
		return (-1);
	while (format[c1] != '\0')
	{
		if (format[c1] == '%')
		{
			c2 = 0;
			while (arr[c2].f != '\0')
			{
				if (arr[c2].f == format[c1 + 1])
				{
					w += arr[c2].cv(list);
					c1++;
					break; }
				c2++; }
			if (format[c1] == '%' && format[c1 + 1] == '%')
			{
				_putchar('%');
				c1++;
				w++;
				break; }
			if (format[c1] == '%')
			{
				_putchar('%');
			}}
		else
		{
			_putchar(format[c1]);
			w++; }
		c1++; }
	va_end(list);
	return (w); }
