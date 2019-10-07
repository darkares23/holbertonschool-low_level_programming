#include "holberton.h"

/**
*_memset - set memory function
*@s: char pointer
*@b: char pointer
*@n: unsigned int type
*Return: char pointer s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
