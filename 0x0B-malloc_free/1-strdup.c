#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*_strdup - Function to create an copy array
*@str: string tpo be copied
*Return: created copied string array or null
*/

char *_strdup(char *str)
{
	char *copy_string;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		{
		}
	len++;

	copy_string = malloc(len * sizeof(char));
	if (copy_string == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy_string[i] = str[i];
		i++;
	}
	return (copy_string);
}
