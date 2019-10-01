#include <stdio.h>
#include "holberton.h"

/**
  *print_array - printing arrays
  *@a: pointer variable
  *@n: position in the array
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
			printf("\n");
}
