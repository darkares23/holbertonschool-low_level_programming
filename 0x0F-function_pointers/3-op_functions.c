#include "3-calc.h"

/**
 * op_add - function to sum
 *
 * @a: num 1
 * @b: num 2
 * Return: total
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to rest
 *
 * @a: num 1
 * @b: num 2
 * Return: total
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to mul
 *
 * @a: num 1
 * @b: num 2
 * Return: total
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function to div
*
* @a: num 1
* @b: num 2
* Return: total
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function to module
 *
 * @a: num 1
 * @b: num 2
* Return: total
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
