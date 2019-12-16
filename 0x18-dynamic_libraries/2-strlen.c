#include "holberton.h"

/**
  *_strlen - returns string lenght
  *@s: Parameter to evaluate
  *Return: lenght of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
