#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (n > 5)
	{
	printf("Last digit of %d is %d\n and is greater than 5", n, lastDigit);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d\n and is 0", n, lastDigit);
	}
	else
	{
	printf("Last digit of %d is %d\n and is less than 6 and not 0", n, n);
	}
	return (0);
}
