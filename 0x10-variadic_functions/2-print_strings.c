#include "variadic_functions.h"
/**
 * print_strings - function to sum all args
 * @n: const number of arguements
 * @separator: separator
 * RETURN: int sum of all args or null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int arg_count;
	char *str;

	va_start(str_list, n);

	for (arg_count = 0; arg_count < n; arg_count++)
	{
		str = va_arg(str_list,  char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && (arg_count + 1) != n && str != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_list);
}
