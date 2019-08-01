#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int p_d(va_list list);
int _strlen(const char *s);
int _printf(const char *format, ...);
int p_u(va_list list);
int roott(va_list);
int _putchar(char c);
int strin_g(va_list list);
int cha_r(va_list list);
int p_b(va_list list);
int fun_integer(va_list list);
int p_o(va_list list);
int p_hh(va_list);
int p_h(va_list);
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
