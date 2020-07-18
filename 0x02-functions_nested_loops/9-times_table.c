#include "holberton.h"
/**
*times_table - Display the 9 times table
*/
void times_table(void)
{
	int a, b, resutl, digit1, digit2;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			resutl = a * b;
			if (resutl >= 10)
			{
				digit1 = resutl % 10;
				digit2 = resutl / 10;
				_putchar(' ');
				_putchar(digit2 + '0');
				_putchar(digit1 + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(resutl + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
			if (b == 9)
			{
				_putchar('\n');
			}
		}
	}
}
