#include "holberton.h"

/**
 * reverse_array - reverse string
 * @a: string array
 * @n: position of element
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}

}
