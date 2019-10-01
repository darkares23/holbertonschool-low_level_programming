#include <stdio.h>
#include "holberton.h"

/**
  *print_array - printing arrays
  *@a: pointer variable
  *@n: position in the array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
