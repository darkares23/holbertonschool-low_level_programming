#include "holberton.h"

/**
*_memcpy - Function to copy a block o memory
*@dest: Destiantion of copy memory
*@src: Source of memory to copy
*@n: array size.
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];
	return (dest);
}
