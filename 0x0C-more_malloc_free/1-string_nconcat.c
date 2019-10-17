#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1:stirng 1
 * @s2:string 2
 * @n: n bytesofstring 2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1, count2;
	char *ptr, *empty_string;

	empty_string = "";
	if (s1 == NULL)
		s1 = empty_string;
	if (s2 == NULL)
		s2 = empty_string;
	for (count1 = 0; s1[count1] != '\0'; count1++)
		;
	ptr = malloc((count1 + n * (sizeof(*s2) + 1)));
	if (ptr == NULL)
		return (NULL);
	for (count1 = 0; s1[count1] != '\0'; count1++)
		ptr[count1] = s1[count1];
	for (count2 = 0; s2[count2] != '\0' && count2 < n; count2++, count1++)
		ptr[count1] = s2[count2];
	ptr[count1] = '\0';
	return (ptr);
}
