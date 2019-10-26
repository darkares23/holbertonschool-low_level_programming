#ifndef VARIADIC
#define VARIADIC
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
*struct format_t - Struct format_t
*@fm: format
*@f: associated function
*/

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct format_t
{
	char *fm;
	void (*func)(char *sep, va_list *);
} fmType;

#endif
