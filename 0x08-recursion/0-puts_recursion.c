#include "holberton.h"

/**
* _puts_recursion - print a string from a pointer
*@s: string to print.
*Return: Always 0
*/

void _puts_recursion(char *s)
{
	if (!*s) /* this means s pointer diferent to the null position */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
