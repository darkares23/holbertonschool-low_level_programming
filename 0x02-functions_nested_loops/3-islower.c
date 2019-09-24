#include "holberton.h"
/**
*_islower - Display message
*Return: true
*@c: parameter to verify
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}