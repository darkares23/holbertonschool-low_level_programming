#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - change dollars in cents
*@argc: number of parameters
*@argv: array of parameters in comand line
*Return: always 0
*/

int main(int argc, char **argv)
{
int number_of_coins = 0, temp;

if  (argc != 2 || atoi(argv[1]) < 48)
{
printf("Error\n");
return (1);
}

temp = atoi(argv[1]);

while (temp != 0)
{
if (temp >= 25)
temp -= 25;
else if (temp >= 10)
temp -= 10;
else if (temp >= 5)
temp -= 5;
else if (temp >= 2)
temp -= 2;
else if (temp >= 1)
temp -= 1;

number_of_coins++;
}

printf("%d\n", number_of_coins);

return (0);
}
