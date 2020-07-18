#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int numA, numB, numC;
	for (numA = 0; numA < 100; numA++)
	{
		numB = numA / 10;
		numC = numA % 10;
		putchar(numB + '0');
		putchar(numC + '0');
		if (numA < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
