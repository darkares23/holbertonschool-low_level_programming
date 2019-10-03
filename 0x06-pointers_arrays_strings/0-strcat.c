#include "holberton.h"

/**
* _strcat - string concatenation
* @dest: destination to concaten
* @src: what will sum to dest
* Return: pointer to dest
*/

char  *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	n = 0;

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
