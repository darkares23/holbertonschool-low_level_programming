#include <stdio.h>
#include <math.h>
/**
 * main - prints prime factor
 *
 * Return: 0;
 */
int main(void)
{
	long i, primeFactor;
	long number;
	number = 612852475143;
	for (i = 2; i < sqrt(number); i++)
	{
		if ((number % i) == 0)
		{
			primeFactor = i;
			number = number / i;
			i = 1;
		}
	}
	primeFactor = number;
	printf("%ld\n", primeFactor);
	return (0);
}
