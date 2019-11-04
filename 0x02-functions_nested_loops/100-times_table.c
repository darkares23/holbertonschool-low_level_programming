#include "holberton.h"
/**
*print_times_table - Display the 9 times table
*@n: times to print
*/
void print_times_table(int n)
{
	int a, b, result, digit1, digit2, mediumdigit;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			result = a * b;
			digit1 = result % 10;
			digit2 = (result / 10) % 10;
			mediumdigit = (result / 100) % 100;
			if ((a == 0 && b == 0) || (a != 0 && b == 0))
				_putchar(digit2 + '0');
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			if (result > 9 && result < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(digit2 + '0');
				_putchar(digit1 + '0');
			}
			else if (result >= 100)
			{
				_putchar(' ');
				_putchar(mediumdigit + '0');
				_putchar(digit2 + '0');
				_putchar(digit1 + '0');
			}
			if (b < n)
				_putchar(',');
			}
		_putchar('\n');
	}
}
