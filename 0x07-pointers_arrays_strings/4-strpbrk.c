#include "holberton.h"
#include <stdlib.h>

/**
* _strpbrk - finds first equal string
* @s: string to check
* @accept: string to evaluate
* Return: number bytes in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	int bolean;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
			if (s[i] == accept[j])
				bolean = 1;
			}
			if (bolean == 1)
			{
				return (s + bolean);
			}
		}
	return (NULL);
}
