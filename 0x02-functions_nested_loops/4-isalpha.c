#include "holberton.h"
/**
*_isalpha - Display message
*Return: true
*@c: parameter to verify
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
return (1);
else
{
return (0);
}
}