#include "holberton.h"

/**
*factorial - Print the factorial of n number
*@n: number to print the factorial
*Return: Factorial of n
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
	_putchar('\0');
}
