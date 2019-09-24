#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int b, c;
for (b = '0' , c = '1'; b <= '8' && c <=9; b++ && c++)
{
putchar(b + '0');
putchar(c + '0');
if (b != '8' && c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
