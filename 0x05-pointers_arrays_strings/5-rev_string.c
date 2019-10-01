#include "holberton.h"

/**
  *rev_string - reverse the string order
  *@s: string to reverse
*/

void rev_string(char *s)
{
	int i, irev;
	char text;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	irev = 0;
	i = i - 1;
	while (irev < i)
	{
		text = s[i];
		s[i] = s[irev];
		s[irev] = text;
		irev++;
		i--;
	}
}
