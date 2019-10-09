#include "holberton.h"

/**
*_sqrt_recursion_condition - with the n prev parameter
*finds square with recursitvity
*@n: previus n parameter from _sqrt_recursion function
*@i: constant to find the square
*Return: square of n or -1 if is not find the square
*/

int _sqrt_recursion_condition(int n, int i)
{
	if (n > i)
		return (-1);
	if (n * i == n)
		return (n);
	return (_sqrt_recursion_condition(n + 1, i));
}

/**
*_sqrt_recursion - find square root
*@n: what num will find the square
*Return: natural square root from n or -1 if dont have one
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (_sqrt_recursion_condition(1, n));

}	
