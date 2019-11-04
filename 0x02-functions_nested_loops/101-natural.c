#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - prints sum of numbers multiply of 3 qnd 5
*Return: always 0
*/
int main(void)
{
	int i = 0;
	int acum = 0;

	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			acum += i;
	}
	printf("%i\n", i);
	return (0);
}
