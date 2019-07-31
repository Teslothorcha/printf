#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int p_d(va_list print);
int _strlen(const char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int p_percent(void);
int strin_g(va_list);
int cha_r(va_list);
int (*locate_f(char c))(va_list);
int print_bin(va_list va);
int print_integer(long num);
int fun_integer(va_list char_list);
int str_reverse(va_list list);
/**
 * struct arg - strcuture to print by conversors
 *@f: convertor reference
 *@cv: function to print
 */
typedef struct arg
{
	char f;
	int (*cv)(va_list);
} argument;
#endif
