#include "holberton.h"

/**
 *_strcpy - Function to copy
 *@dest: edited variable
 *@src: edited variable
 *Return: always 0
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
