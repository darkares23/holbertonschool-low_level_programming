#include <stdio.h>

/**
*main - prints is own name
*@argc: number of parameters
*@argv: array of parameters in comand line
*Return: always 0
*/

int main(int argc, char **argv)
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
