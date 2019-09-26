#include <stdio.h>

/**
 * main - print if is 3 Fizz 5 Buzz or FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
int numbers;
for (numbers = 1; numbers <= 100; numbers++)
{
if (numbers % 3 == 0 && numbers % 5 == 0)
printf("%s, ", "FizzBuzz");
else if (numbers % 3 == 0)
printf("%s ", "Fizz");
else if (numbers % 5 == 0)
printf("%s ", "Buzz");
else
{
printf("%d ", numbers);
}
}
}