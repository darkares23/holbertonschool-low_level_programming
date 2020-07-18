#include "holberton.h"
#include <stdio.h>

/**
*_strchr - locates character in a string
*@s: string
*@c: char to locate
*Return: s or null
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
