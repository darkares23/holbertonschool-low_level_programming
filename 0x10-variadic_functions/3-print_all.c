#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *char_print - prints char
 *@list: char arg
 *@sep: separator
 */

void char_print(char *sep, va_list list)
{
	printf("%s%c", sep, va_arg(list, int));
}
/**
 * int_print - prints int
 *@list: char arg
 *@sep: separator
 * Return: none
 */

void int_print(char *sep, va_list list)
{
	printf("%s%i", sep, va_arg(list, int));
}
/**
 * float_print - prints floats
 *@list: char arg
 *@sep: separator
 * Return: none
 */

void float_print(char *sep, va_list list)
{
	printf("%s%f", sep, va_arg(list, double));
}
/**
* string_print - prints string
*@list: char arg
*@sep: separator
* Return: none
*/

void string_print(char *sep, va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("%s(nil)", sep);
		return;
	}
	printf("%s%s", sep, s);
}

/**
 * print_all - prints all format -m ""
 * @format: Type of data to print
 */

void print_all(const char *const format, ...)
{

	fmType form[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}};

	va_list list;
	int i = 0, j = 0;
	char *sep = "";

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{

			if (format[i] == *(form[j]).fm)
			{
				form[j].func(sep, list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
