#include "holberton.h"

/**
  *_puts - printing function
  *@str: parameter to print
  *Return: always 0
*/

void _puts(char *str)
{
	int i = 0;
	char text;

	for (; str[i] != '\0'; i++)
	{
		text = str[i];
		_putchar(text);
	}
	_putchar('\n');
}
