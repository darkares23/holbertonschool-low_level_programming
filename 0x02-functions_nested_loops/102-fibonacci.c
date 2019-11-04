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
	int temp = 0, num1 = 1, num2 = 2;

	for (; i < 50; i++)
	{
		temp = num1 + num2;
		printf("%i\n", temp);
		num1 = num2;
		num2 = temp;
	}
	return (0);
}
