#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(10, 20);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
/**
 * flip_bits -   function that sets the value of a bit to 0 at a given index.
 * @n: num
 * @m: num2
 * Return: bits or 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, x_or = n ^ m;
	printf("first = %ld\n", x_or);
	while (x_or > 0)
	{
		if ((x_or & 1) == 1)
			count++;
		printf("value to set %ld\n", (x_or & 1));
		x_or >>= 1;
		printf("a = %ld\n", x_or);
	}
	return (count);
}
