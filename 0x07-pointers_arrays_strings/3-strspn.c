#include "holberton.h"

/**
* _strspn - finds length of prefix substring
* @s: string to check
* @accept: substring of chars
* Return: number bytes in s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, equalChar = 0;

	while (*s)
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (accept[i] == s[i])
				equalChar++;
			i++;
		}
		s++;
	}
	return (equalChar);
}
