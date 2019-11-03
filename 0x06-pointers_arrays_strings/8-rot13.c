#include "holberton.h"

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] = str[i] + 13;
		else
			while ((str[i] >= 'n' && str[i] <= 'z') ||
			      (str[i] >= 'N' && str[i] <= 'Z'))
				str[i] = str[i] - 13;
		i++;
	}

	return (str);
}
