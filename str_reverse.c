#include "holberton.h"
/**
 * str_reverse - rev. the order of an array
 * @list : pointer-parameter
 * Return: ntg.
 */
int str_reverse(va_list list)
{
	char *str = va_arg(list, char*);
	int count1;
	int count2 = 0;

	if (str == NULL)
		str = "(null)";
	while (str[count2] != '\0')
		count2++;
	for (count1 = count2 - 1; count1 >= 0; count1--)
		_putchar(str[count1]);
	return (count2);
}
