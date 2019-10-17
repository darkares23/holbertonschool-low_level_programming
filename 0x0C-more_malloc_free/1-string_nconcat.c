#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings in a pointer
 * @s1: first string
 * @s2: second string
 * @n: number of character for 2 string to copy
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1, count2;
	char *conca, *empty_string;

	empty_string = "";

	if (s1 == NULL)
		s1 = empty_string;
	if (s2 == NULL)
		s2 = empty_string;
	for (count1 = 0; s1[count1] != '\0'; count1++)
		;
	conca = malloc((count1 + (n * sizeof(*s2) + 1) * sizeof(*conca)));
	if (conca == NULL)
		return (NULL);
	for (count1 = 0; s1[count1] != '\0'; count1++)
		conca[count1] = s1[count1];
	for (count2 = 0; s2[count2] != '\0' && count2 <= n; count1++, count2++)
		conca[count1] = s2[count2];
	conca[count1] = '\0';
	return (conca);
}
