#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - Function to convert a string into int
 *@s: string variable to convert
 *Return: string data in interger
*/

int _atoi(char *s)
{
	int number, i, neg;

	neg = 1;
	i = number = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			neg = neg * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (number >= 0)
		{
			number = number * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			number = number * 10 - (s[i] - '0');
			i++;
		}
	}
	neg = neg * -1;
	return (number * neg);
}
