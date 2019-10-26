#include "variadic_functions.h"
/**
 * print_numbers - function to sum all args
 * @n: const number of arguements
 * @separator: separator
 * RETURN: int sum of all args or null
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int arg_count;

	va_start(num_list, n);

	for (arg_count = 0; arg_count < n; arg_count++)
	{
		printf("%i", va_arg(num_list, unsigned int));
		if (separator != NULL && (arg_count + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num_list);
}
