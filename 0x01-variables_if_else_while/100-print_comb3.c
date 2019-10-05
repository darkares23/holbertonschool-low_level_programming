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

if (a < b && c != 99)
{
a = c / 10;
b = c % 10;
putchar(a + '0');
putchar(b + '0');
if (a == 9 && b == 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
