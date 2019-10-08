#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - finds the first occurence of the substring needle
 * @haystack: string to search
 * @needle: string to find
 * Return: pointer to the start of located substring
 */


char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{
char *star = haystack, *pattern = needle;

while (*pattern == *haystack && *pattern != '\0'
&& *haystack != '\0')
{
haystack++;
pattern++;
}
if (*pattern == '\0')
return (star);
haystack = star + 1;
}
return (NULL);
}
