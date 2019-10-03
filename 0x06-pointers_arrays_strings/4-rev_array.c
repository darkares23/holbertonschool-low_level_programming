#include "holberton.h"

void reverse_array(int *a, int n)
{
	int i = 0, rev;
	char strg;

	for (; i < n && a[i] != '\0'; i++)
	{
	}

	rev = 0;
	i = i - 1;

	while (rev < i)
	{
		strg = a[i];
		a[i] = a[rev];
		a[rev] = strg;
		rev++;
		i--;
	}	

}
