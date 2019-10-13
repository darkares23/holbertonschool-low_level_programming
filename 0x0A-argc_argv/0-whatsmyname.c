#include <stdio.h>

/**
*main - prints is own name
*@argc: number of parameters
*@argv: array of parameters in comand line
*Return: always 0
*/

int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
