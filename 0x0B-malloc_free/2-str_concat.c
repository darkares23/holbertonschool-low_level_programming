#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*str_concat - Function to create an copy array
*@s1: string tpo be copied
*@s2: string tpo be copied
*Return: created copied string array or null
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *conca;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s1[len2] <= '\0'; len2++)
	{
	}
	conca = malloc((len1 + len2) * sizeof(char));
	if (conca == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		conca[i] = s1[i];
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		conca[i] = s2[len2];
		i++;
		len2++;
	}
	conca[i] = '\0';
	return (conca);
}
