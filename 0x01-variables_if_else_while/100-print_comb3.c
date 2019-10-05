#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 0, b = 1, c = 0;
for (; c >= 0 && c <= 99; c++)
{
a = c / 10;
b = c % 10;

if (a < b)
{
if (c <= 9)
{
putchar(a + '0');
putchar(b + '0');
if (c != 99)
{
putchar(',');
putchar(' ');
}
}
if (c >= 10)
{
a = c / 10;
b = c % 10;
putchar(a + '0');
putchar(b + '0');
if (c != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
