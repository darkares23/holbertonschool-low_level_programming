#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * char_print - prints char
 * @list: arguement char
 * @sep: seperator
 */

void char_print(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}
/**
 * int_print - prints int
 * @list: arguement of list
 * @sep: seperator
 * Return: none
 */

void int_print(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}
/**
 * float_print - prints floats
 * @sep: float to print
 * @list: next arguement of list to print
 * Return: none
 */

void float_print(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}
/**
 * string_print - prints string
 * @sep: seperator
 * @list: list to print
 * Return: none
 */

void string_print(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		printf("(nil)");
	printf("%s%s", sep, s);
}

/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *sep;

	sep = "";
	int i = 0, j = 0;

	format_type form[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(form[j]).fm)
				form[j].func(list, sep);
			j++;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
