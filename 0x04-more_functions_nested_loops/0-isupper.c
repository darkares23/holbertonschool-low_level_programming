#include "holberton.h"
/**
*_isupper - Display message
*
*Return: true or false if is uppercase
*
*@c: parameter to verify
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	{
		return (0);
	}
}
