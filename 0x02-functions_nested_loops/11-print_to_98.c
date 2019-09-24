#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - print number until 98
*
*@n: number 1 to start count to 98
*
*Return: always 0
*/
void print_to_98(int n)
{
if (n == 98)
printf("%d\n", 98);
if (n < 98)
{
for (; n < 98; n++)
printf("%d, ", n);
}
else if (n > 98)
{
for (; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
