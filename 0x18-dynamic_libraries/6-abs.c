#include "holberton.h"
/**
 *_abs - Display abs
 *@n: number to verify
 *Return: if is a positive zero or negative
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
