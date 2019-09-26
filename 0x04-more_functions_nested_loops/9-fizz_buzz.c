#include<stdio.h>
/**
*print_diagonal - prints a diagonal line
*Return: 14 lines of numbers
*
*@n: Large of the line
*/
int main(void)
{
int number;
for (number = 1; number <= 100; number++)
{
if ((number % 3) == 0 && (number % 5) != 0)
printf("Fizz ");
else if (number == 100)
printf("Buzz");
else if ((number % 5) == 0 && (number % 3) != 0)
printf("Buzz ");
else if ((number % 3) == 0 && (number % 3) == 0)
printf("FizzBuzz ");
else
printf("%d ", number);
}
printf("\n");
return (0);
}
