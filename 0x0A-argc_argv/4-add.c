#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - sum parameters of positive int
*@argc: number of parameters
*@argv: array of parameters in comand line
*Return: always 0
*/

int main(int argc, char **argv)
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
	if (!atoi(argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum += atoi(argv[i]);
	}
}
printf("%d\n", sum);

return (0);
}
