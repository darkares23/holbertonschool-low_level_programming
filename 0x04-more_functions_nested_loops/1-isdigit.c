#include "holberton.h"
/**
*_isdigit - test if c is  DIGIT 0 TO 9
*
*Return: true or false if is uppercase
*
*@c: parameter to verify
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		return (0);
	}
}
