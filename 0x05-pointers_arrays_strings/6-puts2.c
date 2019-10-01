#include "holberton.h"

/**
  *puts2 - jump string character 2 in 2
  *@str: string to change
*/

void puts2(char *str)
{
	int i;
	char num;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			num = str[i];
			_putchar(num);
		}
	}
	_putchar('\n');
}
