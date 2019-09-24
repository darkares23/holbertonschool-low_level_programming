#include "holberton.h"
/**
*print_alphabet_x10 - Display message
*/
void print_alphabet_x10(void)
{
int i = 0;
int a;
while (i < 11)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
i++;
_putchar('\n');
}
}