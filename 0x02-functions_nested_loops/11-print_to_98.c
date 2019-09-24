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
int a = n;
if (a < 98)
{
for (; a < 98; a++)
printf("%d, ", a);
}
else if (a > 98)
{
for (; a > 98; a--)
printf("%d, ", a);
printf("%d\n",98);
}
if (a == 98)
printf("%d\n", a);
}
