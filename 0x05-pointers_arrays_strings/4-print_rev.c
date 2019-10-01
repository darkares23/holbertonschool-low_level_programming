#include "holberton.h"

/**
  *print_rev - prints reverse string
  *@s: string to print
  *
 */
void print_rev(char *s)
{
	int i = 0;
	char text;

	for (; s[i] != '\0'; i++)
	{

	}
	for (i = i - 1; i >= 0; i--)
	{
		text = s[i];
		_putchar(text);
	}
	_putchar('\n');
}
