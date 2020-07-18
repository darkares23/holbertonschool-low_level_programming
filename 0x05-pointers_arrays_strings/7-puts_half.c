#include "holberton.h"

/**
  *puts_half -  print hal string
  *@str: string to print half
*/

void puts_half(char *str)
{
	int i = 0, i2 = 0;
	char text;
	for (; str[i] != '\0'; i++)
	{
	}
	i2 = (i + 1) / 2;
	for (; str[i2] != '\0'; i2++)
	{
		text = str[i2];
		_putchar(text);
	}
	_putchar('\n');
}
