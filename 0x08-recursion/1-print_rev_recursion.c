#include "holberton.h"

/**
* _print_rev_recursion - print a string from a pointer
*@s: string to print.
*Return: reverse string
*/

void _print_rev_recursion(char *s)
{
if (!*s) /* this means s pointer is the null position */
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
