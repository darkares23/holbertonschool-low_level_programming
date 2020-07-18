#include "holberton.h"

/**
*_strlen_recursion - return length of the string
*@s: vstring to cout size
*Return: length
*/
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
