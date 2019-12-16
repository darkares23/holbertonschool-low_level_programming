#include "holberton.h"

/**
* _strncat - concatenates one string (number of byte given)
* to another
* @dest: where to concatenate
* @src: string to concatenate
* @n: how many bytes to
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *h = dest;

	while (*dest)
	{
		dest++;
	}
	for (i = 0; (i < n && (src[i] != '\0')); i++)
	{
		*(dest) = src[i];
		dest++;
	}
	*dest = '\0';
	dest = h;
	return (dest);
}
