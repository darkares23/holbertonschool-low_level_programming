#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * argstostr -  frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @ac:  grid
 * @av: height of grid
 * Return: 2 dimensional array of integers or null
 */

char *argstostr(int ac, char **av)
{
	int count1, count2, count3 = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (count1 = 0; count1 < ac; count1++)
	{
		for (count2 = 0; av[count2] != '\0' ; count2++)
		{
			count3++;
		}
		count2 = 0;
	}
	ptr = malloc((count3 + ac) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	count3 = 0;

	for (count1 = 0; count1 < ac; count1++)
	{
		for (count2 = 0; av[count2] ; count2++)
		{
			ptr[count3] = av[count1][count2];
			if (av[count1][count2] == '\0')
			count3++;
		}
		count2 = 0;
	}
	return (ptr);
}
