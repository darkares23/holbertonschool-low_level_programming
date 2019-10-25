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
	int num = 0;

	if (separator == NULL)
		exit(98);

	va_start(num_list, n);

	for (arg_count = 0; arg_count < n; arg_count++)
	{
		if (arg_count == 0)
		{
			num = va_arg(num_list, unsigned int);
			printf("%i", num);
		}
		if (arg_count != 0)
		{
			num = va_arg(num_list, unsigned int);
			printf("%s %i", separator, num);
		}
	}
	printf("\n");
	va_end(num_list);
}
