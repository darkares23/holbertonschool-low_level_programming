#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - prints fibo acumm less than 4000000
*Return: always 0
*/
int main(void)
{
	int i = 0;
	unsigned long temp = 0, num1 = 1, num2 = 2, acum = 2;

	for (; acum < 4000000; i++)
	{
		temp = num1 + num2;
		if (temp % 2 == 0)
			acum += temp;
		num1 = num2;
		num2 = temp;
	}
	printf("%ld\n", acum);
	return (0);
}
