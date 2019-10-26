#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *char_print - prints char
 *@list: char arg
 */

void char_print(va_list *list)
{
	printf("%c", (char)va_arg(*list, int));
}
/**
 * int_print - prints int
 *@list: char arg
 * Return: none
 */

void int_print(va_list *list)
{
	printf("%d", va_arg(*list, int));
}
/**
 * float_print - prints floats
 *@list: char arg
 * Return: none
 */

void float_print(va_list *list)
{
	printf("%f", (float)va_arg(*list, double));
}
/**
* string_print - prints string
*@list: char arg
* Return: none
*/

void string_print(va_list *list)
{
	char *s;

	s = va_arg(*list, char *);
	printf("%s", s);
}

/**
 * print_all - prints all format -m ""
 * @format: Type of data to print
 */

void print_all(const char * const format, ...)
{

	fmType form[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_list list;
	int i = 0, j = 0;

	va_start(list, format);


	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(form[j]).fm)
			{
				form[j].func(&list);
				if (format[j + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
