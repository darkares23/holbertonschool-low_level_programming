#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - prints fibo
*Return: always 0
*/
int main(void)
{
	int i = 0;
	unsigned long temp = 0, num1 = 1, num2 = 2;

	printf("%ld, %ld", num1, num2);

	for (; i < 48; i++)
	{
		temp = num1 + num2;
		printf("%ld", temp);
		num1 = num2;
		num2 = temp;
		if (i != 47)
			printf(", ");
	}
	return (0);
}
