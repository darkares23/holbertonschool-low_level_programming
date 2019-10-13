#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - multiplicate 2 parameters int
*@argc: number of parameters
*@argv: array of parameters in comand line
*Return: always 0
*/

int main(int argc, char **argv)
{
	int num1, num2, mul;

if (argc != 3)
{
printf("Error\n");
return (1);
}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
