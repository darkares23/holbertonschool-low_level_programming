#include "holberton.h"
/**
* cap_string - first letter capitaliced
* @s : parameter
* Return: changed string
**/

char *cap_string(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] >= 'a' && s[a] <= 'z')
{
if (s[a - 1] == ' ' || s[a - 1] == '.' || s[a - 1] == '\n' || s[a - 1] == 9)
{
if (s[a - 1] == 9)
{
s[a - 1] = ' ';
}
s[a] = s[a] - 32;
}
}
}

return (s);

}
