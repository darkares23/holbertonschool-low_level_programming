#include "holberton.h"
/**
* leet - encode
* @s : parameter
* Return: changed string
**/

char *leet(char *s)
{
char letters[] = "aAeEoOtTlL";
char code[] = "4433007711";
int i, countLetters, countCode;

i = 0;

while (s[i] != '\0')
{
countLetters = 0;
countCode = 0;

while (letters[countLetters] != '\0')
{
if (s[i] == letters[countLetters])
{
countCode = countLetters;
s[i] = code[countCode];
}
countLetters++;
}
i++;
}

return (s);

}
