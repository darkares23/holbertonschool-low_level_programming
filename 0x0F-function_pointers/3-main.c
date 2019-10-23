#include <stdlib.h>
#include <stdio.h>
#include "3-cal.h"
/**
 * main - check the code for Holberton School students.
 *@argc: count parameters in command line
 *@argv: 2d array with string parameters
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*p)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error0s\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3] == 0)
	{
		printf("Error2\n");
		exit(100);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error1\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%i\n", p(num1, num2));

	return (0);
}
