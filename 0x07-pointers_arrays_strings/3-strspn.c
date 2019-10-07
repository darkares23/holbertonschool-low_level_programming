#include "holberton.h"

/**
* _strspn - finds length of prefix substring
* @s: string to check
* @accept: substring of chars
* Return: number bytes in s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int equalChar = 0;
	int  none = 0;

	while (s[i])
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				equalChar++;
			j++;
		}
		if (equalChar == none)
		{
			return (equalChar);
		}
		else
			none = equalChar;
		i++;
	}
	return (equalChar);
}
