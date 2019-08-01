#include "holberton.h"
/**
 * _strlen - gives string lenght.
 *
 * @s: char input
 * Return: lenght of input
 */
int _strlen(const char *s)
{
	int le = 0;

	while (s[le] != '\0')
	{
		le++;
	}
	return (le);
}
#include "holberton.h"
/**
 * cha_r - prints char type on stdoutput
 *
 * @list: variadic arguments
 * Return: amount of char printed
 */
int cha_r(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	if (ch == 0)
		return (0);
	_putchar(ch);
	return (1);
}
#include "holberton.h"
/**
 * strin_g - Prints strings on stdoutput
 *
 * @list: Variadic arguments
 * Return: Amount of chars printed
 */
int strin_g(va_list list)
{

	char *str;
	unsigned int i, len;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
