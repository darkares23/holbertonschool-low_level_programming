#include "variadic_functions.h"
/**
 * sum_them_all - function to sum all args
 * @n: first variable int positive
 *Return: int sum of all args or null
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list var_list;
	unsigned int arg_count;
	int num = 0;

	if (n == 0)
		return (0);

	va_start(var_list, n);

	for (arg_count = 0; arg_count < n; arg_count++)
		num = num + va_arg(var_list, unsigned int);

	va_end(var_list);
	return (num);
}
