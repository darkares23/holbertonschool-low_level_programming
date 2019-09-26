#include "holberton.h"
/**
*times_table - Display the 9 times table
*/
void times_table(void)
{
int row[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int column[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a = 0, b = 0;
for (row[a]; a <= 10; a++)
for (column[b]; b <= 9; b++)
{
    int result = column[b] * row[a];
    _putchar(result + '0');
    _putchar(result + ' ');
    _putchar(result + ' ');
    _putchar(result + ',');
    if ( column[b] != column[9])
    _putchar(' ');
}
}
